#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/compressed_texture2d_array.hpp>

using namespace godot;

void register_classes_CompressedTexture2DArray() {
    qjs::Context::Module &_module = _General;
    _module.class_<CompressedTexture2DArray>("CompressedTexture2DArray")
           .constructor<>()
;}