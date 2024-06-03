#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/property_tweener.hpp>

using namespace godot;

void register_classes_PropertyTweener() {
    qjs::Context::Module &_module = _General;
    _module.class_<PropertyTweener>("PropertyTweener")
           .constructor<>()
		    .fun<static_cast<Ref<PropertyTweener>(PropertyTweener::*)(const Variant &)>(&PropertyTweener::from)>("from")
		    .fun<static_cast<Ref<PropertyTweener>(PropertyTweener::*)()>(&PropertyTweener::from_current)>("from_current")
		    .fun<static_cast<Ref<PropertyTweener>(PropertyTweener::*)()>(&PropertyTweener::as_relative)>("as_relative")
		    .fun<static_cast<Ref<PropertyTweener>(PropertyTweener::*)(Tween::TransitionType)>(&PropertyTweener::set_trans)>("set_trans")
		    .fun<static_cast<Ref<PropertyTweener>(PropertyTweener::*)(Tween::EaseType)>(&PropertyTweener::set_ease)>("set_ease")
		    .fun<static_cast<Ref<PropertyTweener>(PropertyTweener::*)(double)>(&PropertyTweener::set_delay)>("set_delay")
;}