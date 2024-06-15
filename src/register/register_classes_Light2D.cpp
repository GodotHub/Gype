#include <godot_cpp/classes/light2d.hpp>
#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/classes/node2d.hpp>
#include <stdint.h>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_Light2D() {
    qjs::Context::Module &_module = get_Node2D_module();
    _module.class_<Light2D>("Light2D")
            .constructor<>()
            .base<Node2D>()
            .property<static_cast<bool(Light2D::*)()const>(&Light2D::is_enabled),static_cast<void(Light2D::*)(bool)>(&Light2D::set_enabled)>("enabled")
            .property<static_cast<bool(Light2D::*)()const>(&Light2D::is_editor_only),static_cast<void(Light2D::*)(bool)>(&Light2D::set_editor_only)>("editor_only")
            .property<static_cast<Color(Light2D::*)()const>(&Light2D::get_color),static_cast<void(Light2D::*)(const Color &)>(&Light2D::set_color)>("color")
            .property<static_cast<double(Light2D::*)()const>(&Light2D::get_energy),static_cast<void(Light2D::*)(double)>(&Light2D::set_energy)>("energy")
            .property<static_cast<Light2D::BlendMode(Light2D::*)()const>(&Light2D::get_blend_mode),static_cast<void(Light2D::*)(Light2D::BlendMode)>(&Light2D::set_blend_mode)>("blend_mode")
            .property<static_cast<int32_t(Light2D::*)()const>(&Light2D::get_z_range_min),static_cast<void(Light2D::*)(int32_t)>(&Light2D::set_z_range_min)>("range_z_min")
            .property<static_cast<int32_t(Light2D::*)()const>(&Light2D::get_z_range_max),static_cast<void(Light2D::*)(int32_t)>(&Light2D::set_z_range_max)>("range_z_max")
            .property<static_cast<int32_t(Light2D::*)()const>(&Light2D::get_layer_range_min),static_cast<void(Light2D::*)(int32_t)>(&Light2D::set_layer_range_min)>("range_layer_min")
            .property<static_cast<int32_t(Light2D::*)()const>(&Light2D::get_layer_range_max),static_cast<void(Light2D::*)(int32_t)>(&Light2D::set_layer_range_max)>("range_layer_max")
            .property<static_cast<int32_t(Light2D::*)()const>(&Light2D::get_item_cull_mask),static_cast<void(Light2D::*)(int32_t)>(&Light2D::set_item_cull_mask)>("range_item_cull_mask")
            .property<static_cast<bool(Light2D::*)()const>(&Light2D::is_shadow_enabled),static_cast<void(Light2D::*)(bool)>(&Light2D::set_shadow_enabled)>("shadow_enabled")
            .property<static_cast<Color(Light2D::*)()const>(&Light2D::get_shadow_color),static_cast<void(Light2D::*)(const Color &)>(&Light2D::set_shadow_color)>("shadow_color")
            .property<static_cast<Light2D::ShadowFilter(Light2D::*)()const>(&Light2D::get_shadow_filter),static_cast<void(Light2D::*)(Light2D::ShadowFilter)>(&Light2D::set_shadow_filter)>("shadow_filter")
            .property<static_cast<double(Light2D::*)()const>(&Light2D::get_shadow_smooth),static_cast<void(Light2D::*)(double)>(&Light2D::set_shadow_smooth)>("shadow_filter_smooth")
            .property<static_cast<int32_t(Light2D::*)()const>(&Light2D::get_item_shadow_cull_mask),static_cast<void(Light2D::*)(int32_t)>(&Light2D::set_item_shadow_cull_mask)>("shadow_item_cull_mask")
            .fun<static_cast<void(Light2D::*)(double)>(&Light2D::set_height)>("set_height")
            .fun<static_cast<double(Light2D::*)()const>(&Light2D::get_height)>("get_height")
;    qjs::Value _ShadowFilter = context->newObject();
    _ShadowFilter["SHADOW_FILTER_NONE"] = Light2D::ShadowFilter::SHADOW_FILTER_NONE;
    _ShadowFilter["SHADOW_FILTER_PCF5"] = Light2D::ShadowFilter::SHADOW_FILTER_PCF5;
    _ShadowFilter["SHADOW_FILTER_PCF13"] = Light2D::ShadowFilter::SHADOW_FILTER_PCF13;
    _module.add("ShadowFilter", std::move(_ShadowFilter));
    qjs::Value _BlendMode = context->newObject();
    _BlendMode["BLEND_MODE_ADD"] = Light2D::BlendMode::BLEND_MODE_ADD;
    _BlendMode["BLEND_MODE_SUB"] = Light2D::BlendMode::BLEND_MODE_SUB;
    _BlendMode["BLEND_MODE_MIX"] = Light2D::BlendMode::BLEND_MODE_MIX;
    _module.add("BlendMode", std::move(_BlendMode));
}