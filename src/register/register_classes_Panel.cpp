#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/panel.hpp>

using namespace godot;

void register_classes_Panel() {
    qjs::Context::Module &_module = _Control;
    _module.class_<Panel>("Panel")
           .constructor<>()
;}