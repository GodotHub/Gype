#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/orm_material3d.hpp>

using namespace godot;

void register_classes_ORMMaterial3D() {
    qjs::Context::Module &_module = _General;
    _module.class_<ORMMaterial3D>("ORMMaterial3D")
           .constructor<>()
;}