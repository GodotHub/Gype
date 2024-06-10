#include "register/register_classes.h"
#include <godot_cpp/classes/gltf_physics_body.hpp>

using namespace godot;

void register_classes_GLTFPhysicsBodyRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<GLTFPhysicsBody>>("GLTFPhysicsBodyRef").constructor<GLTFPhysicsBody *>();
}