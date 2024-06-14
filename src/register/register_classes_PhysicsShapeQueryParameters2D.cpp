
#include <godot_cpp/classes/physics_shape_query_parameters2d.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/rid.hpp>
#include <godot_cpp/variant/transform2d.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_PhysicsShapeQueryParameters2D() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<PhysicsShapeQueryParameters2D>("PhysicsShapeQueryParameters2D")
			.constructor<>()
			.base<RefCounted>()
			.property<static_cast<uint32_t (PhysicsShapeQueryParameters2D::*)() const>(&PhysicsShapeQueryParameters2D::get_collision_mask), static_cast<void (PhysicsShapeQueryParameters2D::*)(uint32_t)>(&PhysicsShapeQueryParameters2D::set_collision_mask)>((new std::string("collision_mask"))->c_str())
			.property<static_cast<TypedArray<RID> (PhysicsShapeQueryParameters2D::*)() const>(&PhysicsShapeQueryParameters2D::get_exclude), static_cast<void (PhysicsShapeQueryParameters2D::*)(const TypedArray<RID> &)>(&PhysicsShapeQueryParameters2D::set_exclude)>((new std::string("exclude"))->c_str())
			.property<static_cast<double (PhysicsShapeQueryParameters2D::*)() const>(&PhysicsShapeQueryParameters2D::get_margin), static_cast<void (PhysicsShapeQueryParameters2D::*)(double)>(&PhysicsShapeQueryParameters2D::set_margin)>((new std::string("margin"))->c_str())
			.property<static_cast<Vector2 (PhysicsShapeQueryParameters2D::*)() const>(&PhysicsShapeQueryParameters2D::get_motion), static_cast<void (PhysicsShapeQueryParameters2D::*)(const Vector2 &)>(&PhysicsShapeQueryParameters2D::set_motion)>((new std::string("motion"))->c_str())
			.property<static_cast<Ref<Resource> (PhysicsShapeQueryParameters2D::*)() const>(&PhysicsShapeQueryParameters2D::get_shape), static_cast<void (PhysicsShapeQueryParameters2D::*)(const Ref<Resource> &)>(&PhysicsShapeQueryParameters2D::set_shape)>((new std::string("shape"))->c_str())
			.property<static_cast<RID (PhysicsShapeQueryParameters2D::*)() const>(&PhysicsShapeQueryParameters2D::get_shape_rid), static_cast<void (PhysicsShapeQueryParameters2D::*)(const RID &)>(&PhysicsShapeQueryParameters2D::set_shape_rid)>((new std::string("shape_rid"))->c_str())
			.property<static_cast<Transform2D (PhysicsShapeQueryParameters2D::*)() const>(&PhysicsShapeQueryParameters2D::get_transform), static_cast<void (PhysicsShapeQueryParameters2D::*)(const Transform2D &)>(&PhysicsShapeQueryParameters2D::set_transform)>((new std::string("transform"))->c_str())
			.property<static_cast<bool (PhysicsShapeQueryParameters2D::*)() const>(&PhysicsShapeQueryParameters2D::is_collide_with_bodies_enabled), static_cast<void (PhysicsShapeQueryParameters2D::*)(bool)>(&PhysicsShapeQueryParameters2D::set_collide_with_bodies)>((new std::string("collide_with_bodies"))->c_str())
			.property<static_cast<bool (PhysicsShapeQueryParameters2D::*)() const>(&PhysicsShapeQueryParameters2D::is_collide_with_areas_enabled), static_cast<void (PhysicsShapeQueryParameters2D::*)(bool)>(&PhysicsShapeQueryParameters2D::set_collide_with_areas)>((new std::string("collide_with_areas"))->c_str());
}