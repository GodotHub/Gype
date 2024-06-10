#include "register/register_classes.h"
#include <godot_cpp/classes/text_server_advanced.hpp>

using namespace godot;

void register_classes_TextServerAdvancedRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<TextServerAdvanced>>("TextServerAdvancedRef").constructor<TextServerAdvanced *>();
}