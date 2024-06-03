#include "register/register_classes.h"
#include "register/utils.h"

using namespace godot;

void register_classes_VisibleOnScreenNotifier3D() {
    qjs::Context::Module &_module = _Node3D;
    _module.class_<VisibleOnScreenNotifier3D>("VisibleOnScreenNotifier3D")
           .constructor<>()
           .property<VisibleOnScreenNotifier3D::get_aabb, VisibleOnScreenNotifier3D::set_aabb>("aabb")
		   .fun<static_cast<bool(VisibleOnScreenNotifier3D::*)()const>(&VisibleOnScreenNotifier3D::is_on_screen)>("is_on_screen")
;}