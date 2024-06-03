#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/point_mesh.hpp>

using namespace godot;

void register_classes_PointMesh() {
    qjs::Context::Module &_module = _General;
    _module.class_<PointMesh>("PointMesh")
           .constructor<>()
;}