
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/sprite_frames.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/variant/packed_string_array.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_SpriteFrames() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<SpriteFrames>("SpriteFrames")
			.constructor<>()
			.base<Resource>()
			.fun<static_cast<void (SpriteFrames::*)(const StringName &)>(&SpriteFrames::add_animation)>((new std::string("add_animation"))->c_str())
			.fun<static_cast<bool (SpriteFrames::*)(const StringName &) const>(&SpriteFrames::has_animation)>((new std::string("has_animation"))->c_str())
			.fun<static_cast<void (SpriteFrames::*)(const StringName &)>(&SpriteFrames::remove_animation)>((new std::string("remove_animation"))->c_str())
			.fun<static_cast<void (SpriteFrames::*)(const StringName &, const StringName &)>(&SpriteFrames::rename_animation)>((new std::string("rename_animation"))->c_str())
			.fun<static_cast<PackedStringArray (SpriteFrames::*)() const>(&SpriteFrames::get_animation_names)>((new std::string("get_animation_names"))->c_str())
			.fun<static_cast<void (SpriteFrames::*)(const StringName &, double)>(&SpriteFrames::set_animation_speed)>((new std::string("set_animation_speed"))->c_str())
			.fun<static_cast<double (SpriteFrames::*)(const StringName &) const>(&SpriteFrames::get_animation_speed)>((new std::string("get_animation_speed"))->c_str())
			.fun<static_cast<void (SpriteFrames::*)(const StringName &, bool)>(&SpriteFrames::set_animation_loop)>((new std::string("set_animation_loop"))->c_str())
			.fun<static_cast<bool (SpriteFrames::*)(const StringName &) const>(&SpriteFrames::get_animation_loop)>((new std::string("get_animation_loop"))->c_str())
			.fun<static_cast<void (SpriteFrames::*)(const StringName &, const Ref<Texture2D> &, double, int32_t)>(&SpriteFrames::add_frame)>((new std::string("add_frame"))->c_str())
			.fun<static_cast<void (SpriteFrames::*)(const StringName &, int32_t, const Ref<Texture2D> &, double)>(&SpriteFrames::set_frame)>((new std::string("set_frame"))->c_str())
			.fun<static_cast<void (SpriteFrames::*)(const StringName &, int32_t)>(&SpriteFrames::remove_frame)>((new std::string("remove_frame"))->c_str())
			.fun<static_cast<int32_t (SpriteFrames::*)(const StringName &) const>(&SpriteFrames::get_frame_count)>((new std::string("get_frame_count"))->c_str())
			.fun<static_cast<Ref<Texture2D> (SpriteFrames::*)(const StringName &, int32_t) const>(&SpriteFrames::get_frame_texture)>((new std::string("get_frame_texture"))->c_str())
			.fun<static_cast<double (SpriteFrames::*)(const StringName &, int32_t) const>(&SpriteFrames::get_frame_duration)>((new std::string("get_frame_duration"))->c_str())
			.fun<static_cast<void (SpriteFrames::*)(const StringName &)>(&SpriteFrames::clear)>((new std::string("clear"))->c_str())
			.fun<static_cast<void (SpriteFrames::*)()>(&SpriteFrames::clear_all)>((new std::string("clear_all"))->c_str());
}