#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/thread.hpp>
#include <godot_cpp/variant/callable.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/variant.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_Thread() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<Thread>("Thread")
			.constructor<>()
			.fun<static_cast<Error (Thread::*)(const Callable &, Thread::Priority)>(&Thread::start)>("start")
			.fun<static_cast<String (Thread::*)() const>(&Thread::get_id)>("get_id")
			.fun<static_cast<bool (Thread::*)() const>(&Thread::is_started)>("is_started")
			.fun<static_cast<bool (Thread::*)() const>(&Thread::is_alive)>("is_alive")
			.fun<static_cast<Variant (Thread::*)()>(&Thread::wait_to_finish)>("wait_to_finish")
			.static_fun<&Thread::set_thread_safety_checks_enabled>("set_thread_safety_checks_enabled");
}