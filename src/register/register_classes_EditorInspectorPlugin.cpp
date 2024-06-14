#include <godot_cpp/classes/control.hpp>
#include <godot_cpp/classes/editor_inspector_plugin.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/core/type_info.hpp>
#include <godot_cpp/variant/packed_string_array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_EditorInspectorPlugin() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<EditorInspectorPlugin>("EditorInspectorPlugin")
			.constructor<>()
			.base<RefCounted>()
			.fun<static_cast<bool (EditorInspectorPlugin::*)(Object *) const>(&EditorInspectorPlugin::_can_handle)>((new std::string("_can_handle"))->c_str())
			.fun<static_cast<void (EditorInspectorPlugin::*)(Object *)>(&EditorInspectorPlugin::_parse_begin)>((new std::string("_parse_begin"))->c_str())
			.fun<static_cast<void (EditorInspectorPlugin::*)(Object *, const String &)>(&EditorInspectorPlugin::_parse_category)>((new std::string("_parse_category"))->c_str())
			.fun<static_cast<void (EditorInspectorPlugin::*)(Object *, const String &)>(&EditorInspectorPlugin::_parse_group)>((new std::string("_parse_group"))->c_str())
			.fun<static_cast<bool (EditorInspectorPlugin::*)(Object *, Variant::Type, const String &, PropertyHint, const String &, BitField<PropertyUsageFlags>, bool)>(&EditorInspectorPlugin::_parse_property)>((new std::string("_parse_property"))->c_str())
			.fun<static_cast<void (EditorInspectorPlugin::*)(Object *)>(&EditorInspectorPlugin::_parse_end)>((new std::string("_parse_end"))->c_str())
			.fun<static_cast<void (EditorInspectorPlugin::*)(Control *)>(&EditorInspectorPlugin::add_custom_control)>((new std::string("add_custom_control"))->c_str())
			.fun<static_cast<void (EditorInspectorPlugin::*)(const String &, Control *, bool, const String &)>(&EditorInspectorPlugin::add_property_editor)>((new std::string("add_property_editor"))->c_str())
			.fun<static_cast<void (EditorInspectorPlugin::*)(const String &, const PackedStringArray &, Control *)>(&EditorInspectorPlugin::add_property_editor_for_multiple_properties)>((new std::string("add_property_editor_for_multiple_properties"))->c_str());
}