#include <godot_cpp/classes/popup.hpp>
#include <godot_cpp/classes/window.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_Popup() {
    qjs::Context::Module &_module = get_Node_module();
    _module.class_<Popup>("Popup")
            .constructor<>()
            .base<Window>()
;}