#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/quad_mesh.hpp>

using namespace godot;

void register_classes_QuadMesh() {
    qjs::Context::Module &_module = _General;
    _module.class_<QuadMesh>("QuadMesh")
           .constructor<>()
;}