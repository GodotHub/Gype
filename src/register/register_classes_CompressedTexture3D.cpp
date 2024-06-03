#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/compressed_texture3d.hpp>

using namespace godot;

void register_classes_CompressedTexture3D() {
    qjs::Context::Module &_module = _General;
    _module.class_<CompressedTexture3D>("CompressedTexture3D")
           .constructor<>()
           .property<CompressedTexture3D::get_load_path, CompressedTexture3D::load>("load_path")
;}