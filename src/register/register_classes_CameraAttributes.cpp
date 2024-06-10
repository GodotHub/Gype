#include <godot_cpp/classes/camera_attributes.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_CameraAttributes() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<CameraAttributes>("CameraAttributes")
			.constructor<>()
			.property<&CameraAttributes::get_exposure_sensitivity, &CameraAttributes::set_exposure_sensitivity>("exposure_sensitivity")
			.property<&CameraAttributes::get_exposure_multiplier, &CameraAttributes::set_exposure_multiplier>("exposure_multiplier")
			.property<&CameraAttributes::is_auto_exposure_enabled, &CameraAttributes::set_auto_exposure_enabled>("auto_exposure_enabled")
			.property<&CameraAttributes::get_auto_exposure_scale, &CameraAttributes::set_auto_exposure_scale>("auto_exposure_scale")
			.property<&CameraAttributes::get_auto_exposure_speed, &CameraAttributes::set_auto_exposure_speed>("auto_exposure_speed");
}