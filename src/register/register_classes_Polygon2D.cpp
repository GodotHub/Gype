#include "register/register_classes.h"
#include "register/utils.h"

using namespace godot;

void register_classes_Polygon2D() {
    qjs::Context::Module &_module = _Node2D;
    _module.class_<Polygon2D>("Polygon2D")
           .constructor<>()
           .property<Polygon2D::get_color, Polygon2D::set_color>("color")
           .property<Polygon2D::get_offset, Polygon2D::set_offset>("offset")
           .property<Polygon2D::get_antialiased, Polygon2D::set_antialiased>("antialiased")
           .property<Polygon2D::get_texture, Polygon2D::set_texture>("texture")
           .property<Polygon2D::get_texture_offset, Polygon2D::set_texture_offset>("texture_offset")
           .property<Polygon2D::get_texture_scale, Polygon2D::set_texture_scale>("texture_scale")
           .property<Polygon2D::get_texture_rotation, Polygon2D::set_texture_rotation>("texture_rotation")
           .property<Polygon2D::get_skeleton, Polygon2D::set_skeleton>("skeleton")
           .property<Polygon2D::get_invert_enabled, Polygon2D::set_invert_enabled>("invert_enabled")
           .property<Polygon2D::get_invert_border, Polygon2D::set_invert_border>("invert_border")
           .property<Polygon2D::get_polygon, Polygon2D::set_polygon>("polygon")
           .property<Polygon2D::get_uv, Polygon2D::set_uv>("uv")
           .property<Polygon2D::get_vertex_colors, Polygon2D::set_vertex_colors>("vertex_colors")
           .property<Polygon2D::get_polygons, Polygon2D::set_polygons>("polygons")
           .property<Polygon2D::_get_bones, Polygon2D::_set_bones>("bones")
           .property<Polygon2D::get_internal_vertex_count, Polygon2D::set_internal_vertex_count>("internal_vertex_count")
		   .fun<static_cast<void(Polygon2D::*)(const NodePath &,const PackedFloat32Array &)>(&Polygon2D::add_bone)>("add_bone")
		   .fun<static_cast<int32_t(Polygon2D::*)()const>(&Polygon2D::get_bone_count)>("get_bone_count")
		   .fun<static_cast<NodePath(Polygon2D::*)(int32_t)const>(&Polygon2D::get_bone_path)>("get_bone_path")
		   .fun<static_cast<PackedFloat32Array(Polygon2D::*)(int32_t)const>(&Polygon2D::get_bone_weights)>("get_bone_weights")
		   .fun<static_cast<void(Polygon2D::*)(int32_t)>(&Polygon2D::erase_bone)>("erase_bone")
		   .fun<static_cast<void(Polygon2D::*)()>(&Polygon2D::clear_bones)>("clear_bones")
		   .fun<static_cast<void(Polygon2D::*)(int32_t,const NodePath &)>(&Polygon2D::set_bone_path)>("set_bone_path")
		   .fun<static_cast<void(Polygon2D::*)(int32_t,const PackedFloat32Array &)>(&Polygon2D::set_bone_weights)>("set_bone_weights")
;}