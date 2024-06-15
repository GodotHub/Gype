#include <godot_cpp/classes/parallax_layer.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <godot_cpp/classes/node2d.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_ParallaxLayer() {
    qjs::Context::Module &_module = get_Node2D_module();
    _module.class_<ParallaxLayer>("ParallaxLayer")
            .constructor<>()
            .base<Node2D>()
            .property<static_cast<Vector2(ParallaxLayer::*)()const>(&ParallaxLayer::get_motion_scale),static_cast<void(ParallaxLayer::*)(const Vector2 &)>(&ParallaxLayer::set_motion_scale)>("motion_scale")
            .property<static_cast<Vector2(ParallaxLayer::*)()const>(&ParallaxLayer::get_motion_offset),static_cast<void(ParallaxLayer::*)(const Vector2 &)>(&ParallaxLayer::set_motion_offset)>("motion_offset")
            .property<static_cast<Vector2(ParallaxLayer::*)()const>(&ParallaxLayer::get_mirroring),static_cast<void(ParallaxLayer::*)(const Vector2 &)>(&ParallaxLayer::set_mirroring)>("motion_mirroring")
;}