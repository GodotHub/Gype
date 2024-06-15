#include <godot_cpp/classes/texture_progress_bar.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/range.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <stdint.h>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_TextureProgressBar() {
    qjs::Context::Module &_module = get_Control_module();
    _module.class_<TextureProgressBar>("TextureProgressBar")
            .constructor<>()
            .base<Range>()
            .property<static_cast<int32_t(TextureProgressBar::*)()>(&TextureProgressBar::get_fill_mode),static_cast<void(TextureProgressBar::*)(int32_t)>(&TextureProgressBar::set_fill_mode)>("fill_mode")
            .property<static_cast<double(TextureProgressBar::*)()>(&TextureProgressBar::get_radial_initial_angle),static_cast<void(TextureProgressBar::*)(double)>(&TextureProgressBar::set_radial_initial_angle)>("radial_initial_angle")
            .property<static_cast<double(TextureProgressBar::*)()>(&TextureProgressBar::get_fill_degrees),static_cast<void(TextureProgressBar::*)(double)>(&TextureProgressBar::set_fill_degrees)>("radial_fill_degrees")
            .property<static_cast<Vector2(TextureProgressBar::*)()>(&TextureProgressBar::get_radial_center_offset),static_cast<void(TextureProgressBar::*)(const Vector2 &)>(&TextureProgressBar::set_radial_center_offset)>("radial_center_offset")
            .property<static_cast<bool(TextureProgressBar::*)()const>(&TextureProgressBar::get_nine_patch_stretch),static_cast<void(TextureProgressBar::*)(bool)>(&TextureProgressBar::set_nine_patch_stretch)>("nine_patch_stretch")
            .property<static_cast<int32_t(TextureProgressBar::*)(Side)const>(&TextureProgressBar::get_stretch_margin),static_cast<void(TextureProgressBar::*)(Side,int32_t)>(&TextureProgressBar::set_stretch_margin)>("stretch_margin_left")
            .property<static_cast<int32_t(TextureProgressBar::*)(Side)const>(&TextureProgressBar::get_stretch_margin),static_cast<void(TextureProgressBar::*)(Side,int32_t)>(&TextureProgressBar::set_stretch_margin)>("stretch_margin_top")
            .property<static_cast<int32_t(TextureProgressBar::*)(Side)const>(&TextureProgressBar::get_stretch_margin),static_cast<void(TextureProgressBar::*)(Side,int32_t)>(&TextureProgressBar::set_stretch_margin)>("stretch_margin_right")
            .property<static_cast<int32_t(TextureProgressBar::*)(Side)const>(&TextureProgressBar::get_stretch_margin),static_cast<void(TextureProgressBar::*)(Side,int32_t)>(&TextureProgressBar::set_stretch_margin)>("stretch_margin_bottom")
            .property<static_cast<Ref<Texture2D>(TextureProgressBar::*)()const>(&TextureProgressBar::get_under_texture),static_cast<void(TextureProgressBar::*)(const Ref<Texture2D> &)>(&TextureProgressBar::set_under_texture)>("texture_under")
            .property<static_cast<Ref<Texture2D>(TextureProgressBar::*)()const>(&TextureProgressBar::get_over_texture),static_cast<void(TextureProgressBar::*)(const Ref<Texture2D> &)>(&TextureProgressBar::set_over_texture)>("texture_over")
            .property<static_cast<Ref<Texture2D>(TextureProgressBar::*)()const>(&TextureProgressBar::get_progress_texture),static_cast<void(TextureProgressBar::*)(const Ref<Texture2D> &)>(&TextureProgressBar::set_progress_texture)>("texture_progress")
            .property<static_cast<Vector2(TextureProgressBar::*)()const>(&TextureProgressBar::get_texture_progress_offset),static_cast<void(TextureProgressBar::*)(const Vector2 &)>(&TextureProgressBar::set_texture_progress_offset)>("texture_progress_offset")
            .property<static_cast<Color(TextureProgressBar::*)()const>(&TextureProgressBar::get_tint_under),static_cast<void(TextureProgressBar::*)(const Color &)>(&TextureProgressBar::set_tint_under)>("tint_under")
            .property<static_cast<Color(TextureProgressBar::*)()const>(&TextureProgressBar::get_tint_over),static_cast<void(TextureProgressBar::*)(const Color &)>(&TextureProgressBar::set_tint_over)>("tint_over")
            .property<static_cast<Color(TextureProgressBar::*)()const>(&TextureProgressBar::get_tint_progress),static_cast<void(TextureProgressBar::*)(const Color &)>(&TextureProgressBar::set_tint_progress)>("tint_progress")
;    qjs::Value _FillMode = context->newObject();
    _FillMode["FILL_LEFT_TO_RIGHT"] = TextureProgressBar::FillMode::FILL_LEFT_TO_RIGHT;
    _FillMode["FILL_RIGHT_TO_LEFT"] = TextureProgressBar::FillMode::FILL_RIGHT_TO_LEFT;
    _FillMode["FILL_TOP_TO_BOTTOM"] = TextureProgressBar::FillMode::FILL_TOP_TO_BOTTOM;
    _FillMode["FILL_BOTTOM_TO_TOP"] = TextureProgressBar::FillMode::FILL_BOTTOM_TO_TOP;
    _FillMode["FILL_CLOCKWISE"] = TextureProgressBar::FillMode::FILL_CLOCKWISE;
    _FillMode["FILL_COUNTER_CLOCKWISE"] = TextureProgressBar::FillMode::FILL_COUNTER_CLOCKWISE;
    _FillMode["FILL_BILINEAR_LEFT_AND_RIGHT"] = TextureProgressBar::FillMode::FILL_BILINEAR_LEFT_AND_RIGHT;
    _FillMode["FILL_BILINEAR_TOP_AND_BOTTOM"] = TextureProgressBar::FillMode::FILL_BILINEAR_TOP_AND_BOTTOM;
    _FillMode["FILL_CLOCKWISE_AND_COUNTER_CLOCKWISE"] = TextureProgressBar::FillMode::FILL_CLOCKWISE_AND_COUNTER_CLOCKWISE;
    _module.add("FillMode", std::move(_FillMode));
}