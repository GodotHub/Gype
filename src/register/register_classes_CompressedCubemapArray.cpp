#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/compressed_cubemap_array.hpp>

using namespace godot;

void register_classes_CompressedCubemapArray() {
    qjs::Context::Module &_module = _General;
    _module.class_<CompressedCubemapArray>("CompressedCubemapArray")
           .constructor<>()
;}