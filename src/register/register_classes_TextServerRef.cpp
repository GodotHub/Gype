#include "register/register_classes.h"
#include <godot_cpp/classes/text_server.hpp>

using namespace godot;

void register_classes_TextServerRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<TextServer>>("TextServerRef").constructor<TextServer *>();
}