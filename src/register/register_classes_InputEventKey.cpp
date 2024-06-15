#include <godot_cpp/classes/input_event_key.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/input_event_with_modifiers.hpp>
#include <godot_cpp/variant/string.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_InputEventKey() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<InputEventKey>("InputEventKey")
            .constructor<>()
            .base<InputEventWithModifiers>()
            .property<static_cast<void(InputEventKey::*)(bool)>(&InputEventKey::set_pressed)>("{'name': 'set_pressed', 'is_const': False, 'is_vararg': False, 'is_static': False, 'is_virtual': False, 'hash': 2586408642, 'arguments': [{'name': 'pressed', 'type': 'bool'}]}")
            .property<static_cast<Key(InputEventKey::*)()const>(&InputEventKey::get_keycode),static_cast<void(InputEventKey::*)(Key)>(&InputEventKey::set_keycode)>("keycode")
            .property<static_cast<Key(InputEventKey::*)()const>(&InputEventKey::get_physical_keycode),static_cast<void(InputEventKey::*)(Key)>(&InputEventKey::set_physical_keycode)>("physical_keycode")
            .property<static_cast<Key(InputEventKey::*)()const>(&InputEventKey::get_key_label),static_cast<void(InputEventKey::*)(Key)>(&InputEventKey::set_key_label)>("key_label")
            .property<static_cast<int64_t(InputEventKey::*)()const>(&InputEventKey::get_unicode),static_cast<void(InputEventKey::*)(int64_t)>(&InputEventKey::set_unicode)>("unicode")
            .property<static_cast<KeyLocation(InputEventKey::*)()const>(&InputEventKey::get_location),static_cast<void(InputEventKey::*)(KeyLocation)>(&InputEventKey::set_location)>("location")
            .property<static_cast<void(InputEventKey::*)(bool)>(&InputEventKey::set_echo)>("{'name': 'set_echo', 'is_const': False, 'is_vararg': False, 'is_static': False, 'is_virtual': False, 'hash': 2586408642, 'arguments': [{'name': 'echo', 'type': 'bool'}]}")
            .fun<static_cast<Key(InputEventKey::*)()const>(&InputEventKey::get_keycode_with_modifiers)>("get_keycode_with_modifiers")
            .fun<static_cast<Key(InputEventKey::*)()const>(&InputEventKey::get_physical_keycode_with_modifiers)>("get_physical_keycode_with_modifiers")
            .fun<static_cast<Key(InputEventKey::*)()const>(&InputEventKey::get_key_label_with_modifiers)>("get_key_label_with_modifiers")
            .fun<static_cast<String(InputEventKey::*)()const>(&InputEventKey::as_text_keycode)>("as_text_keycode")
            .fun<static_cast<String(InputEventKey::*)()const>(&InputEventKey::as_text_physical_keycode)>("as_text_physical_keycode")
            .fun<static_cast<String(InputEventKey::*)()const>(&InputEventKey::as_text_key_label)>("as_text_key_label")
            .fun<static_cast<String(InputEventKey::*)()const>(&InputEventKey::as_text_location)>("as_text_location")
;}