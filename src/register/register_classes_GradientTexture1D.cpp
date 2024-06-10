#include <godot_cpp/classes/gradient.hpp>
#include <godot_cpp/classes/gradient_texture1d.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_GradientTexture1D() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<GradientTexture1D>("GradientTexture1D")
			.constructor<>()
			.property<&GradientTexture1D::get_gradient, &GradientTexture1D::set_gradient>("gradient")
			.property<&GradientTexture1D::get_width, &GradientTexture1D::set_width>("width")
			.property<&GradientTexture1D::is_using_hdr, &GradientTexture1D::set_use_hdr>("use_hdr");
}