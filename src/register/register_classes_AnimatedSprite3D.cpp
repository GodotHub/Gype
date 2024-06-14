
#include <godot_cpp/classes/animated_sprite3d.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/sprite_base3d.hpp>
#include <godot_cpp/classes/sprite_frames.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_AnimatedSprite3D() {
	qjs::Context::Module &_module = get_Node3D_module();
	_module.class_<AnimatedSprite3D>("AnimatedSprite3D")
			.constructor<>()
			.base<SpriteBase3D>()
			.property<static_cast<Ref<SpriteFrames> (AnimatedSprite3D::*)() const>(&AnimatedSprite3D::get_sprite_frames), static_cast<void (AnimatedSprite3D::*)(const Ref<SpriteFrames> &)>(&AnimatedSprite3D::set_sprite_frames)>((new std::string("sprite_frames"))->c_str())
			.property<static_cast<StringName (AnimatedSprite3D::*)() const>(&AnimatedSprite3D::get_animation), static_cast<void (AnimatedSprite3D::*)(const StringName &)>(&AnimatedSprite3D::set_animation)>((new std::string("animation"))->c_str())
			.property<static_cast<String (AnimatedSprite3D::*)() const>(&AnimatedSprite3D::get_autoplay), static_cast<void (AnimatedSprite3D::*)(const String &)>(&AnimatedSprite3D::set_autoplay)>((new std::string("autoplay"))->c_str())
			.property<static_cast<int32_t (AnimatedSprite3D::*)() const>(&AnimatedSprite3D::get_frame), static_cast<void (AnimatedSprite3D::*)(int32_t)>(&AnimatedSprite3D::set_frame)>((new std::string("frame"))->c_str())
			.property<static_cast<double (AnimatedSprite3D::*)() const>(&AnimatedSprite3D::get_frame_progress), static_cast<void (AnimatedSprite3D::*)(double)>(&AnimatedSprite3D::set_frame_progress)>((new std::string("frame_progress"))->c_str())
			.property<static_cast<double (AnimatedSprite3D::*)() const>(&AnimatedSprite3D::get_speed_scale), static_cast<void (AnimatedSprite3D::*)(double)>(&AnimatedSprite3D::set_speed_scale)>((new std::string("speed_scale"))->c_str())
			.fun<static_cast<bool (AnimatedSprite3D::*)() const>(&AnimatedSprite3D::is_playing)>((new std::string("is_playing"))->c_str())
			.fun<static_cast<void (AnimatedSprite3D::*)(const StringName &, double, bool)>(&AnimatedSprite3D::play)>((new std::string("play"))->c_str())
			.fun<static_cast<void (AnimatedSprite3D::*)(const StringName &)>(&AnimatedSprite3D::play_backwards)>((new std::string("play_backwards"))->c_str())
			.fun<static_cast<void (AnimatedSprite3D::*)()>(&AnimatedSprite3D::pause)>((new std::string("pause"))->c_str())
			.fun<static_cast<void (AnimatedSprite3D::*)()>(&AnimatedSprite3D::stop)>((new std::string("stop"))->c_str())
			.fun<static_cast<void (AnimatedSprite3D::*)(int32_t, double)>(&AnimatedSprite3D::set_frame_and_progress)>((new std::string("set_frame_and_progress"))->c_str())
			.fun<static_cast<double (AnimatedSprite3D::*)() const>(&AnimatedSprite3D::get_playing_speed)>((new std::string("get_playing_speed"))->c_str());
}