#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/input_event_mouse_motion.hpp>

using namespace godot;

void register_classes_InputEventMouseMotion() {
    qjs::Context::Module &_module = _General;
    _module.class_<InputEventMouseMotion>("InputEventMouseMotion")
           .constructor<>()
           .property<InputEventMouseMotion::get_tilt, InputEventMouseMotion::set_tilt>("tilt")
           .property<InputEventMouseMotion::get_pressure, InputEventMouseMotion::set_pressure>("pressure")
           .property<InputEventMouseMotion::get_pen_inverted, InputEventMouseMotion::set_pen_inverted>("pen_inverted")
           .property<InputEventMouseMotion::get_relative, InputEventMouseMotion::set_relative>("relative")
           .property<InputEventMouseMotion::get_velocity, InputEventMouseMotion::set_velocity>("velocity")
;}