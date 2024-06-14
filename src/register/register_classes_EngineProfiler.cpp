#include <godot_cpp/classes/engine_profiler.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/variant/array.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_EngineProfiler() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<EngineProfiler>("EngineProfiler")
			.constructor<>()
			.base<RefCounted>()
			.fun<static_cast<void (EngineProfiler::*)(bool, const Array &)>(&EngineProfiler::_toggle)>((new std::string("_toggle"))->c_str())
			.fun<static_cast<void (EngineProfiler::*)(const Array &)>(&EngineProfiler::_add_frame)>((new std::string("_add_frame"))->c_str())
			.fun<static_cast<void (EngineProfiler::*)(double, double, double, double)>(&EngineProfiler::_tick)>((new std::string("_tick"))->c_str());
}