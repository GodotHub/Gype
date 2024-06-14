#include <godot_cpp/classes/node3d_gizmo.hpp>
#include <godot_cpp/classes/ref_counted.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_Node3DGizmo() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<Node3DGizmo>("Node3DGizmo")
            .constructor<>()
            .base<RefCounted>()
;}