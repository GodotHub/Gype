#include <godot_cpp/classes/v_box_container.hpp>
#include <godot_cpp/classes/box_container.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_VBoxContainer() {
    qjs::Context::Module &_module = get_Control_module();
    _module.class_<VBoxContainer>("VBoxContainer")
            .constructor<>()
            .base<BoxContainer>()
;}