#include "register/register_classes.h"
#include "register/utils.h"

using namespace godot;

void register_classes_AnimatedSprite2D() {
    qjs::Context::Module &_module = _Node2D;
    _module.class_<AnimatedSprite2D>("AnimatedSprite2D")
           .constructor<>()
           .property<AnimatedSprite2D::get_sprite_frames, AnimatedSprite2D::set_sprite_frames>("sprite_frames")
           .property<AnimatedSprite2D::get_animation, AnimatedSprite2D::set_animation>("animation")
           .property<AnimatedSprite2D::get_autoplay, AnimatedSprite2D::set_autoplay>("autoplay")
           .property<AnimatedSprite2D::get_frame, AnimatedSprite2D::set_frame>("frame")
           .property<AnimatedSprite2D::get_frame_progress, AnimatedSprite2D::set_frame_progress>("frame_progress")
           .property<AnimatedSprite2D::get_speed_scale, AnimatedSprite2D::set_speed_scale>("speed_scale")
           .property<AnimatedSprite2D::is_centered, AnimatedSprite2D::set_centered>("centered")
           .property<AnimatedSprite2D::get_offset, AnimatedSprite2D::set_offset>("offset")
           .property<AnimatedSprite2D::is_flipped_h, AnimatedSprite2D::set_flip_h>("flip_h")
           .property<AnimatedSprite2D::is_flipped_v, AnimatedSprite2D::set_flip_v>("flip_v")
		   .fun<static_cast<bool(AnimatedSprite2D::*)()const>(&AnimatedSprite2D::is_playing)>("is_playing")
		   .fun<static_cast<void(AnimatedSprite2D::*)(const StringName &,double,bool)>(&AnimatedSprite2D::play)>("play")
		   .fun<static_cast<void(AnimatedSprite2D::*)(const StringName &)>(&AnimatedSprite2D::play_backwards)>("play_backwards")
		   .fun<static_cast<void(AnimatedSprite2D::*)()>(&AnimatedSprite2D::pause)>("pause")
		   .fun<static_cast<void(AnimatedSprite2D::*)()>(&AnimatedSprite2D::stop)>("stop")
		   .fun<static_cast<void(AnimatedSprite2D::*)(int32_t,double)>(&AnimatedSprite2D::set_frame_and_progress)>("set_frame_and_progress")
		   .fun<static_cast<double(AnimatedSprite2D::*)()const>(&AnimatedSprite2D::get_playing_speed)>("get_playing_speed")
;}