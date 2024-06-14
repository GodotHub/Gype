#include <godot_cpp/classes/quad_mesh.hpp>
#include <godot_cpp/classes/plane_mesh.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_QuadMesh() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<QuadMesh>("QuadMesh")
            .constructor<>()
            .base<PlaneMesh>()
;}