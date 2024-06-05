#include <godot_cpp/classes/skin.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <godot_cpp/variant/transform3d.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_Skin() {
	qjs::Context::Module &_module = _General;
	_module.class_<Skin>("Skin")
			.constructor<>()
			.fun<static_cast<void (Skin::*)(int32_t)>(&Skin::set_bind_count)>("set_bind_count")
			.fun<static_cast<int32_t (Skin::*)() const>(&Skin::get_bind_count)>("get_bind_count")
			.fun<static_cast<void (Skin::*)(int32_t, const Transform3D &)>(&Skin::add_bind)>("add_bind")
			.fun<static_cast<void (Skin::*)(const String &, const Transform3D &)>(&Skin::add_named_bind)>("add_named_bind")
			.fun<static_cast<void (Skin::*)(int32_t, const Transform3D &)>(&Skin::set_bind_pose)>("set_bind_pose")
			.fun<static_cast<Transform3D (Skin::*)(int32_t) const>(&Skin::get_bind_pose)>("get_bind_pose")
			.fun<static_cast<void (Skin::*)(int32_t, const StringName &)>(&Skin::set_bind_name)>("set_bind_name")
			.fun<static_cast<StringName (Skin::*)(int32_t) const>(&Skin::get_bind_name)>("get_bind_name")
			.fun<static_cast<void (Skin::*)(int32_t, int32_t)>(&Skin::set_bind_bone)>("set_bind_bone")
			.fun<static_cast<int32_t (Skin::*)(int32_t) const>(&Skin::get_bind_bone)>("get_bind_bone")
			.fun<static_cast<void (Skin::*)()>(&Skin::clear_binds)>("clear_binds");
}