#include <godot_cpp/classes/v_scroll_bar.hpp>
#include <godot_cpp/classes/scroll_bar.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_VScrollBar() {
    qjs::Context::Module &_module = get_Control_module();
    _module.class_<VScrollBar>("VScrollBar")
            .constructor<>()
            .base<ScrollBar>()
;}