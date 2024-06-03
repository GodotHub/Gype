#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/input_event_screen_drag.hpp>

using namespace godot;

void register_classes_InputEventScreenDrag() {
    qjs::Context::Module &_module = _General;
    _module.class_<InputEventScreenDrag>("InputEventScreenDrag")
           .constructor<>()
           .property<InputEventScreenDrag::get_index, InputEventScreenDrag::set_index>("index")
           .property<InputEventScreenDrag::get_tilt, InputEventScreenDrag::set_tilt>("tilt")
           .property<InputEventScreenDrag::get_pressure, InputEventScreenDrag::set_pressure>("pressure")
           .property<InputEventScreenDrag::get_pen_inverted, InputEventScreenDrag::set_pen_inverted>("pen_inverted")
           .property<InputEventScreenDrag::get_position, InputEventScreenDrag::set_position>("position")
           .property<InputEventScreenDrag::get_relative, InputEventScreenDrag::set_relative>("relative")
           .property<InputEventScreenDrag::get_velocity, InputEventScreenDrag::set_velocity>("velocity")
;}