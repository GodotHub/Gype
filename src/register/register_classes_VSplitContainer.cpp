#include <godot_cpp/classes/v_split_container.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"


using namespace godot;

void register_classes_VSplitContainer() {
	qjs::Context::Module &_module = _Control;
	_module.class_<VSplitContainer>("VSplitContainer")
			.constructor<>();
}