#include <godot_cpp/classes/collision_object3d.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/transform3d.hpp>
#include <godot_cpp/variant/vector3.hpp>
#include <godot_cpp/classes/camera3d.hpp>
#include <godot_cpp/classes/input_event.hpp>
#include <godot_cpp/classes/node3d.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/shape3d.hpp>
#include <godot_cpp/variant/packed_int32_array.hpp>
#include <godot_cpp/variant/rid.hpp>
#include <stdint.h>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_CollisionObject3D() {
    qjs::Context::Module &_module = get_Node3D_module();
    _module.class_<CollisionObject3D>("CollisionObject3D")
            .constructor<>()
            .base<Node3D>()
            .property<static_cast<CollisionObject3D::DisableMode(CollisionObject3D::*)()const>(&CollisionObject3D::get_disable_mode),static_cast<void(CollisionObject3D::*)(CollisionObject3D::DisableMode)>(&CollisionObject3D::set_disable_mode)>("disable_mode")
            .property<static_cast<uint32_t(CollisionObject3D::*)()const>(&CollisionObject3D::get_collision_layer),static_cast<void(CollisionObject3D::*)(uint32_t)>(&CollisionObject3D::set_collision_layer)>("collision_layer")
            .property<static_cast<uint32_t(CollisionObject3D::*)()const>(&CollisionObject3D::get_collision_mask),static_cast<void(CollisionObject3D::*)(uint32_t)>(&CollisionObject3D::set_collision_mask)>("collision_mask")
            .property<static_cast<double(CollisionObject3D::*)()const>(&CollisionObject3D::get_collision_priority),static_cast<void(CollisionObject3D::*)(double)>(&CollisionObject3D::set_collision_priority)>("collision_priority")
            .property<static_cast<bool(CollisionObject3D::*)()const>(&CollisionObject3D::is_ray_pickable),static_cast<void(CollisionObject3D::*)(bool)>(&CollisionObject3D::set_ray_pickable)>("input_ray_pickable")
            .property<static_cast<bool(CollisionObject3D::*)()const>(&CollisionObject3D::get_capture_input_on_drag),static_cast<void(CollisionObject3D::*)(bool)>(&CollisionObject3D::set_capture_input_on_drag)>("input_capture_on_drag")
            .fun<static_cast<void(CollisionObject3D::*)(Camera3D *,const Ref<InputEvent> &,const Vector3 &,const Vector3 &,int32_t)>(&CollisionObject3D::_input_event)>("_input_event")
            .fun<static_cast<void(CollisionObject3D::*)()>(&CollisionObject3D::_mouse_enter)>("_mouse_enter")
            .fun<static_cast<void(CollisionObject3D::*)()>(&CollisionObject3D::_mouse_exit)>("_mouse_exit")
            .fun<static_cast<void(CollisionObject3D::*)(int32_t,bool)>(&CollisionObject3D::set_collision_layer_value)>("set_collision_layer_value")
            .fun<static_cast<bool(CollisionObject3D::*)(int32_t)const>(&CollisionObject3D::get_collision_layer_value)>("get_collision_layer_value")
            .fun<static_cast<void(CollisionObject3D::*)(int32_t,bool)>(&CollisionObject3D::set_collision_mask_value)>("set_collision_mask_value")
            .fun<static_cast<bool(CollisionObject3D::*)(int32_t)const>(&CollisionObject3D::get_collision_mask_value)>("get_collision_mask_value")
            .fun<static_cast<RID(CollisionObject3D::*)()const>(&CollisionObject3D::get_rid)>("get_rid")
            .fun<static_cast<uint32_t(CollisionObject3D::*)(Object *)>(&CollisionObject3D::create_shape_owner)>("create_shape_owner")
            .fun<static_cast<void(CollisionObject3D::*)(uint32_t)>(&CollisionObject3D::remove_shape_owner)>("remove_shape_owner")
            .fun<static_cast<PackedInt32Array(CollisionObject3D::*)()>(&CollisionObject3D::get_shape_owners)>("get_shape_owners")
            .fun<static_cast<void(CollisionObject3D::*)(uint32_t,const Transform3D &)>(&CollisionObject3D::shape_owner_set_transform)>("shape_owner_set_transform")
            .fun<static_cast<Transform3D(CollisionObject3D::*)(uint32_t)const>(&CollisionObject3D::shape_owner_get_transform)>("shape_owner_get_transform")
            .fun<static_cast<Object *(CollisionObject3D::*)(uint32_t)const>(&CollisionObject3D::shape_owner_get_owner)>("shape_owner_get_owner")
            .fun<static_cast<void(CollisionObject3D::*)(uint32_t,bool)>(&CollisionObject3D::shape_owner_set_disabled)>("shape_owner_set_disabled")
            .fun<static_cast<bool(CollisionObject3D::*)(uint32_t)const>(&CollisionObject3D::is_shape_owner_disabled)>("is_shape_owner_disabled")
            .fun<static_cast<void(CollisionObject3D::*)(uint32_t,const Ref<Shape3D> &)>(&CollisionObject3D::shape_owner_add_shape)>("shape_owner_add_shape")
            .fun<static_cast<int32_t(CollisionObject3D::*)(uint32_t)const>(&CollisionObject3D::shape_owner_get_shape_count)>("shape_owner_get_shape_count")
            .fun<static_cast<Ref<Shape3D>(CollisionObject3D::*)(uint32_t,int32_t)const>(&CollisionObject3D::shape_owner_get_shape)>("shape_owner_get_shape")
            .fun<static_cast<int32_t(CollisionObject3D::*)(uint32_t,int32_t)const>(&CollisionObject3D::shape_owner_get_shape_index)>("shape_owner_get_shape_index")
            .fun<static_cast<void(CollisionObject3D::*)(uint32_t,int32_t)>(&CollisionObject3D::shape_owner_remove_shape)>("shape_owner_remove_shape")
            .fun<static_cast<void(CollisionObject3D::*)(uint32_t)>(&CollisionObject3D::shape_owner_clear_shapes)>("shape_owner_clear_shapes")
            .fun<static_cast<uint32_t(CollisionObject3D::*)(int32_t)const>(&CollisionObject3D::shape_find_owner)>("shape_find_owner")
;    qjs::Value _DisableMode = context->newObject();
    _DisableMode["DISABLE_MODE_REMOVE"] = CollisionObject3D::DisableMode::DISABLE_MODE_REMOVE;
    _DisableMode["DISABLE_MODE_MAKE_STATIC"] = CollisionObject3D::DisableMode::DISABLE_MODE_MAKE_STATIC;
    _DisableMode["DISABLE_MODE_KEEP_ACTIVE"] = CollisionObject3D::DisableMode::DISABLE_MODE_KEEP_ACTIVE;
    _module.add("DisableMode", std::move(_DisableMode));
}