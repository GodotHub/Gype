
#include <godot_cpp/classes/animated_sprite2d.hpp>
#include <godot_cpp/classes/node2d.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/sprite_frames.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_AnimatedSprite2D() {
	qjs::Context::Module &_module = get_Node2D_module();
	_module.class_<AnimatedSprite2D>("AnimatedSprite2D")
			.constructor<>()
			.base<Node2D>()
			.property<static_cast<Ref<SpriteFrames> (AnimatedSprite2D::*)() const>(&AnimatedSprite2D::get_sprite_frames), static_cast<void (AnimatedSprite2D::*)(const Ref<SpriteFrames> &)>(&AnimatedSprite2D::set_sprite_frames)>((new std::string("sprite_frames"))->c_str())
			.property<static_cast<StringName (AnimatedSprite2D::*)() const>(&AnimatedSprite2D::get_animation), static_cast<void (AnimatedSprite2D::*)(const StringName &)>(&AnimatedSprite2D::set_animation)>((new std::string("animation"))->c_str())
			.property<static_cast<String (AnimatedSprite2D::*)() const>(&AnimatedSprite2D::get_autoplay), static_cast<void (AnimatedSprite2D::*)(const String &)>(&AnimatedSprite2D::set_autoplay)>((new std::string("autoplay"))->c_str())
			.property<static_cast<int32_t (AnimatedSprite2D::*)() const>(&AnimatedSprite2D::get_frame), static_cast<void (AnimatedSprite2D::*)(int32_t)>(&AnimatedSprite2D::set_frame)>((new std::string("frame"))->c_str())
			.property<static_cast<double (AnimatedSprite2D::*)() const>(&AnimatedSprite2D::get_frame_progress), static_cast<void (AnimatedSprite2D::*)(double)>(&AnimatedSprite2D::set_frame_progress)>((new std::string("frame_progress"))->c_str())
			.property<static_cast<double (AnimatedSprite2D::*)() const>(&AnimatedSprite2D::get_speed_scale), static_cast<void (AnimatedSprite2D::*)(double)>(&AnimatedSprite2D::set_speed_scale)>((new std::string("speed_scale"))->c_str())
			.property<static_cast<bool (AnimatedSprite2D::*)() const>(&AnimatedSprite2D::is_centered), static_cast<void (AnimatedSprite2D::*)(bool)>(&AnimatedSprite2D::set_centered)>((new std::string("centered"))->c_str())
			.property<static_cast<Vector2 (AnimatedSprite2D::*)() const>(&AnimatedSprite2D::get_offset), static_cast<void (AnimatedSprite2D::*)(const Vector2 &)>(&AnimatedSprite2D::set_offset)>((new std::string("offset"))->c_str())
			.property<static_cast<bool (AnimatedSprite2D::*)() const>(&AnimatedSprite2D::is_flipped_h), static_cast<void (AnimatedSprite2D::*)(bool)>(&AnimatedSprite2D::set_flip_h)>((new std::string("flip_h"))->c_str())
			.property<static_cast<bool (AnimatedSprite2D::*)() const>(&AnimatedSprite2D::is_flipped_v), static_cast<void (AnimatedSprite2D::*)(bool)>(&AnimatedSprite2D::set_flip_v)>((new std::string("flip_v"))->c_str())
			.fun<static_cast<bool (AnimatedSprite2D::*)() const>(&AnimatedSprite2D::is_playing)>((new std::string("is_playing"))->c_str())
			.fun<static_cast<void (AnimatedSprite2D::*)(const StringName &, double, bool)>(&AnimatedSprite2D::play)>((new std::string("play"))->c_str())
			.fun<static_cast<void (AnimatedSprite2D::*)(const StringName &)>(&AnimatedSprite2D::play_backwards)>((new std::string("play_backwards"))->c_str())
			.fun<static_cast<void (AnimatedSprite2D::*)()>(&AnimatedSprite2D::pause)>((new std::string("pause"))->c_str())
			.fun<static_cast<void (AnimatedSprite2D::*)()>(&AnimatedSprite2D::stop)>((new std::string("stop"))->c_str())
			.fun<static_cast<void (AnimatedSprite2D::*)(int32_t, double)>(&AnimatedSprite2D::set_frame_and_progress)>((new std::string("set_frame_and_progress"))->c_str())
			.fun<static_cast<double (AnimatedSprite2D::*)() const>(&AnimatedSprite2D::get_playing_speed)>((new std::string("get_playing_speed"))->c_str());
}