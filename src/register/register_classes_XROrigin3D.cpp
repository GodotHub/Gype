#include <godot_cpp/classes/xr_origin3d.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"


using namespace godot;

void register_classes_XROrigin3D() {
	qjs::Context::Module &_module = _Node3D;
	_module.class_<XROrigin3D>("XROrigin3D")
			.constructor<>()
			.property<&XROrigin3D::get_world_scale, &XROrigin3D::set_world_scale>("world_scale")
			.property<&XROrigin3D::is_current, &XROrigin3D::set_current>("current");
}