#pragma once
#include <ScriptX/ScriptX.h>
#include <MC/Player.hpp>
#include <MC/Level.hpp>
using script::defineClass;
using script::EngineScope;
using script::Local;
using script::Object;
using script::ScriptClass;
using script::Value;

template <typename Cls>
struct ScriptRefT {
    using PtrT = Cls;
    Cls* ptr;
    explicit ScriptRefT(Cls* ptr)
        : ptr(ptr){};
    // ScriptRefT()
    //     : ptr(nullptr){};
    explicit ScriptRefT(Cls& ptr)
        : ptr(&ptr){};
    Cls* get() {
        return ptr;
    }
};

template <>
struct ScriptRefT<Actor> {
    using PtrT = Actor;
    ActorUniqueID auid;
    explicit ScriptRefT(Actor* actor)
        : auid(actor->getUniqueID()){};
    // ScriptRefT(){};
    explicit ScriptRefT(Actor& actor)
        : auid(actor.getUniqueID()){};
    Actor* get() {
        return Global<Level>->fetchEntity(auid, false);
    }
};

template <>
struct ScriptRefT<Player> : public ScriptRefT<Actor> {
    using PtrT = Player;
    explicit ScriptRefT(Player* actor)
        : ScriptRefT<Actor>(actor){};
    Player* get() {
        return Global<Level>->getPlayer(auid);
    }
};


template <typename T>
class ScriptWrapper : public ScriptRefT<T>, public ScriptClass {
public:
    explicit ScriptWrapper(T* ptr)
        : ScriptRefT<T>(ptr)
        , ScriptClass(script::ScriptClass::ConstructFromCpp<ScriptWrapper>{}){};
    explicit ScriptWrapper(T const* ptr)
        : ScriptRefT<T>(ptr)
        , ScriptClass(script::ScriptClass::ConstructFromCpp<ScriptWrapper>{}){};

    static T* extra(Local<Value> v) {
        if (EngineScope::currentEngine()->isInstanceOf<ScriptWrapper>(v))
            return EngineScope::currentEngine()->getNativeInstance<ScriptWrapper>(v)->get();
        else
            return nullptr;
    }
    static Local<Value> create(T* ptr) {
        ScriptWrapper<T>* newp = new ScriptWrapper<T>(ptr);
        return newp->getScriptObject();
    }

    template <typename Fn, Fn fn, typename RTN, typename... Args> DECLSPEC_NOINLINE RTN callImpl(Args... args) {
        return (ScriptRefT<T>::template get()->*fn)(args...);
    }
};

template <typename T, typename RTN, typename... Args> struct FuncImpl {
    using Fn = RTN (T::*)(Args...);
    using FnC = RTN (T::*)(Args...) const;
    using ScriptFn = RTN (ScriptWrapper<std::remove_const_t<T>>::*)(Args...);

    constexpr FuncImpl(Fn f){};
    constexpr FuncImpl(FnC f){};

    template <Fn fn>
    constexpr static ScriptFn from() {
        return &ScriptWrapper<T>::template callImpl<Fn, fn, RTN, Args...>;
    }
    template <FnC fn>
    constexpr static ScriptFn from() {
        return &ScriptWrapper<T>::template callImpl<FnC, fn, RTN, Args...>;
    }
};

template <auto fn>
constexpr auto getScriptImpl() {
    return decltype(FuncImpl(fn))::template from<fn>();
}

template <typename Signature>
constexpr auto selectOverloadedFunc(std::decay_t<Signature> func) {
    return func;
}
inline const auto playerDefine =
    defineClass<ScriptWrapper<Player>>("Player")
        .constructor(nullptr)
        .instanceProperty("name", getScriptImpl<&Player::getName>())
        .instanceProperty("xuid", getScriptImpl<&Player::getXuid>())
        .instanceFunction(
            "showToast", getScriptImpl<selectOverloadedFunc<bool (Player::*)(std::string)>(&Player::sendToastPacket)>())
        .instanceFunction(
            "showToast",
            getScriptImpl<selectOverloadedFunc<bool (Player::*)(std::string, std::string)>(&Player::sendToastPacket)>())
        .build();

inline Local<Value> getPlayer() {
    return ScriptWrapper<Player>::create(Global<Level>->getAllPlayers().front());
}
inline size_t getCurrentServerTick() {
    throw std::runtime_error("Test error");
    return Global<Level>->getCurrentServerTick();
}

inline const auto levelDefine =
    defineClass<void>("Level")
        .property("player", &getPlayer)
        .property("currentTick", &getCurrentServerTick).build();


void BindNewAPIs(script::ScriptEngine* engine) {
    engine->registerNativeClass(playerDefine);
    engine->registerNativeClass(levelDefine);
}