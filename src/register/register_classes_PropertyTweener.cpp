#include <godot_cpp/classes/property_tweener.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/tween.hpp>
#include <godot_cpp/classes/tweener.hpp>
#include <godot_cpp/variant/callable.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_PropertyTweener() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<PropertyTweener>("PropertyTweener")
			.constructor<>()
			.base<Tweener>()
			.fun<static_cast<Ref<PropertyTweener> (PropertyTweener::*)(const Variant &)>(&PropertyTweener::from)>((new std::string("from"))->c_str())
			.fun<static_cast<Ref<PropertyTweener> (PropertyTweener::*)()>(&PropertyTweener::from_current)>((new std::string("from_current"))->c_str())
			.fun<static_cast<Ref<PropertyTweener> (PropertyTweener::*)()>(&PropertyTweener::as_relative)>((new std::string("as_relative"))->c_str())
			.fun<static_cast<Ref<PropertyTweener> (PropertyTweener::*)(Tween::TransitionType)>(&PropertyTweener::set_trans)>((new std::string("set_trans"))->c_str())
			.fun<static_cast<Ref<PropertyTweener> (PropertyTweener::*)(Tween::EaseType)>(&PropertyTweener::set_ease)>((new std::string("set_ease"))->c_str())
			.fun<static_cast<Ref<PropertyTweener> (PropertyTweener::*)(const Callable &)>(&PropertyTweener::set_custom_interpolator)>((new std::string("set_custom_interpolator"))->c_str())
			.fun<static_cast<Ref<PropertyTweener> (PropertyTweener::*)(double)>(&PropertyTweener::set_delay)>((new std::string("set_delay"))->c_str());
}