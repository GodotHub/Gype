#include "register/register_classes.h"
#include "register/utils.h"

using namespace godot;

void register_classes_GeometryInstance3D() {
    qjs::Context::Module &_module = _Node3D;
    _module.class_<GeometryInstance3D>("GeometryInstance3D")
           .constructor<>()
           .property<GeometryInstance3D::get_material_override, GeometryInstance3D::set_material_override>("material_override")
           .property<GeometryInstance3D::get_material_overlay, GeometryInstance3D::set_material_overlay>("material_overlay")
           .property<GeometryInstance3D::get_transparency, GeometryInstance3D::set_transparency>("transparency")
           .property<GeometryInstance3D::get_cast_shadows_setting, GeometryInstance3D::set_cast_shadows_setting>("cast_shadow")
           .property<GeometryInstance3D::get_extra_cull_margin, GeometryInstance3D::set_extra_cull_margin>("extra_cull_margin")
           .property<GeometryInstance3D::get_custom_aabb, GeometryInstance3D::set_custom_aabb>("custom_aabb")
           .property<GeometryInstance3D::get_lod_bias, GeometryInstance3D::set_lod_bias>("lod_bias")
           .property<GeometryInstance3D::is_ignoring_occlusion_culling, GeometryInstance3D::set_ignore_occlusion_culling>("ignore_occlusion_culling")
           .property<GeometryInstance3D::get_gi_mode, GeometryInstance3D::set_gi_mode>("gi_mode")
           .property<GeometryInstance3D::get_lightmap_scale, GeometryInstance3D::set_lightmap_scale>("gi_lightmap_scale")
           .property<GeometryInstance3D::get_visibility_range_begin, GeometryInstance3D::set_visibility_range_begin>("visibility_range_begin")
           .property<GeometryInstance3D::get_visibility_range_begin_margin, GeometryInstance3D::set_visibility_range_begin_margin>("visibility_range_begin_margin")
           .property<GeometryInstance3D::get_visibility_range_end, GeometryInstance3D::set_visibility_range_end>("visibility_range_end")
           .property<GeometryInstance3D::get_visibility_range_end_margin, GeometryInstance3D::set_visibility_range_end_margin>("visibility_range_end_margin")
           .property<GeometryInstance3D::get_visibility_range_fade_mode, GeometryInstance3D::set_visibility_range_fade_mode>("visibility_range_fade_mode")
		   .fun<static_cast<void(GeometryInstance3D::*)(const StringName &,const Variant &)>(&GeometryInstance3D::set_instance_shader_parameter)>("set_instance_shader_parameter")
		   .fun<static_cast<Variant(GeometryInstance3D::*)(const StringName &)const>(&GeometryInstance3D::get_instance_shader_parameter)>("get_instance_shader_parameter")
;}