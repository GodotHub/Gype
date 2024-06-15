#include <godot_cpp/classes/editor_node3d_gizmo_plugin.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/variant/plane.hpp>
#include <godot_cpp/variant/transform3d.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <godot_cpp/classes/camera3d.hpp>
#include <godot_cpp/classes/editor_node3d_gizmo.hpp>
#include <godot_cpp/classes/node3d.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/standard_material3d.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/variant/packed_int32_array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_EditorNode3DGizmoPlugin() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<EditorNode3DGizmoPlugin>("EditorNode3DGizmoPlugin")
            .constructor<>()
            .base<Resource>()
            .fun<static_cast<bool(EditorNode3DGizmoPlugin::*)(Node3D *)const>(&EditorNode3DGizmoPlugin::_has_gizmo)>("_has_gizmo")
            .fun<static_cast<Ref<EditorNode3DGizmo>(EditorNode3DGizmoPlugin::*)(Node3D *)const>(&EditorNode3DGizmoPlugin::_create_gizmo)>("_create_gizmo")
            .fun<static_cast<String(EditorNode3DGizmoPlugin::*)()const>(&EditorNode3DGizmoPlugin::_get_gizmo_name)>("_get_gizmo_name")
            .fun<static_cast<int32_t(EditorNode3DGizmoPlugin::*)()const>(&EditorNode3DGizmoPlugin::_get_priority)>("_get_priority")
            .fun<static_cast<bool(EditorNode3DGizmoPlugin::*)()const>(&EditorNode3DGizmoPlugin::_can_be_hidden)>("_can_be_hidden")
            .fun<static_cast<bool(EditorNode3DGizmoPlugin::*)()const>(&EditorNode3DGizmoPlugin::_is_selectable_when_hidden)>("_is_selectable_when_hidden")
            .fun<static_cast<void(EditorNode3DGizmoPlugin::*)(const Ref<EditorNode3DGizmo> &)>(&EditorNode3DGizmoPlugin::_redraw)>("_redraw")
            .fun<static_cast<String(EditorNode3DGizmoPlugin::*)(const Ref<EditorNode3DGizmo> &,int32_t,bool)const>(&EditorNode3DGizmoPlugin::_get_handle_name)>("_get_handle_name")
            .fun<static_cast<bool(EditorNode3DGizmoPlugin::*)(const Ref<EditorNode3DGizmo> &,int32_t,bool)const>(&EditorNode3DGizmoPlugin::_is_handle_highlighted)>("_is_handle_highlighted")
            .fun<static_cast<Variant(EditorNode3DGizmoPlugin::*)(const Ref<EditorNode3DGizmo> &,int32_t,bool)const>(&EditorNode3DGizmoPlugin::_get_handle_value)>("_get_handle_value")
            .fun<static_cast<void(EditorNode3DGizmoPlugin::*)(const Ref<EditorNode3DGizmo> &,int32_t,bool)>(&EditorNode3DGizmoPlugin::_begin_handle_action)>("_begin_handle_action")
            .fun<static_cast<void(EditorNode3DGizmoPlugin::*)(const Ref<EditorNode3DGizmo> &,int32_t,bool,Camera3D *,const Vector2 &)>(&EditorNode3DGizmoPlugin::_set_handle)>("_set_handle")
            .fun<static_cast<void(EditorNode3DGizmoPlugin::*)(const Ref<EditorNode3DGizmo> &,int32_t,bool,const Variant &,bool)>(&EditorNode3DGizmoPlugin::_commit_handle)>("_commit_handle")
            .fun<static_cast<int32_t(EditorNode3DGizmoPlugin::*)(const Ref<EditorNode3DGizmo> &,Camera3D *,const Vector2 &)const>(&EditorNode3DGizmoPlugin::_subgizmos_intersect_ray)>("_subgizmos_intersect_ray")
            .fun<static_cast<PackedInt32Array(EditorNode3DGizmoPlugin::*)(const Ref<EditorNode3DGizmo> &,Camera3D *,const TypedArray<Plane> &)const>(&EditorNode3DGizmoPlugin::_subgizmos_intersect_frustum)>("_subgizmos_intersect_frustum")
            .fun<static_cast<Transform3D(EditorNode3DGizmoPlugin::*)(const Ref<EditorNode3DGizmo> &,int32_t)const>(&EditorNode3DGizmoPlugin::_get_subgizmo_transform)>("_get_subgizmo_transform")
            .fun<static_cast<void(EditorNode3DGizmoPlugin::*)(const Ref<EditorNode3DGizmo> &,int32_t,const Transform3D &)>(&EditorNode3DGizmoPlugin::_set_subgizmo_transform)>("_set_subgizmo_transform")
            .fun<static_cast<void(EditorNode3DGizmoPlugin::*)(const Ref<EditorNode3DGizmo> &,const PackedInt32Array &,const TypedArray<Transform3D> &,bool)>(&EditorNode3DGizmoPlugin::_commit_subgizmos)>("_commit_subgizmos")
            .fun<static_cast<void(EditorNode3DGizmoPlugin::*)(const String &,const Color &,bool,bool,bool)>(&EditorNode3DGizmoPlugin::create_material)>("create_material")
            .fun<static_cast<void(EditorNode3DGizmoPlugin::*)(const String &,const Ref<Texture2D> &,bool,const Color &)>(&EditorNode3DGizmoPlugin::create_icon_material)>("create_icon_material")
            .fun<static_cast<void(EditorNode3DGizmoPlugin::*)(const String &,bool,const Ref<Texture2D> &)>(&EditorNode3DGizmoPlugin::create_handle_material)>("create_handle_material")
            .fun<static_cast<void(EditorNode3DGizmoPlugin::*)(const String &,const Ref<StandardMaterial3D> &)>(&EditorNode3DGizmoPlugin::add_material)>("add_material")
            .fun<static_cast<Ref<StandardMaterial3D>(EditorNode3DGizmoPlugin::*)(const String &,const Ref<EditorNode3DGizmo> &)>(&EditorNode3DGizmoPlugin::get_material)>("get_material")
;}