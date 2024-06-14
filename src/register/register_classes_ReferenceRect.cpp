#include <godot_cpp/classes/control.hpp>
#include <godot_cpp/classes/reference_rect.hpp>
#include <godot_cpp/variant/color.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_ReferenceRect() {
	qjs::Context::Module &_module = get_Control_module();
	_module.class_<ReferenceRect>("ReferenceRect")
			.constructor<>()
			.base<Control>()
			.property<static_cast<Color (ReferenceRect::*)() const>(&ReferenceRect::get_border_color), static_cast<void (ReferenceRect::*)(const Color &)>(&ReferenceRect::set_border_color)>((new std::string("border_color"))->c_str())
			.property<static_cast<double (ReferenceRect::*)() const>(&ReferenceRect::get_border_width), static_cast<void (ReferenceRect::*)(double)>(&ReferenceRect::set_border_width)>((new std::string("border_width"))->c_str())
			.property<static_cast<bool (ReferenceRect::*)() const>(&ReferenceRect::get_editor_only), static_cast<void (ReferenceRect::*)(bool)>(&ReferenceRect::set_editor_only)>((new std::string("editor_only"))->c_str());
}