#include <godot_cpp/classes/camera_attributes_physical.hpp>
#include <godot_cpp/classes/camera_attributes.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_CameraAttributesPhysical() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<CameraAttributesPhysical>("CameraAttributesPhysical")
            .constructor<>()
            .base<CameraAttributes>()
            .property<static_cast<double(CameraAttributesPhysical::*)()const>(&CameraAttributesPhysical::get_focus_distance),static_cast<void(CameraAttributesPhysical::*)(double)>(&CameraAttributesPhysical::set_focus_distance)>("frustum_focus_distance")
            .property<static_cast<double(CameraAttributesPhysical::*)()const>(&CameraAttributesPhysical::get_focal_length),static_cast<void(CameraAttributesPhysical::*)(double)>(&CameraAttributesPhysical::set_focal_length)>("frustum_focal_length")
            .property<static_cast<double(CameraAttributesPhysical::*)()const>(&CameraAttributesPhysical::get_near),static_cast<void(CameraAttributesPhysical::*)(double)>(&CameraAttributesPhysical::set_near)>("frustum_near")
            .property<static_cast<double(CameraAttributesPhysical::*)()const>(&CameraAttributesPhysical::get_far),static_cast<void(CameraAttributesPhysical::*)(double)>(&CameraAttributesPhysical::set_far)>("frustum_far")
            .property<static_cast<double(CameraAttributesPhysical::*)()const>(&CameraAttributesPhysical::get_aperture),static_cast<void(CameraAttributesPhysical::*)(double)>(&CameraAttributesPhysical::set_aperture)>("exposure_aperture")
            .property<static_cast<double(CameraAttributesPhysical::*)()const>(&CameraAttributesPhysical::get_shutter_speed),static_cast<void(CameraAttributesPhysical::*)(double)>(&CameraAttributesPhysical::set_shutter_speed)>("exposure_shutter_speed")
            .property<static_cast<double(CameraAttributesPhysical::*)()const>(&CameraAttributesPhysical::get_auto_exposure_min_exposure_value),static_cast<void(CameraAttributesPhysical::*)(double)>(&CameraAttributesPhysical::set_auto_exposure_min_exposure_value)>("auto_exposure_min_exposure_value")
            .property<static_cast<double(CameraAttributesPhysical::*)()const>(&CameraAttributesPhysical::get_auto_exposure_max_exposure_value),static_cast<void(CameraAttributesPhysical::*)(double)>(&CameraAttributesPhysical::set_auto_exposure_max_exposure_value)>("auto_exposure_max_exposure_value")
            .fun<static_cast<double(CameraAttributesPhysical::*)()const>(&CameraAttributesPhysical::get_fov)>("get_fov")
;}