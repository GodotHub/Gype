#include <godot_cpp/classes/text_server_advanced.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_TextServerAdvanced() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<TextServerAdvanced>("TextServerAdvanced")
			.constructor<>();
}