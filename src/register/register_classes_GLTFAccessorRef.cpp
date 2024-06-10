#include "register/register_classes.h"
#include <godot_cpp/classes/gltf_accessor.hpp>

using namespace godot;

void register_classes_GLTFAccessorRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<GLTFAccessor>>("GLTFAccessorRef").constructor<GLTFAccessor *>();
}