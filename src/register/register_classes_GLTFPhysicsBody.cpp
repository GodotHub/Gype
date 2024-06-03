#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/gltf_physics_body.hpp>

using namespace godot;

void register_classes_GLTFPhysicsBody() {
    qjs::Context::Module &_module = _General;
    _module.class_<GLTFPhysicsBody>("GLTFPhysicsBody")
           .constructor<>()
           .property<GLTFPhysicsBody::get_body_type, GLTFPhysicsBody::set_body_type>("body_type")
           .property<GLTFPhysicsBody::get_mass, GLTFPhysicsBody::set_mass>("mass")
           .property<GLTFPhysicsBody::get_linear_velocity, GLTFPhysicsBody::set_linear_velocity>("linear_velocity")
           .property<GLTFPhysicsBody::get_angular_velocity, GLTFPhysicsBody::set_angular_velocity>("angular_velocity")
           .property<GLTFPhysicsBody::get_center_of_mass, GLTFPhysicsBody::set_center_of_mass>("center_of_mass")
           .property<GLTFPhysicsBody::get_inertia_tensor, GLTFPhysicsBody::set_inertia_tensor>("inertia_tensor")
            .static_fun<GLTFPhysicsBody::from_node>("from_node")
		    .fun<static_cast<CollisionObject3D *(GLTFPhysicsBody::*)()const>(&GLTFPhysicsBody::to_node)>("to_node")
            .static_fun<GLTFPhysicsBody::from_dictionary>("from_dictionary")
		    .fun<static_cast<Dictionary(GLTFPhysicsBody::*)()const>(&GLTFPhysicsBody::to_dictionary)>("to_dictionary")
;}