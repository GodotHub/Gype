#include <godot_cpp/classes/point_mesh.hpp>
#include <godot_cpp/classes/primitive_mesh.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_PointMesh() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<PointMesh>("PointMesh")
            .constructor<>()
            .base<PrimitiveMesh>()
;}