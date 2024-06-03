#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/v_separator.hpp>

using namespace godot;

void register_classes_VSeparator() {
    qjs::Context::Module &_module = _Control;
    _module.class_<VSeparator>("VSeparator")
           .constructor<>()
;}