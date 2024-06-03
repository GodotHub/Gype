#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/placeholder_material.hpp>

using namespace godot;

void register_classes_PlaceholderMaterial() {
    qjs::Context::Module &_module = _General;
    _module.class_<PlaceholderMaterial>("PlaceholderMaterial")
           .constructor<>()
;}