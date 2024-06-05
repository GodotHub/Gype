#include <godot_cpp/classes/panel_container.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"


using namespace godot;

void register_classes_PanelContainer() {
	qjs::Context::Module &_module = _Control;
	_module.class_<PanelContainer>("PanelContainer")
			.constructor<>();
}