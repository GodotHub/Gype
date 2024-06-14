#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/semaphore.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_Semaphore() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<Semaphore>("Semaphore")
			.constructor<>()
			.base<RefCounted>()
			.fun<static_cast<void (Semaphore::*)()>(&Semaphore::wait)>((new std::string("wait"))->c_str())
			.fun<static_cast<bool (Semaphore::*)()>(&Semaphore::try_wait)>((new std::string("try_wait"))->c_str())
			.fun<static_cast<void (Semaphore::*)()>(&Semaphore::post)>((new std::string("post"))->c_str());
}