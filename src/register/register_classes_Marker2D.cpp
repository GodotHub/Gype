#include <godot_cpp/classes/marker2d.hpp>
#include <godot_cpp/classes/node2d.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_Marker2D() {
    qjs::Context::Module &_module = get_Node2D_module();
    _module.class_<Marker2D>("Marker2D")
            .constructor<>()
            .base<Node2D>()
            .property<static_cast<double(Marker2D::*)()const>(&Marker2D::get_gizmo_extents),static_cast<void(Marker2D::*)(double)>(&Marker2D::set_gizmo_extents)>("gizmo_extents")
;}