#include <godot_cpp/classes/range.hpp>
#include <godot_cpp/classes/scroll_bar.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_ScrollBar() {
	qjs::Context::Module &_module = get_Control_module();
	_module.class_<ScrollBar>("ScrollBar")
			.constructor<>()
			.base<Range>()
			.property<static_cast<double (ScrollBar::*)() const>(&ScrollBar::get_custom_step), static_cast<void (ScrollBar::*)(double)>(&ScrollBar::set_custom_step)>((new std::string("custom_step"))->c_str());
}