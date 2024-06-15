#include <godot_cpp/classes/animated_sprite3d.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/sprite_base3d.hpp>
#include <godot_cpp/classes/sprite_frames.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_AnimatedSprite3D() {
    qjs::Context::Module &_module = get_Node3D_module();
    _module.class_<AnimatedSprite3D>("AnimatedSprite3D")
            .constructor<>()
            .base<SpriteBase3D>()
            .property<static_cast<Ref<SpriteFrames>(AnimatedSprite3D::*)()const>(&AnimatedSprite3D::get_sprite_frames),static_cast<void(AnimatedSprite3D::*)(const Ref<SpriteFrames> &)>(&AnimatedSprite3D::set_sprite_frames)>("sprite_frames")
            .property<static_cast<StringName(AnimatedSprite3D::*)()const>(&AnimatedSprite3D::get_animation),static_cast<void(AnimatedSprite3D::*)(const StringName &)>(&AnimatedSprite3D::set_animation)>("animation")
            .property<static_cast<String(AnimatedSprite3D::*)()const>(&AnimatedSprite3D::get_autoplay),static_cast<void(AnimatedSprite3D::*)(const String &)>(&AnimatedSprite3D::set_autoplay)>("autoplay")
            .property<static_cast<int32_t(AnimatedSprite3D::*)()const>(&AnimatedSprite3D::get_frame),static_cast<void(AnimatedSprite3D::*)(int32_t)>(&AnimatedSprite3D::set_frame)>("frame")
            .property<static_cast<double(AnimatedSprite3D::*)()const>(&AnimatedSprite3D::get_frame_progress),static_cast<void(AnimatedSprite3D::*)(double)>(&AnimatedSprite3D::set_frame_progress)>("frame_progress")
            .property<static_cast<double(AnimatedSprite3D::*)()const>(&AnimatedSprite3D::get_speed_scale),static_cast<void(AnimatedSprite3D::*)(double)>(&AnimatedSprite3D::set_speed_scale)>("speed_scale")
            .fun<static_cast<bool(AnimatedSprite3D::*)()const>(&AnimatedSprite3D::is_playing)>("is_playing")
            .fun<static_cast<void(AnimatedSprite3D::*)(const StringName &,double,bool)>(&AnimatedSprite3D::play)>("play")
            .fun<static_cast<void(AnimatedSprite3D::*)(const StringName &)>(&AnimatedSprite3D::play_backwards)>("play_backwards")
            .fun<static_cast<void(AnimatedSprite3D::*)()>(&AnimatedSprite3D::pause)>("pause")
            .fun<static_cast<void(AnimatedSprite3D::*)()>(&AnimatedSprite3D::stop)>("stop")
            .fun<static_cast<void(AnimatedSprite3D::*)(int32_t,double)>(&AnimatedSprite3D::set_frame_and_progress)>("set_frame_and_progress")
            .fun<static_cast<double(AnimatedSprite3D::*)()const>(&AnimatedSprite3D::get_playing_speed)>("get_playing_speed")
;}