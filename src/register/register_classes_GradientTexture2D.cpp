#include <godot_cpp/classes/gradient.hpp>
#include <godot_cpp/classes/gradient_texture2d.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_GradientTexture2D() {
	qjs::Context::Module &_module = _General;
	_module.class_<GradientTexture2D>("GradientTexture2D")
			.constructor<>()
			.property<&GradientTexture2D::get_gradient, &GradientTexture2D::set_gradient>("gradient")
			.property<&GradientTexture2D::get_width, &GradientTexture2D::set_width>("width")
			.property<&GradientTexture2D::get_height, &GradientTexture2D::set_height>("height")
			.property<&GradientTexture2D::is_using_hdr, &GradientTexture2D::set_use_hdr>("use_hdr")
			.property<&GradientTexture2D::get_fill, &GradientTexture2D::set_fill>("fill")
			.property<&GradientTexture2D::get_fill_from, &GradientTexture2D::set_fill_from>("fill_from")
			.property<&GradientTexture2D::get_fill_to, &GradientTexture2D::set_fill_to>("fill_to")
			.property<&GradientTexture2D::get_repeat, &GradientTexture2D::set_repeat>("repeat");
}