#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/input_event_key.hpp>

using namespace godot;

void register_classes_InputEventKey() {
    qjs::Context::Module &_module = _General;
    _module.class_<InputEventKey>("InputEventKey")
           .constructor<>()
           .property<InputEventKey::is_pressed, InputEventKey::set_pressed>("pressed")
           .property<InputEventKey::get_keycode, InputEventKey::set_keycode>("keycode")
           .property<InputEventKey::get_physical_keycode, InputEventKey::set_physical_keycode>("physical_keycode")
           .property<InputEventKey::get_key_label, InputEventKey::set_key_label>("key_label")
           .property<InputEventKey::get_unicode, InputEventKey::set_unicode>("unicode")
           .property<InputEventKey::is_echo, InputEventKey::set_echo>("echo")
		    .fun<static_cast<Key(InputEventKey::*)()const>(&InputEventKey::get_keycode_with_modifiers)>("get_keycode_with_modifiers")
		    .fun<static_cast<Key(InputEventKey::*)()const>(&InputEventKey::get_physical_keycode_with_modifiers)>("get_physical_keycode_with_modifiers")
		    .fun<static_cast<Key(InputEventKey::*)()const>(&InputEventKey::get_key_label_with_modifiers)>("get_key_label_with_modifiers")
		    .fun<static_cast<String(InputEventKey::*)()const>(&InputEventKey::as_text_keycode)>("as_text_keycode")
		    .fun<static_cast<String(InputEventKey::*)()const>(&InputEventKey::as_text_physical_keycode)>("as_text_physical_keycode")
		    .fun<static_cast<String(InputEventKey::*)()const>(&InputEventKey::as_text_key_label)>("as_text_key_label")
;}