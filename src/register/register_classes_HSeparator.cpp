#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/h_separator.hpp>

using namespace godot;

void register_classes_HSeparator() {
    qjs::Context::Module &_module = _Control;
    _module.class_<HSeparator>("HSeparator")
           .constructor<>()
;}