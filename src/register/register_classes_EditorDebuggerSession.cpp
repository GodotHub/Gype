#include <godot_cpp/classes/control.hpp>
#include <godot_cpp/classes/editor_debugger_session.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_EditorDebuggerSession() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<EditorDebuggerSession>("EditorDebuggerSession")
			.constructor<>()
			.base<RefCounted>()
			.fun<static_cast<void (EditorDebuggerSession::*)(const String &, const Array &)>(&EditorDebuggerSession::send_message)>((new std::string("send_message"))->c_str())
			.fun<static_cast<void (EditorDebuggerSession::*)(const String &, bool, const Array &)>(&EditorDebuggerSession::toggle_profiler)>((new std::string("toggle_profiler"))->c_str())
			.fun<static_cast<bool (EditorDebuggerSession::*)()>(&EditorDebuggerSession::is_breaked)>((new std::string("is_breaked"))->c_str())
			.fun<static_cast<bool (EditorDebuggerSession::*)()>(&EditorDebuggerSession::is_debuggable)>((new std::string("is_debuggable"))->c_str())
			.fun<static_cast<bool (EditorDebuggerSession::*)()>(&EditorDebuggerSession::is_active)>((new std::string("is_active"))->c_str())
			.fun<static_cast<void (EditorDebuggerSession::*)(Control *)>(&EditorDebuggerSession::add_session_tab)>((new std::string("add_session_tab"))->c_str())
			.fun<static_cast<void (EditorDebuggerSession::*)(Control *)>(&EditorDebuggerSession::remove_session_tab)>((new std::string("remove_session_tab"))->c_str());
}