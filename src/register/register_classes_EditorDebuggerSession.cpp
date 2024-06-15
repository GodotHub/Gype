#include <godot_cpp/classes/editor_debugger_session.hpp>
#include <godot_cpp/classes/control.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/variant/string.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_EditorDebuggerSession() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<EditorDebuggerSession>("EditorDebuggerSession")
            .constructor<>()
            .base<RefCounted>()
            .fun<static_cast<void(EditorDebuggerSession::*)(const String &,const Array &)>(&EditorDebuggerSession::send_message)>("send_message")
            .fun<static_cast<void(EditorDebuggerSession::*)(const String &,bool,const Array &)>(&EditorDebuggerSession::toggle_profiler)>("toggle_profiler")
            .fun<static_cast<bool(EditorDebuggerSession::*)()>(&EditorDebuggerSession::is_breaked)>("is_breaked")
            .fun<static_cast<bool(EditorDebuggerSession::*)()>(&EditorDebuggerSession::is_debuggable)>("is_debuggable")
            .fun<static_cast<bool(EditorDebuggerSession::*)()>(&EditorDebuggerSession::is_active)>("is_active")
            .fun<static_cast<void(EditorDebuggerSession::*)(Control *)>(&EditorDebuggerSession::add_session_tab)>("add_session_tab")
            .fun<static_cast<void(EditorDebuggerSession::*)(Control *)>(&EditorDebuggerSession::remove_session_tab)>("remove_session_tab")
;}