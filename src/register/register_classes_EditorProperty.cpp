#include <godot_cpp/classes/editor_property.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <godot_cpp/classes/container.hpp>
#include <godot_cpp/classes/control.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/string_name.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_EditorProperty() {
    qjs::Context::Module &_module = get_Control_module();
    _module.class_<EditorProperty>("EditorProperty")
            .constructor<>()
            .base<Container>()
            .property<static_cast<String(EditorProperty::*)()const>(&EditorProperty::get_label),static_cast<void(EditorProperty::*)(const String &)>(&EditorProperty::set_label)>("label")
            .property<static_cast<bool(EditorProperty::*)()const>(&EditorProperty::is_read_only),static_cast<void(EditorProperty::*)(bool)>(&EditorProperty::set_read_only)>("read_only")
            .property<static_cast<bool(EditorProperty::*)()const>(&EditorProperty::is_checkable),static_cast<void(EditorProperty::*)(bool)>(&EditorProperty::set_checkable)>("checkable")
            .property<static_cast<bool(EditorProperty::*)()const>(&EditorProperty::is_checked),static_cast<void(EditorProperty::*)(bool)>(&EditorProperty::set_checked)>("checked")
            .property<static_cast<bool(EditorProperty::*)()const>(&EditorProperty::is_draw_warning),static_cast<void(EditorProperty::*)(bool)>(&EditorProperty::set_draw_warning)>("draw_warning")
            .property<static_cast<bool(EditorProperty::*)()const>(&EditorProperty::is_keying),static_cast<void(EditorProperty::*)(bool)>(&EditorProperty::set_keying)>("keying")
            .property<static_cast<bool(EditorProperty::*)()const>(&EditorProperty::is_deletable),static_cast<void(EditorProperty::*)(bool)>(&EditorProperty::set_deletable)>("deletable")
            .fun<static_cast<void(EditorProperty::*)()>(&EditorProperty::_update_property)>("_update_property")
            .fun<static_cast<void(EditorProperty::*)(bool)>(&EditorProperty::_set_read_only)>("_set_read_only")
            .fun<static_cast<StringName(EditorProperty::*)()const>(&EditorProperty::get_edited_property)>("get_edited_property")
            .fun<static_cast<Object *(EditorProperty::*)()>(&EditorProperty::get_edited_object)>("get_edited_object")
            .fun<static_cast<void(EditorProperty::*)()>(&EditorProperty::update_property)>("update_property")
            .fun<static_cast<void(EditorProperty::*)(Control *)>(&EditorProperty::add_focusable)>("add_focusable")
            .fun<static_cast<void(EditorProperty::*)(Control *)>(&EditorProperty::set_bottom_editor)>("set_bottom_editor")
            .fun<static_cast<void(EditorProperty::*)(const StringName &,const Variant &,const StringName &,bool)>(&EditorProperty::emit_changed)>("emit_changed")
;}