#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/node3d.hpp>

using namespace godot;

void register_classes_Node3D() {
    qjs::Context::Module &_module = _Node3D;
    _module.class_<Node3D>("Node3D")
           .constructor<>()
           .property<Node3D::get_transform, Node3D::set_transform>("transform")
           .property<Node3D::get_global_transform, Node3D::set_global_transform>("global_transform")
           .property<Node3D::get_position, Node3D::set_position>("position")
           .property<Node3D::get_rotation, Node3D::set_rotation>("rotation")
           .property<Node3D::get_rotation_degrees, Node3D::set_rotation_degrees>("rotation_degrees")
           .property<Node3D::get_quaternion, Node3D::set_quaternion>("quaternion")
           .property<Node3D::get_basis, Node3D::set_basis>("basis")
           .property<Node3D::get_scale, Node3D::set_scale>("scale")
           .property<Node3D::get_rotation_edit_mode, Node3D::set_rotation_edit_mode>("rotation_edit_mode")
           .property<Node3D::get_rotation_order, Node3D::set_rotation_order>("rotation_order")
           .property<Node3D::is_set_as_top_level, Node3D::set_as_top_level>("top_level")
           .property<Node3D::get_global_position, Node3D::set_global_position>("global_position")
           .property<Node3D::get_global_basis, Node3D::set_global_basis>("global_basis")
           .property<Node3D::get_global_rotation, Node3D::set_global_rotation>("global_rotation")
           .property<Node3D::get_global_rotation_degrees, Node3D::set_global_rotation_degrees>("global_rotation_degrees")
           .property<Node3D::is_visible, Node3D::set_visible>("visible")
           .property<Node3D::get_visibility_parent, Node3D::set_visibility_parent>("visibility_parent")
		    .fun<static_cast<Node3D *(Node3D::*)()const>(&Node3D::get_parent_node_3d)>("get_parent_node_3d")
		    .fun<static_cast<void(Node3D::*)(bool)>(&Node3D::set_ignore_transform_notification)>("set_ignore_transform_notification")
		    .fun<static_cast<void(Node3D::*)(bool)>(&Node3D::set_disable_scale)>("set_disable_scale")
		    .fun<static_cast<bool(Node3D::*)()const>(&Node3D::is_scale_disabled)>("is_scale_disabled")
		    .fun<static_cast<Ref<World3D>(Node3D::*)()const>(&Node3D::get_world_3d)>("get_world_3d")
		    .fun<static_cast<void(Node3D::*)()>(&Node3D::force_update_transform)>("force_update_transform")
		    .fun<static_cast<void(Node3D::*)()>(&Node3D::update_gizmos)>("update_gizmos")
		    .fun<static_cast<void(Node3D::*)(const Ref<Node3DGizmo> &)>(&Node3D::add_gizmo)>("add_gizmo")
		    .fun<static_cast<TypedArray<Node3DGizmo>(Node3D::*)()const>(&Node3D::get_gizmos)>("get_gizmos")
		    .fun<static_cast<void(Node3D::*)()>(&Node3D::clear_gizmos)>("clear_gizmos")
		    .fun<static_cast<void(Node3D::*)(const Ref<Node3DGizmo> &,int32_t,const Transform3D &)>(&Node3D::set_subgizmo_selection)>("set_subgizmo_selection")
		    .fun<static_cast<void(Node3D::*)()>(&Node3D::clear_subgizmo_selection)>("clear_subgizmo_selection")
		    .fun<static_cast<bool(Node3D::*)()const>(&Node3D::is_visible_in_tree)>("is_visible_in_tree")
		    .fun<static_cast<void(Node3D::*)()>(&Node3D::show)>("show")
		    .fun<static_cast<void(Node3D::*)()>(&Node3D::hide)>("hide")
		    .fun<static_cast<void(Node3D::*)(bool)>(&Node3D::set_notify_local_transform)>("set_notify_local_transform")
		    .fun<static_cast<bool(Node3D::*)()const>(&Node3D::is_local_transform_notification_enabled)>("is_local_transform_notification_enabled")
		    .fun<static_cast<void(Node3D::*)(bool)>(&Node3D::set_notify_transform)>("set_notify_transform")
		    .fun<static_cast<bool(Node3D::*)()const>(&Node3D::is_transform_notification_enabled)>("is_transform_notification_enabled")
		    .fun<static_cast<void(Node3D::*)(const Vector3 &,double)>(&Node3D::rotate)>("rotate")
		    .fun<static_cast<void(Node3D::*)(const Vector3 &,double)>(&Node3D::global_rotate)>("global_rotate")
		    .fun<static_cast<void(Node3D::*)(const Vector3 &)>(&Node3D::global_scale)>("global_scale")
		    .fun<static_cast<void(Node3D::*)(const Vector3 &)>(&Node3D::global_translate)>("global_translate")
		    .fun<static_cast<void(Node3D::*)(const Vector3 &,double)>(&Node3D::rotate_object_local)>("rotate_object_local")
		    .fun<static_cast<void(Node3D::*)(const Vector3 &)>(&Node3D::scale_object_local)>("scale_object_local")
		    .fun<static_cast<void(Node3D::*)(const Vector3 &)>(&Node3D::translate_object_local)>("translate_object_local")
		    .fun<static_cast<void(Node3D::*)(double)>(&Node3D::rotate_x)>("rotate_x")
		    .fun<static_cast<void(Node3D::*)(double)>(&Node3D::rotate_y)>("rotate_y")
		    .fun<static_cast<void(Node3D::*)(double)>(&Node3D::rotate_z)>("rotate_z")
		    .fun<static_cast<void(Node3D::*)(const Vector3 &)>(&Node3D::translate)>("translate")
		    .fun<static_cast<void(Node3D::*)()>(&Node3D::orthonormalize)>("orthonormalize")
		    .fun<static_cast<void(Node3D::*)()>(&Node3D::set_identity)>("set_identity")
		    .fun<static_cast<void(Node3D::*)(const Vector3 &,const Vector3 &,bool)>(&Node3D::look_at)>("look_at")
		    .fun<static_cast<void(Node3D::*)(const Vector3 &,const Vector3 &,const Vector3 &,bool)>(&Node3D::look_at_from_position)>("look_at_from_position")
		    .fun<static_cast<Vector3(Node3D::*)(const Vector3 &)const>(&Node3D::to_local)>("to_local")
		    .fun<static_cast<Vector3(Node3D::*)(const Vector3 &)const>(&Node3D::to_global)>("to_global")
;}