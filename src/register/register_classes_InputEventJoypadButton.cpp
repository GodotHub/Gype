#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/input_event_joypad_button.hpp>

using namespace godot;

void register_classes_InputEventJoypadButton() {
    qjs::Context::Module &_module = _General;
    _module.class_<InputEventJoypadButton>("InputEventJoypadButton")
           .constructor<>()
           .property<InputEventJoypadButton::get_button_index, InputEventJoypadButton::set_button_index>("button_index")
           .property<InputEventJoypadButton::get_pressure, InputEventJoypadButton::set_pressure>("pressure")
           .property<InputEventJoypadButton::is_pressed, InputEventJoypadButton::set_pressed>("pressed")
;}