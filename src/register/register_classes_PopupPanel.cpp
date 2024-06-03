#include "register/register_classes.h"
#include "register/utils.h"

using namespace godot;

void register_classes_PopupPanel() {
    qjs::Context::Module &_module = _Node;
    _module.class_<PopupPanel>("PopupPanel")
           .constructor<>()
;}