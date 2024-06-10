#include "register/register_classes.h"
#include <godot_cpp/classes/mobile_vr_interface.hpp>

using namespace godot;

void register_classes_MobileVRInterfaceRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<MobileVRInterface>>("MobileVRInterfaceRef").constructor<MobileVRInterface *>();
}