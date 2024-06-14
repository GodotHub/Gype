
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/skin.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <godot_cpp/variant/transform3d.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_Skin() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<Skin>("Skin")
			.constructor<>()
			.base<Resource>()
			.fun<static_cast<void (Skin::*)(int32_t)>(&Skin::set_bind_count)>((new std::string("set_bind_count"))->c_str())
			.fun<static_cast<int32_t (Skin::*)() const>(&Skin::get_bind_count)>((new std::string("get_bind_count"))->c_str())
			.fun<static_cast<void (Skin::*)(int32_t, const Transform3D &)>(&Skin::add_bind)>((new std::string("add_bind"))->c_str())
			.fun<static_cast<void (Skin::*)(const String &, const Transform3D &)>(&Skin::add_named_bind)>((new std::string("add_named_bind"))->c_str())
			.fun<static_cast<void (Skin::*)(int32_t, const Transform3D &)>(&Skin::set_bind_pose)>((new std::string("set_bind_pose"))->c_str())
			.fun<static_cast<Transform3D (Skin::*)(int32_t) const>(&Skin::get_bind_pose)>((new std::string("get_bind_pose"))->c_str())
			.fun<static_cast<void (Skin::*)(int32_t, const StringName &)>(&Skin::set_bind_name)>((new std::string("set_bind_name"))->c_str())
			.fun<static_cast<StringName (Skin::*)(int32_t) const>(&Skin::get_bind_name)>((new std::string("get_bind_name"))->c_str())
			.fun<static_cast<void (Skin::*)(int32_t, int32_t)>(&Skin::set_bind_bone)>((new std::string("set_bind_bone"))->c_str())
			.fun<static_cast<int32_t (Skin::*)(int32_t) const>(&Skin::get_bind_bone)>((new std::string("get_bind_bone"))->c_str())
			.fun<static_cast<void (Skin::*)()>(&Skin::clear_binds)>((new std::string("clear_binds"))->c_str());
}