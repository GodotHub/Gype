#include <godot_cpp/classes/engine_debugger.hpp>
#include <godot_cpp/classes/engine_profiler.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/variant/callable.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <string>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_singletons_EngineDebugger() {
	qjs::Value js_singleton = context->newObject();
	EngineDebugger *singleton = EngineDebugger::get_singleton();
	js_singleton.add((new std::string("is_active"))->c_str(), [singleton]() -> bool { return singleton->is_active(); });
	js_singleton.add((new std::string("register_profiler"))->c_str(), [singleton](const StringName &name, const Ref<EngineProfiler> &profiler) -> void { singleton->register_profiler(name, profiler); });
	js_singleton.add((new std::string("unregister_profiler"))->c_str(), [singleton](const StringName &name) -> void { singleton->unregister_profiler(name); });
	js_singleton.add((new std::string("is_profiling"))->c_str(), [singleton](const StringName &name) -> bool { return singleton->is_profiling(name); });
	js_singleton.add((new std::string("has_profiler"))->c_str(), [singleton](const StringName &name) -> bool { return singleton->has_profiler(name); });
	js_singleton.add((new std::string("profiler_add_frame_data"))->c_str(), [singleton](const StringName &name, const Array &data) -> void { singleton->profiler_add_frame_data(name, data); });
	js_singleton.add((new std::string("profiler_enable"))->c_str(), [singleton](const StringName &name, bool enable, const Array &arguments) -> void { singleton->profiler_enable(name, enable, arguments); });
	js_singleton.add((new std::string("register_message_capture"))->c_str(), [singleton](const StringName &name, const Callable &callable) -> void { singleton->register_message_capture(name, callable); });
	js_singleton.add((new std::string("unregister_message_capture"))->c_str(), [singleton](const StringName &name) -> void { singleton->unregister_message_capture(name); });
	js_singleton.add((new std::string("has_capture"))->c_str(), [singleton](const StringName &name) -> bool { return singleton->has_capture(name); });
	js_singleton.add((new std::string("send_message"))->c_str(), [singleton](const String &message, const Array &data) -> void { singleton->send_message(message, data); });
	context->global()[(new std::string("EngineDebugger"))->c_str()] = js_singleton;
}