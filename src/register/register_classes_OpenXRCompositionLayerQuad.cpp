#include <godot_cpp/classes/open_xr_composition_layer.hpp>
#include <godot_cpp/classes/open_xr_composition_layer_quad.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_OpenXRCompositionLayerQuad() {
	qjs::Context::Module &_module = get_Node3D_module();
	_module.class_<OpenXRCompositionLayerQuad>("OpenXRCompositionLayerQuad")
			.constructor<>()
			.base<OpenXRCompositionLayer>()
			.property<static_cast<Vector2 (OpenXRCompositionLayerQuad::*)() const>(&OpenXRCompositionLayerQuad::get_quad_size), static_cast<void (OpenXRCompositionLayerQuad::*)(const Vector2 &)>(&OpenXRCompositionLayerQuad::set_quad_size)>((new std::string("quad_size"))->c_str());
}