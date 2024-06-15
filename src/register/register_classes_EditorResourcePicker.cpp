#include <godot_cpp/classes/editor_resource_picker.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/h_box_container.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/packed_string_array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_EditorResourcePicker() {
    qjs::Context::Module &_module = get_Control_module();
    _module.class_<EditorResourcePicker>("EditorResourcePicker")
            .constructor<>()
            .base<HBoxContainer>()
            .property<static_cast<String(EditorResourcePicker::*)()const>(&EditorResourcePicker::get_base_type),static_cast<void(EditorResourcePicker::*)(const String &)>(&EditorResourcePicker::set_base_type)>("base_type")
            .property<static_cast<Ref<Resource>(EditorResourcePicker::*)()>(&EditorResourcePicker::get_edited_resource),static_cast<void(EditorResourcePicker::*)(const Ref<Resource> &)>(&EditorResourcePicker::set_edited_resource)>("edited_resource")
            .property<static_cast<bool(EditorResourcePicker::*)()const>(&EditorResourcePicker::is_editable),static_cast<void(EditorResourcePicker::*)(bool)>(&EditorResourcePicker::set_editable)>("editable")
            .property<static_cast<bool(EditorResourcePicker::*)()const>(&EditorResourcePicker::is_toggle_mode),static_cast<void(EditorResourcePicker::*)(bool)>(&EditorResourcePicker::set_toggle_mode)>("toggle_mode")
            .fun<static_cast<void(EditorResourcePicker::*)(Object *)>(&EditorResourcePicker::_set_create_options)>("_set_create_options")
            .fun<static_cast<bool(EditorResourcePicker::*)(int32_t)>(&EditorResourcePicker::_handle_menu_selected)>("_handle_menu_selected")
            .fun<static_cast<PackedStringArray(EditorResourcePicker::*)()const>(&EditorResourcePicker::get_allowed_types)>("get_allowed_types")
            .fun<static_cast<void(EditorResourcePicker::*)(bool)>(&EditorResourcePicker::set_toggle_pressed)>("set_toggle_pressed")
;}