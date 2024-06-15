#include <godot_cpp/classes/input_event_pan_gesture.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <godot_cpp/classes/input_event_gesture.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_InputEventPanGesture() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<InputEventPanGesture>("InputEventPanGesture")
            .constructor<>()
            .base<InputEventGesture>()
            .property<static_cast<Vector2(InputEventPanGesture::*)()const>(&InputEventPanGesture::get_delta),static_cast<void(InputEventPanGesture::*)(const Vector2 &)>(&InputEventPanGesture::set_delta)>("delta")
;}