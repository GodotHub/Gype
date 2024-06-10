#include "register/register_classes.h"
#include <godot_cpp/classes/editor_debugger_session.hpp>

using namespace godot;

void register_classes_EditorDebuggerSessionRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<EditorDebuggerSession>>("EditorDebuggerSessionRef").constructor<EditorDebuggerSession *>();
}