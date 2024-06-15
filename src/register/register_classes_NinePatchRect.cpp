#include <godot_cpp/classes/nine_patch_rect.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/rect2.hpp>
#include <godot_cpp/classes/control.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <stdint.h>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_NinePatchRect() {
    qjs::Context::Module &_module = get_Control_module();
    _module.class_<NinePatchRect>("NinePatchRect")
            .constructor<>()
            .base<Control>()
            .property<static_cast<Ref<Texture2D>(NinePatchRect::*)()const>(&NinePatchRect::get_texture),static_cast<void(NinePatchRect::*)(const Ref<Texture2D> &)>(&NinePatchRect::set_texture)>("texture")
            .property<static_cast<bool(NinePatchRect::*)()const>(&NinePatchRect::is_draw_center_enabled),static_cast<void(NinePatchRect::*)(bool)>(&NinePatchRect::set_draw_center)>("draw_center")
            .property<static_cast<Rect2(NinePatchRect::*)()const>(&NinePatchRect::get_region_rect),static_cast<void(NinePatchRect::*)(const Rect2 &)>(&NinePatchRect::set_region_rect)>("region_rect")
            .property<static_cast<int32_t(NinePatchRect::*)(Side)const>(&NinePatchRect::get_patch_margin),static_cast<void(NinePatchRect::*)(Side,int32_t)>(&NinePatchRect::set_patch_margin)>("patch_margin_left")
            .property<static_cast<int32_t(NinePatchRect::*)(Side)const>(&NinePatchRect::get_patch_margin),static_cast<void(NinePatchRect::*)(Side,int32_t)>(&NinePatchRect::set_patch_margin)>("patch_margin_top")
            .property<static_cast<int32_t(NinePatchRect::*)(Side)const>(&NinePatchRect::get_patch_margin),static_cast<void(NinePatchRect::*)(Side,int32_t)>(&NinePatchRect::set_patch_margin)>("patch_margin_right")
            .property<static_cast<int32_t(NinePatchRect::*)(Side)const>(&NinePatchRect::get_patch_margin),static_cast<void(NinePatchRect::*)(Side,int32_t)>(&NinePatchRect::set_patch_margin)>("patch_margin_bottom")
            .property<static_cast<NinePatchRect::AxisStretchMode(NinePatchRect::*)()const>(&NinePatchRect::get_h_axis_stretch_mode),static_cast<void(NinePatchRect::*)(NinePatchRect::AxisStretchMode)>(&NinePatchRect::set_h_axis_stretch_mode)>("axis_stretch_horizontal")
            .property<static_cast<NinePatchRect::AxisStretchMode(NinePatchRect::*)()const>(&NinePatchRect::get_v_axis_stretch_mode),static_cast<void(NinePatchRect::*)(NinePatchRect::AxisStretchMode)>(&NinePatchRect::set_v_axis_stretch_mode)>("axis_stretch_vertical")
;    qjs::Value _AxisStretchMode = context->newObject();
    _AxisStretchMode["AXIS_STRETCH_MODE_STRETCH"] = NinePatchRect::AxisStretchMode::AXIS_STRETCH_MODE_STRETCH;
    _AxisStretchMode["AXIS_STRETCH_MODE_TILE"] = NinePatchRect::AxisStretchMode::AXIS_STRETCH_MODE_TILE;
    _AxisStretchMode["AXIS_STRETCH_MODE_TILE_FIT"] = NinePatchRect::AxisStretchMode::AXIS_STRETCH_MODE_TILE_FIT;
    _module.add("AxisStretchMode", std::move(_AxisStretchMode));
}