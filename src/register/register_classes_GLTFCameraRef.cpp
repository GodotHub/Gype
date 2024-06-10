#include "register/register_classes.h"
#include <godot_cpp/classes/gltf_camera.hpp>

using namespace godot;

void register_classes_GLTFCameraRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<GLTFCamera>>("GLTFCameraRef").constructor<GLTFCamera *>();
}