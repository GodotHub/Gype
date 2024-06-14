#include <godot_cpp/classes/root_motion_view.hpp>
#include <godot_cpp/classes/visual_instance3d.hpp>
#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/variant/node_path.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_RootMotionView() {
	qjs::Context::Module &_module = get_Node3D_module();
	_module.class_<RootMotionView>("RootMotionView")
			.constructor<>()
			.base<VisualInstance3D>()
			.property<static_cast<NodePath (RootMotionView::*)() const>(&RootMotionView::get_animation_path), static_cast<void (RootMotionView::*)(const NodePath &)>(&RootMotionView::set_animation_path)>((new std::string("animation_path"))->c_str())
			.property<static_cast<Color (RootMotionView::*)() const>(&RootMotionView::get_color), static_cast<void (RootMotionView::*)(const Color &)>(&RootMotionView::set_color)>((new std::string("color"))->c_str())
			.property<static_cast<double (RootMotionView::*)() const>(&RootMotionView::get_cell_size), static_cast<void (RootMotionView::*)(double)>(&RootMotionView::set_cell_size)>((new std::string("cell_size"))->c_str())
			.property<static_cast<double (RootMotionView::*)() const>(&RootMotionView::get_radius), static_cast<void (RootMotionView::*)(double)>(&RootMotionView::set_radius)>((new std::string("radius"))->c_str())
			.property<static_cast<bool (RootMotionView::*)() const>(&RootMotionView::get_zero_y), static_cast<void (RootMotionView::*)(bool)>(&RootMotionView::set_zero_y)>((new std::string("zero_y"))->c_str());
}