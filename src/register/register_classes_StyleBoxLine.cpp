#include <godot_cpp/classes/style_box_line.hpp>
#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/classes/style_box.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_StyleBoxLine() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<StyleBoxLine>("StyleBoxLine")
            .constructor<>()
            .base<StyleBox>()
            .property<static_cast<Color(StyleBoxLine::*)()const>(&StyleBoxLine::get_color),static_cast<void(StyleBoxLine::*)(const Color &)>(&StyleBoxLine::set_color)>("color")
            .property<static_cast<double(StyleBoxLine::*)()const>(&StyleBoxLine::get_grow_begin),static_cast<void(StyleBoxLine::*)(double)>(&StyleBoxLine::set_grow_begin)>("grow_begin")
            .property<static_cast<double(StyleBoxLine::*)()const>(&StyleBoxLine::get_grow_end),static_cast<void(StyleBoxLine::*)(double)>(&StyleBoxLine::set_grow_end)>("grow_end")
            .property<static_cast<int32_t(StyleBoxLine::*)()const>(&StyleBoxLine::get_thickness),static_cast<void(StyleBoxLine::*)(int32_t)>(&StyleBoxLine::set_thickness)>("thickness")
            .property<static_cast<bool(StyleBoxLine::*)()const>(&StyleBoxLine::is_vertical),static_cast<void(StyleBoxLine::*)(bool)>(&StyleBoxLine::set_vertical)>("vertical")
;}