#include <godot_cpp/classes/visible_on_screen_notifier3d.hpp>
#include <godot_cpp/variant/aabb.hpp>
#include <godot_cpp/classes/visual_instance3d.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_VisibleOnScreenNotifier3D() {
    qjs::Context::Module &_module = get_Node3D_module();
    _module.class_<VisibleOnScreenNotifier3D>("VisibleOnScreenNotifier3D")
            .constructor<>()
            .base<VisualInstance3D>()
            .property<static_cast<void(VisibleOnScreenNotifier3D::*)(const AABB &)>(&VisibleOnScreenNotifier3D::set_aabb)>("{'name': 'set_aabb', 'is_const': False, 'is_vararg': False, 'is_static': False, 'is_virtual': False, 'hash': 259215842, 'arguments': [{'name': 'rect', 'type': 'AABB'}]}")
            .fun<static_cast<bool(VisibleOnScreenNotifier3D::*)()const>(&VisibleOnScreenNotifier3D::is_on_screen)>("is_on_screen")
;}