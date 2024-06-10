#include <godot_cpp/classes/callback_tweener.hpp>
#include <godot_cpp/classes/interval_tweener.hpp>
#include <godot_cpp/classes/method_tweener.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/property_tweener.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/tween.hpp>
#include <godot_cpp/variant/callable.hpp>
#include <godot_cpp/variant/node_path.hpp>
#include <godot_cpp/variant/variant.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_Tween() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<Tween>("Tween")
			.constructor<>()
			.fun<static_cast<Ref<PropertyTweener> (Tween::*)(Object *, const NodePath &, const Variant &, double)>(&Tween::tween_property)>("tween_property")
			.fun<static_cast<Ref<IntervalTweener> (Tween::*)(double)>(&Tween::tween_interval)>("tween_interval")
			.fun<static_cast<Ref<CallbackTweener> (Tween::*)(const Callable &)>(&Tween::tween_callback)>("tween_callback")
			.fun<static_cast<Ref<MethodTweener> (Tween::*)(const Callable &, const Variant &, const Variant &, double)>(&Tween::tween_method)>("tween_method")
			.fun<static_cast<bool (Tween::*)(double)>(&Tween::custom_step)>("custom_step")
			.fun<static_cast<void (Tween::*)()>(&Tween::stop)>("stop")
			.fun<static_cast<void (Tween::*)()>(&Tween::pause)>("pause")
			.fun<static_cast<void (Tween::*)()>(&Tween::play)>("play")
			.fun<static_cast<void (Tween::*)()>(&Tween::kill)>("kill")
			.fun<static_cast<double (Tween::*)() const>(&Tween::get_total_elapsed_time)>("get_total_elapsed_time")
			.fun<static_cast<bool (Tween::*)()>(&Tween::is_running)>("is_running")
			.fun<static_cast<bool (Tween::*)()>(&Tween::is_valid)>("is_valid")
			.fun<static_cast<Ref<Tween> (Tween::*)(Node *)>(&Tween::bind_node)>("bind_node")
			.fun<static_cast<Ref<Tween> (Tween::*)(Tween::TweenProcessMode)>(&Tween::set_process_mode)>("set_process_mode")
			.fun<static_cast<Ref<Tween> (Tween::*)(Tween::TweenPauseMode)>(&Tween::set_pause_mode)>("set_pause_mode")
			.fun<static_cast<Ref<Tween> (Tween::*)(bool)>(&Tween::set_parallel)>("set_parallel")
			.fun<static_cast<Ref<Tween> (Tween::*)(int32_t)>(&Tween::set_loops)>("set_loops")
			.fun<static_cast<int32_t (Tween::*)() const>(&Tween::get_loops_left)>("get_loops_left")
			.fun<static_cast<Ref<Tween> (Tween::*)(double)>(&Tween::set_speed_scale)>("set_speed_scale")
			.fun<static_cast<Ref<Tween> (Tween::*)(Tween::TransitionType)>(&Tween::set_trans)>("set_trans")
			.fun<static_cast<Ref<Tween> (Tween::*)(Tween::EaseType)>(&Tween::set_ease)>("set_ease")
			.fun<static_cast<Ref<Tween> (Tween::*)()>(&Tween::parallel)>("parallel")
			.fun<static_cast<Ref<Tween> (Tween::*)()>(&Tween::chain)>("chain")
			.static_fun<&Tween::interpolate_value>("interpolate_value");
}