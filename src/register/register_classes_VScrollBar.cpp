#include <godot_cpp/classes/v_scroll_bar.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_VScrollBar() {
	qjs::Context::Module &_module = get_Control_module();
	_module.class_<VScrollBar>("VScrollBar")
			.constructor<>();
}