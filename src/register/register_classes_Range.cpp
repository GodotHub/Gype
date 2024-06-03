#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/range.hpp>

using namespace godot;

void register_classes_Range() {
    qjs::Context::Module &_module = _Control;
    _module.class_<Range>("Range")
           .constructor<>()
           .property<Range::get_min, Range::set_min>("min_value")
           .property<Range::get_max, Range::set_max>("max_value")
           .property<Range::get_step, Range::set_step>("step")
           .property<Range::get_page, Range::set_page>("page")
           .property<Range::get_value, Range::set_value>("value")
           .property<Range::get_as_ratio, Range::set_as_ratio>("ratio")
           .property<Range::is_ratio_exp, Range::set_exp_ratio>("exp_edit")
           .property<Range::is_using_rounded_values, Range::set_use_rounded_values>("rounded")
           .property<Range::is_greater_allowed, Range::set_allow_greater>("allow_greater")
           .property<Range::is_lesser_allowed, Range::set_allow_lesser>("allow_lesser")
		    .fun<static_cast<void(Range::*)(double)>(&Range::_value_changed)>("_value_changed")
		    .fun<static_cast<void(Range::*)(double)>(&Range::set_value_no_signal)>("set_value_no_signal")
		    .fun<static_cast<void(Range::*)(Node *)>(&Range::share)>("share")
		    .fun<static_cast<void(Range::*)()>(&Range::unshare)>("unshare")
;}