#include <godot_cpp/classes/geometry_instance3d.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/aabb.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <godot_cpp/classes/material.hpp>
#include <godot_cpp/classes/visual_instance3d.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_GeometryInstance3D() {
    qjs::Context::Module &_module = get_Node3D_module();
    _module.class_<GeometryInstance3D>("GeometryInstance3D")
            .constructor<>()
            .base<VisualInstance3D>()
            .property<static_cast<Ref<Material>(GeometryInstance3D::*)()const>(&GeometryInstance3D::get_material_override),static_cast<void(GeometryInstance3D::*)(const Ref<Material> &)>(&GeometryInstance3D::set_material_override)>("material_override")
            .property<static_cast<Ref<Material>(GeometryInstance3D::*)()const>(&GeometryInstance3D::get_material_overlay),static_cast<void(GeometryInstance3D::*)(const Ref<Material> &)>(&GeometryInstance3D::set_material_overlay)>("material_overlay")
            .property<static_cast<double(GeometryInstance3D::*)()const>(&GeometryInstance3D::get_transparency),static_cast<void(GeometryInstance3D::*)(double)>(&GeometryInstance3D::set_transparency)>("transparency")
            .property<static_cast<GeometryInstance3D::ShadowCastingSetting(GeometryInstance3D::*)()const>(&GeometryInstance3D::get_cast_shadows_setting),static_cast<void(GeometryInstance3D::*)(GeometryInstance3D::ShadowCastingSetting)>(&GeometryInstance3D::set_cast_shadows_setting)>("cast_shadow")
            .property<static_cast<double(GeometryInstance3D::*)()const>(&GeometryInstance3D::get_extra_cull_margin),static_cast<void(GeometryInstance3D::*)(double)>(&GeometryInstance3D::set_extra_cull_margin)>("extra_cull_margin")
            .property<static_cast<AABB(GeometryInstance3D::*)()const>(&GeometryInstance3D::get_custom_aabb),static_cast<void(GeometryInstance3D::*)(const AABB &)>(&GeometryInstance3D::set_custom_aabb)>("custom_aabb")
            .property<static_cast<double(GeometryInstance3D::*)()const>(&GeometryInstance3D::get_lod_bias),static_cast<void(GeometryInstance3D::*)(double)>(&GeometryInstance3D::set_lod_bias)>("lod_bias")
            .property<static_cast<bool(GeometryInstance3D::*)()>(&GeometryInstance3D::is_ignoring_occlusion_culling),static_cast<void(GeometryInstance3D::*)(bool)>(&GeometryInstance3D::set_ignore_occlusion_culling)>("ignore_occlusion_culling")
            .property<static_cast<GeometryInstance3D::GIMode(GeometryInstance3D::*)()const>(&GeometryInstance3D::get_gi_mode),static_cast<void(GeometryInstance3D::*)(GeometryInstance3D::GIMode)>(&GeometryInstance3D::set_gi_mode)>("gi_mode")
            .property<static_cast<GeometryInstance3D::LightmapScale(GeometryInstance3D::*)()const>(&GeometryInstance3D::get_lightmap_scale),static_cast<void(GeometryInstance3D::*)(GeometryInstance3D::LightmapScale)>(&GeometryInstance3D::set_lightmap_scale)>("gi_lightmap_scale")
            .property<static_cast<double(GeometryInstance3D::*)()const>(&GeometryInstance3D::get_visibility_range_begin),static_cast<void(GeometryInstance3D::*)(double)>(&GeometryInstance3D::set_visibility_range_begin)>("visibility_range_begin")
            .property<static_cast<double(GeometryInstance3D::*)()const>(&GeometryInstance3D::get_visibility_range_begin_margin),static_cast<void(GeometryInstance3D::*)(double)>(&GeometryInstance3D::set_visibility_range_begin_margin)>("visibility_range_begin_margin")
            .property<static_cast<double(GeometryInstance3D::*)()const>(&GeometryInstance3D::get_visibility_range_end),static_cast<void(GeometryInstance3D::*)(double)>(&GeometryInstance3D::set_visibility_range_end)>("visibility_range_end")
            .property<static_cast<double(GeometryInstance3D::*)()const>(&GeometryInstance3D::get_visibility_range_end_margin),static_cast<void(GeometryInstance3D::*)(double)>(&GeometryInstance3D::set_visibility_range_end_margin)>("visibility_range_end_margin")
            .property<static_cast<GeometryInstance3D::VisibilityRangeFadeMode(GeometryInstance3D::*)()const>(&GeometryInstance3D::get_visibility_range_fade_mode),static_cast<void(GeometryInstance3D::*)(GeometryInstance3D::VisibilityRangeFadeMode)>(&GeometryInstance3D::set_visibility_range_fade_mode)>("visibility_range_fade_mode")
            .fun<static_cast<void(GeometryInstance3D::*)(const StringName &,const Variant &)>(&GeometryInstance3D::set_instance_shader_parameter)>("set_instance_shader_parameter")
            .fun<static_cast<Variant(GeometryInstance3D::*)(const StringName &)const>(&GeometryInstance3D::get_instance_shader_parameter)>("get_instance_shader_parameter")
