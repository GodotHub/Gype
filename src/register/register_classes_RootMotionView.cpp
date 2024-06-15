#include <godot_cpp/classes/root_motion_view.hpp>
#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/classes/visual_instance3d.hpp>
#include <godot_cpp/variant/node_path.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_RootMotionView() {
    qjs::Context::Module &_module = get_Node3D_module();
    _module.class_<RootMotionView>("RootMotionView")
            .constructor<>()
            .base<VisualInstance3D>()
            .property<static_cast<NodePath(RootMotionView::*)()const>(&RootMotionView::get_animation_path),static_cast<void(RootMotionView::*)(const NodePath &)>(&RootMotionView::set_animation_path)>("animation_path")
            .property<static_cast<Color(RootMotionView::*)()const>(&RootMotionView::get_color),static_cast<void(RootMotionView::*)(const Color &)>(&RootMotionView::set_color)>("color")
            .property<static_cast<double(RootMotionView::*)()const>(&RootMotionView::get_cell_size),static_cast<void(RootMotionView::*)(double)>(&RootMotionView::set_cell_size)>("cell_size")
            .property<static_cast<double(RootMotionView::*)()const>(&RootMotionView::get_radius),static_cast<void(RootMotionView::*)(double)>(&RootMotionView::set_radius)>("radius")
            .property<static_cast<bool(RootMotionView::*)()const>(&RootMotionView::get_zero_y),static_cast<void(RootMotionView::*)(bool)>(&RootMotionView::set_zero_y)>("zero_y")
;}