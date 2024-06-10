#include "register/register_classes.h"
#include <godot_cpp/classes/text_server_extension.hpp>

using namespace godot;

void register_classes_TextServerExtensionRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<TextServerExtension>>("TextServerExtensionRef").constructor<TextServerExtension *>();
}