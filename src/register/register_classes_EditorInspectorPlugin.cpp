#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/editor_inspector_plugin.hpp>

using namespace godot;

void register_classes_EditorInspectorPlugin() {
    qjs::Context::Module &_module = _General;
    _module.class_<EditorInspectorPlugin>("EditorInspectorPlugin")
           .constructor<>()
		    .fun<static_cast<bool(EditorInspectorPlugin::*)(Object *)const>(&EditorInspectorPlugin::_can_handle)>("_can_handle")
		    .fun<static_cast<void(EditorInspectorPlugin::*)(Object *)>(&EditorInspectorPlugin::_parse_begin)>("_parse_begin")
		    .fun<static_cast<void(EditorInspectorPlugin::*)(Object *,const String &)>(&EditorInspectorPlugin::_parse_category)>("_parse_category")
		    .fun<static_cast<void(EditorInspectorPlugin::*)(Object *,const String &)>(&EditorInspectorPlugin::_parse_group)>("_parse_group")
		    .fun<static_cast<bool(EditorInspectorPlugin::*)(Object *,Variant::Type,const String &,PropertyHint,const String &,BitField<PropertyUsageFlags>,bool)>(&EditorInspectorPlugin::_parse_property)>("_parse_property")
		    .fun<static_cast<void(EditorInspectorPlugin::*)(Object *)>(&EditorInspectorPlugin::_parse_end)>("_parse_end")
		    .fun<static_cast<void(EditorInspectorPlugin::*)(Control *)>(&EditorInspectorPlugin::add_custom_control)>("add_custom_control")
		    .fun<static_cast<void(EditorInspectorPlugin::*)(const String &,Control *,bool)>(&EditorInspectorPlugin::add_property_editor)>("add_property_editor")
		    .fun<static_cast<void(EditorInspectorPlugin::*)(const String &,const PackedStringArray &,Control *)>(&EditorInspectorPlugin::add_property_editor_for_multiple_properties)>("add_property_editor_for_multiple_properties")
;}