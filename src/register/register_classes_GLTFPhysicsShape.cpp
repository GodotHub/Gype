#include <godot_cpp/classes/gltf_physics_shape.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/vector3.hpp>
#include <godot_cpp/classes/collision_shape3d.hpp>
#include <godot_cpp/classes/importer_mesh.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/shape3d.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/variant/string.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_GLTFPhysicsShape() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<GLTFPhysicsShape>("GLTFPhysicsShape")
            .constructor<>()
            .base<Resource>()
            .property<static_cast<String(GLTFPhysicsShape::*)()const>(&GLTFPhysicsShape::get_shape_type),static_cast<void(GLTFPhysicsShape::*)(const String &)>(&GLTFPhysicsShape::set_shape_type)>("shape_type")
            .property<static_cast<Vector3(GLTFPhysicsShape::*)()const>(&GLTFPhysicsShape::get_size),static_cast<void(GLTFPhysicsShape::*)(const Vector3 &)>(&GLTFPhysicsShape::set_size)>("size")
            .property<static_cast<double(GLTFPhysicsShape::*)()const>(&GLTFPhysicsShape::get_radius),static_cast<void(GLTFPhysicsShape::*)(double)>(&GLTFPhysicsShape::set_radius)>("radius")
            .property<static_cast<double(GLTFPhysicsShape::*)()const>(&GLTFPhysicsShape::get_height),static_cast<void(GLTFPhysicsShape::*)(double)>(&GLTFPhysicsShape::set_height)>("height")
            .property<static_cast<bool(GLTFPhysicsShape::*)()const>(&GLTFPhysicsShape::get_is_trigger),static_cast<void(GLTFPhysicsShape::*)(bool)>(&GLTFPhysicsShape::set_is_trigger)>("is_trigger")
            .property<static_cast<int32_t(GLTFPhysicsShape::*)()const>(&GLTFPhysicsShape::get_mesh_index),static_cast<void(GLTFPhysicsShape::*)(int32_t)>(&GLTFPhysicsShape::set_mesh_index)>("mesh_index")
            .property<static_cast<Ref<ImporterMesh>(GLTFPhysicsShape::*)()const>(&GLTFPhysicsShape::get_importer_mesh),static_cast<void(GLTFPhysicsShape::*)(const Ref<ImporterMesh> &)>(&GLTFPhysicsShape::set_importer_mesh)>("importer_mesh")
            .static_fun<static_cast<Ref<GLTFPhysicsShape>(*)(CollisionShape3D *)>(&GLTFPhysicsShape::from_node)>("from_node")
            .fun<static_cast<CollisionShape3D *(GLTFPhysicsShape::*)(bool)>(&GLTFPhysicsShape::to_node)>("to_node")
            .static_fun<static_cast<Ref<GLTFPhysicsShape>(*)(const Ref<Shape3D> &)>(&GLTFPhysicsShape::from_resource)>("from_resource")
            .fun<static_cast<Ref<Shape3D>(GLTFPhysicsShape::*)(bool)>(&GLTFPhysicsShape::to_resource)>("to_resource")
            .static_fun<static_cast<Ref<GLTFPhysicsShape>(*)(const Dictionary &)>(&GLTFPhysicsShape::from_dictionary)>("from_dictionary")
            .fun<static_cast<Dictionary(GLTFPhysicsShape::*)()const>(&GLTFPhysicsShape::to_dictionary)>("to_dictionary")
;}