#include <godot_cpp/classes/mutex.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_Mutex() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<Mutex>("Mutex")
			.constructor<>()
			.base<RefCounted>()
			.fun<static_cast<void (Mutex::*)()>(&Mutex::lock)>((new std::string("lock"))->c_str())
			.fun<static_cast<bool (Mutex::*)()>(&Mutex::try_lock)>((new std::string("try_lock"))->c_str())
			.fun<static_cast<void (Mutex::*)()>(&Mutex::unlock)>((new std::string("unlock"))->c_str());
}