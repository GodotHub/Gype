#include <godot_cpp/classes/editor_inspector.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/scroll_container.hpp>
#include <godot_cpp/variant/string.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_EditorInspector() {
	qjs::Context::Module &_module = get_Control_module();
	_module.class_<EditorInspector>("EditorInspector")
			.constructor<>()
			.base<ScrollContainer>()
			.fun<static_cast<String (EditorInspector::*)() const>(&EditorInspector::get_selected_path)>((new std::string("get_selected_path"))->c_str())
			.fun<static_cast<Object *(EditorInspector::*)()>(&EditorInspector::get_edited_object)>((new std::string("get_edited_object"))->c_str());
}