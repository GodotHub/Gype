#include <godot_cpp/classes/input_event_from_window.hpp>
#include <godot_cpp/classes/input_event.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_InputEventFromWindow() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<InputEventFromWindow>("InputEventFromWindow")
            .constructor<>()
            .base<InputEvent>()
            .property<static_cast<int64_t(InputEventFromWindow::*)()const>(&InputEventFromWindow::get_window_id),static_cast<void(InputEventFromWindow::*)(int64_t)>(&InputEventFromWindow::set_window_id)>("window_id")
;}