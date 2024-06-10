#include "register/register_classes.h"
#include <godot_cpp/classes/hashing_context.hpp>

using namespace godot;

void register_classes_HashingContextRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<HashingContext>>("HashingContextRef").constructor<HashingContext *>();
}