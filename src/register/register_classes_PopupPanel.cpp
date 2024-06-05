#include <godot_cpp/classes/popup_panel.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"


using namespace godot;

void register_classes_PopupPanel() {
	qjs::Context::Module &_module = _Node;
	_module.class_<PopupPanel>("PopupPanel")
			.constructor<>();
}