#include "qjspp.hpp"
#include "register/register_classes.h"
#include <godot_cpp/classes/curve.hpp>
#include <godot_cpp/classes/curve_texture.hpp>

using namespace godot;

void register_classes_CurveTexture() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<CurveTexture>("CurveTexture")
			.constructor<>()
			.property<&CurveTexture::get_width, &CurveTexture::set_width>("width")
			.property<&CurveTexture::get_texture_mode, &CurveTexture::set_texture_mode>("texture_mode")
			.property<&CurveTexture::get_curve, &CurveTexture::set_curve>("curve");
}