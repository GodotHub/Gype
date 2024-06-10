#include "qjspp.hpp"
#include "register/register_classes.h"
#include <godot_cpp/classes/curve.hpp>
#include <godot_cpp/classes/gradient.hpp>
#include <godot_cpp/classes/line2d.hpp>
#include <godot_cpp/variant/vector2.hpp>

using namespace godot;

void register_classes_Line2D() {
	qjs::Context::Module &_module = get_Node2D_module();
	_module.class_<Line2D>("Line2D")
			.constructor<>()
			.property<&Line2D::get_points, &Line2D::set_points>("points")
			.property<&Line2D::is_closed, &Line2D::set_closed>("closed")
			.property<&Line2D::get_width, &Line2D::set_width>("width")
			.property<&Line2D::get_curve, &Line2D::set_curve>("width_curve")
			.property<&Line2D::get_default_color, &Line2D::set_default_color>("default_color")
			.property<&Line2D::get_gradient, &Line2D::set_gradient>("gradient")
			.property<&Line2D::get_texture, &Line2D::set_texture>("texture")
			.property<&Line2D::get_texture_mode, &Line2D::set_texture_mode>("texture_mode")
			.property<&Line2D::get_joint_mode, &Line2D::set_joint_mode>("joint_mode")
			.property<&Line2D::get_begin_cap_mode, &Line2D::set_begin_cap_mode>("begin_cap_mode")
			.property<&Line2D::get_end_cap_mode, &Line2D::set_end_cap_mode>("end_cap_mode")
			.property<&Line2D::get_sharp_limit, &Line2D::set_sharp_limit>("sharp_limit")
			.property<&Line2D::get_round_precision, &Line2D::set_round_precision>("round_precision")
			.property<&Line2D::get_antialiased, &Line2D::set_antialiased>("antialiased")
			.fun<static_cast<void (Line2D::*)(int32_t, const Vector2 &)>(&Line2D::set_point_position)>("set_point_position")
			.fun<static_cast<Vector2 (Line2D::*)(int32_t) const>(&Line2D::get_point_position)>("get_point_position")
			.fun<static_cast<int32_t (Line2D::*)() const>(&Line2D::get_point_count)>("get_point_count")
			.fun<static_cast<void (Line2D::*)(const Vector2 &, int32_t)>(&Line2D::add_point)>("add_point")
			.fun<static_cast<void (Line2D::*)(int32_t)>(&Line2D::remove_point)>("remove_point")
			.fun<static_cast<void (Line2D::*)()>(&Line2D::clear_points)>("clear_points");
}