#include <godot_cpp/classes/margin_container.hpp>
#include <godot_cpp/classes/container.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_MarginContainer() {
    qjs::Context::Module &_module = get_Control_module();
    _module.class_<MarginContainer>("MarginContainer")
            .constructor<>()
            .base<Container>()
;}