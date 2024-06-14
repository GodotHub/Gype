#include <godot_cpp/classes/panel.hpp>
#include <godot_cpp/classes/control.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_Panel() {
    qjs::Context::Module &_module = get_Control_module();
    _module.class_<Panel>("Panel")
            .constructor<>()
            .base<Control>()
;}