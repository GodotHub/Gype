#include <godot_cpp/classes/thread.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/variant/callable.hpp>
#include <godot_cpp/variant/string.hpp>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_Thread() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<Thread>("Thread")
            .constructor<>()
            .base<RefCounted>()
            .fun<static_cast<Error(Thread::*)(const Callable &,Thread::Priority)>(&Thread::start)>("start")
            .fun<static_cast<String(Thread::*)()const>(&Thread::get_id)>("get_id")
            .fun<static_cast<bool(Thread::*)()const>(&Thread::is_started)>("is_started")
            .fun<static_cast<bool(Thread::*)()const>(&Thread::is_alive)>("is_alive")
            .fun<static_cast<Variant(Thread::*)()>(&Thread::wait_to_finish)>("wait_to_finish")
            .static_fun<static_cast<void(*)(bool)>(&Thread::set_thread_safety_checks_enabled)>("set_thread_safety_checks_enabled")
;    qjs::Value _Priority = context->newObject();
    _Priority["PRIORITY_LOW"] = Thread::Priority::PRIORITY_LOW;
    _Priority["PRIORITY_NORMAL"] = Thread::Priority::PRIORITY_NORMAL;
    _Priority["PRIORITY_HIGH"] = Thread::Priority::PRIORITY_HIGH;
    _module.add("Priority", std::move(_Priority));
}