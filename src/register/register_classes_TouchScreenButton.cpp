#include <godot_cpp/classes/touch_screen_button.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/bit_map.hpp>
#include <godot_cpp/classes/node2d.hpp>
#include <godot_cpp/classes/shape2d.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/variant/string.hpp>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_TouchScreenButton() {
    qjs::Context::Module &_module = get_Node2D_module();
    _module.class_<TouchScreenButton>("TouchScreenButton")
            .constructor<>()
            .base<Node2D>()
            .property<static_cast<Ref<Texture2D>(TouchScreenButton::*)()const>(&TouchScreenButton::get_texture_normal),static_cast<void(TouchScreenButton::*)(const Ref<Texture2D> &)>(&TouchScreenButton::set_texture_normal)>("texture_normal")
            .property<static_cast<Ref<Texture2D>(TouchScreenButton::*)()const>(&TouchScreenButton::get_texture_pressed),static_cast<void(TouchScreenButton::*)(const Ref<Texture2D> &)>(&TouchScreenButton::set_texture_pressed)>("texture_pressed")
            .property<static_cast<Ref<BitMap>(TouchScreenButton::*)()const>(&TouchScreenButton::get_bitmask),static_cast<void(TouchScreenButton::*)(const Ref<BitMap> &)>(&TouchScreenButton::set_bitmask)>("bitmask")
            .property<static_cast<Ref<Shape2D>(TouchScreenButton::*)()const>(&TouchScreenButton::get_shape),static_cast<void(TouchScreenButton::*)(const Ref<Shape2D> &)>(&TouchScreenButton::set_shape)>("shape")
            .property<static_cast<bool(TouchScreenButton::*)()const>(&TouchScreenButton::is_shape_centered),static_cast<void(TouchScreenButton::*)(bool)>(&TouchScreenButton::set_shape_centered)>("shape_centered")
            .property<static_cast<bool(TouchScreenButton::*)()const>(&TouchScreenButton::is_shape_visible),static_cast<void(TouchScreenButton::*)(bool)>(&TouchScreenButton::set_shape_visible)>("shape_visible")
            .property<static_cast<bool(TouchScreenButton::*)()const>(&TouchScreenButton::is_passby_press_enabled),static_cast<void(TouchScreenButton::*)(bool)>(&TouchScreenButton::set_passby_press)>("passby_press")
            .property<static_cast<String(TouchScreenButton::*)()const>(&TouchScreenButton::get_action),static_cast<void(TouchScreenButton::*)(const String &)>(&TouchScreenButton::set_action)>("action")
            .property<static_cast<TouchScreenButton::VisibilityMode(TouchScreenButton::*)()const>(&TouchScreenButton::get_visibility_mode),static_cast<void(TouchScreenButton::*)(TouchScreenButton::VisibilityMode)>(&TouchScreenButton::set_visibility_mode)>("visibility_mode")
            .fun<static_cast<bool(TouchScreenButton::*)()const>(&TouchScreenButton::is_pressed)>("is_pressed")
;    qjs::Value _VisibilityMode = context->newObject();
    _VisibilityMode["VISIBILITY_ALWAYS"] = TouchScreenButton::VisibilityMode::VISIBILITY_ALWAYS;
    _VisibilityMode["VISIBILITY_TOUCHSCREEN_ONLY"] = TouchScreenButton::VisibilityMode::VISIBILITY_TOUCHSCREEN_ONLY;
    _module.add("VisibilityMode", std::move(_VisibilityMode));
}