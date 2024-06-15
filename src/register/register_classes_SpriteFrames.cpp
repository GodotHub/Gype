#include <godot_cpp/classes/sprite_frames.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/variant/packed_string_array.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_SpriteFrames() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<SpriteFrames>("SpriteFrames")
            .constructor<>()
            .base<Resource>()
            .fun<static_cast<void(SpriteFrames::*)(const StringName &)>(&SpriteFrames::add_animation)>("add_animation")
            .fun<static_cast<bool(SpriteFrames::*)(const StringName &)const>(&SpriteFrames::has_animation)>("has_animation")
            .fun<static_cast<void(SpriteFrames::*)(const StringName &)>(&SpriteFrames::remove_animation)>("remove_animation")
            .fun<static_cast<void(SpriteFrames::*)(const StringName &,const StringName &)>(&SpriteFrames::rename_animation)>("rename_animation")
            .fun<static_cast<PackedStringArray(SpriteFrames::*)()const>(&SpriteFrames::get_animation_names)>("get_animation_names")
            .fun<static_cast<void(SpriteFrames::*)(const StringName &,double)>(&SpriteFrames::set_animation_speed)>("set_animation_speed")
            .fun<static_cast<double(SpriteFrames::*)(const StringName &)const>(&SpriteFrames::get_animation_speed)>("get_animation_speed")
            .fun<static_cast<void(SpriteFrames::*)(const StringName &,bool)>(&SpriteFrames::set_animation_loop)>("set_animation_loop")
            .fun<static_cast<bool(SpriteFrames::*)(const StringName &)const>(&SpriteFrames::get_animation_loop)>("get_animation_loop")
            .fun<static_cast<void(SpriteFrames::*)(const StringName &,const Ref<Texture2D> &,double,int32_t)>(&SpriteFrames::add_frame)>("add_frame")
            .fun<static_cast<void(SpriteFrames::*)(const StringName &,int32_t,const Ref<Texture2D> &,double)>(&SpriteFrames::set_frame)>("set_frame")
            .fun<static_cast<void(SpriteFrames::*)(const StringName &,int32_t)>(&SpriteFrames::remove_frame)>("remove_frame")
            .fun<static_cast<int32_t(SpriteFrames::*)(const StringName &)const>(&SpriteFrames::get_frame_count)>("get_frame_count")
            .fun<static_cast<Ref<Texture2D>(SpriteFrames::*)(const StringName &,int32_t)const>(&SpriteFrames::get_frame_texture)>("get_frame_texture")
            .fun<static_cast<double(SpriteFrames::*)(const StringName &,int32_t)const>(&SpriteFrames::get_frame_duration)>("get_frame_duration")
            .fun<static_cast<void(SpriteFrames::*)(const StringName &)>(&SpriteFrames::clear)>("clear")
            .fun<static_cast<void(SpriteFrames::*)()>(&SpriteFrames::clear_all)>("clear_all")
;}