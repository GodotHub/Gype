#include <godot_cpp/classes/control.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/range.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_Range() {
	qjs::Context::Module &_module = get_Control_module();
	_module.class_<Range>("Range")
			.constructor<>()
			.base<Control>()
			.property<static_cast<double (Range::*)() const>(&Range::get_min), static_cast<void (Range::*)(double)>(&Range::set_min)>((new std::string("min_value"))->c_str())
			.property<static_cast<double (Range::*)() const>(&Range::get_max), static_cast<void (Range::*)(double)>(&Range::set_max)>((new std::string("max_value"))->c_str())
			.property<static_cast<double (Range::*)() const>(&Range::get_step), static_cast<void (Range::*)(double)>(&Range::set_step)>((new std::string("step"))->c_str())
			.property<static_cast<double (Range::*)() const>(&Range::get_page), static_cast<void (Range::*)(double)>(&Range::set_page)>((new std::string("page"))->c_str())
			.property<static_cast<double (Range::*)() const>(&Range::get_value), static_cast<void (Range::*)(double)>(&Range::set_value)>((new std::string("value"))->c_str())
			.property<static_cast<double (Range::*)() const>(&Range::get_as_ratio), static_cast<void (Range::*)(double)>(&Range::set_as_ratio)>((new std::string("ratio"))->c_str())
			.property<static_cast<bool (Range::*)() const>(&Range::is_ratio_exp), static_cast<void (Range::*)(bool)>(&Range::set_exp_ratio)>((new std::string("exp_edit"))->c_str())
			.property<static_cast<bool (Range::*)() const>(&Range::is_using_rounded_values), static_cast<void (Range::*)(bool)>(&Range::set_use_rounded_values)>((new std::string("rounded"))->c_str())
			.property<static_cast<bool (Range::*)() const>(&Range::is_greater_allowed), static_cast<void (Range::*)(bool)>(&Range::set_allow_greater)>((new std::string("allow_greater"))->c_str())
			.property<static_cast<bool (Range::*)() const>(&Range::is_lesser_allowed), static_cast<void (Range::*)(bool)>(&Range::set_allow_lesser)>((new std::string("allow_lesser"))->c_str())
			.fun<static_cast<void (Range::*)(double)>(&Range::_value_changed)>((new std::string("_value_changed"))->c_str())
			.fun<static_cast<void (Range::*)(double)>(&Range::set_value_no_signal)>((new std::string("set_value_no_signal"))->c_str())
			.fun<static_cast<void (Range::*)(Node *)>(&Range::share)>((new std::string("share"))->c_str())
			.fun<static_cast<void (Range::*)()>(&Range::unshare)>((new std::string("unshare"))->c_str());
}