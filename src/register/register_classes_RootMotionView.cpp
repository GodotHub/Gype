#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/root_motion_view.hpp>

using namespace godot;

void register_classes_RootMotionView() {
    qjs::Context::Module &_module = _Node3D;
    _module.class_<RootMotionView>("RootMotionView")
           .constructor<>()
           .property<RootMotionView::get_animation_path, RootMotionView::set_animation_path>("animation_path")
           .property<RootMotionView::get_color, RootMotionView::set_color>("color")
           .property<RootMotionView::get_cell_size, RootMotionView::set_cell_size>("cell_size")
           .property<RootMotionView::get_radius, RootMotionView::set_radius>("radius")
           .property<RootMotionView::get_zero_y, RootMotionView::set_zero_y>("zero_y")
;}