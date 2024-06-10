#include "register/register_classes.h"
#include <godot_cpp/classes/text_server_dummy.hpp>

using namespace godot;

void register_classes_TextServerDummyRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<TextServerDummy>>("TextServerDummyRef").constructor<TextServerDummy *>();
}