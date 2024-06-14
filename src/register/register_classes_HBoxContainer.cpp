#include <godot_cpp/classes/h_box_container.hpp>
#include <godot_cpp/classes/box_container.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_HBoxContainer() {
    qjs::Context::Module &_module = get_Control_module();
    _module.class_<HBoxContainer>("HBoxContainer")
            .constructor<>()
            .base<BoxContainer>()
;}