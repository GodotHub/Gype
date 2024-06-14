#include <godot_cpp/classes/camera_attributes.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_CameraAttributes() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<CameraAttributes>("CameraAttributes")
			.constructor<>()
			.base<Resource>()
			.property<static_cast<double (CameraAttributes::*)() const>(&CameraAttributes::get_exposure_sensitivity), static_cast<void (CameraAttributes::*)(double)>(&CameraAttributes::set_exposure_sensitivity)>((new std::string("exposure_sensitivity"))->c_str())
			.property<static_cast<double (CameraAttributes::*)() const>(&CameraAttributes::get_exposure_multiplier), static_cast<void (CameraAttributes::*)(double)>(&CameraAttributes::set_exposure_multiplier)>((new std::string("exposure_multiplier"))->c_str())
			.property<static_cast<bool (CameraAttributes::*)() const>(&CameraAttributes::is_auto_exposure_enabled), static_cast<void (CameraAttributes::*)(bool)>(&CameraAttributes::set_auto_exposure_enabled)>((new std::string("auto_exposure_enabled"))->c_str())
			.property<static_cast<double (CameraAttributes::*)() const>(&CameraAttributes::get_auto_exposure_scale), static_cast<void (CameraAttributes::*)(double)>(&CameraAttributes::set_auto_exposure_scale)>((new std::string("auto_exposure_scale"))->c_str())
			.property<static_cast<double (CameraAttributes::*)() const>(&CameraAttributes::get_auto_exposure_speed), static_cast<void (CameraAttributes::*)(double)>(&CameraAttributes::set_auto_exposure_speed)>((new std::string("auto_exposure_speed"))->c_str());
}