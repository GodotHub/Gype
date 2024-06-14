
#include <godot_cpp/classes/physics_ray_query_parameters3d.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/variant/rid.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/variant/vector3.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_PhysicsRayQueryParameters3D() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<PhysicsRayQueryParameters3D>("PhysicsRayQueryParameters3D")
			.constructor<>()
			.base<RefCounted>()
			.property<static_cast<Vector3 (PhysicsRayQueryParameters3D::*)() const>(&PhysicsRayQueryParameters3D::get_from), static_cast<void (PhysicsRayQueryParameters3D::*)(const Vector3 &)>(&PhysicsRayQueryParameters3D::set_from)>((new std::string("from"))->c_str())
			.property<static_cast<Vector3 (PhysicsRayQueryParameters3D::*)() const>(&PhysicsRayQueryParameters3D::get_to), static_cast<void (PhysicsRayQueryParameters3D::*)(const Vector3 &)>(&PhysicsRayQueryParameters3D::set_to)>((new std::string("to"))->c_str())
			.property<static_cast<uint32_t (PhysicsRayQueryParameters3D::*)() const>(&PhysicsRayQueryParameters3D::get_collision_mask), static_cast<void (PhysicsRayQueryParameters3D::*)(uint32_t)>(&PhysicsRayQueryParameters3D::set_collision_mask)>((new std::string("collision_mask"))->c_str())
			.property<static_cast<TypedArray<RID> (PhysicsRayQueryParameters3D::*)() const>(&PhysicsRayQueryParameters3D::get_exclude), static_cast<void (PhysicsRayQueryParameters3D::*)(const TypedArray<RID> &)>(&PhysicsRayQueryParameters3D::set_exclude)>((new std::string("exclude"))->c_str())
			.property<static_cast<bool (PhysicsRayQueryParameters3D::*)() const>(&PhysicsRayQueryParameters3D::is_collide_with_bodies_enabled), static_cast<void (PhysicsRayQueryParameters3D::*)(bool)>(&PhysicsRayQueryParameters3D::set_collide_with_bodies)>((new std::string("collide_with_bodies"))->c_str())
			.property<static_cast<bool (PhysicsRayQueryParameters3D::*)() const>(&PhysicsRayQueryParameters3D::is_collide_with_areas_enabled), static_cast<void (PhysicsRayQueryParameters3D::*)(bool)>(&PhysicsRayQueryParameters3D::set_collide_with_areas)>((new std::string("collide_with_areas"))->c_str())
			.property<static_cast<bool (PhysicsRayQueryParameters3D::*)() const>(&PhysicsRayQueryParameters3D::is_hit_from_inside_enabled), static_cast<void (PhysicsRayQueryParameters3D::*)(bool)>(&PhysicsRayQueryParameters3D::set_hit_from_inside)>((new std::string("hit_from_inside"))->c_str())
			.property<static_cast<bool (PhysicsRayQueryParameters3D::*)() const>(&PhysicsRayQueryParameters3D::is_hit_back_faces_enabled), static_cast<void (PhysicsRayQueryParameters3D::*)(bool)>(&PhysicsRayQueryParameters3D::set_hit_back_faces)>((new std::string("hit_back_faces"))->c_str())
			.static_fun<static_cast<Ref<PhysicsRayQueryParameters3D> (*)(const Vector3 &, const Vector3 &, uint32_t, const TypedArray<RID> &)>(&PhysicsRayQueryParameters3D::create)>((new std::string("create"))->c_str());
}