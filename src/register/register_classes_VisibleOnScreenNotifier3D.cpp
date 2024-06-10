#include <godot_cpp/classes/visible_on_screen_notifier3d.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_VisibleOnScreenNotifier3D() {
	qjs::Context::Module &_module = get_Node3D_module();
	_module.class_<VisibleOnScreenNotifier3D>("VisibleOnScreenNotifier3D")
			.constructor<>()
			.property<&VisibleOnScreenNotifier3D::get_aabb, &VisibleOnScreenNotifier3D::set_aabb>("aabb")
			.fun<static_cast<bool (VisibleOnScreenNotifier3D::*)() const>(&VisibleOnScreenNotifier3D::is_on_screen)>("is_on_screen");
}