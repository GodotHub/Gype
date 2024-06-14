
#include <godot_cpp/classes/editor_debugger_plugin.hpp>
#include <godot_cpp/classes/editor_debugger_session.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_EditorDebuggerPlugin() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<EditorDebuggerPlugin>("EditorDebuggerPlugin")
			.constructor<>()
			.base<RefCounted>()
			.fun<static_cast<void (EditorDebuggerPlugin::*)(int32_t)>(&EditorDebuggerPlugin::_setup_session)>((new std::string("_setup_session"))->c_str())
			.fun<static_cast<bool (EditorDebuggerPlugin::*)(const String &) const>(&EditorDebuggerPlugin::_has_capture)>((new std::string("_has_capture"))->c_str())
			.fun<static_cast<bool (EditorDebuggerPlugin::*)(const String &, const Array &, int32_t)>(&EditorDebuggerPlugin::_capture)>((new std::string("_capture"))->c_str())
			.fun<static_cast<Ref<EditorDebuggerSession> (EditorDebuggerPlugin::*)(int32_t)>(&EditorDebuggerPlugin::get_session)>((new std::string("get_session"))->c_str())
			.fun<static_cast<Array (EditorDebuggerPlugin::*)()>(&EditorDebuggerPlugin::get_sessions)>((new std::string("get_sessions"))->c_str());
}