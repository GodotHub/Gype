#include <godot_cpp/classes/curve3d.hpp>
#include <godot_cpp/variant/packed_float32_array.hpp>
#include <godot_cpp/variant/packed_vector3_array.hpp>
#include <godot_cpp/variant/transform3d.hpp>
#include <godot_cpp/variant/vector3.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_Curve3D() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<Curve3D>("Curve3D")
			.constructor<>()
			.property<&Curve3D::get_bake_interval, &Curve3D::set_bake_interval>("bake_interval")
			.property<&Curve3D::get_point_count, &Curve3D::set_point_count>("point_count")
			.property<&Curve3D::is_up_vector_enabled, &Curve3D::set_up_vector_enabled>("up_vector_enabled")
			.fun<static_cast<void (Curve3D::*)(const Vector3 &, const Vector3 &, const Vector3 &, int32_t)>(&Curve3D::add_point)>("add_point")
			.fun<static_cast<void (Curve3D::*)(int32_t, const Vector3 &)>(&Curve3D::set_point_position)>("set_point_position")
			.fun<static_cast<Vector3 (Curve3D::*)(int32_t) const>(&Curve3D::get_point_position)>("get_point_position")
			.fun<static_cast<void (Curve3D::*)(int32_t, double)>(&Curve3D::set_point_tilt)>("set_point_tilt")
			.fun<static_cast<double (Curve3D::*)(int32_t) const>(&Curve3D::get_point_tilt)>("get_point_tilt")
			.fun<static_cast<void (Curve3D::*)(int32_t, const Vector3 &)>(&Curve3D::set_point_in)>("set_point_in")
			.fun<static_cast<Vector3 (Curve3D::*)(int32_t) const>(&Curve3D::get_point_in)>("get_point_in")
			.fun<static_cast<void (Curve3D::*)(int32_t, const Vector3 &)>(&Curve3D::set_point_out)>("set_point_out")
			.fun<static_cast<Vector3 (Curve3D::*)(int32_t) const>(&Curve3D::get_point_out)>("get_point_out")
			.fun<static_cast<void (Curve3D::*)(int32_t)>(&Curve3D::remove_point)>("remove_point")
			.fun<static_cast<void (Curve3D::*)()>(&Curve3D::clear_points)>("clear_points")
			.fun<static_cast<Vector3 (Curve3D::*)(int32_t, double) const>(&Curve3D::sample)>("sample")
			.fun<static_cast<Vector3 (Curve3D::*)(double) const>(&Curve3D::samplef)>("samplef")
			.fun<static_cast<double (Curve3D::*)() const>(&Curve3D::get_baked_length)>("get_baked_length")
			.fun<static_cast<Vector3 (Curve3D::*)(double, bool) const>(&Curve3D::sample_baked)>("sample_baked")
			.fun<static_cast<Transform3D (Curve3D::*)(double, bool, bool) const>(&Curve3D::sample_baked_with_rotation)>("sample_baked_with_rotation")
			.fun<static_cast<Vector3 (Curve3D::*)(double, bool) const>(&Curve3D::sample_baked_up_vector)>("sample_baked_up_vector")
			.fun<static_cast<PackedVector3Array (Curve3D::*)() const>(&Curve3D::get_baked_points)>("get_baked_points")
			.fun<static_cast<PackedFloat32Array (Curve3D::*)() const>(&Curve3D::get_baked_tilts)>("get_baked_tilts")
			.fun<static_cast<PackedVector3Array (Curve3D::*)() const>(&Curve3D::get_baked_up_vectors)>("get_baked_up_vectors")
			.fun<static_cast<Vector3 (Curve3D::*)(const Vector3 &) const>(&Curve3D::get_closest_point)>("get_closest_point")
			.fun<static_cast<double (Curve3D::*)(const Vector3 &) const>(&Curve3D::get_closest_offset)>("get_closest_offset")
			.fun<static_cast<PackedVector3Array (Curve3D::*)(int32_t, double) const>(&Curve3D::tessellate)>("tessellate")
			.fun<static_cast<PackedVector3Array (Curve3D::*)(int32_t, double) const>(&Curve3D::tessellate_even_length)>("tessellate_even_length");
}