
#include <godot_cpp/classes/collision_object2d.hpp>
#include <godot_cpp/classes/input_event.hpp>
#include <godot_cpp/classes/node2d.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/shape2d.hpp>
#include <godot_cpp/classes/viewport.hpp>
#include <godot_cpp/variant/packed_int32_array.hpp>
#include <godot_cpp/variant/rid.hpp>
#include <godot_cpp/variant/transform2d.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_CollisionObject2D() {
	qjs::Context::Module &_module = get_Node2D_module();
	_module.class_<CollisionObject2D>("CollisionObject2D")
			.constructor<>()
			.base<Node2D>()
			.property<static_cast<CollisionObject2D::DisableMode (CollisionObject2D::*)() const>(&CollisionObject2D::get_disable_mode), static_cast<void (CollisionObject2D::*)(CollisionObject2D::DisableMode)>(&CollisionObject2D::set_disable_mode)>((new std::string("disable_mode"))->c_str())
			.property<static_cast<uint32_t (CollisionObject2D::*)() const>(&CollisionObject2D::get_collision_layer), static_cast<void (CollisionObject2D::*)(uint32_t)>(&CollisionObject2D::set_collision_layer)>((new std::string("collision_layer"))->c_str())
			.property<static_cast<uint32_t (CollisionObject2D::*)() const>(&CollisionObject2D::get_collision_mask), static_cast<void (CollisionObject2D::*)(uint32_t)>(&CollisionObject2D::set_collision_mask)>((new std::string("collision_mask"))->c_str())
			.property<static_cast<double (CollisionObject2D::*)() const>(&CollisionObject2D::get_collision_priority), static_cast<void (CollisionObject2D::*)(double)>(&CollisionObject2D::set_collision_priority)>((new std::string("collision_priority"))->c_str())
			.property<static_cast<bool (CollisionObject2D::*)() const>(&CollisionObject2D::is_pickable), static_cast<void (CollisionObject2D::*)(bool)>(&CollisionObject2D::set_pickable)>((new std::string("input_pickable"))->c_str())
			.fun<static_cast<void (CollisionObject2D::*)(Viewport *, const Ref<InputEvent> &, int32_t)>(&CollisionObject2D::_input_event)>((new std::string("_input_event"))->c_str())
			.fun<static_cast<void (CollisionObject2D::*)()>(&CollisionObject2D::_mouse_enter)>((new std::string("_mouse_enter"))->c_str())
			.fun<static_cast<void (CollisionObject2D::*)()>(&CollisionObject2D::_mouse_exit)>((new std::string("_mouse_exit"))->c_str())
			.fun<static_cast<void (CollisionObject2D::*)(int32_t)>(&CollisionObject2D::_mouse_shape_enter)>((new std::string("_mouse_shape_enter"))->c_str())
			.fun<static_cast<void (CollisionObject2D::*)(int32_t)>(&CollisionObject2D::_mouse_shape_exit)>((new std::string("_mouse_shape_exit"))->c_str())
			.fun<static_cast<RID (CollisionObject2D::*)() const>(&CollisionObject2D::get_rid)>((new std::string("get_rid"))->c_str())
			.fun<static_cast<void (CollisionObject2D::*)(int32_t, bool)>(&CollisionObject2D::set_collision_layer_value)>((new std::string("set_collision_layer_value"))->c_str())
			.fun<static_cast<bool (CollisionObject2D::*)(int32_t) const>(&CollisionObject2D::get_collision_layer_value)>((new std::string("get_collision_layer_value"))->c_str())
			.fun<static_cast<void (CollisionObject2D::*)(int32_t, bool)>(&CollisionObject2D::set_collision_mask_value)>((new std::string("set_collision_mask_value"))->c_str())
			.fun<static_cast<bool (CollisionObject2D::*)(int32_t) const>(&CollisionObject2D::get_collision_mask_value)>((new std::string("get_collision_mask_value"))->c_str())
			.fun<static_cast<uint32_t (CollisionObject2D::*)(Object *)>(&CollisionObject2D::create_shape_owner)>((new std::string("create_shape_owner"))->c_str())
			.fun<static_cast<void (CollisionObject2D::*)(uint32_t)>(&CollisionObject2D::remove_shape_owner)>((new std::string("remove_shape_owner"))->c_str())
			.fun<static_cast<PackedInt32Array (CollisionObject2D::*)()>(&CollisionObject2D::get_shape_owners)>((new std::string("get_shape_owners"))->c_str())
			.fun<static_cast<void (CollisionObject2D::*)(uint32_t, const Transform2D &)>(&CollisionObject2D::shape_owner_set_transform)>((new std::string("shape_owner_set_transform"))->c_str())
			.fun<static_cast<Transform2D (CollisionObject2D::*)(uint32_t) const>(&CollisionObject2D::shape_owner_get_transform)>((new std::string("shape_owner_get_transform"))->c_str())
			.fun<static_cast<Object *(CollisionObject2D::*)(uint32_t) const>(&CollisionObject2D::shape_owner_get_owner)>((new std::string("shape_owner_get_owner"))->c_str())
			.fun<static_cast<void (CollisionObject2D::*)(uint32_t, bool)>(&CollisionObject2D::shape_owner_set_disabled)>((new std::string("shape_owner_set_disabled"))->c_str())
			.fun<static_cast<bool (CollisionObject2D::*)(uint32_t) const>(&CollisionObject2D::is_shape_owner_disabled)>((new std::string("is_shape_owner_disabled"))->c_str())
			.fun<static_cast<void (CollisionObject2D::*)(uint32_t, bool)>(&CollisionObject2D::shape_owner_set_one_way_collision)>((new std::string("shape_owner_set_one_way_collision"))->c_str())
			.fun<static_cast<bool (CollisionObject2D::*)(uint32_t) const>(&CollisionObject2D::is_shape_owner_one_way_collision_enabled)>((new std::string("is_shape_owner_one_way_collision_enabled"))->c_str())
			.fun<static_cast<void (CollisionObject2D::*)(uint32_t, double)>(&CollisionObject2D::shape_owner_set_one_way_collision_margin)>((new std::string("shape_owner_set_one_way_collision_margin"))->c_str())
			.fun<static_cast<double (CollisionObject2D::*)(uint32_t) const>(&CollisionObject2D::get_shape_owner_one_way_collision_margin)>((new std::string("get_shape_owner_one_way_collision_margin"))->c_str())
			.fun<static_cast<void (CollisionObject2D::*)(uint32_t, const Ref<Shape2D> &)>(&CollisionObject2D::shape_owner_add_shape)>((new std::string("shape_owner_add_shape"))->c_str())
			.fun<static_cast<int32_t (CollisionObject2D::*)(uint32_t) const>(&CollisionObject2D::shape_owner_get_shape_count)>((new std::string("shape_owner_get_shape_count"))->c_str())
			.fun<static_cast<Ref<Shape2D> (CollisionObject2D::*)(uint32_t, int32_t) const>(&CollisionObject2D::shape_owner_get_shape)>((new std::string("shape_owner_get_shape"))->c_str())
			.fun<static_cast<int32_t (CollisionObject2D::*)(uint32_t, int32_t) const>(&CollisionObject2D::shape_owner_get_shape_index)>((new std::string("shape_owner_get_shape_index"))->c_str())
			.fun<static_cast<void (CollisionObject2D::*)(uint32_t, int32_t)>(&CollisionObject2D::shape_owner_remove_shape)>((new std::string("shape_owner_remove_shape"))->c_str())
			.fun<static_cast<void (CollisionObject2D::*)(uint32_t)>(&CollisionObject2D::shape_owner_clear_shapes)>((new std::string("shape_owner_clear_shapes"))->c_str())
			.fun<static_cast<uint32_t (CollisionObject2D::*)(int32_t) const>(&CollisionObject2D::shape_find_owner)>((new std::string("shape_find_owner"))->c_str());
	qjs::Value _DisableMode = context->newObject();
	_DisableMode[(new std::string("DISABLE_MODE_REMOVE"))->c_str()] = CollisionObject2D::DisableMode::DISABLE_MODE_REMOVE;
	_DisableMode[(new std::string("DISABLE_MODE_MAKE_STATIC"))->c_str()] = CollisionObject2D::DisableMode::DISABLE_MODE_MAKE_STATIC;
	_DisableMode[(new std::string("DISABLE_MODE_KEEP_ACTIVE"))->c_str()] = CollisionObject2D::DisableMode::DISABLE_MODE_KEEP_ACTIVE;
	_module.add("DisableMode", std::move(_DisableMode));
}