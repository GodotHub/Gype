#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/texture2d_array_rd.hpp>

using namespace godot;

void register_classes_Texture2DArrayRD() {
    qjs::Context::Module &_module = _General;
    _module.class_<Texture2DArrayRD>("Texture2DArrayRD")
           .constructor<>()
;}