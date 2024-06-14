
#include <godot_cpp/classes/curve.hpp>
#include <godot_cpp/classes/gradient.hpp>
#include <godot_cpp/classes/line2d.hpp>
#include <godot_cpp/classes/node2d.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/variant/packed_vector2_array.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_Line2D() {
	qjs::Context::Module &_module = get_Node2D_module();
	_module.class_<Line2D>("Line2D")
			.constructor<>()
			.base<Node2D>()
			.property<static_cast<PackedVector2Array (Line2D::*)() const>(&Line2D::get_points), static_cast<void (Line2D::*)(const PackedVector2Array &)>(&Line2D::set_points)>((new std::string("points"))->c_str())
			.property<static_cast<bool (Line2D::*)() const>(&Line2D::is_closed), static_cast<void (Line2D::*)(bool)>(&Line2D::set_closed)>((new std::string("closed"))->c_str())
			.property<static_cast<double (Line2D::*)() const>(&Line2D::get_width), static_cast<void (Line2D::*)(double)>(&Line2D::set_width)>((new std::string("width"))->c_str())
			.property<static_cast<Ref<Curve> (Line2D::*)() const>(&Line2D::get_curve), static_cast<void (Line2D::*)(const Ref<Curve> &)>(&Line2D::set_curve)>((new std::string("width_curve"))->c_str())
			.property<static_cast<Color (Line2D::*)() const>(&Line2D::get_default_color), static_cast<void (Line2D::*)(const Color &)>(&Line2D::set_default_color)>((new std::string("default_color"))->c_str())
			.property<static_cast<Ref<Gradient> (Line2D::*)() const>(&Line2D::get_gradient), static_cast<void (Line2D::*)(const Ref<Gradient> &)>(&Line2D::set_gradient)>((new std::string("gradient"))->c_str())
			.property<static_cast<Ref<Texture2D> (Line2D::*)() const>(&Line2D::get_texture), static_cast<void (Line2D::*)(const Ref<Texture2D> &)>(&Line2D::set_texture)>((new std::string("texture"))->c_str())
			.property<static_cast<Line2D::LineTextureMode (Line2D::*)() const>(&Line2D::get_texture_mode), static_cast<void (Line2D::*)(Line2D::LineTextureMode)>(&Line2D::set_texture_mode)>((new std::string("texture_mode"))->c_str())
			.property<static_cast<Line2D::LineJointMode (Line2D::*)() const>(&Line2D::get_joint_mode), static_cast<void (Line2D::*)(Line2D::LineJointMode)>(&Line2D::set_joint_mode)>((new std::string("joint_mode"))->c_str())
			.property<static_cast<Line2D::LineCapMode (Line2D::*)() const>(&Line2D::get_begin_cap_mode), static_cast<void (Line2D::*)(Line2D::LineCapMode)>(&Line2D::set_begin_cap_mode)>((new std::string("begin_cap_mode"))->c_str())
			.property<static_cast<Line2D::LineCapMode (Line2D::*)() const>(&Line2D::get_end_cap_mode), static_cast<void (Line2D::*)(Line2D::LineCapMode)>(&Line2D::set_end_cap_mode)>((new std::string("end_cap_mode"))->c_str())
			.property<static_cast<double (Line2D::*)() const>(&Line2D::get_sharp_limit), static_cast<void (Line2D::*)(double)>(&Line2D::set_sharp_limit)>((new std::string("sharp_limit"))->c_str())
			.property<static_cast<int32_t (Line2D::*)() const>(&Line2D::get_round_precision), static_cast<void (Line2D::*)(int32_t)>(&Line2D::set_round_precision)>((new std::string("round_precision"))->c_str())
			.property<static_cast<bool (Line2D::*)() const>(&Line2D::get_antialiased), static_cast<void (Line2D::*)(bool)>(&Line2D::set_antialiased)>((new std::string("antialiased"))->c_str())
			.fun<static_cast<void (Line2D::*)(int32_t, const Vector2 &)>(&Line2D::set_point_position)>((new std::string("set_point_position"))->c_str())
			.fun<static_cast<Vector2 (Line2D::*)(int32_t) const>(&Line2D::get_point_position)>((new std::string("get_point_position"))->c_str())
			.fun<static_cast<int32_t (Line2D::*)() const>(&Line2D::get_point_count)>((new std::string("get_point_count"))->c_str())
			.fun<static_cast<void (Line2D::*)(const Vector2 &, int32_t)>(&Line2D::add_point)>((new std::string("add_point"))->c_str())
			.fun<static_cast<void (Line2D::*)(int32_t)>(&Line2D::remove_point)>((new std::string("remove_point"))->c_str())
			.fun<static_cast<void (Line2D::*)()>(&Line2D::clear_points)>((new std::string("clear_points"))->c_str());
	qjs::Value _LineJointMode = context->newObject();
	_LineJointMode[(new std::string("LINE_JOINT_SHARP"))->c_str()] = Line2D::LineJointMode::LINE_JOINT_SHARP;
	_LineJointMode[(new std::string("LINE_JOINT_BEVEL"))->c_str()] = Line2D::LineJointMode::LINE_JOINT_BEVEL;
	_LineJointMode[(new std::string("LINE_JOINT_ROUND"))->c_str()] = Line2D::LineJointMode::LINE_JOINT_ROUND;
	_module.add("LineJointMode", std::move(_LineJointMode));
	qjs::Value _LineCapMode = context->newObject();
	_LineCapMode[(new std::string("LINE_CAP_NONE"))->c_str()] = Line2D::LineCapMode::LINE_CAP_NONE;
	_LineCapMode[(new std::string("LINE_CAP_BOX"))->c_str()] = Line2D::LineCapMode::LINE_CAP_BOX;
	_LineCapMode[(new std::string("LINE_CAP_ROUND"))->c_str()] = Line2D::LineCapMode::LINE_CAP_ROUND;
	_module.add("LineCapMode", std::move(_LineCapMode));
	qjs::Value _LineTextureMode = context->newObject();
	_LineTextureMode[(new std::string("LINE_TEXTURE_NONE"))->c_str()] = Line2D::LineTextureMode::LINE_TEXTURE_NONE;
	_LineTextureMode[(new std::string("LINE_TEXTURE_TILE"))->c_str()] = Line2D::LineTextureMode::LINE_TEXTURE_TILE;
	_LineTextureMode[(new std::string("LINE_TEXTURE_STRETCH"))->c_str()] = Line2D::LineTextureMode::LINE_TEXTURE_STRETCH;
	_module.add("LineTextureMode", std::move(_LineTextureMode));
}