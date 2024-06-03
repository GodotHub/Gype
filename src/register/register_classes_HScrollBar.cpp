#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/h_scroll_bar.hpp>

using namespace godot;

void register_classes_HScrollBar() {
    qjs::Context::Module &_module = _Control;
    _module.class_<HScrollBar>("HScrollBar")
           .constructor<>()
;}