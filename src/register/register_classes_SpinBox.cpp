#include <godot_cpp/classes/spin_box.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/line_edit.hpp>
#include <godot_cpp/classes/range.hpp>
#include <godot_cpp/variant/string.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_SpinBox() {
    qjs::Context::Module &_module = get_Control_module();
    _module.class_<SpinBox>("SpinBox")
            .constructor<>()
            .base<Range>()
            .property<static_cast<HorizontalAlignment(SpinBox::*)()const>(&SpinBox::get_horizontal_alignment),static_cast<void(SpinBox::*)(HorizontalAlignment)>(&SpinBox::set_horizontal_alignment)>("alignment")
            .property<static_cast<bool(SpinBox::*)()const>(&SpinBox::is_editable),static_cast<void(SpinBox::*)(bool)>(&SpinBox::set_editable)>("editable")
            .property<static_cast<bool(SpinBox::*)()const>(&SpinBox::get_update_on_text_changed),static_cast<void(SpinBox::*)(bool)>(&SpinBox::set_update_on_text_changed)>("update_on_text_changed")
            .property<static_cast<String(SpinBox::*)()const>(&SpinBox::get_prefix),static_cast<void(SpinBox::*)(const String &)>(&SpinBox::set_prefix)>("prefix")
            .property<static_cast<String(SpinBox::*)()const>(&SpinBox::get_suffix),static_cast<void(SpinBox::*)(const String &)>(&SpinBox::set_suffix)>("suffix")
            .property<static_cast<double(SpinBox::*)()const>(&SpinBox::get_custom_arrow_step),static_cast<void(SpinBox::*)(double)>(&SpinBox::set_custom_arrow_step)>("custom_arrow_step")
            .property<static_cast<bool(SpinBox::*)()const>(&SpinBox::is_select_all_on_focus),static_cast<void(SpinBox::*)(bool)>(&SpinBox::set_select_all_on_focus)>("select_all_on_focus")
            .fun<static_cast<void(SpinBox::*)()>(&SpinBox::apply)>("apply")
            .fun<static_cast<LineEdit *(SpinBox::*)()>(&SpinBox::get_line_edit)>("get_line_edit")
;}