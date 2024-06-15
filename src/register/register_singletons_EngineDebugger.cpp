#include <godot_cpp/classes/engine_debugger.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/engine_profiler.hpp>
#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/variant/callable.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/string_name.hpp>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_singletons_EngineDebugger() {
	qjs::Value js_singleton = context->newObject();
    EngineDebugger *singleton = EngineDebugger::get_singleton();
    js_singleton.add("is_active", [singleton]()->bool{return singleton->is_active();});
    js_singleton.add("register_profiler", [singleton](const StringName & name,const Ref<EngineProfiler> & profiler)->void{singleton->register_profiler(name,profiler);});
    js_singleton.add("unregister_profiler", [singleton](const StringName & name)->void{singleton->unregister_profiler(name);});
    js_singleton.add("is_profiling", [singleton](const StringName & name)->bool{return singleton->is_profiling(name);});
    js_singleton.add("has_profiler", [singleton](const StringName & name)->bool{return singleton->has_profiler(name);});
    js_singleton.add("profiler_add_frame_data", [singleton](const StringName & name,const Array & data)->void{singleton->profiler_add_frame_data(name,data);});
    js_singleton.add("profiler_enable", [singleton](const StringName & name,bool enable,const Array & arguments)->void{singleton->profiler_enable(name,enable,arguments);});
    js_singleton.add("register_message_capture", [singleton](const StringName & name,const Callable & callable)->void{singleton->register_message_capture(name,callable);});
    js_singleton.add("unregister_message_capture", [singleton](const StringName & name)->void{singleton->unregister_message_capture(name);});
    js_singleton.add("has_capture", [singleton](const StringName & name)->bool{return singleton->has_capture(name);});
    js_singleton.add("send_message", [singleton](const String & message,const Array & data)->void{singleton->send_message(message,data);});
    context->global()["EngineDebugger"] = js_singleton;

}