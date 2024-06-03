#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/style_box_texture.hpp>

using namespace godot;

void register_classes_StyleBoxTexture() {
    qjs::Context::Module &_module = _General;
    _module.class_<StyleBoxTexture>("StyleBoxTexture")
           .constructor<>()
           .property<StyleBoxTexture::get_texture, StyleBoxTexture::set_texture>("texture")
           .property<StyleBoxTexture::get_texture_margin, StyleBoxTexture::set_texture_margin>("texture_margin_left")
           .property<StyleBoxTexture::get_texture_margin, StyleBoxTexture::set_texture_margin>("texture_margin_top")
           .property<StyleBoxTexture::get_texture_margin, StyleBoxTexture::set_texture_margin>("texture_margin_right")
           .property<StyleBoxTexture::get_texture_margin, StyleBoxTexture::set_texture_margin>("texture_margin_bottom")
           .property<StyleBoxTexture::get_expand_margin, StyleBoxTexture::set_expand_margin>("expand_margin_left")
           .property<StyleBoxTexture::get_expand_margin, StyleBoxTexture::set_expand_margin>("expand_margin_top")
           .property<StyleBoxTexture::get_expand_margin, StyleBoxTexture::set_expand_margin>("expand_margin_right")
           .property<StyleBoxTexture::get_expand_margin, StyleBoxTexture::set_expand_margin>("expand_margin_bottom")
           .property<StyleBoxTexture::get_h_axis_stretch_mode, StyleBoxTexture::set_h_axis_stretch_mode>("axis_stretch_horizontal")
           .property<StyleBoxTexture::get_v_axis_stretch_mode, StyleBoxTexture::set_v_axis_stretch_mode>("axis_stretch_vertical")
           .property<StyleBoxTexture::get_region_rect, StyleBoxTexture::set_region_rect>("region_rect")
           .property<StyleBoxTexture::get_modulate, StyleBoxTexture::set_modulate>("modulate_color")
           .property<StyleBoxTexture::is_draw_center_enabled, StyleBoxTexture::set_draw_center>("draw_center")
		    .fun<static_cast<void(StyleBoxTexture::*)(double)>(&StyleBoxTexture::set_texture_margin_all)>("set_texture_margin_all")
		    .fun<static_cast<void(StyleBoxTexture::*)(double)>(&StyleBoxTexture::set_expand_margin_all)>("set_expand_margin_all")
;}