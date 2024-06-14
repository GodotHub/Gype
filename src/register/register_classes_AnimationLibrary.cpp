#include <godot_cpp/classes/animation.hpp>
#include <godot_cpp/classes/animation_library.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_AnimationLibrary() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<AnimationLibrary>("AnimationLibrary")
			.constructor<>()
			.base<Resource>()
			.fun<static_cast<Error (AnimationLibrary::*)(const StringName &, const Ref<Animation> &)>(&AnimationLibrary::add_animation)>((new std::string("add_animation"))->c_str())
			.fun<static_cast<void (AnimationLibrary::*)(const StringName &)>(&AnimationLibrary::remove_animation)>((new std::string("remove_animation"))->c_str())
			.fun<static_cast<void (AnimationLibrary::*)(const StringName &, const StringName &)>(&AnimationLibrary::rename_animation)>((new std::string("rename_animation"))->c_str())
			.fun<static_cast<bool (AnimationLibrary::*)(const StringName &) const>(&AnimationLibrary::has_animation)>((new std::string("has_animation"))->c_str())
			.fun<static_cast<Ref<Animation> (AnimationLibrary::*)(const StringName &) const>(&AnimationLibrary::get_animation)>((new std::string("get_animation"))->c_str())
			.fun<static_cast<TypedArray<StringName> (AnimationLibrary::*)() const>(&AnimationLibrary::get_animation_list)>((new std::string("get_animation_list"))->c_str());
}