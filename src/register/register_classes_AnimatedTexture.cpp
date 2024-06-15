#include <godot_cpp/classes/animated_texture.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_AnimatedTexture() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<AnimatedTexture>("AnimatedTexture")
            .constructor<>()
            .base<Texture2D>()
            .static_fun<&AnimatedTexture::MAX_FRAMES>("MAX_FRAMES")
            .property<static_cast<int32_t(AnimatedTexture::*)()const>(&AnimatedTexture::get_frames),static_cast<void(AnimatedTexture::*)(int32_t)>(&AnimatedTexture::set_frames)>("frames")
            .property<static_cast<int32_t(AnimatedTexture::*)()const>(&AnimatedTexture::get_current_frame),static_cast<void(AnimatedTexture::*)(int32_t)>(&AnimatedTexture::set_current_frame)>("current_frame")
            .property<static_cast<bool(AnimatedTexture::*)()const>(&AnimatedTexture::get_pause),static_cast<void(AnimatedTexture::*)(bool)>(&AnimatedTexture::set_pause)>("pause")
            .property<static_cast<bool(AnimatedTexture::*)()const>(&AnimatedTexture::get_one_shot),static_cast<void(AnimatedTexture::*)(bool)>(&AnimatedTexture::set_one_shot)>("one_shot")
            .property<static_cast<double(AnimatedTexture::*)()const>(&AnimatedTexture::get_speed_scale),static_cast<void(AnimatedTexture::*)(double)>(&AnimatedTexture::set_speed_scale)>("speed_scale")
            .fun<static_cast<void(AnimatedTexture::*)(int32_t,const Ref<Texture2D> &)>(&AnimatedTexture::set_frame_texture)>("set_frame_texture")
            .fun<static_cast<Ref<Texture2D>(AnimatedTexture::*)(int32_t)const>(&AnimatedTexture::get_frame_texture)>("get_frame_texture")
            .fun<static_cast<void(AnimatedTexture::*)(int32_t,double)>(&AnimatedTexture::set_frame_duration)>("set_frame_duration")
            .fun<static_cast<double(AnimatedTexture::*)(int32_t)const>(&AnimatedTexture::get_frame_duration)>("get_frame_duration")
;}