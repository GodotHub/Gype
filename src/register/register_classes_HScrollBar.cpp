#include <godot_cpp/classes/h_scroll_bar.hpp>
#include <godot_cpp/classes/scroll_bar.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_HScrollBar() {
    qjs::Context::Module &_module = get_Control_module();
    _module.class_<HScrollBar>("HScrollBar")
            .constructor<>()
            .base<ScrollBar>()
;}