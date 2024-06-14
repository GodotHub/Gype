
#include <godot_cpp/classes/collision_shape3d.hpp>
#include <godot_cpp/classes/gltf_physics_shape.hpp>
#include <godot_cpp/classes/importer_mesh.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/shape3d.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/vector3.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_GLTFPhysicsShape() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<GLTFPhysicsShape>("GLTFPhysicsShape")
			.constructor<>()
			.base<Resource>()
			.property<static_cast<String (GLTFPhysicsShape::*)() const>(&GLTFPhysicsShape::get_shape_type), static_cast<void (GLTFPhysicsShape::*)(const String &)>(&GLTFPhysicsShape::set_shape_type)>((new std::string("shape_type"))->c_str())
			.property<static_cast<Vector3 (GLTFPhysicsShape::*)() const>(&GLTFPhysicsShape::get_size), static_cast<void (GLTFPhysicsShape::*)(const Vector3 &)>(&GLTFPhysicsShape::set_size)>((new std::string("size"))->c_str())
			.property<static_cast<double (GLTFPhysicsShape::*)() const>(&GLTFPhysicsShape::get_radius), static_cast<void (GLTFPhysicsShape::*)(double)>(&GLTFPhysicsShape::set_radius)>((new std::string("radius"))->c_str())
			.property<static_cast<double (GLTFPhysicsShape::*)() const>(&GLTFPhysicsShape::get_height), static_cast<void (GLTFPhysicsShape::*)(double)>(&GLTFPhysicsShape::set_height)>((new std::string("height"))->c_str())
			.property<static_cast<bool (GLTFPhysicsShape::*)() const>(&GLTFPhysicsShape::get_is_trigger), static_cast<void (GLTFPhysicsShape::*)(bool)>(&GLTFPhysicsShape::set_is_trigger)>((new std::string("is_trigger"))->c_str())
			.property<static_cast<int32_t (GLTFPhysicsShape::*)() const>(&GLTFPhysicsShape::get_mesh_index), static_cast<void (GLTFPhysicsShape::*)(int32_t)>(&GLTFPhysicsShape::set_mesh_index)>((new std::string("mesh_index"))->c_str())
			.property<static_cast<Ref<ImporterMesh> (GLTFPhysicsShape::*)() const>(&GLTFPhysicsShape::get_importer_mesh), static_cast<void (GLTFPhysicsShape::*)(const Ref<ImporterMesh> &)>(&GLTFPhysicsShape::set_importer_mesh)>((new std::string("importer_mesh"))->c_str())
			.static_fun<static_cast<Ref<GLTFPhysicsShape> (*)(CollisionShape3D *)>(&GLTFPhysicsShape::from_node)>((new std::string("from_node"))->c_str())
			.fun<static_cast<CollisionShape3D *(GLTFPhysicsShape::*)(bool)>(&GLTFPhysicsShape::to_node)>((new std::string("to_node"))->c_str())
			.static_fun<static_cast<Ref<GLTFPhysicsShape> (*)(const Ref<Shape3D> &)>(&GLTFPhysicsShape::from_resource)>((new std::string("from_resource"))->c_str())
			.fun<static_cast<Ref<Shape3D> (GLTFPhysicsShape::*)(bool)>(&GLTFPhysicsShape::to_resource)>((new std::string("to_resource"))->c_str())
			.static_fun<static_cast<Ref<GLTFPhysicsShape> (*)(const Dictionary &)>(&GLTFPhysicsShape::from_dictionary)>((new std::string("from_dictionary"))->c_str())
			.fun<static_cast<Dictionary (GLTFPhysicsShape::*)() const>(&GLTFPhysicsShape::to_dictionary)>((new std::string("to_dictionary"))->c_str());
}