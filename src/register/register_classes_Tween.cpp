
#include <godot_cpp/classes/callback_tweener.hpp>
#include <godot_cpp/classes/interval_tweener.hpp>
#include <godot_cpp/classes/method_tweener.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/property_tweener.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/tween.hpp>
#include <godot_cpp/variant/callable.hpp>
#include <godot_cpp/variant/node_path.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_Tween() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<Tween>("Tween")
			.constructor<>()
			.base<RefCounted>()
			.fun<static_cast<Ref<PropertyTweener> (Tween::*)(Object *, const NodePath &, const Variant &, double)>(&Tween::tween_property)>((new std::string("tween_property"))->c_str())
			.fun<static_cast<Ref<IntervalTweener> (Tween::*)(double)>(&Tween::tween_interval)>((new std::string("tween_interval"))->c_str())
			.fun<static_cast<Ref<CallbackTweener> (Tween::*)(const Callable &)>(&Tween::tween_callback)>((new std::string("tween_callback"))->c_str())
			.fun<static_cast<Ref<MethodTweener> (Tween::*)(const Callable &, const Variant &, const Variant &, double)>(&Tween::tween_method)>((new std::string("tween_method"))->c_str())
			.fun<static_cast<bool (Tween::*)(double)>(&Tween::custom_step)>((new std::string("custom_step"))->c_str())
			.fun<static_cast<void (Tween::*)()>(&Tween::stop)>((new std::string("stop"))->c_str())
			.fun<static_cast<void (Tween::*)()>(&Tween::pause)>((new std::string("pause"))->c_str())
			.fun<static_cast<void (Tween::*)()>(&Tween::play)>((new std::string("play"))->c_str())
			.fun<static_cast<void (Tween::*)()>(&Tween::kill)>((new std::string("kill"))->c_str())
			.fun<static_cast<double (Tween::*)() const>(&Tween::get_total_elapsed_time)>((new std::string("get_total_elapsed_time"))->c_str())
			.fun<static_cast<bool (Tween::*)()>(&Tween::is_running)>((new std::string("is_running"))->c_str())
			.fun<static_cast<bool (Tween::*)()>(&Tween::is_valid)>((new std::string("is_valid"))->c_str())
			.fun<static_cast<Ref<Tween> (Tween::*)(Node *)>(&Tween::bind_node)>((new std::string("bind_node"))->c_str())
			.fun<static_cast<Ref<Tween> (Tween::*)(Tween::TweenProcessMode)>(&Tween::set_process_mode)>((new std::string("set_process_mode"))->c_str())
			.fun<static_cast<Ref<Tween> (Tween::*)(Tween::TweenPauseMode)>(&Tween::set_pause_mode)>((new std::string("set_pause_mode"))->c_str())
			.fun<static_cast<Ref<Tween> (Tween::*)(bool)>(&Tween::set_parallel)>((new std::string("set_parallel"))->c_str())
			.fun<static_cast<Ref<Tween> (Tween::*)(int32_t)>(&Tween::set_loops)>((new std::string("set_loops"))->c_str())
			.fun<static_cast<int32_t (Tween::*)() const>(&Tween::get_loops_left)>((new std::string("get_loops_left"))->c_str())
			.fun<static_cast<Ref<Tween> (Tween::*)(double)>(&Tween::set_speed_scale)>((new std::string("set_speed_scale"))->c_str())
			.fun<static_cast<Ref<Tween> (Tween::*)(Tween::TransitionType)>(&Tween::set_trans)>((new std::string("set_trans"))->c_str())
			.fun<static_cast<Ref<Tween> (Tween::*)(Tween::EaseType)>(&Tween::set_ease)>((new std::string("set_ease"))->c_str())
			.fun<static_cast<Ref<Tween> (Tween::*)()>(&Tween::parallel)>((new std::string("parallel"))->c_str())
			.fun<static_cast<Ref<Tween> (Tween::*)()>(&Tween::chain)>((new std::string("chain"))->c_str())
			.static_fun<static_cast<Variant (*)(const Variant &, const Variant &, double, double, Tween::TransitionType, Tween::EaseType)>(&Tween::interpolate_value)>((new std::string("interpolate_value"))->c_str());
	qjs::Value _TweenProcessMode = context->newObject();
	_TweenProcessMode[(new std::string("TWEEN_PROCESS_PHYSICS"))->c_str()] = Tween::TweenProcessMode::TWEEN_PROCESS_PHYSICS;
	_TweenProcessMode[(new std::string("TWEEN_PROCESS_IDLE"))->c_str()] = Tween::TweenProcessMode::TWEEN_PROCESS_IDLE;
	_module.add("TweenProcessMode", std::move(_TweenProcessMode));
	qjs::Value _TweenPauseMode = context->newObject();
	_TweenPauseMode[(new std::string("TWEEN_PAUSE_BOUND"))->c_str()] = Tween::TweenPauseMode::TWEEN_PAUSE_BOUND;
	_TweenPauseMode[(new std::string("TWEEN_PAUSE_STOP"))->c_str()] = Tween::TweenPauseMode::TWEEN_PAUSE_STOP;
	_TweenPauseMode[(new std::string("TWEEN_PAUSE_PROCESS"))->c_str()] = Tween::TweenPauseMode::TWEEN_PAUSE_PROCESS;
	_module.add("TweenPauseMode", std::move(_TweenPauseMode));
	qjs::Value _TransitionType = context->newObject();
	_TransitionType[(new std::string("TRANS_LINEAR"))->c_str()] = Tween::TransitionType::TRANS_LINEAR;
	_TransitionType[(new std::string("TRANS_SINE"))->c_str()] = Tween::TransitionType::TRANS_SINE;
	_TransitionType[(new std::string("TRANS_QUINT"))->c_str()] = Tween::TransitionType::TRANS_QUINT;
	_TransitionType[(new std::string("TRANS_QUART"))->c_str()] = Tween::TransitionType::TRANS_QUART;
	_TransitionType[(new std::string("TRANS_QUAD"))->c_str()] = Tween::TransitionType::TRANS_QUAD;
	_TransitionType[(new std::string("TRANS_EXPO"))->c_str()] = Tween::TransitionType::TRANS_EXPO;
	_TransitionType[(new std::string("TRANS_ELASTIC"))->c_str()] = Tween::TransitionType::TRANS_ELASTIC;
	_TransitionType[(new std::string("TRANS_CUBIC"))->c_str()] = Tween::TransitionType::TRANS_CUBIC;
	_TransitionType[(new std::string("TRANS_CIRC"))->c_str()] = Tween::TransitionType::TRANS_CIRC;
	_TransitionType[(new std::string("TRANS_BOUNCE"))->c_str()] = Tween::TransitionType::TRANS_BOUNCE;
	_TransitionType[(new std::string("TRANS_BACK"))->c_str()] = Tween::TransitionType::TRANS_BACK;
	_TransitionType[(new std::string("TRANS_SPRING"))->c_str()] = Tween::TransitionType::TRANS_SPRING;
	_module.add("TransitionType", std::move(_TransitionType));
	qjs::Value _EaseType = context->newObject();
	_EaseType[(new std::string("EASE_IN"))->c_str()] = Tween::EaseType::EASE_IN;
	_EaseType[(new std::string("EASE_OUT"))->c_str()] = Tween::EaseType::EASE_OUT;
	_EaseType[(new std::string("EASE_IN_OUT"))->c_str()] = Tween::EaseType::EASE_IN_OUT;
	_EaseType[(new std::string("EASE_OUT_IN"))->c_str()] = Tween::EaseType::EASE_OUT_IN;
	_module.add("EaseType", std::move(_EaseType));
}