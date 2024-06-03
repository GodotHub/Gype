#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/gltf_physics_shape.hpp>

using namespace godot;

void register_classes_GLTFPhysicsShape() {
    qjs::Context::Module &_module = _General;
    _module.class_<GLTFPhysicsShape>("GLTFPhysicsShape")
           .constructor<>()
           .property<GLTFPhysicsShape::get_shape_type, GLTFPhysicsShape::set_shape_type>("shape_type")
           .property<GLTFPhysicsShape::get_size, GLTFPhysicsShape::set_size>("size")
           .property<GLTFPhysicsShape::get_radius, GLTFPhysicsShape::set_radius>("radius")
           .property<GLTFPhysicsShape::get_height, GLTFPhysicsShape::set_height>("height")
           .property<GLTFPhysicsShape::get_is_trigger, GLTFPhysicsShape::set_is_trigger>("is_trigger")
           .property<GLTFPhysicsShape::get_mesh_index, GLTFPhysicsShape::set_mesh_index>("mesh_index")
           .property<GLTFPhysicsShape::get_importer_mesh, GLTFPhysicsShape::set_importer_mesh>("importer_mesh")
            .static_fun<GLTFPhysicsShape::from_node>("from_node")
		    .fun<static_cast<CollisionShape3D *(GLTFPhysicsShape::*)(bool)>(&GLTFPhysicsShape::to_node)>("to_node")
            .static_fun<GLTFPhysicsShape::from_dictionary>("from_dictionary")
		    .fun<static_cast<Dictionary(GLTFPhysicsShape::*)()const>(&GLTFPhysicsShape::to_dictionary)>("to_dictionary")
;}