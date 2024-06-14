#include <godot_cpp/classes/method_tweener.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/tween.hpp>
#include <godot_cpp/classes/tweener.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_MethodTweener() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<MethodTweener>("MethodTweener")
			.constructor<>()
			.base<Tweener>()
			.fun<static_cast<Ref<MethodTweener> (MethodTweener::*)(double)>(&MethodTweener::set_delay)>((new std::string("set_delay"))->c_str())
			.fun<static_cast<Ref<MethodTweener> (MethodTweener::*)(Tween::TransitionType)>(&MethodTweener::set_trans)>((new std::string("set_trans"))->c_str())
			.fun<static_cast<Ref<MethodTweener> (MethodTweener::*)(Tween::EaseType)>(&MethodTweener::set_ease)>((new std::string("set_ease"))->c_str());
}