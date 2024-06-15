#include <godot_cpp/classes/open_xr_composition_layer_cylinder.hpp>
#include <godot_cpp/classes/open_xr_composition_layer.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_OpenXRCompositionLayerCylinder() {
    qjs::Context::Module &_module = get_Node3D_module();
    _module.class_<OpenXRCompositionLayerCylinder>("OpenXRCompositionLayerCylinder")
            .constructor<>()
            .base<OpenXRCompositionLayer>()
            .property<static_cast<double(OpenXRCompositionLayerCylinder::*)()const>(&OpenXRCompositionLayerCylinder::get_radius),static_cast<void(OpenXRCompositionLayerCylinder::*)(double)>(&OpenXRCompositionLayerCylinder::set_radius)>("radius")
            .property<static_cast<double(OpenXRCompositionLayerCylinder::*)()const>(&OpenXRCompositionLayerCylinder::get_aspect_ratio),static_cast<void(OpenXRCompositionLayerCylinder::*)(double)>(&OpenXRCompositionLayerCylinder::set_aspect_ratio)>("aspect_ratio")
            .property<static_cast<double(OpenXRCompositionLayerCylinder::*)()const>(&OpenXRCompositionLayerCylinder::get_central_angle),static_cast<void(OpenXRCompositionLayerCylinder::*)(double)>(&OpenXRCompositionLayerCylinder::set_central_angle)>("central_angle")
            .property<static_cast<uint32_t(OpenXRCompositionLayerCylinder::*)()const>(&OpenXRCompositionLayerCylinder::get_fallback_segments),static_cast<void(OpenXRCompositionLayerCylinder::*)(uint32_t)>(&OpenXRCompositionLayerCylinder::set_fallback_segments)>("fallback_segments")
;}