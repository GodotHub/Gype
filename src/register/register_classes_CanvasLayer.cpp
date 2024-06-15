#include <godot_cpp/classes/canvas_layer.hpp>
#include <godot_cpp/variant/transform2d.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/variant/rid.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_CanvasLayer() {
    qjs::Context::Module &_module = get_Node_module();
    _module.class_<CanvasLayer>("CanvasLayer")
            .constructor<>()
            .base<Node>()
            .property<static_cast<int32_t(CanvasLayer::*)()const>(&CanvasLayer::get_layer),static_cast<void(CanvasLayer::*)(int32_t)>(&CanvasLayer::set_layer)>("layer")
            .property<static_cast<bool(CanvasLayer::*)()const>(&CanvasLayer::is_visible),static_cast<void(CanvasLayer::*)(bool)>(&CanvasLayer::set_visible)>("visible")
            .property<static_cast<Vector2(CanvasLayer::*)()const>(&CanvasLayer::get_offset),static_cast<void(CanvasLayer::*)(const Vector2 &)>(&CanvasLayer::set_offset)>("offset")
            .property<static_cast<double(CanvasLayer::*)()const>(&CanvasLayer::get_rotation),static_cast<void(CanvasLayer::*)(double)>(&CanvasLayer::set_rotation)>("rotation")
            .property<static_cast<Vector2(CanvasLayer::*)()const>(&CanvasLayer::get_scale),static_cast<void(CanvasLayer::*)(const Vector2 &)>(&CanvasLayer::set_scale)>("scale")
            .property<static_cast<Transform2D(CanvasLayer::*)()const>(&CanvasLayer::get_transform),static_cast<void(CanvasLayer::*)(const Transform2D &)>(&CanvasLayer::set_transform)>("transform")
            .property<static_cast<Node *(CanvasLayer::*)()const>(&CanvasLayer::get_custom_viewport),static_cast<void(CanvasLayer::*)(Node *)>(&CanvasLayer::set_custom_viewport)>("custom_viewport")
            .property<static_cast<bool(CanvasLayer::*)()const>(&CanvasLayer::is_following_viewport),static_cast<void(CanvasLayer::*)(bool)>(&CanvasLayer::set_follow_viewport)>("follow_viewport_enabled")
            .property<static_cast<double(CanvasLayer::*)()const>(&CanvasLayer::get_follow_viewport_scale),static_cast<void(CanvasLayer::*)(double)>(&CanvasLayer::set_follow_viewport_scale)>("follow_viewport_scale")
            .fun<static_cast<void(CanvasLayer::*)()>(&CanvasLayer::show)>("show")
            .fun<static_cast<void(CanvasLayer::*)()>(&CanvasLayer::hide)>("hide")
            .fun<static_cast<Transform2D(CanvasLayer::*)()const>(&CanvasLayer::get_final_transform)>("get_final_transform")
            .fun<static_cast<RID(CanvasLayer::*)()const>(&CanvasLayer::get_canvas)>("get_canvas")
;}