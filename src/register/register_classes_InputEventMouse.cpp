#include <godot_cpp/classes/input_event_mouse.hpp>
#include <godot_cpp/core/type_info.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/input_event_with_modifiers.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_InputEventMouse() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<InputEventMouse>("InputEventMouse")
            .constructor<>()
            .base<InputEventWithModifiers>()
            .property<static_cast<BitField<MouseButtonMask>(InputEventMouse::*)()const>(&InputEventMouse::get_button_mask),static_cast<void(InputEventMouse::*)(BitField<MouseButtonMask>)>(&InputEventMouse::set_button_mask)>("button_mask")
            .property<static_cast<Vector2(InputEventMouse::*)()const>(&InputEventMouse::get_position),static_cast<void(InputEventMouse::*)(const Vector2 &)>(&InputEventMouse::set_position)>("position")
            .property<static_cast<Vector2(InputEventMouse::*)()const>(&InputEventMouse::get_global_position),static_cast<void(InputEventMouse::*)(const Vector2 &)>(&InputEventMouse::set_global_position)>("global_position")
;}