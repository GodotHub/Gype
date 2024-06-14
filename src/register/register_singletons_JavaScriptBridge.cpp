#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/java_script_bridge.hpp>
#include <godot_cpp/classes/java_script_object.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/templates/vararg.hpp>
#include <godot_cpp/variant/callable.hpp>
#include <godot_cpp/variant/packed_byte_array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <string>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_singletons_JavaScriptBridge() {
	qjs::Value js_singleton = context->newObject();
	JavaScriptBridge *singleton = JavaScriptBridge::get_singleton();
	js_singleton.add((new std::string("eval"))->c_str(), [singleton](const String &code, bool use_global_execution_context) -> Variant { return singleton->eval(code, use_global_execution_context); });
	js_singleton.add((new std::string("get_interface"))->c_str(), [singleton](const String &interface) -> Ref<JavaScriptObject> { return singleton->get_interface(interface); });
	js_singleton.add((new std::string("create_callback"))->c_str(), [singleton](const Callable &callable) -> Ref<JavaScriptObject> { return singleton->create_callback(callable); });
	js_singleton.add((new std::string("create_object"))->c_str(), [singleton](const String &object, rest<godot::Variant> args) -> Variant { return singleton->create_object(object, args); });
	js_singleton.add((new std::string("download_buffer"))->c_str(), [singleton](const PackedByteArray &buffer, const String &name, const String &mime) -> void { singleton->download_buffer(buffer, name, mime); });
	js_singleton.add((new std::string("pwa_needs_update"))->c_str(), [singleton]() -> bool { return singleton->pwa_needs_update(); });
	js_singleton.add((new std::string("pwa_update"))->c_str(), [singleton]() -> Error { return singleton->pwa_update(); });
	js_singleton.add((new std::string("force_fs_sync"))->c_str(), [singleton]() -> void { singleton->force_fs_sync(); });
	context->global()[(new std::string("JavaScriptBridge"))->c_str()] = js_singleton;
}