#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/style_box_line.hpp>

using namespace godot;

void register_classes_StyleBoxLine() {
    qjs::Context::Module &_module = _General;
    _module.class_<StyleBoxLine>("StyleBoxLine")
           .constructor<>()
           .property<StyleBoxLine::get_color, StyleBoxLine::set_color>("color")
           .property<StyleBoxLine::get_grow_begin, StyleBoxLine::set_grow_begin>("grow_begin")
           .property<StyleBoxLine::get_grow_end, StyleBoxLine::set_grow_end>("grow_end")
           .property<StyleBoxLine::get_thickness, StyleBoxLine::set_thickness>("thickness")
           .property<StyleBoxLine::is_vertical, StyleBoxLine::set_vertical>("vertical")
;}