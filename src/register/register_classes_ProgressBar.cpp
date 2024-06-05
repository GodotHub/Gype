#include <godot_cpp/classes/progress_bar.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"


using namespace godot;

void register_classes_ProgressBar() {
	qjs::Context::Module &_module = _Control;
	_module.class_<ProgressBar>("ProgressBar")
			.constructor<>()
			.property<&ProgressBar::get_fill_mode, &ProgressBar::set_fill_mode>("fill_mode")
			.property<&ProgressBar::is_percentage_shown, &ProgressBar::set_show_percentage>("show_percentage");
}