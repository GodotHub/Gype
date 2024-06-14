#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/thread.hpp>
#include <godot_cpp/variant/callable.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_Thread() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<Thread>("Thread")
			.constructor<>()
			.base<RefCounted>()
			.fun<static_cast<Error (Thread::*)(const Callable &, Thread::Priority)>(&Thread::start)>((new std::string("start"))->c_str())
			.fun<static_cast<String (Thread::*)() const>(&Thread::get_id)>((new std::string("get_id"))->c_str())
			.fun<static_cast<bool (Thread::*)() const>(&Thread::is_started)>((new std::string("is_started"))->c_str())
			.fun<static_cast<bool (Thread::*)() const>(&Thread::is_alive)>((new std::string("is_alive"))->c_str())
			.fun<static_cast<Variant (Thread::*)()>(&Thread::wait_to_finish)>((new std::string("wait_to_finish"))->c_str())
			.static_fun<static_cast<void (*)(bool)>(&Thread::set_thread_safety_checks_enabled)>((new std::string("set_thread_safety_checks_enabled"))->c_str());
	qjs::Value _Priority = context->newObject();
	_Priority[(new std::string("PRIORITY_LOW"))->c_str()] = Thread::Priority::PRIORITY_LOW;
	_Priority[(new std::string("PRIORITY_NORMAL"))->c_str()] = Thread::Priority::PRIORITY_NORMAL;
	_Priority[(new std::string("PRIORITY_HIGH"))->c_str()] = Thread::Priority::PRIORITY_HIGH;
	_module.add("Priority", std::move(_Priority));
}