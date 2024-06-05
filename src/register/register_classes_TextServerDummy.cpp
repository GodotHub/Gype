#include <godot_cpp/classes/text_server_dummy.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"


using namespace godot;

void register_classes_TextServerDummy() {
	qjs::Context::Module &_module = _General;
	_module.class_<TextServerDummy>("TextServerDummy")
			.constructor<>();
}