#include <godot_cpp/classes/canvas_group.hpp>
#include <godot_cpp/classes/node2d.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_CanvasGroup() {
	qjs::Context::Module &_module = get_Node2D_module();
	_module.class_<CanvasGroup>("CanvasGroup")
			.constructor<>()
			.base<Node2D>()
			.property<static_cast<double (CanvasGroup::*)() const>(&CanvasGroup::get_fit_margin), static_cast<void (CanvasGroup::*)(double)>(&CanvasGroup::set_fit_margin)>((new std::string("fit_margin"))->c_str())
			.property<static_cast<double (CanvasGroup::*)() const>(&CanvasGroup::get_clear_margin), static_cast<void (CanvasGroup::*)(double)>(&CanvasGroup::set_clear_margin)>((new std::string("clear_margin"))->c_str())
			.property<static_cast<bool (CanvasGroup::*)() const>(&CanvasGroup::is_using_mipmaps), static_cast<void (CanvasGroup::*)(bool)>(&CanvasGroup::set_use_mipmaps)>((new std::string("use_mipmaps"))->c_str());
}