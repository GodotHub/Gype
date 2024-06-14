#include <godot_cpp/classes/color_rect.hpp>
#include <godot_cpp/classes/control.hpp>
#include <godot_cpp/variant/color.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_ColorRect() {
	qjs::Context::Module &_module = get_Control_module();
	_module.class_<ColorRect>("ColorRect")
			.constructor<>()
			.base<Control>()
			.property<static_cast<Color (ColorRect::*)() const>(&ColorRect::get_color), static_cast<void (ColorRect::*)(const Color &)>(&ColorRect::set_color)>((new std::string("color"))->c_str());
}