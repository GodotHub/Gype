#include <godot_cpp/classes/control.hpp>
#include <godot_cpp/classes/editor_property.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <godot_cpp/variant/variant.hpp>


#include "qjspp.hpp"
#include "register/register_classes.h"


using namespace godot;

void register_classes_EditorProperty() {
	qjs::Context::Module &_module = _Control;
	_module.class_<EditorProperty>("EditorProperty")
			.constructor<>()
			.property<&EditorProperty::get_label, &EditorProperty::set_label>("label")
			.property<&EditorProperty::is_read_only, &EditorProperty::set_read_only>("read_only")
			.property<&EditorProperty::is_checkable, &EditorProperty::set_checkable>("checkable")
			.property<&EditorProperty::is_checked, &EditorProperty::set_checked>("checked")
			.property<&EditorProperty::is_draw_warning, &EditorProperty::set_draw_warning>("draw_warning")
			.property<&EditorProperty::is_keying, &EditorProperty::set_keying>("keying")
			.property<&EditorProperty::is_deletable, &EditorProperty::set_deletable>("deletable")
			.fun<static_cast<void (EditorProperty::*)()>(&EditorProperty::_update_property)>("_update_property")
			.fun<static_cast<void (EditorProperty::*)(bool)>(&EditorProperty::_set_read_only)>("_set_read_only")
			.fun<static_cast<StringName (EditorProperty::*)() const>(&EditorProperty::get_edited_property)>("get_edited_property")
			.fun<static_cast<Object *(EditorProperty::*)()>(&EditorProperty::get_edited_object)>("get_edited_object")
			.fun<static_cast<void (EditorProperty::*)()>(&EditorProperty::update_property)>("update_property")
			.fun<static_cast<void (EditorProperty::*)(Control *)>(&EditorProperty::add_focusable)>("add_focusable")
			.fun<static_cast<void (EditorProperty::*)(Control *)>(&EditorProperty::set_bottom_editor)>("set_bottom_editor")
			.fun<static_cast<void (EditorProperty::*)(const StringName &, const Variant &, const StringName &, bool)>(&EditorProperty::emit_changed)>("emit_changed");
}