#include <godot_cpp/classes/geometry_instance3d.hpp>
#include <godot_cpp/classes/material.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/visual_instance3d.hpp>
#include <godot_cpp/variant/aabb.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_GeometryInstance3D() {
	qjs::Context::Module &_module = get_Node3D_module();
	_module.class_<GeometryInstance3D>("GeometryInstance3D")
			.constructor<>()
			.base<VisualInstance3D>()
			.property<static_cast<Ref<Material> (GeometryInstance3D::*)() const>(&GeometryInstance3D::get_material_override), static_cast<void (GeometryInstance3D::*)(const Ref<Material> &)>(&GeometryInstance3D::set_material_override)>((new std::string("material_override"))->c_str())
			.property<static_cast<Ref<Material> (GeometryInstance3D::*)() const>(&GeometryInstance3D::get_material_overlay), static_cast<void (GeometryInstance3D::*)(const Ref<Material> &)>(&GeometryInstance3D::set_material_overlay)>((new std::string("material_overlay"))->c_str())
			.property<static_cast<double (GeometryInstance3D::*)() const>(&GeometryInstance3D::get_transparency), static_cast<void (GeometryInstance3D::*)(double)>(&GeometryInstance3D::set_transparency)>((new std::string("transparency"))->c_str())
			.property<static_cast<GeometryInstance3D::ShadowCastingSetting (GeometryInstance3D::*)() const>(&GeometryInstance3D::get_cast_shadows_setting), static_cast<void (GeometryInstance3D::*)(GeometryInstance3D::ShadowCastingSetting)>(&GeometryInstance3D::set_cast_shadows_setting)>((new std::string("cast_shadow"))->c_str())
			.property<static_cast<double (GeometryInstance3D::*)() const>(&GeometryInstance3D::get_extra_cull_margin), static_cast<void (GeometryInstance3D::*)(double)>(&GeometryInstance3D::set_extra_cull_margin)>((new std::string("extra_cull_margin"))->c_str())
			.property<static_cast<AABB (GeometryInstance3D::*)() const>(&GeometryInstance3D::get_custom_aabb), static_cast<void (GeometryInstance3D::*)(const AABB &)>(&GeometryInstance3D::set_custom_aabb)>((new std::string("custom_aabb"))->c_str())
			.property<static_cast<double (GeometryInstance3D::*)() const>(&GeometryInstance3D::get_lod_bias), static_cast<void (GeometryInstance3D::*)(double)>(&GeometryInstance3D::set_lod_bias)>((new std::string("lod_bias"))->c_str())
			.property<static_cast<bool (GeometryInstance3D::*)()>(&GeometryInstance3D::is_ignoring_occlusion_culling), static_cast<void (GeometryInstance3D::*)(bool)>(&GeometryInstance3D::set_ignore_occlusion_culling)>((new std::string("ignore_occlusion_culling"))->c_str())
			.property<static_cast<GeometryInstance3D::GIMode (GeometryInstance3D::*)() const>(&GeometryInstance3D::get_gi_mode), static_cast<void (GeometryInstance3D::*)(GeometryInstance3D::GIMode)>(&GeometryInstance3D::set_gi_mode)>((new std::string("gi_mode"))->c_str())
			.property<static_cast<GeometryInstance3D::LightmapScale (GeometryInstance3D::*)() const>(&GeometryInstance3D::get_lightmap_scale), static_cast<void (GeometryInstance3D::*)(GeometryInstance3D::LightmapScale)>(&GeometryInstance3D::set_lightmap_scale)>((new std::string("gi_lightmap_scale"))->c_str())
			.property<static_cast<double (GeometryInstance3D::*)() const>(&GeometryInstance3D::get_visibility_range_begin), static_cast<void (GeometryInstance3D::*)(double)>(&GeometryInstance3D::set_visibility_range_begin)>((new std::string("visibility_range_begin"))->c_str())
			.property<static_cast<double (GeometryInstance3D::*)() const>(&GeometryInstance3D::get_visibility_range_begin_margin), static_cast<void (GeometryInstance3D::*)(double)>(&GeometryInstance3D::set_visibility_range_begin_margin)>((new std::string("visibility_range_begin_margin"))->c_str())
			.property<static_cast<double (GeometryInstance3D::*)() const>(&GeometryInstance3D::get_visibility_range_end), static_cast<void (GeometryInstance3D::*)(double)>(&GeometryInstance3D::set_visibility_range_end)>((new std::string("visibility_range_end"))->c_str())
			.property<static_cast<double (GeometryInstance3D::*)() const>(&GeometryInstance3D::get_visibility_range_end_margin), static_cast<void (GeometryInstance3D::*)(double)>(&GeometryInstance3D::set_visibility_range_end_margin)>((new std::string("visibility_range_end_margin"))->c_str())
			.property<static_cast<GeometryInstance3D::VisibilityRangeFadeMode (GeometryInstance3D::*)() const>(&GeometryInstance3D::get_visibility_range_fade_mode), static_cast<void (GeometryInstance3D::*)(GeometryInstance3D::VisibilityRangeFadeMode)>(&GeometryInstance3D::set_visibility_range_fade_mode)>((new std::string("visibility_range_fade_mode"))->c_str())
			.fun<static_cast<void (GeometryInstance3D::*)(const StringName &, const Variant &)>(&GeometryInstance3D::set_instance_shader_parameter)>((new std::string("set_instance_shader_parameter"))->c_str())
			.fun<static_cast<Variant (GeometryInstance3D::*)(const StringName &) const>(&GeometryInstance3D::get_instance_shader_parameter)>((new std::string("get_instance_shader_parameter"))->c_str());
	qjs::Value _ShadowCastingSetting = context->newObject();
	_ShadowCastingSetting[(new std::string("SHADOW_CASTING_SETTING_OFF"))->c_str()] = GeometryInstance3D::ShadowCastingSetting::SHADOW_CASTING_SETTING_OFF;
	_ShadowCastingSetting[(new std::string("SHADOW_CASTING_SETTING_ON"))->c_str()] = GeometryInstance3D::ShadowCastingSetting::SHADOW_CASTING_SETTING_ON;
	_ShadowCastingSetting[(new std::string("SHADOW_CASTING_SETTING_DOUBLE_SIDED"))->c_str()] = GeometryInstance3D::ShadowCastingSetting::SHADOW_CASTING_SETTING_DOUBLE_SIDED;
	_ShadowCastingSetting[(new std::string("SHADOW_CASTING_SETTING_SHADOWS_ONLY"))->c_str()] = GeometryInstance3D::ShadowCastingSetting::SHADOW_CASTING_SETTING_SHADOWS_ONLY;
	_module.add("ShadowCastingSetting", std::move(_ShadowCastingSetting));
	qjs::Value _GIMode = context->newObject();
	_GIMode[(new std::string("GI_MODE_DISABLED"))->c_str()] = GeometryInstance3D::GIMode::GI_MODE_DISABLED;
	_GIMode[(new std::string("GI_MODE_STATIC"))->c_str()] = GeometryInstance3D::GIMode::GI_MODE_STATIC;
	_GIMode[(new std::string("GI_MODE_DYNAMIC"))->c_str()] = GeometryInstance3D::GIMode::GI_MODE_DYNAMIC;
	_module.add("GIMode", std::move(_GIMode));
	qjs::Value _LightmapScale = context->newObject();
	_LightmapScale[(new std::string("LIGHTMAP_SCALE_1X"))->c_str()] = GeometryInstance3D::LightmapScale::LIGHTMAP_SCALE_1X;
	_LightmapScale[(new std::string("LIGHTMAP_SCALE_2X"))->c_str()] = GeometryInstance3D::LightmapScale::LIGHTMAP_SCALE_2X;
	_LightmapScale[(new std::string("LIGHTMAP_SCALE_4X"))->c_str()] = GeometryInstance3D::LightmapScale::LIGHTMAP_SCALE_4X;
	_LightmapScale[(new std::string("LIGHTMAP_SCALE_8X"))->c_str()] = GeometryInstance3D::LightmapScale::LIGHTMAP_SCALE_8X;
	_LightmapScale[(new std::string("LIGHTMAP_SCALE_MAX"))->c_str()] = GeometryInstance3D::LightmapScale::LIGHTMAP_SCALE_MAX;
	_module.add("LightmapScale", std::move(_LightmapScale));
	qjs::Value _VisibilityRangeFadeMode = context->newObject();
	_VisibilityRangeFadeMode[(new std::string("VISIBILITY_RANGE_FADE_DISABLED"))->c_str()] = GeometryInstance3D::VisibilityRangeFadeMode::VISIBILITY_RANGE_FADE_DISABLED;
	_VisibilityRangeFadeMode[(new std::string("VISIBILITY_RANGE_FADE_SELF"))->c_str()] = GeometryInstance3D::VisibilityRangeFadeMode::VISIBILITY_RANGE_FADE_SELF;
	_VisibilityRangeFadeMode[(new std::string("VISIBILITY_RANGE_FADE_DEPENDENCIES"))->c_str()] = GeometryInstance3D::VisibilityRangeFadeMode::VISIBILITY_RANGE_FADE_DEPENDENCIES;
	_module.add("VisibilityRangeFadeMode", std::move(_VisibilityRangeFadeMode));
}