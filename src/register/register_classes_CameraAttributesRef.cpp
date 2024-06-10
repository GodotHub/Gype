#include "register/register_classes.h"
#include <godot_cpp/classes/camera_attributes.hpp>

using namespace godot;

void register_classes_CameraAttributesRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<CameraAttributes>>("CameraAttributesRef").constructor<CameraAttributes *>();
}