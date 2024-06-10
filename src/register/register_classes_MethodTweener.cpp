#include <godot_cpp/classes/method_tweener.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/tween.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_MethodTweener() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<MethodTweener>("MethodTweener")
			.constructor<>()
			.fun<static_cast<Ref<MethodTweener> (MethodTweener::*)(double)>(&MethodTweener::set_delay)>("set_delay")
			.fun<static_cast<Ref<MethodTweener> (MethodTweener::*)(Tween::TransitionType)>(&MethodTweener::set_trans)>("set_trans")
			.fun<static_cast<Ref<MethodTweener> (MethodTweener::*)(Tween::EaseType)>(&MethodTweener::set_ease)>("set_ease");
}