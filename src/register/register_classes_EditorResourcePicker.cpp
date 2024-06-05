#include <godot_cpp/classes/editor_resource_picker.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/variant/packed_string_array.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_EditorResourcePicker() {
	qjs::Context::Module &_module = _Control;
	_module.class_<EditorResourcePicker>("EditorResourcePicker")
			.constructor<>()
			.property<&EditorResourcePicker::get_base_type, &EditorResourcePicker::set_base_type>("base_type")
			.property<&EditorResourcePicker::get_edited_resource, &EditorResourcePicker::set_edited_resource>("edited_resource")
			.property<&EditorResourcePicker::is_editable, &EditorResourcePicker::set_editable>("editable")
			.property<&EditorResourcePicker::is_toggle_mode, &EditorResourcePicker::set_toggle_mode>("toggle_mode")
			.fun<static_cast<void (EditorResourcePicker::*)(Object *)>(&EditorResourcePicker::_set_create_options)>("_set_create_options")
			.fun<static_cast<bool (EditorResourcePicker::*)(int32_t)>(&EditorResourcePicker::_handle_menu_selected)>("_handle_menu_selected")
			.fun<static_cast<PackedStringArray (EditorResourcePicker::*)() const>(&EditorResourcePicker::get_allowed_types)>("get_allowed_types")
			.fun<static_cast<void (EditorResourcePicker::*)(bool)>(&EditorResourcePicker::set_toggle_pressed)>("set_toggle_pressed");
}