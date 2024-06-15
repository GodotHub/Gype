#include <godot_cpp/classes/tween.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <godot_cpp/classes/callback_tweener.hpp>
#include <godot_cpp/classes/interval_tweener.hpp>
#include <godot_cpp/classes/method_tweener.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/property_tweener.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/variant/callable.hpp>
#include <godot_cpp/variant/node_path.hpp>
#include <stdint.h>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_Tween() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<Tween>("Tween")
            .constructor<>()
            .base<RefCounted>()
            .fun<static_cast<Ref<PropertyTweener>(Tween::*)(Object *,const NodePath &,const Variant &,double)>(&Tween::tween_property)>("tween_property")
            .fun<static_cast<Ref<IntervalTweener>(Tween::*)(double)>(&Tween::tween_interval)>("tween_interval")
            .fun<static_cast<Ref<CallbackTweener>(Tween::*)(const Callable &)>(&Tween::tween_callback)>("tween_callback")
            .fun<static_cast<Ref<MethodTweener>(Tween::*)(const Callable &,const Variant &,const Variant &,double)>(&Tween::tween_method)>("tween_method")
            .fun<static_cast<bool(Tween::*)(double)>(&Tween::custom_step)>("custom_step")
            .fun<static_cast<void(Tween::*)()>(&Tween::stop)>("stop")
            .fun<static_cast<void(Tween::*)()>(&Tween::pause)>("pause")
            .fun<static_cast<void(Tween::*)()>(&Tween::play)>("play")
            .fun<static_cast<void(Tween::*)()>(&Tween::kill)>("kill")
            .fun<static_cast<double(Tween::*)()const>(&Tween::get_total_elapsed_time)>("get_total_elapsed_time")
            .fun<static_cast<bool(Tween::*)()>(&Tween::is_running)>("is_running")
            .fun<static_cast<bool(Tween::*)()>(&Tween::is_valid)>("is_valid")
            .fun<static_cast<Ref<Tween>(Tween::*)(Node *)>(&Tween::bind_node)>("bind_node")
            .fun<static_cast<Ref<Tween>(Tween::*)(Tween::TweenProcessMode)>(&Tween::set_process_mode)>("set_process_mode")
            .fun<static_cast<Ref<Tween>(Tween::*)(Tween::TweenPauseMode)>(&Tween::set_pause_mode)>("set_pause_mode")
            .fun<static_cast<Ref<Tween>(Tween::*)(bool)>(&Tween::set_parallel)>("set_parallel")
            .fun<static_cast<Ref<Tween>(Tween::*)(int32_t)>(&Tween::set_loops)>("set_loops")
            .fun<static_cast<int32_t(Tween::*)()const>(&Tween::get_loops_left)>("get_loops_left")
            .fun<static_cast<Ref<Tween>(Tween::*)(double)>(&Tween::set_speed_scale)>("set_speed_scale")
            .fun<static_cast<Ref<Tween>(Tween::*)(Tween::TransitionType)>(&Tween::set_trans)>("set_trans")
            .fun<static_cast<Ref<Tween>(Tween::*)(Tween::EaseType)>(&Tween::set_ease)>("set_ease")
            .fun<static_cast<Ref<Tween>(Tween::*)()>(&Tween::parallel)>("parallel")
            .fun<static_cast<Ref<Tween>(Tween::*)()>(&Tween::chain)>("chain")
            .static_fun<static_cast<Variant(*)(const Variant &,const Variant &,double,double,Tween::TransitionType,Tween::EaseType)>(&Tween::interpolate_value)>("interpolate_value")
;    qjs::Value _TweenProcessMode = context->newObject();
    _TweenProcessMode["TWEEN_PROCESS_PHYSICS"] = Tween::TweenProcessMode::TWEEN_PROCESS_PHYSICS;
    _TweenProcessMode["TWEEN_PROCESS_IDLE"] = Tween::TweenProcessMode::TWEEN_PROCESS_IDLE;
    _module.add("TweenProcessMode", std::move(_TweenProcessMode));
    qjs::Value _TweenPauseMode = context->newObject();
    _TweenPauseMode["TWEEN_PAUSE_BOUND"] = Tween::TweenPauseMode::TWEEN_PAUSE_BOUND;
    _TweenPauseMode["TWEEN_PAUSE_STOP"] = Tween::TweenPauseMode::TWEEN_PAUSE_STOP;
    _TweenPauseMode["TWEEN_PAUSE_PROCESS"] = Tween::TweenPauseMode::TWEEN_PAUSE_PROCESS;
    _module.add("TweenPauseMode", std::move(_TweenPauseMode));
    qjs::Value _TransitionType = context->newObject();
    _TransitionType["TRANS_LINEAR"] = Tween::TransitionType::TRANS_LINEAR;
    _TransitionType["TRANS_SINE"] = Tween::TransitionType::TRANS_SINE;
    _TransitionType["TRANS_QUINT"] = Tween::TransitionType::TRANS_QUINT;
    _TransitionType["TRANS_QUART"] = Tween::TransitionType::TRANS_QUART;
    _TransitionType["TRANS_QUAD"] = Tween::TransitionType::TRANS_QUAD;
    _TransitionType["TRANS_EXPO"] = Tween::TransitionType::TRANS_EXPO;
    _TransitionType["TRANS_ELASTIC"] = Tween::TransitionType::TRANS_ELASTIC;
    _TransitionType["TRANS_CUBIC"] = Tween::TransitionType::TRANS_CUBIC;
    _TransitionType["TRANS_CIRC"] = Tween::TransitionType::TRANS_CIRC;
    _TransitionType["TRANS_BOUNCE"] = Tween::TransitionType::TRANS_BOUNCE;
    _TransitionType["TRANS_BACK"] = Tween::TransitionType::TRANS_BACK;
    _TransitionType["TRANS_SPRING"] = Tween::TransitionType::TRANS_SPRING;
    _module.add("TransitionType", std::move(_TransitionType));
    qjs::Value _EaseType = context->newObject();
    _EaseType["EASE_IN"] = Tween::EaseType::EASE_IN;
    _EaseType["EASE_OUT"] = Tween::EaseType::EASE_OUT;
    _EaseType["EASE_IN_OUT"] = Tween::EaseType::EASE_IN_OUT;
    _EaseType["EASE_OUT_IN"] = Tween::EaseType::EASE_OUT_IN;
    _module.add("EaseType", std::move(_EaseType));
}