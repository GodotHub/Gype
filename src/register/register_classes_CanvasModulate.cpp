#include <godot_cpp/classes/canvas_modulate.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_CanvasModulate() {
	qjs::Context::Module &_module = get_Node2D_module();
	_module.class_<CanvasModulate>("CanvasModulate")
			.constructor<>()
			.property<&CanvasModulate::get_color, &CanvasModulate::set_color>("color");
}