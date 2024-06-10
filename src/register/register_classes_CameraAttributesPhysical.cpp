#include <godot_cpp/classes/camera_attributes_physical.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_CameraAttributesPhysical() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<CameraAttributesPhysical>("CameraAttributesPhysical")
			.constructor<>()
			.property<&CameraAttributesPhysical::get_focus_distance, &CameraAttributesPhysical::set_focus_distance>("frustum_focus_distance")
			.property<&CameraAttributesPhysical::get_focal_length, &CameraAttributesPhysical::set_focal_length>("frustum_focal_length")
			.property<&CameraAttributesPhysical::get_near, &CameraAttributesPhysical::set_near>("frustum_near")
			.property<&CameraAttributesPhysical::get_far, &CameraAttributesPhysical::set_far>("frustum_far")
			.property<&CameraAttributesPhysical::get_aperture, &CameraAttributesPhysical::set_aperture>("exposure_aperture")
			.property<&CameraAttributesPhysical::get_shutter_speed, &CameraAttributesPhysical::set_shutter_speed>("exposure_shutter_speed")
			.property<&CameraAttributesPhysical::get_auto_exposure_min_exposure_value, &CameraAttributesPhysical::set_auto_exposure_min_exposure_value>("auto_exposure_min_exposure_value")
			.property<&CameraAttributesPhysical::get_auto_exposure_max_exposure_value, &CameraAttributesPhysical::set_auto_exposure_max_exposure_value>("auto_exposure_max_exposure_value")
			.fun<static_cast<double (CameraAttributesPhysical::*)() const>(&CameraAttributesPhysical::get_fov)>("get_fov");
}