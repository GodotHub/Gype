#include <godot_cpp/classes/check_box.hpp>
#include <godot_cpp/classes/button.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_CheckBox() {
    qjs::Context::Module &_module = get_Control_module();
    _module.class_<CheckBox>("CheckBox")
            .constructor<>()
            .base<Button>()
;}