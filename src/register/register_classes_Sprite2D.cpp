#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/sprite2d.hpp>

using namespace godot;

void register_classes_Sprite2D() {
    qjs::Context::Module &_module = _Node2D;
    _module.class_<Sprite2D>("Sprite2D")
           .constructor<>()
           .property<Sprite2D::get_texture, Sprite2D::set_texture>("texture")
           .property<Sprite2D::is_centered, Sprite2D::set_centered>("centered")
           .property<Sprite2D::get_offset, Sprite2D::set_offset>("offset")
           .property<Sprite2D::is_flipped_h, Sprite2D::set_flip_h>("flip_h")
           .property<Sprite2D::is_flipped_v, Sprite2D::set_flip_v>("flip_v")
           .property<Sprite2D::get_hframes, Sprite2D::set_hframes>("hframes")
           .property<Sprite2D::get_vframes, Sprite2D::set_vframes>("vframes")
           .property<Sprite2D::get_frame, Sprite2D::set_frame>("frame")
           .property<Sprite2D::get_frame_coords, Sprite2D::set_frame_coords>("frame_coords")
           .property<Sprite2D::is_region_enabled, Sprite2D::set_region_enabled>("region_enabled")
           .property<Sprite2D::get_region_rect, Sprite2D::set_region_rect>("region_rect")
           .property<Sprite2D::is_region_filter_clip_enabled, Sprite2D::set_region_filter_clip_enabled>("region_filter_clip_enabled")
		    .fun<static_cast<bool(Sprite2D::*)(const Vector2 &)const>(&Sprite2D::is_pixel_opaque)>("is_pixel_opaque")
		    .fun<static_cast<Rect2(Sprite2D::*)()const>(&Sprite2D::get_rect)>("get_rect")
;}