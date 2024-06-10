#include <godot_cpp/classes/editor_inspector.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/variant/string.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_EditorInspector() {
	qjs::Context::Module &_module = get_Control_module();
	_module.class_<EditorInspector>("EditorInspector")
			.constructor<>()
			.fun<static_cast<String (EditorInspector::*)() const>(&EditorInspector::get_selected_path)>("get_selected_path")
			.fun<static_cast<Object *(EditorInspector::*)()>(&EditorInspector::get_edited_object)>("get_edited_object");
}