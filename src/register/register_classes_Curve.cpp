
#include <godot_cpp/classes/curve.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_Curve() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<Curve>("Curve")
			.constructor<>()
			.base<Resource>()
			.property<static_cast<double (Curve::*)() const>(&Curve::get_min_value), static_cast<void (Curve::*)(double)>(&Curve::set_min_value)>((new std::string("min_value"))->c_str())
			.property<static_cast<double (Curve::*)() const>(&Curve::get_max_value), static_cast<void (Curve::*)(double)>(&Curve::set_max_value)>((new std::string("max_value"))->c_str())
			.property<static_cast<int32_t (Curve::*)() const>(&Curve::get_bake_resolution), static_cast<void (Curve::*)(int32_t)>(&Curve::set_bake_resolution)>((new std::string("bake_resolution"))->c_str())
			.property<static_cast<int32_t (Curve::*)() const>(&Curve::get_point_count), static_cast<void (Curve::*)(int32_t)>(&Curve::set_point_count)>((new std::string("point_count"))->c_str())
			.fun<static_cast<int32_t (Curve::*)(const Vector2 &, double, double, Curve::TangentMode, Curve::TangentMode)>(&Curve::add_point)>((new std::string("add_point"))->c_str())
			.fun<static_cast<void (Curve::*)(int32_t)>(&Curve::remove_point)>((new std::string("remove_point"))->c_str())
			.fun<static_cast<void (Curve::*)()>(&Curve::clear_points)>((new std::string("clear_points"))->c_str())
			.fun<static_cast<Vector2 (Curve::*)(int32_t) const>(&Curve::get_point_position)>((new std::string("get_point_position"))->c_str())
			.fun<static_cast<void (Curve::*)(int32_t, double)>(&Curve::set_point_value)>((new std::string("set_point_value"))->c_str())
			.fun<static_cast<int32_t (Curve::*)(int32_t, double)>(&Curve::set_point_offset)>((new std::string("set_point_offset"))->c_str())
			.fun<static_cast<double (Curve::*)(double) const>(&Curve::sample)>((new std::string("sample"))->c_str())
			.fun<static_cast<double (Curve::*)(double) const>(&Curve::sample_baked)>((new std::string("sample_baked"))->c_str())
			.fun<static_cast<double (Curve::*)(int32_t) const>(&Curve::get_point_left_tangent)>((new std::string("get_point_left_tangent"))->c_str())
			.fun<static_cast<double (Curve::*)(int32_t) const>(&Curve::get_point_right_tangent)>((new std::string("get_point_right_tangent"))->c_str())
			.fun<static_cast<Curve::TangentMode (Curve::*)(int32_t) const>(&Curve::get_point_left_mode)>((new std::string("get_point_left_mode"))->c_str())
			.fun<static_cast<Curve::TangentMode (Curve::*)(int32_t) const>(&Curve::get_point_right_mode)>((new std::string("get_point_right_mode"))->c_str())
			.fun<static_cast<void (Curve::*)(int32_t, double)>(&Curve::set_point_left_tangent)>((new std::string("set_point_left_tangent"))->c_str())
			.fun<static_cast<void (Curve::*)(int32_t, double)>(&Curve::set_point_right_tangent)>((new std::string("set_point_right_tangent"))->c_str())
			.fun<static_cast<void (Curve::*)(int32_t, Curve::TangentMode)>(&Curve::set_point_left_mode)>((new std::string("set_point_left_mode"))->c_str())
			.fun<static_cast<void (Curve::*)(int32_t, Curve::TangentMode)>(&Curve::set_point_right_mode)>((new std::string("set_point_right_mode"))->c_str())
			.fun<static_cast<void (Curve::*)()>(&Curve::clean_dupes)>((new std::string("clean_dupes"))->c_str())
			.fun<static_cast<void (Curve::*)()>(&Curve::bake)>((new std::string("bake"))->c_str());
	qjs::Value _TangentMode = context->newObject();
	_TangentMode[(new std::string("TANGENT_FREE"))->c_str()] = Curve::TangentMode::TANGENT_FREE;
	_TangentMode[(new std::string("TANGENT_LINEAR"))->c_str()] = Curve::TangentMode::TANGENT_LINEAR;
	_TangentMode[(new std::string("TANGENT_MODE_COUNT"))->c_str()] = Curve::TangentMode::TANGENT_MODE_COUNT;
	_module.add("TangentMode", std::move(_TangentMode));
}