
#include <godot_cpp/classes/curve2d.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/packed_vector2_array.hpp>
#include <godot_cpp/variant/transform2d.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_Curve2D() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<Curve2D>("Curve2D")
			.constructor<>()
			.base<Resource>()
			.property<static_cast<double (Curve2D::*)() const>(&Curve2D::get_bake_interval), static_cast<void (Curve2D::*)(double)>(&Curve2D::set_bake_interval)>((new std::string("bake_interval"))->c_str())
			.property<static_cast<int32_t (Curve2D::*)() const>(&Curve2D::get_point_count), static_cast<void (Curve2D::*)(int32_t)>(&Curve2D::set_point_count)>((new std::string("point_count"))->c_str())
			.fun<static_cast<void (Curve2D::*)(const Vector2 &, const Vector2 &, const Vector2 &, int32_t)>(&Curve2D::add_point)>((new std::string("add_point"))->c_str())
			.fun<static_cast<void (Curve2D::*)(int32_t, const Vector2 &)>(&Curve2D::set_point_position)>((new std::string("set_point_position"))->c_str())
			.fun<static_cast<Vector2 (Curve2D::*)(int32_t) const>(&Curve2D::get_point_position)>((new std::string("get_point_position"))->c_str())
			.fun<static_cast<void (Curve2D::*)(int32_t, const Vector2 &)>(&Curve2D::set_point_in)>((new std::string("set_point_in"))->c_str())
			.fun<static_cast<Vector2 (Curve2D::*)(int32_t) const>(&Curve2D::get_point_in)>((new std::string("get_point_in"))->c_str())
			.fun<static_cast<void (Curve2D::*)(int32_t, const Vector2 &)>(&Curve2D::set_point_out)>((new std::string("set_point_out"))->c_str())
			.fun<static_cast<Vector2 (Curve2D::*)(int32_t) const>(&Curve2D::get_point_out)>((new std::string("get_point_out"))->c_str())
			.fun<static_cast<void (Curve2D::*)(int32_t)>(&Curve2D::remove_point)>((new std::string("remove_point"))->c_str())
			.fun<static_cast<void (Curve2D::*)()>(&Curve2D::clear_points)>((new std::string("clear_points"))->c_str())
			.fun<static_cast<Vector2 (Curve2D::*)(int32_t, double) const>(&Curve2D::sample)>((new std::string("sample"))->c_str())
			.fun<static_cast<Vector2 (Curve2D::*)(double) const>(&Curve2D::samplef)>((new std::string("samplef"))->c_str())
			.fun<static_cast<double (Curve2D::*)() const>(&Curve2D::get_baked_length)>((new std::string("get_baked_length"))->c_str())
			.fun<static_cast<Vector2 (Curve2D::*)(double, bool) const>(&Curve2D::sample_baked)>((new std::string("sample_baked"))->c_str())
			.fun<static_cast<Transform2D (Curve2D::*)(double, bool) const>(&Curve2D::sample_baked_with_rotation)>((new std::string("sample_baked_with_rotation"))->c_str())
			.fun<static_cast<PackedVector2Array (Curve2D::*)() const>(&Curve2D::get_baked_points)>((new std::string("get_baked_points"))->c_str())
			.fun<static_cast<Vector2 (Curve2D::*)(const Vector2 &) const>(&Curve2D::get_closest_point)>((new std::string("get_closest_point"))->c_str())
			.fun<static_cast<double (Curve2D::*)(const Vector2 &) const>(&Curve2D::get_closest_offset)>((new std::string("get_closest_offset"))->c_str())
			.fun<static_cast<PackedVector2Array (Curve2D::*)(int32_t, double) const>(&Curve2D::tessellate)>((new std::string("tessellate"))->c_str())
			.fun<static_cast<PackedVector2Array (Curve2D::*)(int32_t, double) const>(&Curve2D::tessellate_even_length)>((new std::string("tessellate_even_length"))->c_str());
}