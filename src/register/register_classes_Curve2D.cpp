#include <godot_cpp/classes/curve2d.hpp>
#include <godot_cpp/variant/packed_vector2_array.hpp>
#include <godot_cpp/variant/transform2d.hpp>
#include <godot_cpp/variant/vector2.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_Curve2D() {
	qjs::Context::Module &_module = _General;
	_module.class_<Curve2D>("Curve2D")
			.constructor<>()
			.property<&Curve2D::get_bake_interval, &Curve2D::set_bake_interval>("bake_interval")
			.property<&Curve2D::get_point_count, &Curve2D::set_point_count>("point_count")
			.fun<static_cast<void (Curve2D::*)(const Vector2 &, const Vector2 &, const Vector2 &, int32_t)>(&Curve2D::add_point)>("add_point")
			.fun<static_cast<void (Curve2D::*)(int32_t, const Vector2 &)>(&Curve2D::set_point_position)>("set_point_position")
			.fun<static_cast<Vector2 (Curve2D::*)(int32_t) const>(&Curve2D::get_point_position)>("get_point_position")
			.fun<static_cast<void (Curve2D::*)(int32_t, const Vector2 &)>(&Curve2D::set_point_in)>("set_point_in")
			.fun<static_cast<Vector2 (Curve2D::*)(int32_t) const>(&Curve2D::get_point_in)>("get_point_in")
			.fun<static_cast<void (Curve2D::*)(int32_t, const Vector2 &)>(&Curve2D::set_point_out)>("set_point_out")
			.fun<static_cast<Vector2 (Curve2D::*)(int32_t) const>(&Curve2D::get_point_out)>("get_point_out")
			.fun<static_cast<void (Curve2D::*)(int32_t)>(&Curve2D::remove_point)>("remove_point")
			.fun<static_cast<void (Curve2D::*)()>(&Curve2D::clear_points)>("clear_points")
			.fun<static_cast<Vector2 (Curve2D::*)(int32_t, double) const>(&Curve2D::sample)>("sample")
			.fun<static_cast<Vector2 (Curve2D::*)(double) const>(&Curve2D::samplef)>("samplef")
			.fun<static_cast<double (Curve2D::*)() const>(&Curve2D::get_baked_length)>("get_baked_length")
			.fun<static_cast<Vector2 (Curve2D::*)(double, bool) const>(&Curve2D::sample_baked)>("sample_baked")
			.fun<static_cast<Transform2D (Curve2D::*)(double, bool) const>(&Curve2D::sample_baked_with_rotation)>("sample_baked_with_rotation")
			.fun<static_cast<PackedVector2Array (Curve2D::*)() const>(&Curve2D::get_baked_points)>("get_baked_points")
			.fun<static_cast<Vector2 (Curve2D::*)(const Vector2 &) const>(&Curve2D::get_closest_point)>("get_closest_point")
			.fun<static_cast<double (Curve2D::*)(const Vector2 &) const>(&Curve2D::get_closest_offset)>("get_closest_offset")
			.fun<static_cast<PackedVector2Array (Curve2D::*)(int32_t, double) const>(&Curve2D::tessellate)>("tessellate")
			.fun<static_cast<PackedVector2Array (Curve2D::*)(int32_t, double) const>(&Curve2D::tessellate_even_length)>("tessellate_even_length");
}