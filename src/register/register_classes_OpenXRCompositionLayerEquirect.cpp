
#include <godot_cpp/classes/open_xr_composition_layer.hpp>
#include <godot_cpp/classes/open_xr_composition_layer_equirect.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_OpenXRCompositionLayerEquirect() {
	qjs::Context::Module &_module = get_Node3D_module();
	_module.class_<OpenXRCompositionLayerEquirect>("OpenXRCompositionLayerEquirect")
			.constructor<>()
			.base<OpenXRCompositionLayer>()
			.property<static_cast<double (OpenXRCompositionLayerEquirect::*)() const>(&OpenXRCompositionLayerEquirect::get_radius), static_cast<void (OpenXRCompositionLayerEquirect::*)(double)>(&OpenXRCompositionLayerEquirect::set_radius)>((new std::string("radius"))->c_str())
			.property<static_cast<double (OpenXRCompositionLayerEquirect::*)() const>(&OpenXRCompositionLayerEquirect::get_central_horizontal_angle), static_cast<void (OpenXRCompositionLayerEquirect::*)(double)>(&OpenXRCompositionLayerEquirect::set_central_horizontal_angle)>((new std::string("central_horizontal_angle"))->c_str())
			.property<static_cast<double (OpenXRCompositionLayerEquirect::*)() const>(&OpenXRCompositionLayerEquirect::get_upper_vertical_angle), static_cast<void (OpenXRCompositionLayerEquirect::*)(double)>(&OpenXRCompositionLayerEquirect::set_upper_vertical_angle)>((new std::string("upper_vertical_angle"))->c_str())
			.property<static_cast<double (OpenXRCompositionLayerEquirect::*)() const>(&OpenXRCompositionLayerEquirect::get_lower_vertical_angle), static_cast<void (OpenXRCompositionLayerEquirect::*)(double)>(&OpenXRCompositionLayerEquirect::set_lower_vertical_angle)>((new std::string("lower_vertical_angle"))->c_str())
			.property<static_cast<uint32_t (OpenXRCompositionLayerEquirect::*)() const>(&OpenXRCompositionLayerEquirect::get_fallback_segments), static_cast<void (OpenXRCompositionLayerEquirect::*)(uint32_t)>(&OpenXRCompositionLayerEquirect::set_fallback_segments)>((new std::string("fallback_segments"))->c_str());
}