;    qjs::Value _ShadowCastingSetting = context->newObject();
    _ShadowCastingSetting["SHADOW_CASTING_SETTING_OFF"] = GeometryInstance3D::ShadowCastingSetting::SHADOW_CASTING_SETTING_OFF;
    _ShadowCastingSetting["SHADOW_CASTING_SETTING_ON"] = GeometryInstance3D::ShadowCastingSetting::SHADOW_CASTING_SETTING_ON;
    _ShadowCastingSetting["SHADOW_CASTING_SETTING_DOUBLE_SIDED"] = GeometryInstance3D::ShadowCastingSetting::SHADOW_CASTING_SETTING_DOUBLE_SIDED;
    _ShadowCastingSetting["SHADOW_CASTING_SETTING_SHADOWS_ONLY"] = GeometryInstance3D::ShadowCastingSetting::SHADOW_CASTING_SETTING_SHADOWS_ONLY;
    _module.add("ShadowCastingSetting", std::move(_ShadowCastingSetting));
    qjs::Value _GIMode = context->newObject();
    _GIMode["GI_MODE_DISABLED"] = GeometryInstance3D::GIMode::GI_MODE_DISABLED;
    _GIMode["GI_MODE_STATIC"] = GeometryInstance3D::GIMode::GI_MODE_STATIC;
    _GIMode["GI_MODE_DYNAMIC"] = GeometryInstance3D::GIMode::GI_MODE_DYNAMIC;
    _module.add("GIMode", std::move(_GIMode));
    qjs::Value _LightmapScale = context->newObject();
    _LightmapScale["LIGHTMAP_SCALE_1X"] = GeometryInstance3D::LightmapScale::LIGHTMAP_SCALE_1X;
    _LightmapScale["LIGHTMAP_SCALE_2X"] = GeometryInstance3D::LightmapScale::LIGHTMAP_SCALE_2X;
    _LightmapScale["LIGHTMAP_SCALE_4X"] = GeometryInstance3D::LightmapScale::LIGHTMAP_SCALE_4X;
    _LightmapScale["LIGHTMAP_SCALE_8X"] = GeometryInstance3D::LightmapScale::LIGHTMAP_SCALE_8X;
    _LightmapScale["LIGHTMAP_SCALE_MAX"] = GeometryInstance3D::LightmapScale::LIGHTMAP_SCALE_MAX;
    _module.add("LightmapScale", std::move(_LightmapScale));
    qjs::Value _VisibilityRangeFadeMode = context->newObject();
    _VisibilityRangeFadeMode["VISIBILITY_RANGE_FADE_DISABLED"] = GeometryInstance3D::VisibilityRangeFadeMode::VISIBILITY_RANGE_FADE_DISABLED;
    _VisibilityRangeFadeMode["VISIBILITY_RANGE_FADE_SELF"] = GeometryInstance3D::VisibilityRangeFadeMode::VISIBILITY_RANGE_FADE_SELF;
    _VisibilityRangeFadeMode["VISIBILITY_RANGE_FADE_DEPENDENCIES"] = GeometryInstance3D::VisibilityRangeFadeMode::VISIBILITY_RANGE_FADE_DEPENDENCIES;
    _module.add("VisibilityRangeFadeMode", std::move(_VisibilityRangeFadeMode));
}