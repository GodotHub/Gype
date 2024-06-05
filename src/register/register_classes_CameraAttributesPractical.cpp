#include <godot_cpp/classes/camera_attributes_practical.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"


using namespace godot;

void register_classes_CameraAttributesPractical() {
	qjs::Context::Module &_module = _General;
	_module.class_<CameraAttributesPractical>("CameraAttributesPractical")
			.constructor<>()
			.property<&CameraAttributesPractical::is_dof_blur_far_enabled, &CameraAttributesPractical::set_dof_blur_far_enabled>("dof_blur_far_enabled")
			.property<&CameraAttributesPractical::get_dof_blur_far_distance, &CameraAttributesPractical::set_dof_blur_far_distance>("dof_blur_far_distance")
			.property<&CameraAttributesPractical::get_dof_blur_far_transition, &CameraAttributesPractical::set_dof_blur_far_transition>("dof_blur_far_transition")
			.property<&CameraAttributesPractical::is_dof_blur_near_enabled, &CameraAttributesPractical::set_dof_blur_near_enabled>("dof_blur_near_enabled")
			.property<&CameraAttributesPractical::get_dof_blur_near_distance, &CameraAttributesPractical::set_dof_blur_near_distance>("dof_blur_near_distance")
			.property<&CameraAttributesPractical::get_dof_blur_near_transition, &CameraAttributesPractical::set_dof_blur_near_transition>("dof_blur_near_transition")
			.property<&CameraAttributesPractical::get_dof_blur_amount, &CameraAttributesPractical::set_dof_blur_amount>("dof_blur_amount")
			.property<&CameraAttributesPractical::get_auto_exposure_min_sensitivity, &CameraAttributesPractical::set_auto_exposure_min_sensitivity>("auto_exposure_min_sensitivity")
			.property<&CameraAttributesPractical::get_auto_exposure_max_sensitivity, &CameraAttributesPractical::set_auto_exposure_max_sensitivity>("auto_exposure_max_sensitivity");
}