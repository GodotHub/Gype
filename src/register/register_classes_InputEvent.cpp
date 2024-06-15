#include <godot_cpp/classes/input_event.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/transform2d.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_InputEvent() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<InputEvent>("InputEvent")
            .constructor<>()
            .base<Resource>()
            .static_fun<&InputEvent::DEVICE_ID_EMULATION>("DEVICE_ID_EMULATION")
            .property<static_cast<int32_t(InputEvent::*)()const>(&InputEvent::get_device),static_cast<void(InputEvent::*)(int32_t)>(&InputEvent::set_device)>("device")
            .fun<static_cast<bool(InputEvent::*)(const StringName &,bool)const>(&InputEvent::is_action)>("is_action")
            .fun<static_cast<bool(InputEvent::*)(const StringName &,bool,bool)const>(&InputEvent::is_action_pressed)>("is_action_pressed")
            .fun<static_cast<bool(InputEvent::*)(const StringName &,bool)const>(&InputEvent::is_action_released)>("is_action_released")
            .fun<static_cast<double(InputEvent::*)(const StringName &,bool)const>(&InputEvent::get_action_strength)>("get_action_strength")
            .fun<static_cast<bool(InputEvent::*)()const>(&InputEvent::is_canceled)>("is_canceled")
            .fun<static_cast<bool(InputEvent::*)()const>(&InputEvent::is_pressed)>("is_pressed")
            .fun<static_cast<bool(InputEvent::*)()const>(&InputEvent::is_released)>("is_released")
            .fun<static_cast<bool(InputEvent::*)()const>(&InputEvent::is_echo)>("is_echo")
            .fun<static_cast<String(InputEvent::*)()const>(&InputEvent::as_text)>("as_text")
            .fun<static_cast<bool(InputEvent::*)(const Ref<InputEvent> &,bool)const>(&InputEvent::is_match)>("is_match")
            .fun<static_cast<bool(InputEvent::*)()const>(&InputEvent::is_action_type)>("is_action_type")
            .fun<static_cast<bool(InputEvent::*)(const Ref<InputEvent> &)>(&InputEvent::accumulate)>("accumulate")
            .fun<static_cast<Ref<InputEvent>(InputEvent::*)(const Transform2D &,const Vector2 &)const>(&InputEvent::xformed_by)>("xformed_by")
;}