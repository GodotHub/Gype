#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/compressed_cubemap.hpp>

using namespace godot;

void register_classes_CompressedCubemap() {
    qjs::Context::Module &_module = _General;
    _module.class_<CompressedCubemap>("CompressedCubemap")
           .constructor<>()
;}