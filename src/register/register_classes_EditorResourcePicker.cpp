
#include <godot_cpp/classes/editor_resource_picker.hpp>
#include <godot_cpp/classes/h_box_container.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/packed_string_array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_EditorResourcePicker() {
	qjs::Context::Module &_module = get_Control_module();
	_module.class_<EditorResourcePicker>("EditorResourcePicker")
			.constructor<>()
			.base<HBoxContainer>()
			.property<static_cast<String (EditorResourcePicker::*)() const>(&EditorResourcePicker::get_base_type), static_cast<void (EditorResourcePicker::*)(const String &)>(&EditorResourcePicker::set_base_type)>((new std::string("base_type"))->c_str())
			.property<static_cast<Ref<Resource> (EditorResourcePicker::*)()>(&EditorResourcePicker::get_edited_resource), static_cast<void (EditorResourcePicker::*)(const Ref<Resource> &)>(&EditorResourcePicker::set_edited_resource)>((new std::string("edited_resource"))->c_str())
			.property<static_cast<bool (EditorResourcePicker::*)() const>(&EditorResourcePicker::is_editable), static_cast<void (EditorResourcePicker::*)(bool)>(&EditorResourcePicker::set_editable)>((new std::string("editable"))->c_str())
			.property<static_cast<bool (EditorResourcePicker::*)() const>(&EditorResourcePicker::is_toggle_mode), static_cast<void (EditorResourcePicker::*)(bool)>(&EditorResourcePicker::set_toggle_mode)>((new std::string("toggle_mode"))->c_str())
			.fun<static_cast<void (EditorResourcePicker::*)(Object *)>(&EditorResourcePicker::_set_create_options)>((new std::string("_set_create_options"))->c_str())
			.fun<static_cast<bool (EditorResourcePicker::*)(int32_t)>(&EditorResourcePicker::_handle_menu_selected)>((new std::string("_handle_menu_selected"))->c_str())
			.fun<static_cast<PackedStringArray (EditorResourcePicker::*)() const>(&EditorResourcePicker::get_allowed_types)>((new std::string("get_allowed_types"))->c_str())
			.fun<static_cast<void (EditorResourcePicker::*)(bool)>(&EditorResourcePicker::set_toggle_pressed)>((new std::string("set_toggle_pressed"))->c_str());
}