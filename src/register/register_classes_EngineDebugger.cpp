#include <godot_cpp/classes/engine_debugger.hpp>
#include <godot_cpp/classes/engine_profiler.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/variant/callable.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/string_name.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_EngineDebugger() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<EngineDebugger>("EngineDebugger")
			.fun<static_cast<bool (EngineDebugger::*)()>(&EngineDebugger::is_active)>("is_active")
			.fun<static_cast<void (EngineDebugger::*)(const StringName &, const Ref<EngineProfiler> &)>(&EngineDebugger::register_profiler)>("register_profiler")
			.fun<static_cast<void (EngineDebugger::*)(const StringName &)>(&EngineDebugger::unregister_profiler)>("unregister_profiler")
			.fun<static_cast<bool (EngineDebugger::*)(const StringName &)>(&EngineDebugger::is_profiling)>("is_profiling")
			.fun<static_cast<bool (EngineDebugger::*)(const StringName &)>(&EngineDebugger::has_profiler)>("has_profiler")
			.fun<static_cast<void (EngineDebugger::*)(const StringName &, const Array &)>(&EngineDebugger::profiler_add_frame_data)>("profiler_add_frame_data")
			.fun<static_cast<void (EngineDebugger::*)(const StringName &, bool, const Array &)>(&EngineDebugger::profiler_enable)>("profiler_enable")
			.fun<static_cast<void (EngineDebugger::*)(const StringName &, const Callable &)>(&EngineDebugger::register_message_capture)>("register_message_capture")
			.fun<static_cast<void (EngineDebugger::*)(const StringName &)>(&EngineDebugger::unregister_message_capture)>("unregister_message_capture")
			.fun<static_cast<bool (EngineDebugger::*)(const StringName &)>(&EngineDebugger::has_capture)>("has_capture")
			.fun<static_cast<void (EngineDebugger::*)(const String &, const Array &)>(&EngineDebugger::send_message)>("send_message");
}