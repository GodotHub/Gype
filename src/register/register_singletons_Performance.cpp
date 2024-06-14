
#include <godot_cpp/classes/performance.hpp>
#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/variant/callable.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <string>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_singletons_Performance() {
	qjs::Value js_singleton = context->newObject();
	Performance *singleton = Performance::get_singleton();
	js_singleton.add((new std::string("get_monitor"))->c_str(), [singleton](Performance::Monitor monitor) -> double { return singleton->get_monitor(monitor); });
	js_singleton.add((new std::string("add_custom_monitor"))->c_str(), [singleton](const StringName &id, const Callable &callable, const Array &arguments) -> void { singleton->add_custom_monitor(id, callable, arguments); });
	js_singleton.add((new std::string("remove_custom_monitor"))->c_str(), [singleton](const StringName &id) -> void { singleton->remove_custom_monitor(id); });
	js_singleton.add((new std::string("has_custom_monitor"))->c_str(), [singleton](const StringName &id) -> bool { return singleton->has_custom_monitor(id); });
	js_singleton.add((new std::string("get_custom_monitor"))->c_str(), [singleton](const StringName &id) -> Variant { return singleton->get_custom_monitor(id); });
	js_singleton.add((new std::string("get_monitor_modification_time"))->c_str(), [singleton]() -> int64_t { return singleton->get_monitor_modification_time(); });
	js_singleton.add((new std::string("get_custom_monitor_names"))->c_str(), [singleton]() -> TypedArray<StringName> { return singleton->get_custom_monitor_names(); });
	context->global()[(new std::string("Performance"))->c_str()] = js_singleton;

	qjs::Value _Monitor = context->newObject();
	_Monitor[(new std::string("TIME_FPS"))->c_str()] = Performance::Monitor::TIME_FPS;
	_Monitor[(new std::string("TIME_PROCESS"))->c_str()] = Performance::Monitor::TIME_PROCESS;
	_Monitor[(new std::string("TIME_PHYSICS_PROCESS"))->c_str()] = Performance::Monitor::TIME_PHYSICS_PROCESS;
	_Monitor[(new std::string("TIME_NAVIGATION_PROCESS"))->c_str()] = Performance::Monitor::TIME_NAVIGATION_PROCESS;
	_Monitor[(new std::string("MEMORY_STATIC"))->c_str()] = Performance::Monitor::MEMORY_STATIC;
	_Monitor[(new std::string("MEMORY_STATIC_MAX"))->c_str()] = Performance::Monitor::MEMORY_STATIC_MAX;
	_Monitor[(new std::string("MEMORY_MESSAGE_BUFFER_MAX"))->c_str()] = Performance::Monitor::MEMORY_MESSAGE_BUFFER_MAX;
	_Monitor[(new std::string("OBJECT_COUNT"))->c_str()] = Performance::Monitor::OBJECT_COUNT;
	_Monitor[(new std::string("OBJECT_RESOURCE_COUNT"))->c_str()] = Performance::Monitor::OBJECT_RESOURCE_COUNT;
	_Monitor[(new std::string("OBJECT_NODE_COUNT"))->c_str()] = Performance::Monitor::OBJECT_NODE_COUNT;
	_Monitor[(new std::string("OBJECT_ORPHAN_NODE_COUNT"))->c_str()] = Performance::Monitor::OBJECT_ORPHAN_NODE_COUNT;
	_Monitor[(new std::string("RENDER_TOTAL_OBJECTS_IN_FRAME"))->c_str()] = Performance::Monitor::RENDER_TOTAL_OBJECTS_IN_FRAME;
	_Monitor[(new std::string("RENDER_TOTAL_PRIMITIVES_IN_FRAME"))->c_str()] = Performance::Monitor::RENDER_TOTAL_PRIMITIVES_IN_FRAME;
	_Monitor[(new std::string("RENDER_TOTAL_DRAW_CALLS_IN_FRAME"))->c_str()] = Performance::Monitor::RENDER_TOTAL_DRAW_CALLS_IN_FRAME;
	_Monitor[(new std::string("RENDER_VIDEO_MEM_USED"))->c_str()] = Performance::Monitor::RENDER_VIDEO_MEM_USED;
	_Monitor[(new std::string("RENDER_TEXTURE_MEM_USED"))->c_str()] = Performance::Monitor::RENDER_TEXTURE_MEM_USED;
	_Monitor[(new std::string("RENDER_BUFFER_MEM_USED"))->c_str()] = Performance::Monitor::RENDER_BUFFER_MEM_USED;
	_Monitor[(new std::string("PHYSICS_2D_ACTIVE_OBJECTS"))->c_str()] = Performance::Monitor::PHYSICS_2D_ACTIVE_OBJECTS;
	_Monitor[(new std::string("PHYSICS_2D_COLLISION_PAIRS"))->c_str()] = Performance::Monitor::PHYSICS_2D_COLLISION_PAIRS;
	_Monitor[(new std::string("PHYSICS_2D_ISLAND_COUNT"))->c_str()] = Performance::Monitor::PHYSICS_2D_ISLAND_COUNT;
	_Monitor[(new std::string("PHYSICS_3D_ACTIVE_OBJECTS"))->c_str()] = Performance::Monitor::PHYSICS_3D_ACTIVE_OBJECTS;
	_Monitor[(new std::string("PHYSICS_3D_COLLISION_PAIRS"))->c_str()] = Performance::Monitor::PHYSICS_3D_COLLISION_PAIRS;
	_Monitor[(new std::string("PHYSICS_3D_ISLAND_COUNT"))->c_str()] = Performance::Monitor::PHYSICS_3D_ISLAND_COUNT;
	_Monitor[(new std::string("AUDIO_OUTPUT_LATENCY"))->c_str()] = Performance::Monitor::AUDIO_OUTPUT_LATENCY;
	_Monitor[(new std::string("NAVIGATION_ACTIVE_MAPS"))->c_str()] = Performance::Monitor::NAVIGATION_ACTIVE_MAPS;
	_Monitor[(new std::string("NAVIGATION_REGION_COUNT"))->c_str()] = Performance::Monitor::NAVIGATION_REGION_COUNT;
	_Monitor[(new std::string("NAVIGATION_AGENT_COUNT"))->c_str()] = Performance::Monitor::NAVIGATION_AGENT_COUNT;
	_Monitor[(new std::string("NAVIGATION_LINK_COUNT"))->c_str()] = Performance::Monitor::NAVIGATION_LINK_COUNT;
	_Monitor[(new std::string("NAVIGATION_POLYGON_COUNT"))->c_str()] = Performance::Monitor::NAVIGATION_POLYGON_COUNT;
	_Monitor[(new std::string("NAVIGATION_EDGE_COUNT"))->c_str()] = Performance::Monitor::NAVIGATION_EDGE_COUNT;
	_Monitor[(new std::string("NAVIGATION_EDGE_MERGE_COUNT"))->c_str()] = Performance::Monitor::NAVIGATION_EDGE_MERGE_COUNT;
	_Monitor[(new std::string("NAVIGATION_EDGE_CONNECTION_COUNT"))->c_str()] = Performance::Monitor::NAVIGATION_EDGE_CONNECTION_COUNT;
	_Monitor[(new std::string("NAVIGATION_EDGE_FREE_COUNT"))->c_str()] = Performance::Monitor::NAVIGATION_EDGE_FREE_COUNT;
	_Monitor[(new std::string("MONITOR_MAX"))->c_str()] = Performance::Monitor::MONITOR_MAX;
	js_singleton[(new std::string("Monitor"))->c_str()] = _Monitor;
}