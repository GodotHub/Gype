#include "register/register_classes.h"
#include "register/utils.h"

using namespace godot;

void register_classes_CanvasModulate() {
    qjs::Context::Module &_module = _Node2D;
    _module.class_<CanvasModulate>("CanvasModulate")
           .constructor<>()
           .property<CanvasModulate::get_color, CanvasModulate::set_color>("color")
;}