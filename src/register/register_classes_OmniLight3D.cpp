#include <godot_cpp/classes/omni_light3d.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_OmniLight3D() {
	qjs::Context::Module &_module = get_Node3D_module();
	_module.class_<OmniLight3D>("OmniLight3D")
			.constructor<>()
			.property<&OmniLight3D::get_param, &OmniLight3D::set_param>("omni_range")
			.property<&OmniLight3D::get_param, &OmniLight3D::set_param>("omni_attenuation")
			.property<&OmniLight3D::get_shadow_mode, &OmniLight3D::set_shadow_mode>("omni_shadow_mode");
}