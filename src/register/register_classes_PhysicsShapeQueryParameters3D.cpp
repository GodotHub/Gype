
#include <godot_cpp/classes/physics_shape_query_parameters3d.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/rid.hpp>
#include <godot_cpp/variant/transform3d.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/variant/vector3.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_PhysicsShapeQueryParameters3D() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<PhysicsShapeQueryParameters3D>("PhysicsShapeQueryParameters3D")
			.constructor<>()
			.base<RefCounted>()
			.property<static_cast<uint32_t (PhysicsShapeQueryParameters3D::*)() const>(&PhysicsShapeQueryParameters3D::get_collision_mask), static_cast<void (PhysicsShapeQueryParameters3D::*)(uint32_t)>(&PhysicsShapeQueryParameters3D::set_collision_mask)>((new std::string("collision_mask"))->c_str())
			.property<static_cast<TypedArray<RID> (PhysicsShapeQueryParameters3D::*)() const>(&PhysicsShapeQueryParameters3D::get_exclude), static_cast<void (PhysicsShapeQueryParameters3D::*)(const TypedArray<RID> &)>(&PhysicsShapeQueryParameters3D::set_exclude)>((new std::string("exclude"))->c_str())
			.property<static_cast<double (PhysicsShapeQueryParameters3D::*)() const>(&PhysicsShapeQueryParameters3D::get_margin), static_cast<void (PhysicsShapeQueryParameters3D::*)(double)>(&PhysicsShapeQueryParameters3D::set_margin)>((new std::string("margin"))->c_str())
			.property<static_cast<Vector3 (PhysicsShapeQueryParameters3D::*)() const>(&PhysicsShapeQueryParameters3D::get_motion), static_cast<void (PhysicsShapeQueryParameters3D::*)(const Vector3 &)>(&PhysicsShapeQueryParameters3D::set_motion)>((new std::string("motion"))->c_str())
			.property<static_cast<Ref<Resource> (PhysicsShapeQueryParameters3D::*)() const>(&PhysicsShapeQueryParameters3D::get_shape), static_cast<void (PhysicsShapeQueryParameters3D::*)(const Ref<Resource> &)>(&PhysicsShapeQueryParameters3D::set_shape)>((new std::string("shape"))->c_str())
			.property<static_cast<RID (PhysicsShapeQueryParameters3D::*)() const>(&PhysicsShapeQueryParameters3D::get_shape_rid), static_cast<void (PhysicsShapeQueryParameters3D::*)(const RID &)>(&PhysicsShapeQueryParameters3D::set_shape_rid)>((new std::string("shape_rid"))->c_str())
			.property<static_cast<Transform3D (PhysicsShapeQueryParameters3D::*)() const>(&PhysicsShapeQueryParameters3D::get_transform), static_cast<void (PhysicsShapeQueryParameters3D::*)(const Transform3D &)>(&PhysicsShapeQueryParameters3D::set_transform)>((new std::string("transform"))->c_str())
			.property<static_cast<bool (PhysicsShapeQueryParameters3D::*)() const>(&PhysicsShapeQueryParameters3D::is_collide_with_bodies_enabled), static_cast<void (PhysicsShapeQueryParameters3D::*)(bool)>(&PhysicsShapeQueryParameters3D::set_collide_with_bodies)>((new std::string("collide_with_bodies"))->c_str())
			.property<static_cast<bool (PhysicsShapeQueryParameters3D::*)() const>(&PhysicsShapeQueryParameters3D::is_collide_with_areas_enabled), static_cast<void (PhysicsShapeQueryParameters3D::*)(bool)>(&PhysicsShapeQueryParameters3D::set_collide_with_areas)>((new std::string("collide_with_areas"))->c_str());
}