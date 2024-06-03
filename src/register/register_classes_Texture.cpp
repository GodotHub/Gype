#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/texture.hpp>

using namespace godot;

void register_classes_Texture() {
    qjs::Context::Module &_module = _General;
    _module.class_<Texture>("Texture")
           .constructor<>()
;}