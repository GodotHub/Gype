#include <godot_cpp/classes/visible_on_screen_notifier2d.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_VisibleOnScreenNotifier2D() {
	qjs::Context::Module &_module = get_Node2D_module();
	_module.class_<VisibleOnScreenNotifier2D>("VisibleOnScreenNotifier2D")
			.constructor<>()
			.property<&VisibleOnScreenNotifier2D::get_rect, &VisibleOnScreenNotifier2D::set_rect>("rect")
			.fun<static_cast<bool (VisibleOnScreenNotifier2D::*)() const>(&VisibleOnScreenNotifier2D::is_on_screen)>("is_on_screen");
}