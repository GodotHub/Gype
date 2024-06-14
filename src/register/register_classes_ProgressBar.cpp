
#include <godot_cpp/classes/progress_bar.hpp>
#include <godot_cpp/classes/range.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_ProgressBar() {
	qjs::Context::Module &_module = get_Control_module();
	_module.class_<ProgressBar>("ProgressBar")
			.constructor<>()
			.base<Range>()
			.property<static_cast<int32_t (ProgressBar::*)()>(&ProgressBar::get_fill_mode), static_cast<void (ProgressBar::*)(int32_t)>(&ProgressBar::set_fill_mode)>((new std::string("fill_mode"))->c_str())
			.property<static_cast<bool (ProgressBar::*)() const>(&ProgressBar::is_percentage_shown), static_cast<void (ProgressBar::*)(bool)>(&ProgressBar::set_show_percentage)>((new std::string("show_percentage"))->c_str())
			.property<static_cast<bool (ProgressBar::*)() const>(&ProgressBar::is_indeterminate), static_cast<void (ProgressBar::*)(bool)>(&ProgressBar::set_indeterminate)>((new std::string("indeterminate"))->c_str())
			.property<static_cast<bool (ProgressBar::*)() const>(&ProgressBar::is_editor_preview_indeterminate_enabled), static_cast<void (ProgressBar::*)(bool)>(&ProgressBar::set_editor_preview_indeterminate)>((new std::string("editor_preview_indeterminate"))->c_str());
	qjs::Value _FillMode = context->newObject();
	_FillMode[(new std::string("FILL_BEGIN_TO_END"))->c_str()] = ProgressBar::FillMode::FILL_BEGIN_TO_END;
	_FillMode[(new std::string("FILL_END_TO_BEGIN"))->c_str()] = ProgressBar::FillMode::FILL_END_TO_BEGIN;
	_FillMode[(new std::string("FILL_TOP_TO_BOTTOM"))->c_str()] = ProgressBar::FillMode::FILL_TOP_TO_BOTTOM;
	_FillMode[(new std::string("FILL_BOTTOM_TO_TOP"))->c_str()] = ProgressBar::FillMode::FILL_BOTTOM_TO_TOP;
	_module.add("FillMode", std::move(_FillMode));
}