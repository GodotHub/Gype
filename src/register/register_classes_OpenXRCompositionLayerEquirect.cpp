#include <godot_cpp/classes/open_xr_composition_layer_equirect.hpp>
#include <godot_cpp/classes/open_xr_composition_layer.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_OpenXRCompositionLayerEquirect() {
    qjs::Context::Module &_module = get_Node3D_module();
    _module.class_<OpenXRCompositionLayerEquirect>("OpenXRCompositionLayerEquirect")
            .constructor<>()
            .base<OpenXRCompositionLayer>()
            .property<static_cast<double(OpenXRCompositionLayerEquirect::*)()const>(&OpenXRCompositionLayerEquirect::get_radius),static_cast<void(OpenXRCompositionLayerEquirect::*)(double)>(&OpenXRCompositionLayerEquirect::set_radius)>("radius")
            .property<static_cast<double(OpenXRCompositionLayerEquirect::*)()const>(&OpenXRCompositionLayerEquirect::get_central_horizontal_angle),static_cast<void(OpenXRCompositionLayerEquirect::*)(double)>(&OpenXRCompositionLayerEquirect::set_central_horizontal_angle)>("central_horizontal_angle")
            .property<static_cast<double(OpenXRCompositionLayerEquirect::*)()const>(&OpenXRCompositionLayerEquirect::get_upper_vertical_angle),static_cast<void(OpenXRCompositionLayerEquirect::*)(double)>(&OpenXRCompositionLayerEquirect::set_upper_vertical_angle)>("upper_vertical_angle")
            .property<static_cast<double(OpenXRCompositionLayerEquirect::*)()const>(&OpenXRCompositionLayerEquirect::get_lower_vertical_angle),static_cast<void(OpenXRCompositionLayerEquirect::*)(double)>(&OpenXRCompositionLayerEquirect::set_lower_vertical_angle)>("lower_vertical_angle")
            .property<static_cast<uint32_t(OpenXRCompositionLayerEquirect::*)()const>(&OpenXRCompositionLayerEquirect::get_fallback_segments),static_cast<void(OpenXRCompositionLayerEquirect::*)(uint32_t)>(&OpenXRCompositionLayerEquirect::set_fallback_segments)>("fallback_segments")
;}