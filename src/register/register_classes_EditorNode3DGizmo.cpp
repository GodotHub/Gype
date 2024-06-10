#include <godot_cpp/classes/camera3d.hpp>
#include <godot_cpp/classes/editor_node3d_gizmo.hpp>
#include <godot_cpp/classes/editor_node3d_gizmo_plugin.hpp>
#include <godot_cpp/classes/material.hpp>
#include <godot_cpp/classes/mesh.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/node3d.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/skin_reference.hpp>
#include <godot_cpp/classes/triangle_mesh.hpp>
#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/variant/packed_int32_array.hpp>
#include <godot_cpp/variant/packed_vector3_array.hpp>
#include <godot_cpp/variant/plane.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/transform3d.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <godot_cpp/variant/vector2.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_EditorNode3DGizmo() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<EditorNode3DGizmo>("EditorNode3DGizmo")
			.constructor<>()
			.fun<static_cast<void (EditorNode3DGizmo::*)()>(&EditorNode3DGizmo::_redraw)>("_redraw")
			.fun<static_cast<String (EditorNode3DGizmo::*)(int32_t, bool) const>(&EditorNode3DGizmo::_get_handle_name)>("_get_handle_name")
			.fun<static_cast<bool (EditorNode3DGizmo::*)(int32_t, bool) const>(&EditorNode3DGizmo::_is_handle_highlighted)>("_is_handle_highlighted")
			.fun<static_cast<Variant (EditorNode3DGizmo::*)(int32_t, bool) const>(&EditorNode3DGizmo::_get_handle_value)>("_get_handle_value")
			.fun<static_cast<void (EditorNode3DGizmo::*)(int32_t, bool)>(&EditorNode3DGizmo::_begin_handle_action)>("_begin_handle_action")
			.fun<static_cast<void (EditorNode3DGizmo::*)(int32_t, bool, Camera3D *, const Vector2 &)>(&EditorNode3DGizmo::_set_handle)>("_set_handle")
			.fun<static_cast<void (EditorNode3DGizmo::*)(int32_t, bool, const Variant &, bool)>(&EditorNode3DGizmo::_commit_handle)>("_commit_handle")
			.fun<static_cast<int32_t (EditorNode3DGizmo::*)(Camera3D *, const Vector2 &) const>(&EditorNode3DGizmo::_subgizmos_intersect_ray)>("_subgizmos_intersect_ray")
			.fun<static_cast<PackedInt32Array (EditorNode3DGizmo::*)(Camera3D *, const TypedArray<Plane> &) const>(&EditorNode3DGizmo::_subgizmos_intersect_frustum)>("_subgizmos_intersect_frustum")
			.fun<static_cast<void (EditorNode3DGizmo::*)(int32_t, const Transform3D &)>(&EditorNode3DGizmo::_set_subgizmo_transform)>("_set_subgizmo_transform")
			.fun<static_cast<Transform3D (EditorNode3DGizmo::*)(int32_t) const>(&EditorNode3DGizmo::_get_subgizmo_transform)>("_get_subgizmo_transform")
			.fun<static_cast<void (EditorNode3DGizmo::*)(const PackedInt32Array &, const TypedArray<Transform3D> &, bool)>(&EditorNode3DGizmo::_commit_subgizmos)>("_commit_subgizmos")
			.fun<static_cast<void (EditorNode3DGizmo::*)(const PackedVector3Array &, const Ref<Material> &, bool, const Color &)>(&EditorNode3DGizmo::add_lines)>("add_lines")
			.fun<static_cast<void (EditorNode3DGizmo::*)(const Ref<Mesh> &, const Ref<Material> &, const Transform3D &, const Ref<SkinReference> &)>(&EditorNode3DGizmo::add_mesh)>("add_mesh")
			.fun<static_cast<void (EditorNode3DGizmo::*)(const PackedVector3Array &)>(&EditorNode3DGizmo::add_collision_segments)>("add_collision_segments")
			.fun<static_cast<void (EditorNode3DGizmo::*)(const Ref<TriangleMesh> &)>(&EditorNode3DGizmo::add_collision_triangles)>("add_collision_triangles")
			.fun<static_cast<void (EditorNode3DGizmo::*)(const Ref<Material> &, double, const Color &)>(&EditorNode3DGizmo::add_unscaled_billboard)>("add_unscaled_billboard")
			.fun<static_cast<void (EditorNode3DGizmo::*)(const PackedVector3Array &, const Ref<Material> &, const PackedInt32Array &, bool, bool)>(&EditorNode3DGizmo::add_handles)>("add_handles")
			.fun<static_cast<void (EditorNode3DGizmo::*)(Node *)>(&EditorNode3DGizmo::set_node_3d)>("set_node_3d")
			.fun<static_cast<Node3D *(EditorNode3DGizmo::*)() const>(&EditorNode3DGizmo::get_node_3d)>("get_node_3d")
			.fun<static_cast<Ref<EditorNode3DGizmoPlugin> (EditorNode3DGizmo::*)() const>(&EditorNode3DGizmo::get_plugin)>("get_plugin")
			.fun<static_cast<void (EditorNode3DGizmo::*)()>(&EditorNode3DGizmo::clear)>("clear")
			.fun<static_cast<void (EditorNode3DGizmo::*)(bool)>(&EditorNode3DGizmo::set_hidden)>("set_hidden")
			.fun<static_cast<bool (EditorNode3DGizmo::*)(int32_t) const>(&EditorNode3DGizmo::is_subgizmo_selected)>("is_subgizmo_selected")
			.fun<static_cast<PackedInt32Array (EditorNode3DGizmo::*)() const>(&EditorNode3DGizmo::get_subgizmo_selection)>("get_subgizmo_selection");
}