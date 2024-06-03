#include "register/register_classes.h"
#include "register/utils.h"

using namespace godot;

void register_classes_AnimatedSprite3D() {
    qjs::Context::Module &_module = _Node3D;
    _module.class_<AnimatedSprite3D>("AnimatedSprite3D")
           .constructor<>()
           .property<AnimatedSprite3D::get_sprite_frames, AnimatedSprite3D::set_sprite_frames>("sprite_frames")
           .property<AnimatedSprite3D::get_animation, AnimatedSprite3D::set_animation>("animation")
           .property<AnimatedSprite3D::get_autoplay, AnimatedSprite3D::set_autoplay>("autoplay")
           .property<AnimatedSprite3D::get_frame, AnimatedSprite3D::set_frame>("frame")
           .property<AnimatedSprite3D::get_frame_progress, AnimatedSprite3D::set_frame_progress>("frame_progress")
           .property<AnimatedSprite3D::get_speed_scale, AnimatedSprite3D::set_speed_scale>("speed_scale")
		   .fun<static_cast<bool(AnimatedSprite3D::*)()const>(&AnimatedSprite3D::is_playing)>("is_playing")
		   .fun<static_cast<void(AnimatedSprite3D::*)(const StringName &,double,bool)>(&AnimatedSprite3D::play)>("play")
		   .fun<static_cast<void(AnimatedSprite3D::*)(const StringName &)>(&AnimatedSprite3D::play_backwards)>("play_backwards")
		   .fun<static_cast<void(AnimatedSprite3D::*)()>(&AnimatedSprite3D::pause)>("pause")
		   .fun<static_cast<void(AnimatedSprite3D::*)()>(&AnimatedSprite3D::stop)>("stop")
		   .fun<static_cast<void(AnimatedSprite3D::*)(int32_t,double)>(&AnimatedSprite3D::set_frame_and_progress)>("set_frame_and_progress")
		   .fun<static_cast<double(AnimatedSprite3D::*)()const>(&AnimatedSprite3D::get_playing_speed)>("get_playing_speed")
;}