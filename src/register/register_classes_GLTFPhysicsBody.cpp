#include <godot_cpp/classes/collision_object3d.hpp>
#include <godot_cpp/classes/gltf_physics_body.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/basis.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/variant/quaternion.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/vector3.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_GLTFPhysicsBody() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<GLTFPhysicsBody>("GLTFPhysicsBody")
			.constructor<>()
			.base<Resource>()
			.property<static_cast<String (GLTFPhysicsBody::*)() const>(&GLTFPhysicsBody::get_body_type), static_cast<void (GLTFPhysicsBody::*)(const String &)>(&GLTFPhysicsBody::set_body_type)>((new std::string("body_type"))->c_str())
			.property<static_cast<double (GLTFPhysicsBody::*)() const>(&GLTFPhysicsBody::get_mass), static_cast<void (GLTFPhysicsBody::*)(double)>(&GLTFPhysicsBody::set_mass)>((new std::string("mass"))->c_str())
			.property<static_cast<Vector3 (GLTFPhysicsBody::*)() const>(&GLTFPhysicsBody::get_linear_velocity), static_cast<void (GLTFPhysicsBody::*)(const Vector3 &)>(&GLTFPhysicsBody::set_linear_velocity)>((new std::string("linear_velocity"))->c_str())
			.property<static_cast<Vector3 (GLTFPhysicsBody::*)() const>(&GLTFPhysicsBody::get_angular_velocity), static_cast<void (GLTFPhysicsBody::*)(const Vector3 &)>(&GLTFPhysicsBody::set_angular_velocity)>((new std::string("angular_velocity"))->c_str())
			.property<static_cast<Vector3 (GLTFPhysicsBody::*)() const>(&GLTFPhysicsBody::get_center_of_mass), static_cast<void (GLTFPhysicsBody::*)(const Vector3 &)>(&GLTFPhysicsBody::set_center_of_mass)>((new std::string("center_of_mass"))->c_str())
			.property<static_cast<Vector3 (GLTFPhysicsBody::*)() const>(&GLTFPhysicsBody::get_inertia_diagonal), static_cast<void (GLTFPhysicsBody::*)(const Vector3 &)>(&GLTFPhysicsBody::set_inertia_diagonal)>((new std::string("inertia_diagonal"))->c_str())
			.property<static_cast<Quaternion (GLTFPhysicsBody::*)() const>(&GLTFPhysicsBody::get_inertia_orientation), static_cast<void (GLTFPhysicsBody::*)(const Quaternion &)>(&GLTFPhysicsBody::set_inertia_orientation)>((new std::string("inertia_orientation"))->c_str())
			.property<static_cast<Basis (GLTFPhysicsBody::*)() const>(&GLTFPhysicsBody::get_inertia_tensor), static_cast<void (GLTFPhysicsBody::*)(const Basis &)>(&GLTFPhysicsBody::set_inertia_tensor)>((new std::string("inertia_tensor"))->c_str())
			.static_fun<static_cast<Ref<GLTFPhysicsBody> (*)(CollisionObject3D *)>(&GLTFPhysicsBody::from_node)>((new std::string("from_node"))->c_str())
			.fun<static_cast<CollisionObject3D *(GLTFPhysicsBody::*)() const>(&GLTFPhysicsBody::to_node)>((new std::string("to_node"))->c_str())
			.static_fun<static_cast<Ref<GLTFPhysicsBody> (*)(const Dictionary &)>(&GLTFPhysicsBody::from_dictionary)>((new std::string("from_dictionary"))->c_str())
			.fun<static_cast<Dictionary (GLTFPhysicsBody::*)() const>(&GLTFPhysicsBody::to_dictionary)>((new std::string("to_dictionary"))->c_str());
}