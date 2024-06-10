#include <godot_cpp/classes/popup.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_Popup() {
	qjs::Context::Module &_module = get_Node_module();
	_module.class_<Popup>("Popup")
			.constructor<>();
}