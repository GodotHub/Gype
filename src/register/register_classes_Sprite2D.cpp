#include <godot_cpp/classes/sprite2d.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/rect2.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <godot_cpp/variant/vector2i.hpp>
#include <godot_cpp/classes/node2d.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_Sprite2D() {
    qjs::Context::Module &_module = get_Node2D_module();
    _module.class_<Sprite2D>("Sprite2D")
            .constructor<>()
            .base<Node2D>()
            .property<static_cast<Ref<Texture2D>(Sprite2D::*)()const>(&Sprite2D::get_texture),static_cast<void(Sprite2D::*)(const Ref<Texture2D> &)>(&Sprite2D::set_texture)>("texture")
            .property<static_cast<bool(Sprite2D::*)()const>(&Sprite2D::is_centered),static_cast<void(Sprite2D::*)(bool)>(&Sprite2D::set_centered)>("centered")
            .property<static_cast<Vector2(Sprite2D::*)()const>(&Sprite2D::get_offset),static_cast<void(Sprite2D::*)(const Vector2 &)>(&Sprite2D::set_offset)>("offset")
            .property<static_cast<bool(Sprite2D::*)()const>(&Sprite2D::is_flipped_h),static_cast<void(Sprite2D::*)(bool)>(&Sprite2D::set_flip_h)>("flip_h")
            .property<static_cast<bool(Sprite2D::*)()const>(&Sprite2D::is_flipped_v),static_cast<void(Sprite2D::*)(bool)>(&Sprite2D::set_flip_v)>("flip_v")
            .property<static_cast<int32_t(Sprite2D::*)()const>(&Sprite2D::get_hframes),static_cast<void(Sprite2D::*)(int32_t)>(&Sprite2D::set_hframes)>("hframes")
            .property<static_cast<int32_t(Sprite2D::*)()const>(&Sprite2D::get_vframes),static_cast<void(Sprite2D::*)(int32_t)>(&Sprite2D::set_vframes)>("vframes")
            .property<static_cast<int32_t(Sprite2D::*)()const>(&Sprite2D::get_frame),static_cast<void(Sprite2D::*)(int32_t)>(&Sprite2D::set_frame)>("frame")
            .property<static_cast<Vector2i(Sprite2D::*)()const>(&Sprite2D::get_frame_coords),static_cast<void(Sprite2D::*)(const Vector2i &)>(&Sprite2D::set_frame_coords)>("frame_coords")
            .property<static_cast<bool(Sprite2D::*)()const>(&Sprite2D::is_region_enabled),static_cast<void(Sprite2D::*)(bool)>(&Sprite2D::set_region_enabled)>("region_enabled")
            .property<static_cast<Rect2(Sprite2D::*)()const>(&Sprite2D::get_region_rect),static_cast<void(Sprite2D::*)(const Rect2 &)>(&Sprite2D::set_region_rect)>("region_rect")
            .property<static_cast<bool(Sprite2D::*)()const>(&Sprite2D::is_region_filter_clip_enabled),static_cast<void(Sprite2D::*)(bool)>(&Sprite2D::set_region_filter_clip_enabled)>("region_filter_clip_enabled")
            .fun<static_cast<bool(Sprite2D::*)(const Vector2 &)const>(&Sprite2D::is_pixel_opaque)>("is_pixel_opaque")
            .fun<static_cast<Rect2(Sprite2D::*)()const>(&Sprite2D::get_rect)>("get_rect")
;}