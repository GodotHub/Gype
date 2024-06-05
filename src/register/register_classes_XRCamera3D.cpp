#include <godot_cpp/classes/xr_camera3d.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"


using namespace godot;

void register_classes_XRCamera3D() {
	qjs::Context::Module &_module = _Node3D;
	_module.class_<XRCamera3D>("XRCamera3D")
			.constructor<>();
}