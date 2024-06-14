
#include <godot_cpp/classes/style_box.hpp>
#include <godot_cpp/classes/style_box_line.hpp>
#include <godot_cpp/variant/color.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_StyleBoxLine() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<StyleBoxLine>("StyleBoxLine")
			.constructor<>()
			.base<StyleBox>()
			.property<static_cast<Color (StyleBoxLine::*)() const>(&StyleBoxLine::get_color), static_cast<void (StyleBoxLine::*)(const Color &)>(&StyleBoxLine::set_color)>((new std::string("color"))->c_str())
			.property<static_cast<double (StyleBoxLine::*)() const>(&StyleBoxLine::get_grow_begin), static_cast<void (StyleBoxLine::*)(double)>(&StyleBoxLine::set_grow_begin)>((new std::string("grow_begin"))->c_str())
			.property<static_cast<double (StyleBoxLine::*)() const>(&StyleBoxLine::get_grow_end), static_cast<void (StyleBoxLine::*)(double)>(&StyleBoxLine::set_grow_end)>((new std::string("grow_end"))->c_str())
			.property<static_cast<int32_t (StyleBoxLine::*)() const>(&StyleBoxLine::get_thickness), static_cast<void (StyleBoxLine::*)(int32_t)>(&StyleBoxLine::set_thickness)>((new std::string("thickness"))->c_str())
			.property<static_cast<bool (StyleBoxLine::*)() const>(&StyleBoxLine::is_vertical), static_cast<void (StyleBoxLine::*)(bool)>(&StyleBoxLine::set_vertical)>((new std::string("vertical"))->c_str());
}