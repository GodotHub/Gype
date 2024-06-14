
#include <godot_cpp/classes/camera3d.hpp>
#include <godot_cpp/classes/collision_object3d.hpp>
#include <godot_cpp/classes/input_event.hpp>
#include <godot_cpp/classes/node3d.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/shape3d.hpp>
#include <godot_cpp/variant/packed_int32_array.hpp>
#include <godot_cpp/variant/rid.hpp>
#include <godot_cpp/variant/transform3d.hpp>
#include <godot_cpp/variant/vector3.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_CollisionObject3D() {
	qjs::Context::Module &_module = get_Node3D_module();
	_module.class_<CollisionObject3D>("CollisionObject3D")
			.constructor<>()
			.base<Node3D>()
			.property<static_cast<CollisionObject3D::DisableMode (CollisionObject3D::*)() const>(&CollisionObject3D::get_disable_mode), static_cast<void (CollisionObject3D::*)(CollisionObject3D::DisableMode)>(&CollisionObject3D::set_disable_mode)>((new std::string("disable_mode"))->c_str())
			.property<static_cast<uint32_t (CollisionObject3D::*)() const>(&CollisionObject3D::get_collision_layer), static_cast<void (CollisionObject3D::*)(uint32_t)>(&CollisionObject3D::set_collision_layer)>((new std::string("collision_layer"))->c_str())
			.property<static_cast<uint32_t (CollisionObject3D::*)() const>(&CollisionObject3D::get_collision_mask), static_cast<void (CollisionObject3D::*)(uint32_t)>(&CollisionObject3D::set_collision_mask)>((new std::string("collision_mask"))->c_str())
			.property<static_cast<double (CollisionObject3D::*)() const>(&CollisionObject3D::get_collision_priority), static_cast<void (CollisionObject3D::*)(double)>(&CollisionObject3D::set_collision_priority)>((new std::string("collision_priority"))->c_str())
			.property<static_cast<bool (CollisionObject3D::*)() const>(&CollisionObject3D::is_ray_pickable), static_cast<void (CollisionObject3D::*)(bool)>(&CollisionObject3D::set_ray_pickable)>((new std::string("input_ray_pickable"))->c_str())
			.property<static_cast<bool (CollisionObject3D::*)() const>(&CollisionObject3D::get_capture_input_on_drag), static_cast<void (CollisionObject3D::*)(bool)>(&CollisionObject3D::set_capture_input_on_drag)>((new std::string("input_capture_on_drag"))->c_str())
			.fun<static_cast<void (CollisionObject3D::*)(Camera3D *, const Ref<InputEvent> &, const Vector3 &, const Vector3 &, int32_t)>(&CollisionObject3D::_input_event)>((new std::string("_input_event"))->c_str())
			.fun<static_cast<void (CollisionObject3D::*)()>(&CollisionObject3D::_mouse_enter)>((new std::string("_mouse_enter"))->c_str())
			.fun<static_cast<void (CollisionObject3D::*)()>(&CollisionObject3D::_mouse_exit)>((new std::string("_mouse_exit"))->c_str())
			.fun<static_cast<void (CollisionObject3D::*)(int32_t, bool)>(&CollisionObject3D::set_collision_layer_value)>((new std::string("set_collision_layer_value"))->c_str())
			.fun<static_cast<bool (CollisionObject3D::*)(int32_t) const>(&CollisionObject3D::get_collision_layer_value)>((new std::string("get_collision_layer_value"))->c_str())
			.fun<static_cast<void (CollisionObject3D::*)(int32_t, bool)>(&CollisionObject3D::set_collision_mask_value)>((new std::string("set_collision_mask_value"))->c_str())
			.fun<static_cast<bool (CollisionObject3D::*)(int32_t) const>(&CollisionObject3D::get_collision_mask_value)>((new std::string("get_collision_mask_value"))->c_str())
			.fun<static_cast<RID (CollisionObject3D::*)() const>(&CollisionObject3D::get_rid)>((new std::string("get_rid"))->c_str())
			.fun<static_cast<uint32_t (CollisionObject3D::*)(Object *)>(&CollisionObject3D::create_shape_owner)>((new std::string("create_shape_owner"))->c_str())
			.fun<static_cast<void (CollisionObject3D::*)(uint32_t)>(&CollisionObject3D::remove_shape_owner)>((new std::string("remove_shape_owner"))->c_str())
			.fun<static_cast<PackedInt32Array (CollisionObject3D::*)()>(&CollisionObject3D::get_shape_owners)>((new std::string("get_shape_owners"))->c_str())
			.fun<static_cast<void (CollisionObject3D::*)(uint32_t, const Transform3D &)>(&CollisionObject3D::shape_owner_set_transform)>((new std::string("shape_owner_set_transform"))->c_str())
			.fun<static_cast<Transform3D (CollisionObject3D::*)(uint32_t) const>(&CollisionObject3D::shape_owner_get_transform)>((new std::string("shape_owner_get_transform"))->c_str())
			.fun<static_cast<Object *(CollisionObject3D::*)(uint32_t) const>(&CollisionObject3D::shape_owner_get_owner)>((new std::string("shape_owner_get_owner"))->c_str())
			.fun<static_cast<void (CollisionObject3D::*)(uint32_t, bool)>(&CollisionObject3D::shape_owner_set_disabled)>((new std::string("shape_owner_set_disabled"))->c_str())
			.fun<static_cast<bool (CollisionObject3D::*)(uint32_t) const>(&CollisionObject3D::is_shape_owner_disabled)>((new std::string("is_shape_owner_disabled"))->c_str())
			.fun<static_cast<void (CollisionObject3D::*)(uint32_t, const Ref<Shape3D> &)>(&CollisionObject3D::shape_owner_add_shape)>((new std::string("shape_owner_add_shape"))->c_str())
			.fun<static_cast<int32_t (CollisionObject3D::*)(uint32_t) const>(&CollisionObject3D::shape_owner_get_shape_count)>((new std::string("shape_owner_get_shape_count"))->c_str())
			.fun<static_cast<Ref<Shape3D> (CollisionObject3D::*)(uint32_t, int32_t) const>(&CollisionObject3D::shape_owner_get_shape)>((new std::string("shape_owner_get_shape"))->c_str())
			.fun<static_cast<int32_t (CollisionObject3D::*)(uint32_t, int32_t) const>(&CollisionObject3D::shape_owner_get_shape_index)>((new std::string("shape_owner_get_shape_index"))->c_str())
			.fun<static_cast<void (CollisionObject3D::*)(uint32_t, int32_t)>(&CollisionObject3D::shape_owner_remove_shape)>((new std::string("shape_owner_remove_shape"))->c_str())
			.fun<static_cast<void (CollisionObject3D::*)(uint32_t)>(&CollisionObject3D::shape_owner_clear_shapes)>((new std::string("shape_owner_clear_shapes"))->c_str())
			.fun<static_cast<uint32_t (CollisionObject3D::*)(int32_t) const>(&CollisionObject3D::shape_find_owner)>((new std::string("shape_find_owner"))->c_str());
	qjs::Value _DisableMode = context->newObject();
	_DisableMode[(new std::string("DISABLE_MODE_REMOVE"))->c_str()] = CollisionObject3D::DisableMode::DISABLE_MODE_REMOVE;
	_DisableMode[(new std::string("DISABLE_MODE_MAKE_STATIC"))->c_str()] = CollisionObject3D::DisableMode::DISABLE_MODE_MAKE_STATIC;
	_DisableMode[(new std::string("DISABLE_MODE_KEEP_ACTIVE"))->c_str()] = CollisionObject3D::DisableMode::DISABLE_MODE_KEEP_ACTIVE;
	_module.add("DisableMode", std::move(_DisableMode));
}