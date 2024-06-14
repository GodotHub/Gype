#include <godot_cpp/classes/separator.hpp>
#include <godot_cpp/classes/control.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_Separator() {
    qjs::Context::Module &_module = get_Control_module();
    _module.class_<Separator>("Separator")
            .constructor<>()
            .base<Control>()
;}