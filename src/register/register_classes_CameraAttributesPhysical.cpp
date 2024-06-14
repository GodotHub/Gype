#include <godot_cpp/classes/camera_attributes.hpp>
#include <godot_cpp/classes/camera_attributes_physical.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_CameraAttributesPhysical() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<CameraAttributesPhysical>("CameraAttributesPhysical")
			.constructor<>()
			.base<CameraAttributes>()
			.property<static_cast<double (CameraAttributesPhysical::*)() const>(&CameraAttributesPhysical::get_focus_distance), static_cast<void (CameraAttributesPhysical::*)(double)>(&CameraAttributesPhysical::set_focus_distance)>((new std::string("frustum_focus_distance"))->c_str())
			.property<static_cast<double (CameraAttributesPhysical::*)() const>(&CameraAttributesPhysical::get_focal_length), static_cast<void (CameraAttributesPhysical::*)(double)>(&CameraAttributesPhysical::set_focal_length)>((new std::string("frustum_focal_length"))->c_str())
			.property<static_cast<double (CameraAttributesPhysical::*)() const>(&CameraAttributesPhysical::get_near), static_cast<void (CameraAttributesPhysical::*)(double)>(&CameraAttributesPhysical::set_near)>((new std::string("frustum_near"))->c_str())
			.property<static_cast<double (CameraAttributesPhysical::*)() const>(&CameraAttributesPhysical::get_far), static_cast<void (CameraAttributesPhysical::*)(double)>(&CameraAttributesPhysical::set_far)>((new std::string("frustum_far"))->c_str())
			.property<static_cast<double (CameraAttributesPhysical::*)() const>(&CameraAttributesPhysical::get_aperture), static_cast<void (CameraAttributesPhysical::*)(double)>(&CameraAttributesPhysical::set_aperture)>((new std::string("exposure_aperture"))->c_str())
			.property<static_cast<double (CameraAttributesPhysical::*)() const>(&CameraAttributesPhysical::get_shutter_speed), static_cast<void (CameraAttributesPhysical::*)(double)>(&CameraAttributesPhysical::set_shutter_speed)>((new std::string("exposure_shutter_speed"))->c_str())
			.property<static_cast<double (CameraAttributesPhysical::*)() const>(&CameraAttributesPhysical::get_auto_exposure_min_exposure_value), static_cast<void (CameraAttributesPhysical::*)(double)>(&CameraAttributesPhysical::set_auto_exposure_min_exposure_value)>((new std::string("auto_exposure_min_exposure_value"))->c_str())
			.property<static_cast<double (CameraAttributesPhysical::*)() const>(&CameraAttributesPhysical::get_auto_exposure_max_exposure_value), static_cast<void (CameraAttributesPhysical::*)(double)>(&CameraAttributesPhysical::set_auto_exposure_max_exposure_value)>((new std::string("auto_exposure_max_exposure_value"))->c_str())
			.fun<static_cast<double (CameraAttributesPhysical::*)() const>(&CameraAttributesPhysical::get_fov)>((new std::string("get_fov"))->c_str());
}