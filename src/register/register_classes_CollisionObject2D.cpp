#include <godot_cpp/classes/collision_object2d.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/transform2d.hpp>
#include <godot_cpp/classes/input_event.hpp>
#include <godot_cpp/classes/node2d.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/shape2d.hpp>
#include <godot_cpp/classes/viewport.hpp>
#include <godot_cpp/variant/packed_int32_array.hpp>
#include <godot_cpp/variant/rid.hpp>
#include <stdint.h>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_CollisionObject2D() {
    qjs::Context::Module &_module = get_Node2D_module();
    _module.class_<CollisionObject2D>("CollisionObject2D")
            .constructor<>()
            .base<Node2D>()
            .property<static_cast<CollisionObject2D::DisableMode(CollisionObject2D::*)()const>(&CollisionObject2D::get_disable_mode),static_cast<void(CollisionObject2D::*)(CollisionObject2D::DisableMode)>(&CollisionObject2D::set_disable_mode)>("disable_mode")
            .property<static_cast<uint32_t(CollisionObject2D::*)()const>(&CollisionObject2D::get_collision_layer),static_cast<void(CollisionObject2D::*)(uint32_t)>(&CollisionObject2D::set_collision_layer)>("collision_layer")
            .property<static_cast<uint32_t(CollisionObject2D::*)()const>(&CollisionObject2D::get_collision_mask),static_cast<void(CollisionObject2D::*)(uint32_t)>(&CollisionObject2D::set_collision_mask)>("collision_mask")
            .property<static_cast<double(CollisionObject2D::*)()const>(&CollisionObject2D::get_collision_priority),static_cast<void(CollisionObject2D::*)(double)>(&CollisionObject2D::set_collision_priority)>("collision_priority")
            .property<static_cast<bool(CollisionObject2D::*)()const>(&CollisionObject2D::is_pickable),static_cast<void(CollisionObject2D::*)(bool)>(&CollisionObject2D::set_pickable)>("input_pickable")
            .fun<static_cast<void(CollisionObject2D::*)(Viewport *,const Ref<InputEvent> &,int32_t)>(&CollisionObject2D::_input_event)>("_input_event")
            .fun<static_cast<void(CollisionObject2D::*)()>(&CollisionObject2D::_mouse_enter)>("_mouse_enter")
            .fun<static_cast<void(CollisionObject2D::*)()>(&CollisionObject2D::_mouse_exit)>("_mouse_exit")
            .fun<static_cast<void(CollisionObject2D::*)(int32_t)>(&CollisionObject2D::_mouse_shape_enter)>("_mouse_shape_enter")
            .fun<static_cast<void(CollisionObject2D::*)(int32_t)>(&CollisionObject2D::_mouse_shape_exit)>("_mouse_shape_exit")
            .fun<static_cast<RID(CollisionObject2D::*)()const>(&CollisionObject2D::get_rid)>("get_rid")
            .fun<static_cast<void(CollisionObject2D::*)(int32_t,bool)>(&CollisionObject2D::set_collision_layer_value)>("set_collision_layer_value")
            .fun<static_cast<bool(CollisionObject2D::*)(int32_t)const>(&CollisionObject2D::get_collision_layer_value)>("get_collision_layer_value")
            .fun<static_cast<void(CollisionObject2D::*)(int32_t,bool)>(&CollisionObject2D::set_collision_mask_value)>("set_collision_mask_value")
            .fun<static_cast<bool(CollisionObject2D::*)(int32_t)const>(&CollisionObject2D::get_collision_mask_value)>("get_collision_mask_value")
            .fun<static_cast<uint32_t(CollisionObject2D::*)(Object *)>(&CollisionObject2D::create_shape_owner)>("create_shape_owner")
            .fun<static_cast<void(CollisionObject2D::*)(uint32_t)>(&CollisionObject2D::remove_shape_owner)>("remove_shape_owner")
            .fun<static_cast<PackedInt32Array(CollisionObject2D::*)()>(&CollisionObject2D::get_shape_owners)>("get_shape_owners")
            .fun<static_cast<void(CollisionObject2D::*)(uint32_t,const Transform2D &)>(&CollisionObject2D::shape_owner_set_transform)>("shape_owner_set_transform")
            .fun<static_cast<Transform2D(CollisionObject2D::*)(uint32_t)const>(&CollisionObject2D::shape_owner_get_transform)>("shape_owner_get_transform")
            .fun<static_cast<Object *(CollisionObject2D::*)(uint32_t)const>(&CollisionObject2D::shape_owner_get_owner)>("shape_owner_get_owner")
            .fun<static_cast<void(CollisionObject2D::*)(uint32_t,bool)>(&CollisionObject2D::shape_owner_set_disabled)>("shape_owner_set_disabled")
            .fun<static_cast<bool(CollisionObject2D::*)(uint32_t)const>(&CollisionObject2D::is_shape_owner_disabled)>("is_shape_owner_disabled")
            .fun<static_cast<void(CollisionObject2D::*)(uint32_t,bool)>(&CollisionObject2D::shape_owner_set_one_way_collision)>("shape_owner_set_one_way_collision")
            .fun<static_cast<bool(CollisionObject2D::*)(uint32_t)const>(&CollisionObject2D::is_shape_owner_one_way_collision_enabled)>("is_shape_owner_one_way_collision_enabled")
            .fun<static_cast<void(CollisionObject2D::*)(uint32_t,double)>(&CollisionObject2D::shape_owner_set_one_way_collision_margin)>("shape_owner_set_one_way_collision_margin")
            .fun<static_cast<double(CollisionObject2D::*)(uint32_t)const>(&CollisionObject2D::get_shape_owner_one_way_collision_margin)>("get_shape_owner_one_way_collision_margin")
            .fun<static_cast<void(CollisionObject2D::*)(uint32_t,const Ref<Shape2D> &)>(&CollisionObject2D::shape_owner_add_shape)>("shape_owner_add_shape")
            .fun<static_cast<int32_t(CollisionObject2D::*)(uint32_t)const>(&CollisionObject2D::shape_owner_get_shape_count)>("shape_owner_get_shape_count")
            .fun<static_cast<Ref<Shape2D>(CollisionObject2D::*)(uint32_t,int32_t)const>(&CollisionObject2D::shape_owner_get_shape)>("shape_owner_get_shape")
            .fun<static_cast<int32_t(CollisionObject2D::*)(uint32_t,int32_t)const>(&CollisionObject2D::shape_owner_get_shape_index)>("shape_owner_get_shape_index")
            .fun<static_cast<void(CollisionObject2D::*)(uint32_t,int32_t)>(&CollisionObject2D::shape_owner_remove_shape)>("shape_owner_remove_shape")
            .fun<static_cast<void(CollisionObject2D::*)(uint32_t)>(&CollisionObject2D::shape_owner_clear_shapes)>("shape_owner_clear_shapes")
            .fun<static_cast<uint32_t(CollisionObject2D::*)(int32_t)const>(&CollisionObject2D::shape_find_owner)>("shape_find_owner")
;    qjs::Value _DisableMode = context->newObject();
    _DisableMode["DISABLE_MODE_REMOVE"] = CollisionObject2D::DisableMode::DISABLE_MODE_REMOVE;
    _DisableMode["DISABLE_MODE_MAKE_STATIC"] = CollisionObject2D::DisableMode::DISABLE_MODE_MAKE_STATIC;
    _DisableMode["DISABLE_MODE_KEEP_ACTIVE"] = CollisionObject2D::DisableMode::DISABLE_MODE_KEEP_ACTIVE;
    _module.add("DisableMode", std::move(_DisableMode));
}