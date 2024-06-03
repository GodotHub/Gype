#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/rectangle_shape2d.hpp>

using namespace godot;

void register_classes_RectangleShape2D() {
    qjs::Context::Module &_module = _General;
    _module.class_<RectangleShape2D>("RectangleShape2D")
           .constructor<>()
           .property<RectangleShape2D::get_size, RectangleShape2D::set_size>("size")
;}