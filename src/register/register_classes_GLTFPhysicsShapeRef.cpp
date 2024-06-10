#include "register/register_classes.h"
#include <godot_cpp/classes/gltf_physics_shape.hpp>

using namespace godot;

void register_classes_GLTFPhysicsShapeRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<GLTFPhysicsShape>>("GLTFPhysicsShapeRef").constructor<GLTFPhysicsShape *>();
}