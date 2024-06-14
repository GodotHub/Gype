
#include <godot_cpp/classes/camera3d.hpp>
#include <godot_cpp/classes/editor_node3d_gizmo.hpp>
#include <godot_cpp/classes/editor_node3d_gizmo_plugin.hpp>
#include <godot_cpp/classes/node3d.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/standard_material3d.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/variant/packed_int32_array.hpp>
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

void register_classes_EditorNode3DGizmoPlugin() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<EditorNode3DGizmoPlugin>("EditorNode3DGizmoPlugin")
			.constructor<>()
			.base<Resource>()
			.fun<static_cast<bool (EditorNode3DGizmoPlugin::*)(Node3D *) const>(&EditorNode3DGizmoPlugin::_has_gizmo)>((new std::string("_has_gizmo"))->c_str())
			.fun<static_cast<Ref<EditorNode3DGizmo> (EditorNode3DGizmoPlugin::*)(Node3D *) const>(&EditorNode3DGizmoPlugin::_create_gizmo)>((new std::string("_create_gizmo"))->c_str())
			.fun<static_cast<String (EditorNode3DGizmoPlugin::*)() const>(&EditorNode3DGizmoPlugin::_get_gizmo_name)>((new std::string("_get_gizmo_name"))->c_str())
			.fun<static_cast<int32_t (EditorNode3DGizmoPlugin::*)() const>(&EditorNode3DGizmoPlugin::_get_priority)>((new std::string("_get_priority"))->c_str())
			.fun<static_cast<bool (EditorNode3DGizmoPlugin::*)() const>(&EditorNode3DGizmoPlugin::_can_be_hidden)>((new std::string("_can_be_hidden"))->c_str())
			.fun<static_cast<bool (EditorNode3DGizmoPlugin::*)() const>(&EditorNode3DGizmoPlugin::_is_selectable_when_hidden)>((new std::string("_is_selectable_when_hidden"))->c_str())
			.fun<static_cast<void (EditorNode3DGizmoPlugin::*)(const Ref<EditorNode3DGizmo> &)>(&EditorNode3DGizmoPlugin::_redraw)>((new std::string("_redraw"))->c_str())
			.fun<static_cast<String (EditorNode3DGizmoPlugin::*)(const Ref<EditorNode3DGizmo> &, int32_t, bool) const>(&EditorNode3DGizmoPlugin::_get_handle_name)>((new std::string("_get_handle_name"))->c_str())
			.fun<static_cast<bool (EditorNode3DGizmoPlugin::*)(const Ref<EditorNode3DGizmo> &, int32_t, bool) const>(&EditorNode3DGizmoPlugin::_is_handle_highlighted)>((new std::string("_is_handle_highlighted"))->c_str())
			.fun<static_cast<Variant (EditorNode3DGizmoPlugin::*)(const Ref<EditorNode3DGizmo> &, int32_t, bool) const>(&EditorNode3DGizmoPlugin::_get_handle_value)>((new std::string("_get_handle_value"))->c_str())
			.fun<static_cast<void (EditorNode3DGizmoPlugin::*)(const Ref<EditorNode3DGizmo> &, int32_t, bool)>(&EditorNode3DGizmoPlugin::_begin_handle_action)>((new std::string("_begin_handle_action"))->c_str())
			.fun<static_cast<void (EditorNode3DGizmoPlugin::*)(const Ref<EditorNode3DGizmo> &, int32_t, bool, Camera3D *, const Vector2 &)>(&EditorNode3DGizmoPlugin::_set_handle)>((new std::string("_set_handle"))->c_str())
			.fun<static_cast<void (EditorNode3DGizmoPlugin::*)(const Ref<EditorNode3DGizmo> &, int32_t, bool, const Variant &, bool)>(&EditorNode3DGizmoPlugin::_commit_handle)>((new std::string("_commit_handle"))->c_str())
			.fun<static_cast<int32_t (EditorNode3DGizmoPlugin::*)(const Ref<EditorNode3DGizmo> &, Camera3D *, const Vector2 &) const>(&EditorNode3DGizmoPlugin::_subgizmos_intersect_ray)>((new std::string("_subgizmos_intersect_ray"))->c_str())
			.fun<static_cast<PackedInt32Array (EditorNode3DGizmoPlugin::*)(const Ref<EditorNode3DGizmo> &, Camera3D *, const TypedArray<Plane> &) const>(&EditorNode3DGizmoPlugin::_subgizmos_intersect_frustum)>((new std::string("_subgizmos_intersect_frustum"))->c_str())
			.fun<static_cast<Transform3D (EditorNode3DGizmoPlugin::*)(const Ref<EditorNode3DGizmo> &, int32_t) const>(&EditorNode3DGizmoPlugin::_get_subgizmo_transform)>((new std::string("_get_subgizmo_transform"))->c_str())
			.fun<static_cast<void (EditorNode3DGizmoPlugin::*)(const Ref<EditorNode3DGizmo> &, int32_t, const Transform3D &)>(&EditorNode3DGizmoPlugin::_set_subgizmo_transform)>((new std::string("_set_subgizmo_transform"))->c_str())
			.fun<static_cast<void (EditorNode3DGizmoPlugin::*)(const Ref<EditorNode3DGizmo> &, const PackedInt32Array &, const TypedArray<Transform3D> &, bool)>(&EditorNode3DGizmoPlugin::_commit_subgizmos)>((new std::string("_commit_subgizmos"))->c_str())
			.fun<static_cast<void (EditorNode3DGizmoPlugin::*)(const String &, const Color &, bool, bool, bool)>(&EditorNode3DGizmoPlugin::create_material)>((new std::string("create_material"))->c_str())
			.fun<static_cast<void (EditorNode3DGizmoPlugin::*)(const String &, const Ref<Texture2D> &, bool, const Color &)>(&EditorNode3DGizmoPlugin::create_icon_material)>((new std::string("create_icon_material"))->c_str())
			.fun<static_cast<void (EditorNode3DGizmoPlugin::*)(const String &, bool, const Ref<Texture2D> &)>(&EditorNode3DGizmoPlugin::create_handle_material)>((new std::string("create_handle_material"))->c_str())
			.fun<static_cast<void (EditorNode3DGizmoPlugin::*)(const String &, const Ref<StandardMaterial3D> &)>(&EditorNode3DGizmoPlugin::add_material)>((new std::string("add_material"))->c_str())
			.fun<static_cast<Ref<StandardMaterial3D> (EditorNode3DGizmoPlugin::*)(const String &, const Ref<EditorNode3DGizmo> &)>(&EditorNode3DGizmoPlugin::get_material)>((new std::string("get_material"))->c_str());
}