#include <godot_cpp/classes/reference_rect.hpp>
#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/classes/control.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_ReferenceRect() {
    qjs::Context::Module &_module = get_Control_module();
    _module.class_<ReferenceRect>("ReferenceRect")
            .constructor<>()
            .base<Control>()
            .property<static_cast<Color(ReferenceRect::*)()const>(&ReferenceRect::get_border_color),static_cast<void(ReferenceRect::*)(const Color &)>(&ReferenceRect::set_border_color)>("border_color")
            .property<static_cast<double(ReferenceRect::*)()const>(&ReferenceRect::get_border_width),static_cast<void(ReferenceRect::*)(double)>(&ReferenceRect::set_border_width)>("border_width")
            .property<static_cast<bool(ReferenceRect::*)()const>(&ReferenceRect::get_editor_only),static_cast<void(ReferenceRect::*)(bool)>(&ReferenceRect::set_editor_only)>("editor_only")
;}