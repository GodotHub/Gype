#include <godot_cpp/classes/style_box_texture.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/variant/rect2.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/style_box.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_StyleBoxTexture() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<StyleBoxTexture>("StyleBoxTexture")
            .constructor<>()
            .base<StyleBox>()
            .property<static_cast<Ref<Texture2D>(StyleBoxTexture::*)()const>(&StyleBoxTexture::get_texture),static_cast<void(StyleBoxTexture::*)(const Ref<Texture2D> &)>(&StyleBoxTexture::set_texture)>("texture")
            .property<static_cast<double(StyleBoxTexture::*)(Side)const>(&StyleBoxTexture::get_texture_margin),static_cast<void(StyleBoxTexture::*)(Side,double)>(&StyleBoxTexture::set_texture_margin)>("texture_margin_left")
            .property<static_cast<double(StyleBoxTexture::*)(Side)const>(&StyleBoxTexture::get_texture_margin),static_cast<void(StyleBoxTexture::*)(Side,double)>(&StyleBoxTexture::set_texture_margin)>("texture_margin_top")
            .property<static_cast<double(StyleBoxTexture::*)(Side)const>(&StyleBoxTexture::get_texture_margin),static_cast<void(StyleBoxTexture::*)(Side,double)>(&StyleBoxTexture::set_texture_margin)>("texture_margin_right")
            .property<static_cast<double(StyleBoxTexture::*)(Side)const>(&StyleBoxTexture::get_texture_margin),static_cast<void(StyleBoxTexture::*)(Side,double)>(&StyleBoxTexture::set_texture_margin)>("texture_margin_bottom")
            .property<static_cast<double(StyleBoxTexture::*)(Side)const>(&StyleBoxTexture::get_expand_margin),static_cast<void(StyleBoxTexture::*)(Side,double)>(&StyleBoxTexture::set_expand_margin)>("expand_margin_left")
            .property<static_cast<double(StyleBoxTexture::*)(Side)const>(&StyleBoxTexture::get_expand_margin),static_cast<void(StyleBoxTexture::*)(Side,double)>(&StyleBoxTexture::set_expand_margin)>("expand_margin_top")
            .property<static_cast<double(StyleBoxTexture::*)(Side)const>(&StyleBoxTexture::get_expand_margin),static_cast<void(StyleBoxTexture::*)(Side,double)>(&StyleBoxTexture::set_expand_margin)>("expand_margin_right")
            .property<static_cast<double(StyleBoxTexture::*)(Side)const>(&StyleBoxTexture::get_expand_margin),static_cast<void(StyleBoxTexture::*)(Side,double)>(&StyleBoxTexture::set_expand_margin)>("expand_margin_bottom")
            .property<static_cast<StyleBoxTexture::AxisStretchMode(StyleBoxTexture::*)()const>(&StyleBoxTexture::get_h_axis_stretch_mode),static_cast<void(StyleBoxTexture::*)(StyleBoxTexture::AxisStretchMode)>(&StyleBoxTexture::set_h_axis_stretch_mode)>("axis_stretch_horizontal")
            .property<static_cast<StyleBoxTexture::AxisStretchMode(StyleBoxTexture::*)()const>(&StyleBoxTexture::get_v_axis_stretch_mode),static_cast<void(StyleBoxTexture::*)(StyleBoxTexture::AxisStretchMode)>(&StyleBoxTexture::set_v_axis_stretch_mode)>("axis_stretch_vertical")
            .property<static_cast<Rect2(StyleBoxTexture::*)()const>(&StyleBoxTexture::get_region_rect),static_cast<void(StyleBoxTexture::*)(const Rect2 &)>(&StyleBoxTexture::set_region_rect)>("region_rect")
            .property<static_cast<Color(StyleBoxTexture::*)()const>(&StyleBoxTexture::get_modulate),static_cast<void(StyleBoxTexture::*)(const Color &)>(&StyleBoxTexture::set_modulate)>("modulate_color")
            .property<static_cast<bool(StyleBoxTexture::*)()const>(&StyleBoxTexture::is_draw_center_enabled),static_cast<void(StyleBoxTexture::*)(bool)>(&StyleBoxTexture::set_draw_center)>("draw_center")
            .fun<static_cast<void(StyleBoxTexture::*)(double)>(&StyleBoxTexture::set_texture_margin_all)>("set_texture_margin_all")
            .fun<static_cast<void(StyleBoxTexture::*)(double)>(&StyleBoxTexture::set_expand_margin_all)>("set_expand_margin_all")
;    qjs::Value _AxisStretchMode = context->newObject();
    _AxisStretchMode["AXIS_STRETCH_MODE_STRETCH"] = StyleBoxTexture::AxisStretchMode::AXIS_STRETCH_MODE_STRETCH;
    _AxisStretchMode["AXIS_STRETCH_MODE_TILE"] = StyleBoxTexture::AxisStretchMode::AXIS_STRETCH_MODE_TILE;
    _AxisStretchMode["AXIS_STRETCH_MODE_TILE_FIT"] = StyleBoxTexture::AxisStretchMode::AXIS_STRETCH_MODE_TILE_FIT;
    _module.add("AxisStretchMode", std::move(_AxisStretchMode));
}