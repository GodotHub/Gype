#include <godot_cpp/classes/style_box_flat.hpp>
#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/style_box.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_StyleBoxFlat() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<StyleBoxFlat>("StyleBoxFlat")
            .constructor<>()
            .base<StyleBox>()
            .property<static_cast<Color(StyleBoxFlat::*)()const>(&StyleBoxFlat::get_bg_color),static_cast<void(StyleBoxFlat::*)(const Color &)>(&StyleBoxFlat::set_bg_color)>("bg_color")
            .property<static_cast<bool(StyleBoxFlat::*)()const>(&StyleBoxFlat::is_draw_center_enabled),static_cast<void(StyleBoxFlat::*)(bool)>(&StyleBoxFlat::set_draw_center)>("draw_center")
            .property<static_cast<Vector2(StyleBoxFlat::*)()const>(&StyleBoxFlat::get_skew),static_cast<void(StyleBoxFlat::*)(const Vector2 &)>(&StyleBoxFlat::set_skew)>("skew")
            .property<static_cast<int32_t(StyleBoxFlat::*)(Side)const>(&StyleBoxFlat::get_border_width),static_cast<void(StyleBoxFlat::*)(Side,int32_t)>(&StyleBoxFlat::set_border_width)>("border_width_left")
            .property<static_cast<int32_t(StyleBoxFlat::*)(Side)const>(&StyleBoxFlat::get_border_width),static_cast<void(StyleBoxFlat::*)(Side,int32_t)>(&StyleBoxFlat::set_border_width)>("border_width_top")
            .property<static_cast<int32_t(StyleBoxFlat::*)(Side)const>(&StyleBoxFlat::get_border_width),static_cast<void(StyleBoxFlat::*)(Side,int32_t)>(&StyleBoxFlat::set_border_width)>("border_width_right")
            .property<static_cast<int32_t(StyleBoxFlat::*)(Side)const>(&StyleBoxFlat::get_border_width),static_cast<void(StyleBoxFlat::*)(Side,int32_t)>(&StyleBoxFlat::set_border_width)>("border_width_bottom")
            .property<static_cast<Color(StyleBoxFlat::*)()const>(&StyleBoxFlat::get_border_color),static_cast<void(StyleBoxFlat::*)(const Color &)>(&StyleBoxFlat::set_border_color)>("border_color")
            .property<static_cast<bool(StyleBoxFlat::*)()const>(&StyleBoxFlat::get_border_blend),static_cast<void(StyleBoxFlat::*)(bool)>(&StyleBoxFlat::set_border_blend)>("border_blend")
            .property<static_cast<int32_t(StyleBoxFlat::*)(Corner)const>(&StyleBoxFlat::get_corner_radius),static_cast<void(StyleBoxFlat::*)(Corner,int32_t)>(&StyleBoxFlat::set_corner_radius)>("corner_radius_top_left")
            .property<static_cast<int32_t(StyleBoxFlat::*)(Corner)const>(&StyleBoxFlat::get_corner_radius),static_cast<void(StyleBoxFlat::*)(Corner,int32_t)>(&StyleBoxFlat::set_corner_radius)>("corner_radius_top_right")
            .property<static_cast<int32_t(StyleBoxFlat::*)(Corner)const>(&StyleBoxFlat::get_corner_radius),static_cast<void(StyleBoxFlat::*)(Corner,int32_t)>(&StyleBoxFlat::set_corner_radius)>("corner_radius_bottom_right")
            .property<static_cast<int32_t(StyleBoxFlat::*)(Corner)const>(&StyleBoxFlat::get_corner_radius),static_cast<void(StyleBoxFlat::*)(Corner,int32_t)>(&StyleBoxFlat::set_corner_radius)>("corner_radius_bottom_left")
            .property<static_cast<int32_t(StyleBoxFlat::*)()const>(&StyleBoxFlat::get_corner_detail),static_cast<void(StyleBoxFlat::*)(int32_t)>(&StyleBoxFlat::set_corner_detail)>("corner_detail")
            .property<static_cast<double(StyleBoxFlat::*)(Side)const>(&StyleBoxFlat::get_expand_margin),static_cast<void(StyleBoxFlat::*)(Side,double)>(&StyleBoxFlat::set_expand_margin)>("expand_margin_left")
            .property<static_cast<double(StyleBoxFlat::*)(Side)const>(&StyleBoxFlat::get_expand_margin),static_cast<void(StyleBoxFlat::*)(Side,double)>(&StyleBoxFlat::set_expand_margin)>("expand_margin_top")
            .property<static_cast<double(StyleBoxFlat::*)(Side)const>(&StyleBoxFlat::get_expand_margin),static_cast<void(StyleBoxFlat::*)(Side,double)>(&StyleBoxFlat::set_expand_margin)>("expand_margin_right")
            .property<static_cast<double(StyleBoxFlat::*)(Side)const>(&StyleBoxFlat::get_expand_margin),static_cast<void(StyleBoxFlat::*)(Side,double)>(&StyleBoxFlat::set_expand_margin)>("expand_margin_bottom")
            .property<static_cast<Color(StyleBoxFlat::*)()const>(&StyleBoxFlat::get_shadow_color),static_cast<void(StyleBoxFlat::*)(const Color &)>(&StyleBoxFlat::set_shadow_color)>("shadow_color")
            .property<static_cast<int32_t(StyleBoxFlat::*)()const>(&StyleBoxFlat::get_shadow_size),static_cast<void(StyleBoxFlat::*)(int32_t)>(&StyleBoxFlat::set_shadow_size)>("shadow_size")
            .property<static_cast<Vector2(StyleBoxFlat::*)()const>(&StyleBoxFlat::get_shadow_offset),static_cast<void(StyleBoxFlat::*)(const Vector2 &)>(&StyleBoxFlat::set_shadow_offset)>("shadow_offset")
            .property<static_cast<bool(StyleBoxFlat::*)()const>(&StyleBoxFlat::is_anti_aliased),static_cast<void(StyleBoxFlat::*)(bool)>(&StyleBoxFlat::set_anti_aliased)>("anti_aliasing")
            .property<static_cast<double(StyleBoxFlat::*)()const>(&StyleBoxFlat::get_aa_size),static_cast<void(StyleBoxFlat::*)(double)>(&StyleBoxFlat::set_aa_size)>("anti_aliasing_size")
            .fun<static_cast<void(StyleBoxFlat::*)(int32_t)>(&StyleBoxFlat::set_border_width_all)>("set_border_width_all")
            .fun<static_cast<int32_t(StyleBoxFlat::*)()const>(&StyleBoxFlat::get_border_width_min)>("get_border_width_min")
            .fun<static_cast<void(StyleBoxFlat::*)(int32_t)>(&StyleBoxFlat::set_corner_radius_all)>("set_corner_radius_all")
            .fun<static_cast<void(StyleBoxFlat::*)(double)>(&StyleBoxFlat::set_expand_margin_all)>("set_expand_margin_all")
;}