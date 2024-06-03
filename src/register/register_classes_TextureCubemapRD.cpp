#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/texture_cubemap_rd.hpp>

using namespace godot;

void register_classes_TextureCubemapRD() {
    qjs::Context::Module &_module = _General;
    _module.class_<TextureCubemapRD>("TextureCubemapRD")
           .constructor<>()
;}