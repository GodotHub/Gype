#include "register/register_classes.h"
#include <godot_cpp/classes/camera_attributes_practical.hpp>

using namespace godot;

void register_classes_CameraAttributesPracticalRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<CameraAttributesPractical>>("CameraAttributesPracticalRef").constructor<CameraAttributesPractical *>();
}