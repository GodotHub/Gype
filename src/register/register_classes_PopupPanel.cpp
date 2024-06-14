#include <godot_cpp/classes/popup_panel.hpp>
#include <godot_cpp/classes/popup.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_PopupPanel() {
    qjs::Context::Module &_module = get_Node_module();
    _module.class_<PopupPanel>("PopupPanel")
            .constructor<>()
            .base<Popup>()
;}