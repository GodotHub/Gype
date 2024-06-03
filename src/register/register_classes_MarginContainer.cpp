#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/margin_container.hpp>

using namespace godot;

void register_classes_MarginContainer() {
    qjs::Context::Module &_module = _Control;
    _module.class_<MarginContainer>("MarginContainer")
           .constructor<>()
;}