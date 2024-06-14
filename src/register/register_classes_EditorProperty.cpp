#include <godot_cpp/classes/container.hpp>
#include <godot_cpp/classes/control.hpp>
#include <godot_cpp/classes/editor_property.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_EditorProperty() {
	qjs::Context::Module &_module = get_Control_module();
	_module.class_<EditorProperty>("EditorProperty")
			.constructor<>()
			.base<Container>()
			.property<static_cast<String (EditorProperty::*)() const>(&EditorProperty::get_label), static_cast<void (EditorProperty::*)(const String &)>(&EditorProperty::set_label)>((new std::string("label"))->c_str())
			.property<static_cast<bool (EditorProperty::*)() const>(&EditorProperty::is_read_only), static_cast<void (EditorProperty::*)(bool)>(&EditorProperty::set_read_only)>((new std::string("read_only"))->c_str())
			.property<static_cast<bool (EditorProperty::*)() const>(&EditorProperty::is_checkable), static_cast<void (EditorProperty::*)(bool)>(&EditorProperty::set_checkable)>((new std::string("checkable"))->c_str())
			.property<static_cast<bool (EditorProperty::*)() const>(&EditorProperty::is_checked), static_cast<void (EditorProperty::*)(bool)>(&EditorProperty::set_checked)>((new std::string("checked"))->c_str())
			.property<static_cast<bool (EditorProperty::*)() const>(&EditorProperty::is_draw_warning), static_cast<void (EditorProperty::*)(bool)>(&EditorProperty::set_draw_warning)>((new std::string("draw_warning"))->c_str())
			.property<static_cast<bool (EditorProperty::*)() const>(&EditorProperty::is_keying), static_cast<void (EditorProperty::*)(bool)>(&EditorProperty::set_keying)>((new std::string("keying"))->c_str())
			.property<static_cast<bool (EditorProperty::*)() const>(&EditorProperty::is_deletable), static_cast<void (EditorProperty::*)(bool)>(&EditorProperty::set_deletable)>((new std::string("deletable"))->c_str())
			.fun<static_cast<void (EditorProperty::*)()>(&EditorProperty::_update_property)>((new std::string("_update_property"))->c_str())
			.fun<static_cast<void (EditorProperty::*)(bool)>(&EditorProperty::_set_read_only)>((new std::string("_set_read_only"))->c_str())
			.fun<static_cast<StringName (EditorProperty::*)() const>(&EditorProperty::get_edited_property)>((new std::string("get_edited_property"))->c_str())
			.fun<static_cast<Object *(EditorProperty::*)()>(&EditorProperty::get_edited_object)>((new std::string("get_edited_object"))->c_str())
			.fun<static_cast<void (EditorProperty::*)()>(&EditorProperty::update_property)>((new std::string("update_property"))->c_str())
			.fun<static_cast<void (EditorProperty::*)(Control *)>(&EditorProperty::add_focusable)>((new std::string("add_focusable"))->c_str())
			.fun<static_cast<void (EditorProperty::*)(Control *)>(&EditorProperty::set_bottom_editor)>((new std::string("set_bottom_editor"))->c_str())
			.fun<static_cast<void (EditorProperty::*)(const StringName &, const Variant &, const StringName &, bool)>(&EditorProperty::emit_changed)>((new std::string("emit_changed"))->c_str());
}