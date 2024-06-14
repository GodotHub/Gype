
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/node3d.hpp>
#include <godot_cpp/classes/node3d_gizmo.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/world3d.hpp>
#include <godot_cpp/variant/basis.hpp>
#include <godot_cpp/variant/node_path.hpp>
#include <godot_cpp/variant/quaternion.hpp>
#include <godot_cpp/variant/transform3d.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/variant/vector3.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_Node3D() {
	qjs::Context::Module &_module = get_Node3D_module();
	_module.class_<Node3D>("Node3D")
			.constructor<>()
			.base<Node>()
			.static_fun<&Node3D::NOTIFICATION_TRANSFORM_CHANGED>((new std::string("NOTIFICATION_TRANSFORM_CHANGED"))->c_str())
			.static_fun<&Node3D::NOTIFICATION_ENTER_WORLD>((new std::string("NOTIFICATION_ENTER_WORLD"))->c_str())
			.static_fun<&Node3D::NOTIFICATION_EXIT_WORLD>((new std::string("NOTIFICATION_EXIT_WORLD"))->c_str())
			.static_fun<&Node3D::NOTIFICATION_VISIBILITY_CHANGED>((new std::string("NOTIFICATION_VISIBILITY_CHANGED"))->c_str())
			.static_fun<&Node3D::NOTIFICATION_LOCAL_TRANSFORM_CHANGED>((new std::string("NOTIFICATION_LOCAL_TRANSFORM_CHANGED"))->c_str())
			.property<static_cast<Transform3D (Node3D::*)() const>(&Node3D::get_transform), static_cast<void (Node3D::*)(const Transform3D &)>(&Node3D::set_transform)>((new std::string("transform"))->c_str())
			.property<static_cast<Transform3D (Node3D::*)() const>(&Node3D::get_global_transform), static_cast<void (Node3D::*)(const Transform3D &)>(&Node3D::set_global_transform)>((new std::string("global_transform"))->c_str())
			.property<static_cast<Vector3 (Node3D::*)() const>(&Node3D::get_position), static_cast<void (Node3D::*)(const Vector3 &)>(&Node3D::set_position)>((new std::string("position"))->c_str())
			.property<static_cast<Vector3 (Node3D::*)() const>(&Node3D::get_rotation), static_cast<void (Node3D::*)(const Vector3 &)>(&Node3D::set_rotation)>((new std::string("rotation"))->c_str())
			.property<static_cast<Vector3 (Node3D::*)() const>(&Node3D::get_rotation_degrees), static_cast<void (Node3D::*)(const Vector3 &)>(&Node3D::set_rotation_degrees)>((new std::string("rotation_degrees"))->c_str())
			.property<static_cast<Quaternion (Node3D::*)() const>(&Node3D::get_quaternion), static_cast<void (Node3D::*)(const Quaternion &)>(&Node3D::set_quaternion)>((new std::string("quaternion"))->c_str())
			.property<static_cast<Basis (Node3D::*)() const>(&Node3D::get_basis), static_cast<void (Node3D::*)(const Basis &)>(&Node3D::set_basis)>((new std::string("basis"))->c_str())
			.property<static_cast<Vector3 (Node3D::*)() const>(&Node3D::get_scale), static_cast<void (Node3D::*)(const Vector3 &)>(&Node3D::set_scale)>((new std::string("scale"))->c_str())
			.property<static_cast<Node3D::RotationEditMode (Node3D::*)() const>(&Node3D::get_rotation_edit_mode), static_cast<void (Node3D::*)(Node3D::RotationEditMode)>(&Node3D::set_rotation_edit_mode)>((new std::string("rotation_edit_mode"))->c_str())
			.property<static_cast<EulerOrder (Node3D::*)() const>(&Node3D::get_rotation_order), static_cast<void (Node3D::*)(EulerOrder)>(&Node3D::set_rotation_order)>((new std::string("rotation_order"))->c_str())
			.property<static_cast<bool (Node3D::*)() const>(&Node3D::is_set_as_top_level), static_cast<void (Node3D::*)(bool)>(&Node3D::set_as_top_level)>((new std::string("top_level"))->c_str())
			.property<static_cast<Vector3 (Node3D::*)() const>(&Node3D::get_global_position), static_cast<void (Node3D::*)(const Vector3 &)>(&Node3D::set_global_position)>((new std::string("global_position"))->c_str())
			.property<static_cast<Basis (Node3D::*)() const>(&Node3D::get_global_basis), static_cast<void (Node3D::*)(const Basis &)>(&Node3D::set_global_basis)>((new std::string("global_basis"))->c_str())
			.property<static_cast<Vector3 (Node3D::*)() const>(&Node3D::get_global_rotation), static_cast<void (Node3D::*)(const Vector3 &)>(&Node3D::set_global_rotation)>((new std::string("global_rotation"))->c_str())
			.property<static_cast<Vector3 (Node3D::*)() const>(&Node3D::get_global_rotation_degrees), static_cast<void (Node3D::*)(const Vector3 &)>(&Node3D::set_global_rotation_degrees)>((new std::string("global_rotation_degrees"))->c_str())
			.property<static_cast<bool (Node3D::*)() const>(&Node3D::is_visible), static_cast<void (Node3D::*)(bool)>(&Node3D::set_visible)>((new std::string("visible"))->c_str())
			.property<static_cast<NodePath (Node3D::*)() const>(&Node3D::get_visibility_parent), static_cast<void (Node3D::*)(const NodePath &)>(&Node3D::set_visibility_parent)>((new std::string("visibility_parent"))->c_str())
			.fun<static_cast<Node3D *(Node3D::*)() const>(&Node3D::get_parent_node_3d)>((new std::string("get_parent_node_3d"))->c_str())
			.fun<static_cast<void (Node3D::*)(bool)>(&Node3D::set_ignore_transform_notification)>((new std::string("set_ignore_transform_notification"))->c_str())
			.fun<static_cast<void (Node3D::*)(bool)>(&Node3D::set_disable_scale)>((new std::string("set_disable_scale"))->c_str())
			.fun<static_cast<bool (Node3D::*)() const>(&Node3D::is_scale_disabled)>((new std::string("is_scale_disabled"))->c_str())
			.fun<static_cast<Ref<World3D> (Node3D::*)() const>(&Node3D::get_world_3d)>((new std::string("get_world_3d"))->c_str())
			.fun<static_cast<void (Node3D::*)()>(&Node3D::force_update_transform)>((new std::string("force_update_transform"))->c_str())
			.fun<static_cast<void (Node3D::*)()>(&Node3D::update_gizmos)>((new std::string("update_gizmos"))->c_str())
			.fun<static_cast<void (Node3D::*)(const Ref<Node3DGizmo> &)>(&Node3D::add_gizmo)>((new std::string("add_gizmo"))->c_str())
			.fun<static_cast<TypedArray<Node3DGizmo> (Node3D::*)() const>(&Node3D::get_gizmos)>((new std::string("get_gizmos"))->c_str())
			.fun<static_cast<void (Node3D::*)()>(&Node3D::clear_gizmos)>((new std::string("clear_gizmos"))->c_str())
			.fun<static_cast<void (Node3D::*)(const Ref<Node3DGizmo> &, int32_t, const Transform3D &)>(&Node3D::set_subgizmo_selection)>((new std::string("set_subgizmo_selection"))->c_str())
			.fun<static_cast<void (Node3D::*)()>(&Node3D::clear_subgizmo_selection)>((new std::string("clear_subgizmo_selection"))->c_str())
			.fun<static_cast<bool (Node3D::*)() const>(&Node3D::is_visible_in_tree)>((new std::string("is_visible_in_tree"))->c_str())
			.fun<static_cast<void (Node3D::*)()>(&Node3D::show)>((new std::string("show"))->c_str())
			.fun<static_cast<void (Node3D::*)()>(&Node3D::hide)>((new std::string("hide"))->c_str())
			.fun<static_cast<void (Node3D::*)(bool)>(&Node3D::set_notify_local_transform)>((new std::string("set_notify_local_transform"))->c_str())
			.fun<static_cast<bool (Node3D::*)() const>(&Node3D::is_local_transform_notification_enabled)>((new std::string("is_local_transform_notification_enabled"))->c_str())
			.fun<static_cast<void (Node3D::*)(bool)>(&Node3D::set_notify_transform)>((new std::string("set_notify_transform"))->c_str())
			.fun<static_cast<bool (Node3D::*)() const>(&Node3D::is_transform_notification_enabled)>((new std::string("is_transform_notification_enabled"))->c_str())
			.fun<static_cast<void (Node3D::*)(const Vector3 &, double)>(&Node3D::rotate)>((new std::string("rotate"))->c_str())
			.fun<static_cast<void (Node3D::*)(const Vector3 &, double)>(&Node3D::global_rotate)>((new std::string("global_rotate"))->c_str())
			.fun<static_cast<void (Node3D::*)(const Vector3 &)>(&Node3D::global_scale)>((new std::string("global_scale"))->c_str())
			.fun<static_cast<void (Node3D::*)(const Vector3 &)>(&Node3D::global_translate)>((new std::string("global_translate"))->c_str())
			.fun<static_cast<void (Node3D::*)(const Vector3 &, double)>(&Node3D::rotate_object_local)>((new std::string("rotate_object_local"))->c_str())
			.fun<static_cast<void (Node3D::*)(const Vector3 &)>(&Node3D::scale_object_local)>((new std::string("scale_object_local"))->c_str())
			.fun<static_cast<void (Node3D::*)(const Vector3 &)>(&Node3D::translate_object_local)>((new std::string("translate_object_local"))->c_str())
			.fun<static_cast<void (Node3D::*)(double)>(&Node3D::rotate_x)>((new std::string("rotate_x"))->c_str())
			.fun<static_cast<void (Node3D::*)(double)>(&Node3D::rotate_y)>((new std::string("rotate_y"))->c_str())
			.fun<static_cast<void (Node3D::*)(double)>(&Node3D::rotate_z)>((new std::string("rotate_z"))->c_str())
			.fun<static_cast<void (Node3D::*)(const Vector3 &)>(&Node3D::translate)>((new std::string("translate"))->c_str())
			.fun<static_cast<void (Node3D::*)()>(&Node3D::orthonormalize)>((new std::string("orthonormalize"))->c_str())
			.fun<static_cast<void (Node3D::*)()>(&Node3D::set_identity)>((new std::string("set_identity"))->c_str())
			.fun<static_cast<void (Node3D::*)(const Vector3 &, const Vector3 &, bool)>(&Node3D::look_at)>((new std::string("look_at"))->c_str())
			.fun<static_cast<void (Node3D::*)(const Vector3 &, const Vector3 &, const Vector3 &, bool)>(&Node3D::look_at_from_position)>((new std::string("look_at_from_position"))->c_str())
			.fun<static_cast<Vector3 (Node3D::*)(const Vector3 &) const>(&Node3D::to_local)>((new std::string("to_local"))->c_str())
			.fun<static_cast<Vector3 (Node3D::*)(const Vector3 &) const>(&Node3D::to_global)>((new std::string("to_global"))->c_str());
	qjs::Value _RotationEditMode = context->newObject();
	_RotationEditMode[(new std::string("ROTATION_EDIT_MODE_EULER"))->c_str()] = Node3D::RotationEditMode::ROTATION_EDIT_MODE_EULER;
	_RotationEditMode[(new std::string("ROTATION_EDIT_MODE_QUATERNION"))->c_str()] = Node3D::RotationEditMode::ROTATION_EDIT_MODE_QUATERNION;
	_RotationEditMode[(new std::string("ROTATION_EDIT_MODE_BASIS"))->c_str()] = Node3D::RotationEditMode::ROTATION_EDIT_MODE_BASIS;
	_module.add("RotationEditMode", std::move(_RotationEditMode));
}