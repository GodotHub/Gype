#include <godot_cpp/classes/performance.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/variant/callable.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_singletons_Performance() {
	qjs::Value js_singleton = context->newObject();
    Performance *singleton = Performance::get_singleton();
    js_singleton.add("get_monitor", [singleton](Performance::Monitor monitor)->double{return singleton->get_monitor(monitor);});
    js_singleton.add("add_custom_monitor", [singleton](const StringName & id,const Callable & callable,const Array & arguments)->void{singleton->add_custom_monitor(id,callable,arguments);});
    js_singleton.add("remove_custom_monitor", [singleton](const StringName & id)->void{singleton->remove_custom_monitor(id);});
    js_singleton.add("has_custom_monitor", [singleton](const StringName & id)->bool{return singleton->has_custom_monitor(id);});
    js_singleton.add("get_custom_monitor", [singleton](const StringName & id)->Variant{return singleton->get_custom_monitor(id);});
    js_singleton.add("get_monitor_modification_time", [singleton]()->int64_t{return singleton->get_monitor_modification_time();});
    js_singleton.add("get_custom_monitor_names", [singleton]()->TypedArray<StringName>{return singleton->get_custom_monitor_names();});
    context->global()["Performance"] = js_singleton;

    qjs::Value _Monitor = context->newObject();
    _Monitor["TIME_FPS"] = Performance::Monitor::TIME_FPS;
    _Monitor["TIME_PROCESS"] = Performance::Monitor::TIME_PROCESS;
    _Monitor["TIME_PHYSICS_PROCESS"] = Performance::Monitor::TIME_PHYSICS_PROCESS;
    _Monitor["TIME_NAVIGATION_PROCESS"] = Performance::Monitor::TIME_NAVIGATION_PROCESS;
    _Monitor["MEMORY_STATIC"] = Performance::Monitor::MEMORY_STATIC;
    _Monitor["MEMORY_STATIC_MAX"] = Performance::Monitor::MEMORY_STATIC_MAX;
    _Monitor["MEMORY_MESSAGE_BUFFER_MAX"] = Performance::Monitor::MEMORY_MESSAGE_BUFFER_MAX;
    _Monitor["OBJECT_COUNT"] = Performance::Monitor::OBJECT_COUNT;
    _Monitor["OBJECT_RESOURCE_COUNT"] = Performance::Monitor::OBJECT_RESOURCE_COUNT;
    _Monitor["OBJECT_NODE_COUNT"] = Performance::Monitor::OBJECT_NODE_COUNT;
    _Monitor["OBJECT_ORPHAN_NODE_COUNT"] = Performance::Monitor::OBJECT_ORPHAN_NODE_COUNT;
    _Monitor["RENDER_TOTAL_OBJECTS_IN_FRAME"] = Performance::Monitor::RENDER_TOTAL_OBJECTS_IN_FRAME;
    _Monitor["RENDER_TOTAL_PRIMITIVES_IN_FRAME"] = Performance::Monitor::RENDER_TOTAL_PRIMITIVES_IN_FRAME;
    _Monitor["RENDER_TOTAL_DRAW_CALLS_IN_FRAME"] = Performance::Monitor::RENDER_TOTAL_DRAW_CALLS_IN_FRAME;
    _Monitor["RENDER_VIDEO_MEM_USED"] = Performance::Monitor::RENDER_VIDEO_MEM_USED;
    _Monitor["RENDER_TEXTURE_MEM_USED"] = Performance::Monitor::RENDER_TEXTURE_MEM_USED;
    _Monitor["RENDER_BUFFER_MEM_USED"] = Performance::Monitor::RENDER_BUFFER_MEM_USED;
    _Monitor["PHYSICS_2D_ACTIVE_OBJECTS"] = Performance::Monitor::PHYSICS_2D_ACTIVE_OBJECTS;
    _Monitor["PHYSICS_2D_COLLISION_PAIRS"] = Performance::Monitor::PHYSICS_2D_COLLISION_PAIRS;
    _Monitor["PHYSICS_2D_ISLAND_COUNT"] = Performance::Monitor::PHYSICS_2D_ISLAND_COUNT;
    _Monitor["PHYSICS_3D_ACTIVE_OBJECTS"] = Performance::Monitor::PHYSICS_3D_ACTIVE_OBJECTS;
    _Monitor["PHYSICS_3D_COLLISION_PAIRS"] = Performance::Monitor::PHYSICS_3D_COLLISION_PAIRS;
    _Monitor["PHYSICS_3D_ISLAND_COUNT"] = Performance::Monitor::PHYSICS_3D_ISLAND_COUNT;
    _Monitor["AUDIO_OUTPUT_LATENCY"] = Performance::Monitor::AUDIO_OUTPUT_LATENCY;
    _Monitor["NAVIGATION_ACTIVE_MAPS"] = Performance::Monitor::NAVIGATION_ACTIVE_MAPS;
    _Monitor["NAVIGATION_REGION_COUNT"] = Performance::Monitor::NAVIGATION_REGION_COUNT;
    _Monitor["NAVIGATION_AGENT_COUNT"] = Performance::Monitor::NAVIGATION_AGENT_COUNT;
    _Monitor["NAVIGATION_LINK_COUNT"] = Performance::Monitor::NAVIGATION_LINK_COUNT;
    _Monitor["NAVIGATION_POLYGON_COUNT"] = Performance::Monitor::NAVIGATION_POLYGON_COUNT;
    _Monitor["NAVIGATION_EDGE_COUNT"] = Performance::Monitor::NAVIGATION_EDGE_COUNT;
    _Monitor["NAVIGATION_EDGE_MERGE_COUNT"] = Performance::Monitor::NAVIGATION_EDGE_MERGE_COUNT;
    _Monitor["NAVIGATION_EDGE_CONNECTION_COUNT"] = Performance::Monitor::NAVIGATION_EDGE_CONNECTION_COUNT;
    _Monitor["NAVIGATION_EDGE_FREE_COUNT"] = Performance::Monitor::NAVIGATION_EDGE_FREE_COUNT;
    _Monitor["MONITOR_MAX"] = Performance::Monitor::MONITOR_MAX;
    js_singleton["Monitor"] = _Monitor;
}