#include <godot_cpp/classes/check_button.hpp>
#include <godot_cpp/classes/button.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_CheckButton() {
    qjs::Context::Module &_module = get_Control_module();
    _module.class_<CheckButton>("CheckButton")
            .constructor<>()
            .base<Button>()
;}