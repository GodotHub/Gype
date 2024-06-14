#include <godot_cpp/classes/canvas_modulate.hpp>
#include <godot_cpp/classes/node2d.hpp>
#include <godot_cpp/variant/color.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_CanvasModulate() {
	qjs::Context::Module &_module = get_Node2D_module();
	_module.class_<CanvasModulate>("CanvasModulate")
			.constructor<>()
			.base<Node2D>()
			.property<static_cast<Color (CanvasModulate::*)() const>(&CanvasModulate::get_color), static_cast<void (CanvasModulate::*)(const Color &)>(&CanvasModulate::set_color)>((new std::string("color"))->c_str());
}