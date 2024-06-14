
#include <godot_cpp/classes/camera3d.hpp>
#include <godot_cpp/classes/editor_node3d_gizmo.hpp>
#include <godot_cpp/classes/editor_node3d_gizmo_plugin.hpp>
#include <godot_cpp/classes/material.hpp>
#include <godot_cpp/classes/mesh.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/node3d.hpp>
#include <godot_cpp/classes/node3d_gizmo.hpp>
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
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_EditorNode3DGizmo() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<EditorNode3DGizmo>("EditorNode3DGizmo")
			.constructor<>()
			.base<Node3DGizmo>()
			.fun<static_cast<void (EditorNode3DGizmo::*)()>(&EditorNode3DGizmo::_redraw)>((new std::string("_redraw"))->c_str())
			.fun<static_cast<String (EditorNode3DGizmo::*)(int32_t, bool) const>(&EditorNode3DGizmo::_get_handle_name)>((new std::string("_get_handle_name"))->c_str())
			.fun<static_cast<bool (EditorNode3DGizmo::*)(int32_t, bool) const>(&EditorNode3DGizmo::_is_handle_highlighted)>((new std::string("_is_handle_highlighted"))->c_str())
			.fun<static_cast<Variant (EditorNode3DGizmo::*)(int32_t, bool) const>(&EditorNode3DGizmo::_get_handle_value)>((new std::string("_get_handle_value"))->c_str())
			.fun<static_cast<void (EditorNode3DGizmo::*)(int32_t, bool)>(&EditorNode3DGizmo::_begin_handle_action)>((new std::string("_begin_handle_action"))->c_str())
			.fun<static_cast<void (EditorNode3DGizmo::*)(int32_t, bool, Camera3D *, const Vector2 &)>(&EditorNode3DGizmo::_set_handle)>((new std::string("_set_handle"))->c_str())
			.fun<static_cast<void (EditorNode3DGizmo::*)(int32_t, bool, const Variant &, bool)>(&EditorNode3DGizmo::_commit_handle)>((new std::string("_commit_handle"))->c_str())
			.fun<static_cast<int32_t (EditorNode3DGizmo::*)(Camera3D *, const Vector2 &) const>(&EditorNode3DGizmo::_subgizmos_intersect_ray)>((new std::string("_subgizmos_intersect_ray"))->c_str())
			.fun<static_cast<PackedInt32Array (EditorNode3DGizmo::*)(Camera3D *, const TypedArray<Plane> &) const>(&EditorNode3DGizmo::_subgizmos_intersect_frustum)>((new std::string("_subgizmos_intersect_frustum"))->c_str())
			.fun<static_cast<void (EditorNode3DGizmo::*)(int32_t, const Transform3D &)>(&EditorNode3DGizmo::_set_subgizmo_transform)>((new std::string("_set_subgizmo_transform"))->c_str())
			.fun<static_cast<Transform3D (EditorNode3DGizmo::*)(int32_t) const>(&EditorNode3DGizmo::_get_subgizmo_transform)>((new std::string("_get_subgizmo_transform"))->c_str())
			.fun<static_cast<void (EditorNode3DGizmo::*)(const PackedInt32Array &, const TypedArray<Transform3D> &, bool)>(&EditorNode3DGizmo::_commit_subgizmos)>((new std::string("_commit_subgizmos"))->c_str())
			.fun<static_cast<void (EditorNode3DGizmo::*)(const PackedVector3Array &, const Ref<Material> &, bool, const Color &)>(&EditorNode3DGizmo::add_lines)>((new std::string("add_lines"))->c_str())
			.fun<static_cast<void (EditorNode3DGizmo::*)(const Ref<Mesh> &, const Ref<Material> &, const Transform3D &, const Ref<SkinReference> &)>(&EditorNode3DGizmo::add_mesh)>((new std::string("add_mesh"))->c_str())
			.fun<static_cast<void (EditorNode3DGizmo::*)(const PackedVector3Array &)>(&EditorNode3DGizmo::add_collision_segments)>((new std::string("add_collision_segments"))->c_str())
			.fun<static_cast<void (EditorNode3DGizmo::*)(const Ref<TriangleMesh> &)>(&EditorNode3DGizmo::add_collision_triangles)>((new std::string("add_collision_triangles"))->c_str())
			.fun<static_cast<void (EditorNode3DGizmo::*)(const Ref<Material> &, double, const Color &)>(&EditorNode3DGizmo::add_unscaled_billboard)>((new std::string("add_unscaled_billboard"))->c_str())
			.fun<static_cast<void (EditorNode3DGizmo::*)(const PackedVector3Array &, const Ref<Material> &, const PackedInt32Array &, bool, bool)>(&EditorNode3DGizmo::add_handles)>((new std::string("add_handles"))->c_str())
			.fun<static_cast<void (EditorNode3DGizmo::*)(Node *)>(&EditorNode3DGizmo::set_node_3d)>((new std::string("set_node_3d"))->c_str())
			.fun<static_cast<Node3D *(EditorNode3DGizmo::*)() const>(&EditorNode3DGizmo::get_node_3d)>((new std::string("get_node_3d"))->c_str())
			.fun<static_cast<Ref<EditorNode3DGizmoPlugin> (EditorNode3DGizmo::*)() const>(&EditorNode3DGizmo::get_plugin)>((new std::string("get_plugin"))->c_str())
			.fun<static_cast<void (EditorNode3DGizmo::*)()>(&EditorNode3DGizmo::clear)>((new std::string("clear"))->c_str())
			.fun<static_cast<void (EditorNode3DGizmo::*)(bool)>(&EditorNode3DGizmo::set_hidden)>((new std::string("set_hidden"))->c_str())
			.fun<static_cast<bool (EditorNode3DGizmo::*)(int32_t) const>(&EditorNode3DGizmo::is_subgizmo_selected)>((new std::string("is_subgizmo_selected"))->c_str())
			.fun<static_cast<PackedInt32Array (EditorNode3DGizmo::*)() const>(&EditorNode3DGizmo::get_subgizmo_selection)>((new std::string("get_subgizmo_selection"))->c_str());
}