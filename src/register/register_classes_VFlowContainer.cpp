#include <godot_cpp/classes/v_flow_container.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_VFlowContainer() {
	qjs::Context::Module &_module = get_Control_module();
	_module.class_<VFlowContainer>("VFlowContainer")
			.constructor<>();
}