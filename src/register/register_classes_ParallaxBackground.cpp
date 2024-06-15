#include <godot_cpp/classes/parallax_background.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <godot_cpp/classes/canvas_layer.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_ParallaxBackground() {
    qjs::Context::Module &_module = get_Node_module();
    _module.class_<ParallaxBackground>("ParallaxBackground")
            .constructor<>()
            .base<CanvasLayer>()
            .property<static_cast<Vector2(ParallaxBackground::*)()const>(&ParallaxBackground::get_scroll_offset),static_cast<void(ParallaxBackground::*)(const Vector2 &)>(&ParallaxBackground::set_scroll_offset)>("scroll_offset")
            .property<static_cast<Vector2(ParallaxBackground::*)()const>(&ParallaxBackground::get_scroll_base_offset),static_cast<void(ParallaxBackground::*)(const Vector2 &)>(&ParallaxBackground::set_scroll_base_offset)>("scroll_base_offset")
            .property<static_cast<Vector2(ParallaxBackground::*)()const>(&ParallaxBackground::get_scroll_base_scale),static_cast<void(ParallaxBackground::*)(const Vector2 &)>(&ParallaxBackground::set_scroll_base_scale)>("scroll_base_scale")
            .property<static_cast<Vector2(ParallaxBackground::*)()const>(&ParallaxBackground::get_limit_begin),static_cast<void(ParallaxBackground::*)(const Vector2 &)>(&ParallaxBackground::set_limit_begin)>("scroll_limit_begin")
            .property<static_cast<Vector2(ParallaxBackground::*)()const>(&ParallaxBackground::get_limit_end),static_cast<void(ParallaxBackground::*)(const Vector2 &)>(&ParallaxBackground::set_limit_end)>("scroll_limit_end")
            .property<static_cast<bool(ParallaxBackground::*)()>(&ParallaxBackground::is_ignore_camera_zoom),static_cast<void(ParallaxBackground::*)(bool)>(&ParallaxBackground::set_ignore_camera_zoom)>("scroll_ignore_camera_zoom")
;}