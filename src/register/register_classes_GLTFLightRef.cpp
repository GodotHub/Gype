#include "register/register_classes.h"
#include <godot_cpp/classes/gltf_light.hpp>

using namespace godot;

void register_classes_GLTFLightRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<GLTFLight>>("GLTFLightRef").constructor<GLTFLight *>();
}