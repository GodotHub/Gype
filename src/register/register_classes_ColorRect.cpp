#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/color_rect.hpp>

using namespace godot;

void register_classes_ColorRect() {
    qjs::Context::Module &_module = _Control;
    _module.class_<ColorRect>("ColorRect")
           .constructor<>()
           .property<ColorRect::get_color, ColorRect::set_color>("color")
;}