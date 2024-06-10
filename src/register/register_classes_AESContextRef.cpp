#include "register/register_classes.h"
#include <godot_cpp/classes/aes_context.hpp>

using namespace godot;

void register_classes_AESContextRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<AESContext>>("AESContextRef").constructor<AESContext *>();
}