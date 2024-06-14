#include <godot_cpp/classes/collision_shape3d.hpp>
#include <godot_cpp/classes/node3d.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/shape3d.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_CollisionShape3D() {
	qjs::Context::Module &_module = get_Node3D_module();
	_module.class_<CollisionShape3D>("CollisionShape3D")
			.constructor<>()
			.base<Node3D>()
			.property<static_cast<Ref<Shape3D> (CollisionShape3D::*)() const>(&CollisionShape3D::get_shape), static_cast<void (CollisionShape3D::*)(const Ref<Shape3D> &)>(&CollisionShape3D::set_shape)>((new std::string("shape"))->c_str())
			.property<static_cast<bool (CollisionShape3D::*)() const>(&CollisionShape3D::is_disabled), static_cast<void (CollisionShape3D::*)(bool)>(&CollisionShape3D::set_disabled)>((new std::string("disabled"))->c_str())
			.fun<static_cast<void (CollisionShape3D::*)(const Ref<Resource> &)>(&CollisionShape3D::resource_changed)>((new std::string("resource_changed"))->c_str())
			.fun<static_cast<void (CollisionShape3D::*)()>(&CollisionShape3D::make_convex_from_siblings)>((new std::string("make_convex_from_siblings"))->c_str());
}