#include <godot_cpp/classes/graph_element.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <godot_cpp/classes/container.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_GraphElement() {
    qjs::Context::Module &_module = get_Control_module();
    _module.class_<GraphElement>("GraphElement")
            .constructor<>()
            .base<Container>()
            .property<static_cast<Vector2(GraphElement::*)()const>(&GraphElement::get_position_offset),static_cast<void(GraphElement::*)(const Vector2 &)>(&GraphElement::set_position_offset)>("position_offset")
            .property<static_cast<bool(GraphElement::*)()const>(&GraphElement::is_resizable),static_cast<void(GraphElement::*)(bool)>(&GraphElement::set_resizable)>("resizable")
            .property<static_cast<bool(GraphElement::*)()>(&GraphElement::is_draggable),static_cast<void(GraphElement::*)(bool)>(&GraphElement::set_draggable)>("draggable")
            .property<static_cast<bool(GraphElement::*)()>(&GraphElement::is_selectable),static_cast<void(GraphElement::*)(bool)>(&GraphElement::set_selectable)>("selectable")
            .property<static_cast<bool(GraphElement::*)()>(&GraphElement::is_selected),static_cast<void(GraphElement::*)(bool)>(&GraphElement::set_selected)>("selected")
;}