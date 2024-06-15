#include <godot_cpp/classes/visible_on_screen_notifier2d.hpp>
#include <godot_cpp/variant/rect2.hpp>
#include <godot_cpp/classes/node2d.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_VisibleOnScreenNotifier2D() {
    qjs::Context::Module &_module = get_Node2D_module();
    _module.class_<VisibleOnScreenNotifier2D>("VisibleOnScreenNotifier2D")
            .constructor<>()
            .base<Node2D>()
            .property<static_cast<Rect2(VisibleOnScreenNotifier2D::*)()const>(&VisibleOnScreenNotifier2D::get_rect),static_cast<void(VisibleOnScreenNotifier2D::*)(const Rect2 &)>(&VisibleOnScreenNotifier2D::set_rect)>("rect")
            .fun<static_cast<bool(VisibleOnScreenNotifier2D::*)()const>(&VisibleOnScreenNotifier2D::is_on_screen)>("is_on_screen")
;}