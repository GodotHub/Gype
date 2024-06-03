#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/v_scroll_bar.hpp>

using namespace godot;

void register_classes_VScrollBar() {
    qjs::Context::Module &_module = _Control;
    _module.class_<VScrollBar>("VScrollBar")
           .constructor<>()
;}