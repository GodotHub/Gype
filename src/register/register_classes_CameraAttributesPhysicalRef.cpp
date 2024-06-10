#include "register/register_classes.h"
#include <godot_cpp/classes/camera_attributes_physical.hpp>

using namespace godot;

void register_classes_CameraAttributesPhysicalRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<CameraAttributesPhysical>>("CameraAttributesPhysicalRef").constructor<CameraAttributesPhysical *>();
}