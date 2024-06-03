#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/placeholder_cubemap.hpp>

using namespace godot;

void register_classes_PlaceholderCubemap() {
    qjs::Context::Module &_module = _General;
    _module.class_<PlaceholderCubemap>("PlaceholderCubemap")
           .constructor<>()
;}