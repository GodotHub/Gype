#include <godot_cpp/classes/camera_attributes.hpp>
#include <godot_cpp/classes/camera_attributes_practical.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_CameraAttributesPractical() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<CameraAttributesPractical>("CameraAttributesPractical")
			.constructor<>()
			.base<CameraAttributes>()
			.property<static_cast<bool (CameraAttributesPractical::*)() const>(&CameraAttributesPractical::is_dof_blur_far_enabled), static_cast<void (CameraAttributesPractical::*)(bool)>(&CameraAttributesPractical::set_dof_blur_far_enabled)>((new std::string("dof_blur_far_enabled"))->c_str())
			.property<static_cast<double (CameraAttributesPractical::*)() const>(&CameraAttributesPractical::get_dof_blur_far_distance), static_cast<void (CameraAttributesPractical::*)(double)>(&CameraAttributesPractical::set_dof_blur_far_distance)>((new std::string("dof_blur_far_distance"))->c_str())
			.property<static_cast<double (CameraAttributesPractical::*)() const>(&CameraAttributesPractical::get_dof_blur_far_transition), static_cast<void (CameraAttributesPractical::*)(double)>(&CameraAttributesPractical::set_dof_blur_far_transition)>((new std::string("dof_blur_far_transition"))->c_str())
			.property<static_cast<bool (CameraAttributesPractical::*)() const>(&CameraAttributesPractical::is_dof_blur_near_enabled), static_cast<void (CameraAttributesPractical::*)(bool)>(&CameraAttributesPractical::set_dof_blur_near_enabled)>((new std::string("dof_blur_near_enabled"))->c_str())
			.property<static_cast<double (CameraAttributesPractical::*)() const>(&CameraAttributesPractical::get_dof_blur_near_distance), static_cast<void (CameraAttributesPractical::*)(double)>(&CameraAttributesPractical::set_dof_blur_near_distance)>((new std::string("dof_blur_near_distance"))->c_str())
			.property<static_cast<double (CameraAttributesPractical::*)() const>(&CameraAttributesPractical::get_dof_blur_near_transition), static_cast<void (CameraAttributesPractical::*)(double)>(&CameraAttributesPractical::set_dof_blur_near_transition)>((new std::string("dof_blur_near_transition"))->c_str())
			.property<static_cast<double (CameraAttributesPractical::*)() const>(&CameraAttributesPractical::get_dof_blur_amount), static_cast<void (CameraAttributesPractical::*)(double)>(&CameraAttributesPractical::set_dof_blur_amount)>((new std::string("dof_blur_amount"))->c_str())
			.property<static_cast<double (CameraAttributesPractical::*)() const>(&CameraAttributesPractical::get_auto_exposure_min_sensitivity), static_cast<void (CameraAttributesPractical::*)(double)>(&CameraAttributesPractical::set_auto_exposure_min_sensitivity)>((new std::string("auto_exposure_min_sensitivity"))->c_str())
			.property<static_cast<double (CameraAttributesPractical::*)() const>(&CameraAttributesPractical::get_auto_exposure_max_sensitivity), static_cast<void (CameraAttributesPractical::*)(double)>(&CameraAttributesPractical::set_auto_exposure_max_sensitivity)>((new std::string("auto_exposure_max_sensitivity"))->c_str());
}