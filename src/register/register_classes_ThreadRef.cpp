#include "register/register_classes.h"
#include <godot_cpp/classes/thread.hpp>

using namespace godot;

void register_classes_ThreadRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<Thread>>("ThreadRef").constructor<Thread *>();
}