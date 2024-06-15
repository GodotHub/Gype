#include <godot_cpp/classes/animated_sprite2d.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <godot_cpp/classes/node2d.hpp>
#include <godot_cpp/classes/sprite_frames.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_AnimatedSprite2D() {
    qjs::Context::Module &_module = get_Node2D_module();
    _module.class_<AnimatedSprite2D>("AnimatedSprite2D")
            .constructor<>()
            .base<Node2D>()
            .property<static_cast<Ref<SpriteFrames>(AnimatedSprite2D::*)()const>(&AnimatedSprite2D::get_sprite_frames),static_cast<void(AnimatedSprite2D::*)(const Ref<SpriteFrames> &)>(&AnimatedSprite2D::set_sprite_frames)>("sprite_frames")
            .property<static_cast<StringName(AnimatedSprite2D::*)()const>(&AnimatedSprite2D::get_animation),static_cast<void(AnimatedSprite2D::*)(const StringName &)>(&AnimatedSprite2D::set_animation)>("animation")
            .property<static_cast<String(AnimatedSprite2D::*)()const>(&AnimatedSprite2D::get_autoplay),static_cast<void(AnimatedSprite2D::*)(const String &)>(&AnimatedSprite2D::set_autoplay)>("autoplay")
            .property<static_cast<int32_t(AnimatedSprite2D::*)()const>(&AnimatedSprite2D::get_frame),static_cast<void(AnimatedSprite2D::*)(int32_t)>(&AnimatedSprite2D::set_frame)>("frame")
            .property<static_cast<double(AnimatedSprite2D::*)()const>(&AnimatedSprite2D::get_frame_progress),static_cast<void(AnimatedSprite2D::*)(double)>(&AnimatedSprite2D::set_frame_progress)>("frame_progress")
            .property<static_cast<double(AnimatedSprite2D::*)()const>(&AnimatedSprite2D::get_speed_scale),static_cast<void(AnimatedSprite2D::*)(double)>(&AnimatedSprite2D::set_speed_scale)>("speed_scale")
            .property<static_cast<bool(AnimatedSprite2D::*)()const>(&AnimatedSprite2D::is_centered),static_cast<void(AnimatedSprite2D::*)(bool)>(&AnimatedSprite2D::set_centered)>("centered")
            .property<static_cast<Vector2(AnimatedSprite2D::*)()const>(&AnimatedSprite2D::get_offset),static_cast<void(AnimatedSprite2D::*)(const Vector2 &)>(&AnimatedSprite2D::set_offset)>("offset")
            .property<static_cast<bool(AnimatedSprite2D::*)()const>(&AnimatedSprite2D::is_flipped_h),static_cast<void(AnimatedSprite2D::*)(bool)>(&AnimatedSprite2D::set_flip_h)>("flip_h")
            .property<static_cast<bool(AnimatedSprite2D::*)()const>(&AnimatedSprite2D::is_flipped_v),static_cast<void(AnimatedSprite2D::*)(bool)>(&AnimatedSprite2D::set_flip_v)>("flip_v")
            .fun<static_cast<bool(AnimatedSprite2D::*)()const>(&AnimatedSprite2D::is_playing)>("is_playing")
            .fun<static_cast<void(AnimatedSprite2D::*)(const StringName &,double,bool)>(&AnimatedSprite2D::play)>("play")
            .fun<static_cast<void(AnimatedSprite2D::*)(const StringName &)>(&AnimatedSprite2D::play_backwards)>("play_backwards")
            .fun<static_cast<void(AnimatedSprite2D::*)()>(&AnimatedSprite2D::pause)>("pause")
            .fun<static_cast<void(AnimatedSprite2D::*)()>(&AnimatedSprite2D::stop)>("stop")
            .fun<static_cast<void(AnimatedSprite2D::*)(int32_t,double)>(&AnimatedSprite2D::set_frame_and_progress)>("set_frame_and_progress")
            .fun<static_cast<double(AnimatedSprite2D::*)()const>(&AnimatedSprite2D::get_playing_speed)>("get_playing_speed")
;}