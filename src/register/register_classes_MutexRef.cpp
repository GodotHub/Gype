#include "register/register_classes.h"
#include <godot_cpp/classes/mutex.hpp>

using namespace godot;

void register_classes_MutexRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<Mutex>>("MutexRef").constructor<Mutex *>();
}