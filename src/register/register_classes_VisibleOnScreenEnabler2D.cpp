#include <godot_cpp/classes/visible_on_screen_enabler2d.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"


using namespace godot;

void register_classes_VisibleOnScreenEnabler2D() {
	qjs::Context::Module &_module = _Node2D;
	_module.class_<VisibleOnScreenEnabler2D>("VisibleOnScreenEnabler2D")
			.constructor<>()
			.property<&VisibleOnScreenEnabler2D::get_enable_mode, &VisibleOnScreenEnabler2D::set_enable_mode>("enable_mode")
			.property<&VisibleOnScreenEnabler2D::get_enable_node_path, &VisibleOnScreenEnabler2D::set_enable_node_path>("enable_node_path");
}