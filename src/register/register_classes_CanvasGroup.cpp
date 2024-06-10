#include <godot_cpp/classes/canvas_group.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_CanvasGroup() {
	qjs::Context::Module &_module = get_Node2D_module();
	_module.class_<CanvasGroup>("CanvasGroup")
			.constructor<>()
			.property<&CanvasGroup::get_fit_margin, &CanvasGroup::set_fit_margin>("fit_margin")
			.property<&CanvasGroup::get_clear_margin, &CanvasGroup::set_clear_margin>("clear_margin")
			.property<&CanvasGroup::is_using_mipmaps, &CanvasGroup::set_use_mipmaps>("use_mipmaps");
}