#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/input_event_magnify_gesture.hpp>

using namespace godot;

void register_classes_InputEventMagnifyGesture() {
    qjs::Context::Module &_module = _General;
    _module.class_<InputEventMagnifyGesture>("InputEventMagnifyGesture")
           .constructor<>()
           .property<InputEventMagnifyGesture::get_factor, InputEventMagnifyGesture::set_factor>("factor")
;}