#include <godot_cpp/classes/color_rect.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"


using namespace godot;

void register_classes_ColorRect() {
	qjs::Context::Module &_module = _Control;
	_module.class_<ColorRect>("ColorRect")
			.constructor<>()
			.property<&ColorRect::get_color, &ColorRect::set_color>("color");
}