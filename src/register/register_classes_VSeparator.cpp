#include <godot_cpp/classes/v_separator.hpp>
#include <godot_cpp/classes/separator.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_VSeparator() {
    qjs::Context::Module &_module = get_Control_module();
    _module.class_<VSeparator>("VSeparator")
            .constructor<>()
            .base<Separator>()
;}