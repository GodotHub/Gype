#include "register/register_classes.h"
#include "register/utils.h"

using namespace godot;

void register_classes_CSGCombiner3D() {
    qjs::Context::Module &_module = _Node3D;
    _module.class_<CSGCombiner3D>("CSGCombiner3D")
           .constructor<>()
;}