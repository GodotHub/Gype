#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/compressed_texture2d.hpp>

using namespace godot;

void register_classes_CompressedTexture2D() {
    qjs::Context::Module &_module = _General;
    _module.class_<CompressedTexture2D>("CompressedTexture2D")
           .constructor<>()
           .property<CompressedTexture2D::get_load_path, CompressedTexture2D::load>("load_path")
;}