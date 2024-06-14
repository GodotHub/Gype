#include <godot_cpp/classes/editor_resource_picker.hpp>
#include <godot_cpp/classes/editor_script_picker.hpp>
#include <godot_cpp/classes/node.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_EditorScriptPicker() {
	qjs::Context::Module &_module = get_Control_module();
	_module.class_<EditorScriptPicker>("EditorScriptPicker")
			.constructor<>()
			.base<EditorResourcePicker>()
			.property<static_cast<Node *(EditorScriptPicker::*)() const>(&EditorScriptPicker::get_script_owner), static_cast<void (EditorScriptPicker::*)(Node *)>(&EditorScriptPicker::set_script_owner)>((new std::string("script_owner"))->c_str());
}