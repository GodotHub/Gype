#include <godot_cpp/classes/engine_profiler.hpp>
#include <godot_cpp/variant/array.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_EngineProfiler() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<EngineProfiler>("EngineProfiler")
			.constructor<>()
			.fun<static_cast<void (EngineProfiler::*)(bool, const Array &)>(&EngineProfiler::_toggle)>("_toggle")
			.fun<static_cast<void (EngineProfiler::*)(const Array &)>(&EngineProfiler::_add_frame)>("_add_frame")
			.fun<static_cast<void (EngineProfiler::*)(double, double, double, double)>(&EngineProfiler::_tick)>("_tick");
}