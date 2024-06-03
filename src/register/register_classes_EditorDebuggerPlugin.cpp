#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/editor_debugger_plugin.hpp>

using namespace godot;

void register_classes_EditorDebuggerPlugin() {
    qjs::Context::Module &_module = _General;
    _module.class_<EditorDebuggerPlugin>("EditorDebuggerPlugin")
           .constructor<>()
		    .fun<static_cast<void(EditorDebuggerPlugin::*)(int32_t)>(&EditorDebuggerPlugin::_setup_session)>("_setup_session")
		    .fun<static_cast<bool(EditorDebuggerPlugin::*)(const String &)const>(&EditorDebuggerPlugin::_has_capture)>("_has_capture")
		    .fun<static_cast<bool(EditorDebuggerPlugin::*)(const String &,const Array &,int32_t)>(&EditorDebuggerPlugin::_capture)>("_capture")
		    .fun<static_cast<Ref<EditorDebuggerSession>(EditorDebuggerPlugin::*)(int32_t)>(&EditorDebuggerPlugin::get_session)>("get_session")
		    .fun<static_cast<Array(EditorDebuggerPlugin::*)()>(&EditorDebuggerPlugin::get_sessions)>("get_sessions")
;}