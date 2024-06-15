#include <godot_cpp/classes/range.hpp>
#include <godot_cpp/classes/control.hpp>
#include <godot_cpp/classes/node.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_Range() {
    qjs::Context::Module &_module = get_Control_module();
    _module.class_<Range>("Range")
            .constructor<>()
            .base<Control>()
            .property<static_cast<double(Range::*)()const>(&Range::get_min),static_cast<void(Range::*)(double)>(&Range::set_min)>("min_value")
            .property<static_cast<double(Range::*)()const>(&Range::get_max),static_cast<void(Range::*)(double)>(&Range::set_max)>("max_value")
            .property<static_cast<double(Range::*)()const>(&Range::get_step),static_cast<void(Range::*)(double)>(&Range::set_step)>("step")
            .property<static_cast<double(Range::*)()const>(&Range::get_page),static_cast<void(Range::*)(double)>(&Range::set_page)>("page")
            .property<static_cast<double(Range::*)()const>(&Range::get_value),static_cast<void(Range::*)(double)>(&Range::set_value)>("value")
            .property<static_cast<double(Range::*)()const>(&Range::get_as_ratio),static_cast<void(Range::*)(double)>(&Range::set_as_ratio)>("ratio")
            .property<static_cast<bool(Range::*)()const>(&Range::is_ratio_exp),static_cast<void(Range::*)(bool)>(&Range::set_exp_ratio)>("exp_edit")
            .property<static_cast<bool(Range::*)()const>(&Range::is_using_rounded_values),static_cast<void(Range::*)(bool)>(&Range::set_use_rounded_values)>("rounded")
            .property<static_cast<bool(Range::*)()const>(&Range::is_greater_allowed),static_cast<void(Range::*)(bool)>(&Range::set_allow_greater)>("allow_greater")
            .property<static_cast<bool(Range::*)()const>(&Range::is_lesser_allowed),static_cast<void(Range::*)(bool)>(&Range::set_allow_lesser)>("allow_lesser")
            .fun<static_cast<void(Range::*)(double)>(&Range::_value_changed)>("_value_changed")
            .fun<static_cast<void(Range::*)(double)>(&Range::set_value_no_signal)>("set_value_no_signal")
            .fun<static_cast<void(Range::*)(Node *)>(&Range::share)>("share")
            .fun<static_cast<void(Range::*)()>(&Range::unshare)>("unshare")
;}