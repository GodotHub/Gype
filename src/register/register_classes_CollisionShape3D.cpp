#include "register/register_classes.h"
#include "register/utils.h"

using namespace godot;

void register_classes_CollisionShape3D() {
    qjs::Context::Module &_module = _Node3D;
    _module.class_<CollisionShape3D>("CollisionShape3D")
           .constructor<>()
           .property<CollisionShape3D::get_shape, CollisionShape3D::set_shape>("shape")
           .property<CollisionShape3D::is_disabled, CollisionShape3D::set_disabled>("disabled")
		   .fun<static_cast<void(CollisionShape3D::*)(const Ref<Resource> &)>(&CollisionShape3D::resource_changed)>("resource_changed")
		   .fun<static_cast<void(CollisionShape3D::*)()>(&CollisionShape3D::make_convex_from_siblings)>("make_convex_from_siblings")
;}