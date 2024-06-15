#include <godot_cpp/classes/camera_attributes_practical.hpp>
#include <godot_cpp/classes/camera_attributes.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_CameraAttributesPractical() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<CameraAttributesPractical>("CameraAttributesPractical")
            .constructor<>()
            .base<CameraAttributes>()
            .property<static_cast<bool(CameraAttributesPractical::*)()const>(&CameraAttributesPractical::is_dof_blur_far_enabled),static_cast<void(CameraAttributesPractical::*)(bool)>(&CameraAttributesPractical::set_dof_blur_far_enabled)>("dof_blur_far_enabled")
            .property<static_cast<double(CameraAttributesPractical::*)()const>(&CameraAttributesPractical::get_dof_blur_far_distance),static_cast<void(CameraAttributesPractical::*)(double)>(&CameraAttributesPractical::set_dof_blur_far_distance)>("dof_blur_far_distance")
            .property<static_cast<double(CameraAttributesPractical::*)()const>(&CameraAttributesPractical::get_dof_blur_far_transition),static_cast<void(CameraAttributesPractical::*)(double)>(&CameraAttributesPractical::set_dof_blur_far_transition)>("dof_blur_far_transition")
            .property<static_cast<bool(CameraAttributesPractical::*)()const>(&CameraAttributesPractical::is_dof_blur_near_enabled),static_cast<void(CameraAttributesPractical::*)(bool)>(&CameraAttributesPractical::set_dof_blur_near_enabled)>("dof_blur_near_enabled")
            .property<static_cast<double(CameraAttributesPractical::*)()const>(&CameraAttributesPractical::get_dof_blur_near_distance),static_cast<void(CameraAttributesPractical::*)(double)>(&CameraAttributesPractical::set_dof_blur_near_distance)>("dof_blur_near_distance")
            .property<static_cast<double(CameraAttributesPractical::*)()const>(&CameraAttributesPractical::get_dof_blur_near_transition),static_cast<void(CameraAttributesPractical::*)(double)>(&CameraAttributesPractical::set_dof_blur_near_transition)>("dof_blur_near_transition")
            .property<static_cast<double(CameraAttributesPractical::*)()const>(&CameraAttributesPractical::get_dof_blur_amount),static_cast<void(CameraAttributesPractical::*)(double)>(&CameraAttributesPractical::set_dof_blur_amount)>("dof_blur_amount")
            .property<static_cast<double(CameraAttributesPractical::*)()const>(&CameraAttributesPractical::get_auto_exposure_min_sensitivity),static_cast<void(CameraAttributesPractical::*)(double)>(&CameraAttributesPractical::set_auto_exposure_min_sensitivity)>("auto_exposure_min_sensitivity")
            .property<static_cast<double(CameraAttributesPractical::*)()const>(&CameraAttributesPractical::get_auto_exposure_max_sensitivity),static_cast<void(CameraAttributesPractical::*)(double)>(&CameraAttributesPractical::set_auto_exposure_max_sensitivity)>("auto_exposure_max_sensitivity")
;}