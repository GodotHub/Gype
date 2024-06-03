#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/triangle_mesh.hpp>

using namespace godot;

void register_classes_TriangleMesh() {
    qjs::Context::Module &_module = _General;
    _module.class_<TriangleMesh>("TriangleMesh")
           .constructor<>()
;}