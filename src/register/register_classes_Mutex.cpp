#include <godot_cpp/classes/mutex.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_Mutex() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<Mutex>("Mutex")
			.constructor<>()
			.fun<static_cast<void (Mutex::*)()>(&Mutex::lock)>("lock")
			.fun<static_cast<bool (Mutex::*)()>(&Mutex::try_lock)>("try_lock")
			.fun<static_cast<void (Mutex::*)()>(&Mutex::unlock)>("unlock");
}