#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/popup_panel.hpp>

using namespace godot;

void register_classes_PopupPanel() {
    qjs::Context::Module &_module = _Node;
    _module.class_<PopupPanel>("PopupPanel")
           .constructor<>()
;}