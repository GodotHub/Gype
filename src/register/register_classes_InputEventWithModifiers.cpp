#include <godot_cpp/classes/input_event_with_modifiers.hpp>
#include <godot_cpp/core/type_info.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/input_event_from_window.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_InputEventWithModifiers() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<InputEventWithModifiers>("InputEventWithModifiers")
            .constructor<>()
            .base<InputEventFromWindow>()
            .property<static_cast<bool(InputEventWithModifiers::*)()const>(&InputEventWithModifiers::is_command_or_control_autoremap),static_cast<void(InputEventWithModifiers::*)(bool)>(&InputEventWithModifiers::set_command_or_control_autoremap)>("command_or_control_autoremap")
            .property<static_cast<bool(InputEventWithModifiers::*)()const>(&InputEventWithModifiers::is_alt_pressed),static_cast<void(InputEventWithModifiers::*)(bool)>(&InputEventWithModifiers::set_alt_pressed)>("alt_pressed")
            .property<static_cast<bool(InputEventWithModifiers::*)()const>(&InputEventWithModifiers::is_shift_pressed),static_cast<void(InputEventWithModifiers::*)(bool)>(&InputEventWithModifiers::set_shift_pressed)>("shift_pressed")
            .property<static_cast<bool(InputEventWithModifiers::*)()const>(&InputEventWithModifiers::is_ctrl_pressed),static_cast<void(InputEventWithModifiers::*)(bool)>(&InputEventWithModifiers::set_ctrl_pressed)>("ctrl_pressed")
            .property<static_cast<bool(InputEventWithModifiers::*)()const>(&InputEventWithModifiers::is_meta_pressed),static_cast<void(InputEventWithModifiers::*)(bool)>(&InputEventWithModifiers::set_meta_pressed)>("meta_pressed")
            .fun<static_cast<bool(InputEventWithModifiers::*)()const>(&InputEventWithModifiers::is_command_or_control_pressed)>("is_command_or_control_pressed")
            .fun<static_cast<BitField<KeyModifierMask>(InputEventWithModifiers::*)()const>(&InputEventWithModifiers::get_modifiers_mask)>("get_modifiers_mask")
;}