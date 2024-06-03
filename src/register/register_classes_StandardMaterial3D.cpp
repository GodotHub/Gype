#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/standard_material3d.hpp>

using namespace godot;

void register_classes_StandardMaterial3D() {
    qjs::Context::Module &_module = _General;
    _module.class_<StandardMaterial3D>("StandardMaterial3D")
           .constructor<>()
;}