
#include <godot_cpp/classes/curve3d.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/packed_float32_array.hpp>
#include <godot_cpp/variant/packed_vector3_array.hpp>
#include <godot_cpp/variant/transform3d.hpp>
#include <godot_cpp/variant/vector3.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_Curve3D() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<Curve3D>("Curve3D")
			.constructor<>()
			.base<Resource>()
			.property<static_cast<double (Curve3D::*)() const>(&Curve3D::get_bake_interval), static_cast<void (Curve3D::*)(double)>(&Curve3D::set_bake_interval)>((new std::string("bake_interval"))->c_str())
			.property<static_cast<int32_t (Curve3D::*)() const>(&Curve3D::get_point_count), static_cast<void (Curve3D::*)(int32_t)>(&Curve3D::set_point_count)>((new std::string("point_count"))->c_str())
			.property<static_cast<bool (Curve3D::*)() const>(&Curve3D::is_up_vector_enabled), static_cast<void (Curve3D::*)(bool)>(&Curve3D::set_up_vector_enabled)>((new std::string("up_vector_enabled"))->c_str())
			.fun<static_cast<void (Curve3D::*)(const Vector3 &, const Vector3 &, const Vector3 &, int32_t)>(&Curve3D::add_point)>((new std::string("add_point"))->c_str())
			.fun<static_cast<void (Curve3D::*)(int32_t, const Vector3 &)>(&Curve3D::set_point_position)>((new std::string("set_point_position"))->c_str())
			.fun<static_cast<Vector3 (Curve3D::*)(int32_t) const>(&Curve3D::get_point_position)>((new std::string("get_point_position"))->c_str())
			.fun<static_cast<void (Curve3D::*)(int32_t, double)>(&Curve3D::set_point_tilt)>((new std::string("set_point_tilt"))->c_str())
			.fun<static_cast<double (Curve3D::*)(int32_t) const>(&Curve3D::get_point_tilt)>((new std::string("get_point_tilt"))->c_str())
			.fun<static_cast<void (Curve3D::*)(int32_t, const Vector3 &)>(&Curve3D::set_point_in)>((new std::string("set_point_in"))->c_str())
			.fun<static_cast<Vector3 (Curve3D::*)(int32_t) const>(&Curve3D::get_point_in)>((new std::string("get_point_in"))->c_str())
			.fun<static_cast<void (Curve3D::*)(int32_t, const Vector3 &)>(&Curve3D::set_point_out)>((new std::string("set_point_out"))->c_str())
			.fun<static_cast<Vector3 (Curve3D::*)(int32_t) const>(&Curve3D::get_point_out)>((new std::string("get_point_out"))->c_str())
			.fun<static_cast<void (Curve3D::*)(int32_t)>(&Curve3D::remove_point)>((new std::string("remove_point"))->c_str())
			.fun<static_cast<void (Curve3D::*)()>(&Curve3D::clear_points)>((new std::string("clear_points"))->c_str())
			.fun<static_cast<Vector3 (Curve3D::*)(int32_t, double) const>(&Curve3D::sample)>((new std::string("sample"))->c_str())
			.fun<static_cast<Vector3 (Curve3D::*)(double) const>(&Curve3D::samplef)>((new std::string("samplef"))->c_str())
			.fun<static_cast<double (Curve3D::*)() const>(&Curve3D::get_baked_length)>((new std::string("get_baked_length"))->c_str())
			.fun<static_cast<Vector3 (Curve3D::*)(double, bool) const>(&Curve3D::sample_baked)>((new std::string("sample_baked"))->c_str())
			.fun<static_cast<Transform3D (Curve3D::*)(double, bool, bool) const>(&Curve3D::sample_baked_with_rotation)>((new std::string("sample_baked_with_rotation"))->c_str())
			.fun<static_cast<Vector3 (Curve3D::*)(double, bool) const>(&Curve3D::sample_baked_up_vector)>((new std::string("sample_baked_up_vector"))->c_str())
			.fun<static_cast<PackedVector3Array (Curve3D::*)() const>(&Curve3D::get_baked_points)>((new std::string("get_baked_points"))->c_str())
			.fun<static_cast<PackedFloat32Array (Curve3D::*)() const>(&Curve3D::get_baked_tilts)>((new std::string("get_baked_tilts"))->c_str())
			.fun<static_cast<PackedVector3Array (Curve3D::*)() const>(&Curve3D::get_baked_up_vectors)>((new std::string("get_baked_up_vectors"))->c_str())
			.fun<static_cast<Vector3 (Curve3D::*)(const Vector3 &) const>(&Curve3D::get_closest_point)>((new std::string("get_closest_point"))->c_str())
			.fun<static_cast<double (Curve3D::*)(const Vector3 &) const>(&Curve3D::get_closest_offset)>((new std::string("get_closest_offset"))->c_str())
			.fun<static_cast<PackedVector3Array (Curve3D::*)(int32_t, double) const>(&Curve3D::tessellate)>((new std::string("tessellate"))->c_str())
			.fun<static_cast<PackedVector3Array (Curve3D::*)(int32_t, double) const>(&Curve3D::tessellate_even_length)>((new std::string("tessellate_even_length"))->c_str());
}