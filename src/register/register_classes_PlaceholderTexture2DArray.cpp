#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/placeholder_texture2d_array.hpp>

using namespace godot;

void register_classes_PlaceholderTexture2DArray() {
    qjs::Context::Module &_module = _General;
    _module.class_<PlaceholderTexture2DArray>("PlaceholderTexture2DArray")
           .constructor<>()
;}