#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/placeholder_cubemap_array.hpp>

using namespace godot;

void register_classes_PlaceholderCubemapArray() {
    qjs::Context::Module &_module = _General;
    _module.class_<PlaceholderCubemapArray>("PlaceholderCubemapArray")
           .constructor<>()
;}