
#include <godot_cpp/classes/cpu_particles3d.hpp>
#include <godot_cpp/classes/curve.hpp>
#include <godot_cpp/classes/geometry_instance3d.hpp>
#include <godot_cpp/classes/gradient.hpp>
#include <godot_cpp/classes/mesh.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/aabb.hpp>
#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/variant/packed_color_array.hpp>
#include <godot_cpp/variant/packed_vector3_array.hpp>
#include <godot_cpp/variant/vector3.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_CPUParticles3D() {
	qjs::Context::Module &_module = get_Node3D_module();
	_module.class_<CPUParticles3D>("CPUParticles3D")
			.constructor<>()
			.base<GeometryInstance3D>()
			.property<static_cast<bool (CPUParticles3D::*)() const>(&CPUParticles3D::is_emitting), static_cast<void (CPUParticles3D::*)(bool)>(&CPUParticles3D::set_emitting)>((new std::string("emitting"))->c_str())
			.property<static_cast<int32_t (CPUParticles3D::*)() const>(&CPUParticles3D::get_amount), static_cast<void (CPUParticles3D::*)(int32_t)>(&CPUParticles3D::set_amount)>((new std::string("amount"))->c_str())
			.property<static_cast<double (CPUParticles3D::*)() const>(&CPUParticles3D::get_lifetime), static_cast<void (CPUParticles3D::*)(double)>(&CPUParticles3D::set_lifetime)>((new std::string("lifetime"))->c_str())
			.property<static_cast<bool (CPUParticles3D::*)() const>(&CPUParticles3D::get_one_shot), static_cast<void (CPUParticles3D::*)(bool)>(&CPUParticles3D::set_one_shot)>((new std::string("one_shot"))->c_str())
			.property<static_cast<double (CPUParticles3D::*)() const>(&CPUParticles3D::get_pre_process_time), static_cast<void (CPUParticles3D::*)(double)>(&CPUParticles3D::set_pre_process_time)>((new std::string("preprocess"))->c_str())
			.property<static_cast<double (CPUParticles3D::*)() const>(&CPUParticles3D::get_speed_scale), static_cast<void (CPUParticles3D::*)(double)>(&CPUParticles3D::set_speed_scale)>((new std::string("speed_scale"))->c_str())
			.property<static_cast<double (CPUParticles3D::*)() const>(&CPUParticles3D::get_explosiveness_ratio), static_cast<void (CPUParticles3D::*)(double)>(&CPUParticles3D::set_explosiveness_ratio)>((new std::string("explosiveness"))->c_str())
			.property<static_cast<double (CPUParticles3D::*)() const>(&CPUParticles3D::get_randomness_ratio), static_cast<void (CPUParticles3D::*)(double)>(&CPUParticles3D::set_randomness_ratio)>((new std::string("randomness"))->c_str())
			.property<static_cast<double (CPUParticles3D::*)() const>(&CPUParticles3D::get_lifetime_randomness), static_cast<void (CPUParticles3D::*)(double)>(&CPUParticles3D::set_lifetime_randomness)>((new std::string("lifetime_randomness"))->c_str())
			.property<static_cast<int32_t (CPUParticles3D::*)() const>(&CPUParticles3D::get_fixed_fps), static_cast<void (CPUParticles3D::*)(int32_t)>(&CPUParticles3D::set_fixed_fps)>((new std::string("fixed_fps"))->c_str())
			.property<static_cast<bool (CPUParticles3D::*)() const>(&CPUParticles3D::get_fractional_delta), static_cast<void (CPUParticles3D::*)(bool)>(&CPUParticles3D::set_fractional_delta)>((new std::string("fract_delta"))->c_str())
			.property<static_cast<AABB (CPUParticles3D::*)() const>(&CPUParticles3D::get_visibility_aabb), static_cast<void (CPUParticles3D::*)(const AABB &)>(&CPUParticles3D::set_visibility_aabb)>((new std::string("visibility_aabb"))->c_str())
			.property<static_cast<bool (CPUParticles3D::*)() const>(&CPUParticles3D::get_use_local_coordinates), static_cast<void (CPUParticles3D::*)(bool)>(&CPUParticles3D::set_use_local_coordinates)>((new std::string("local_coords"))->c_str())
			.property<static_cast<CPUParticles3D::DrawOrder (CPUParticles3D::*)() const>(&CPUParticles3D::get_draw_order), static_cast<void (CPUParticles3D::*)(CPUParticles3D::DrawOrder)>(&CPUParticles3D::set_draw_order)>((new std::string("draw_order"))->c_str())
			.property<static_cast<Ref<Mesh> (CPUParticles3D::*)() const>(&CPUParticles3D::get_mesh), static_cast<void (CPUParticles3D::*)(const Ref<Mesh> &)>(&CPUParticles3D::set_mesh)>((new std::string("mesh"))->c_str())
			.property<static_cast<CPUParticles3D::EmissionShape (CPUParticles3D::*)() const>(&CPUParticles3D::get_emission_shape), static_cast<void (CPUParticles3D::*)(CPUParticles3D::EmissionShape)>(&CPUParticles3D::set_emission_shape)>((new std::string("emission_shape"))->c_str())
			.property<static_cast<double (CPUParticles3D::*)() const>(&CPUParticles3D::get_emission_sphere_radius), static_cast<void (CPUParticles3D::*)(double)>(&CPUParticles3D::set_emission_sphere_radius)>((new std::string("emission_sphere_radius"))->c_str())
			.property<static_cast<Vector3 (CPUParticles3D::*)() const>(&CPUParticles3D::get_emission_box_extents), static_cast<void (CPUParticles3D::*)(const Vector3 &)>(&CPUParticles3D::set_emission_box_extents)>((new std::string("emission_box_extents"))->c_str())
			.property<static_cast<PackedVector3Array (CPUParticles3D::*)() const>(&CPUParticles3D::get_emission_points), static_cast<void (CPUParticles3D::*)(const PackedVector3Array &)>(&CPUParticles3D::set_emission_points)>((new std::string("emission_points"))->c_str())
			.property<static_cast<PackedVector3Array (CPUParticles3D::*)() const>(&CPUParticles3D::get_emission_normals), static_cast<void (CPUParticles3D::*)(const PackedVector3Array &)>(&CPUParticles3D::set_emission_normals)>((new std::string("emission_normals"))->c_str())
			.property<static_cast<PackedColorArray (CPUParticles3D::*)() const>(&CPUParticles3D::get_emission_colors), static_cast<void (CPUParticles3D::*)(const PackedColorArray &)>(&CPUParticles3D::set_emission_colors)>((new std::string("emission_colors"))->c_str())
			.property<static_cast<Vector3 (CPUParticles3D::*)() const>(&CPUParticles3D::get_emission_ring_axis), static_cast<void (CPUParticles3D::*)(const Vector3 &)>(&CPUParticles3D::set_emission_ring_axis)>((new std::string("emission_ring_axis"))->c_str())
			.property<static_cast<double (CPUParticles3D::*)() const>(&CPUParticles3D::get_emission_ring_height), static_cast<void (CPUParticles3D::*)(double)>(&CPUParticles3D::set_emission_ring_height)>((new std::string("emission_ring_height"))->c_str())
			.property<static_cast<double (CPUParticles3D::*)() const>(&CPUParticles3D::get_emission_ring_radius), static_cast<void (CPUParticles3D::*)(double)>(&CPUParticles3D::set_emission_ring_radius)>((new std::string("emission_ring_radius"))->c_str())
			.property<static_cast<double (CPUParticles3D::*)() const>(&CPUParticles3D::get_emission_ring_inner_radius), static_cast<void (CPUParticles3D::*)(double)>(&CPUParticles3D::set_emission_ring_inner_radius)>((new std::string("emission_ring_inner_radius"))->c_str())
			.property<static_cast<bool (CPUParticles3D::*)(CPUParticles3D::ParticleFlags) const>(&CPUParticles3D::get_particle_flag), static_cast<void (CPUParticles3D::*)(CPUParticles3D::ParticleFlags, bool)>(&CPUParticles3D::set_particle_flag)>((new std::string("particle_flag_align_y"))->c_str())
			.property<static_cast<bool (CPUParticles3D::*)(CPUParticles3D::ParticleFlags) const>(&CPUParticles3D::get_particle_flag), static_cast<void (CPUParticles3D::*)(CPUParticles3D::ParticleFlags, bool)>(&CPUParticles3D::set_particle_flag)>((new std::string("particle_flag_rotate_y"))->c_str())
			.property<static_cast<bool (CPUParticles3D::*)(CPUParticles3D::ParticleFlags) const>(&CPUParticles3D::get_particle_flag), static_cast<void (CPUParticles3D::*)(CPUParticles3D::ParticleFlags, bool)>(&CPUParticles3D::set_particle_flag)>((new std::string("particle_flag_disable_z"))->c_str())
			.property<static_cast<Vector3 (CPUParticles3D::*)() const>(&CPUParticles3D::get_direction), static_cast<void (CPUParticles3D::*)(const Vector3 &)>(&CPUParticles3D::set_direction)>((new std::string("direction"))->c_str())
			.property<static_cast<double (CPUParticles3D::*)() const>(&CPUParticles3D::get_spread), static_cast<void (CPUParticles3D::*)(double)>(&CPUParticles3D::set_spread)>((new std::string("spread"))->c_str())
			.property<static_cast<double (CPUParticles3D::*)() const>(&CPUParticles3D::get_flatness), static_cast<void (CPUParticles3D::*)(double)>(&CPUParticles3D::set_flatness)>((new std::string("flatness"))->c_str())
			.property<static_cast<Vector3 (CPUParticles3D::*)() const>(&CPUParticles3D::get_gravity), static_cast<void (CPUParticles3D::*)(const Vector3 &)>(&CPUParticles3D::set_gravity)>((new std::string("gravity"))->c_str())
			.property<static_cast<double (CPUParticles3D::*)(CPUParticles3D::Parameter) const>(&CPUParticles3D::get_param_min), static_cast<void (CPUParticles3D::*)(CPUParticles3D::Parameter, double)>(&CPUParticles3D::set_param_min)>((new std::string("initial_velocity_min"))->c_str())
			.property<static_cast<double (CPUParticles3D::*)(CPUParticles3D::Parameter) const>(&CPUParticles3D::get_param_max), static_cast<void (CPUParticles3D::*)(CPUParticles3D::Parameter, double)>(&CPUParticles3D::set_param_max)>((new std::string("initial_velocity_max"))->c_str())
			.property<static_cast<double (CPUParticles3D::*)(CPUParticles3D::Parameter) const>(&CPUParticles3D::get_param_min), static_cast<void (CPUParticles3D::*)(CPUParticles3D::Parameter, double)>(&CPUParticles3D::set_param_min)>((new std::string("angular_velocity_min"))->c_str())
			.property<static_cast<double (CPUParticles3D::*)(CPUParticles3D::Parameter) const>(&CPUParticles3D::get_param_max), static_cast<void (CPUParticles3D::*)(CPUParticles3D::Parameter, double)>(&CPUParticles3D::set_param_max)>((new std::string("angular_velocity_max"))->c_str())
			.property<static_cast<Ref<Curve> (CPUParticles3D::*)(CPUParticles3D::Parameter) const>(&CPUParticles3D::get_param_curve), static_cast<void (CPUParticles3D::*)(CPUParticles3D::Parameter, const Ref<Curve> &)>(&CPUParticles3D::set_param_curve)>((new std::string("angular_velocity_curve"))->c_str())
			.property<static_cast<double (CPUParticles3D::*)(CPUParticles3D::Parameter) const>(&CPUParticles3D::get_param_min), static_cast<void (CPUParticles3D::*)(CPUParticles3D::Parameter, double)>(&CPUParticles3D::set_param_min)>((new std::string("orbit_velocity_min"))->c_str())
			.property<static_cast<double (CPUParticles3D::*)(CPUParticles3D::Parameter) const>(&CPUParticles3D::get_param_max), static_cast<void (CPUParticles3D::*)(CPUParticles3D::Parameter, double)>(&CPUParticles3D::set_param_max)>((new std::string("orbit_velocity_max"))->c_str())
			.property<static_cast<Ref<Curve> (CPUParticles3D::*)(CPUParticles3D::Parameter) const>(&CPUParticles3D::get_param_curve), static_cast<void (CPUParticles3D::*)(CPUParticles3D::Parameter, const Ref<Curve> &)>(&CPUParticles3D::set_param_curve)>((new std::string("orbit_velocity_curve"))->c_str())
			.property<static_cast<double (CPUParticles3D::*)(CPUParticles3D::Parameter) const>(&CPUParticles3D::get_param_min), static_cast<void (CPUParticles3D::*)(CPUParticles3D::Parameter, double)>(&CPUParticles3D::set_param_min)>((new std::string("linear_accel_min"))->c_str())
			.property<static_cast<double (CPUParticles3D::*)(CPUParticles3D::Parameter) const>(&CPUParticles3D::get_param_max), static_cast<void (CPUParticles3D::*)(CPUParticles3D::Parameter, double)>(&CPUParticles3D::set_param_max)>((new std::string("linear_accel_max"))->c_str())
			.property<static_cast<Ref<Curve> (CPUParticles3D::*)(CPUParticles3D::Parameter) const>(&CPUParticles3D::get_param_curve), static_cast<void (CPUParticles3D::*)(CPUParticles3D::Parameter, const Ref<Curve> &)>(&CPUParticles3D::set_param_curve)>((new std::string("linear_accel_curve"))->c_str())
			.property<static_cast<double (CPUParticles3D::*)(CPUParticles3D::Parameter) const>(&CPUParticles3D::get_param_min), static_cast<void (CPUParticles3D::*)(CPUParticles3D::Parameter, double)>(&CPUParticles3D::set_param_min)>((new std::string("radial_accel_min"))->c_str())
			.property<static_cast<double (CPUParticles3D::*)(CPUParticles3D::Parameter) const>(&CPUParticles3D::get_param_max), static_cast<void (CPUParticles3D::*)(CPUParticles3D::Parameter, double)>(&CPUParticles3D::set_param_max)>((new std::string("radial_accel_max"))->c_str())
			.property<static_cast<Ref<Curve> (CPUParticles3D::*)(CPUParticles3D::Parameter) const>(&CPUParticles3D::get_param_curve), static_cast<void (CPUParticles3D::*)(CPUParticles3D::Parameter, const Ref<Curve> &)>(&CPUParticles3D::set_param_curve)>((new std::string("radial_accel_curve"))->c_str())
			.property<static_cast<double (CPUParticles3D::*)(CPUParticles3D::Parameter) const>(&CPUParticles3D::get_param_min), static_cast<void (CPUParticles3D::*)(CPUParticles3D::Parameter, double)>(&CPUParticles3D::set_param_min)>((new std::string("tangential_accel_min"))->c_str())
			.property<static_cast<double (CPUParticles3D::*)(CPUParticles3D::Parameter) const>(&CPUParticles3D::get_param_max), static_cast<void (CPUParticles3D::*)(CPUParticles3D::Parameter, double)>(&CPUParticles3D::set_param_max)>((new std::string("tangential_accel_max"))->c_str())
			.property<static_cast<Ref<Curve> (CPUParticles3D::*)(CPUParticles3D::Parameter) const>(&CPUParticles3D::get_param_curve), static_cast<void (CPUParticles3D::*)(CPUParticles3D::Parameter, const Ref<Curve> &)>(&CPUParticles3D::set_param_curve)>((new std::string("tangential_accel_curve"))->c_str())
			.property<static_cast<double (CPUParticles3D::*)(CPUParticles3D::Parameter) const>(&CPUParticles3D::get_param_min), static_cast<void (CPUParticles3D::*)(CPUParticles3D::Parameter, double)>(&CPUParticles3D::set_param_min)>((new std::string("damping_min"))->c_str())
			.property<static_cast<double (CPUParticles3D::*)(CPUParticles3D::Parameter) const>(&CPUParticles3D::get_param_max), static_cast<void (CPUParticles3D::*)(CPUParticles3D::Parameter, double)>(&CPUParticles3D::set_param_max)>((new std::string("damping_max"))->c_str())
			.property<static_cast<Ref<Curve> (CPUParticles3D::*)(CPUParticles3D::Parameter) const>(&CPUParticles3D::get_param_curve), static_cast<void (CPUParticles3D::*)(CPUParticles3D::Parameter, const Ref<Curve> &)>(&CPUParticles3D::set_param_curve)>((new std::string("damping_curve"))->c_str())
			.property<static_cast<double (CPUParticles3D::*)(CPUParticles3D::Parameter) const>(&CPUParticles3D::get_param_min), static_cast<void (CPUParticles3D::*)(CPUParticles3D::Parameter, double)>(&CPUParticles3D::set_param_min)>((new std::string("angle_min"))->c_str())
			.property<static_cast<double (CPUParticles3D::*)(CPUParticles3D::Parameter) const>(&CPUParticles3D::get_param_max), static_cast<void (CPUParticles3D::*)(CPUParticles3D::Parameter, double)>(&CPUParticles3D::set_param_max)>((new std::string("angle_max"))->c_str())
			.property<static_cast<Ref<Curve> (CPUParticles3D::*)(CPUParticles3D::Parameter) const>(&CPUParticles3D::get_param_curve), static_cast<void (CPUParticles3D::*)(CPUParticles3D::Parameter, const Ref<Curve> &)>(&CPUParticles3D::set_param_curve)>((new std::string("angle_curve"))->c_str())
			.property<static_cast<double (CPUParticles3D::*)(CPUParticles3D::Parameter) const>(&CPUParticles3D::get_param_min), static_cast<void (CPUParticles3D::*)(CPUParticles3D::Parameter, double)>(&CPUParticles3D::set_param_min)>((new std::string("scale_amount_min"))->c_str())
			.property<static_cast<double (CPUParticles3D::*)(CPUParticles3D::Parameter) const>(&CPUParticles3D::get_param_max), static_cast<void (CPUParticles3D::*)(CPUParticles3D::Parameter, double)>(&CPUParticles3D::set_param_max)>((new std::string("scale_amount_max"))->c_str())
			.property<static_cast<Ref<Curve> (CPUParticles3D::*)(CPUParticles3D::Parameter) const>(&CPUParticles3D::get_param_curve), static_cast<void (CPUParticles3D::*)(CPUParticles3D::Parameter, const Ref<Curve> &)>(&CPUParticles3D::set_param_curve)>((new std::string("scale_amount_curve"))->c_str())
			.property<static_cast<bool (CPUParticles3D::*)()>(&CPUParticles3D::get_split_scale), static_cast<void (CPUParticles3D::*)(bool)>(&CPUParticles3D::set_split_scale)>((new std::string("split_scale"))->c_str())
			.property<static_cast<Ref<Curve> (CPUParticles3D::*)() const>(&CPUParticles3D::get_scale_curve_x), static_cast<void (CPUParticles3D::*)(const Ref<Curve> &)>(&CPUParticles3D::set_scale_curve_x)>((new std::string("scale_curve_x"))->c_str())
			.property<static_cast<Ref<Curve> (CPUParticles3D::*)() const>(&CPUParticles3D::get_scale_curve_y), static_cast<void (CPUParticles3D::*)(const Ref<Curve> &)>(&CPUParticles3D::set_scale_curve_y)>((new std::string("scale_curve_y"))->c_str())
			.property<static_cast<Ref<Curve> (CPUParticles3D::*)() const>(&CPUParticles3D::get_scale_curve_z), static_cast<void (CPUParticles3D::*)(const Ref<Curve> &)>(&CPUParticles3D::set_scale_curve_z)>((new std::string("scale_curve_z"))->c_str())
			.property<static_cast<Color (CPUParticles3D::*)() const>(&CPUParticles3D::get_color), static_cast<void (CPUParticles3D::*)(const Color &)>(&CPUParticles3D::set_color)>((new std::string("color"))->c_str())
			.property<static_cast<Ref<Gradient> (CPUParticles3D::*)() const>(&CPUParticles3D::get_color_ramp), static_cast<void (CPUParticles3D::*)(const Ref<Gradient> &)>(&CPUParticles3D::set_color_ramp)>((new std::string("color_ramp"))->c_str())
			.property<static_cast<Ref<Gradient> (CPUParticles3D::*)() const>(&CPUParticles3D::get_color_initial_ramp), static_cast<void (CPUParticles3D::*)(const Ref<Gradient> &)>(&CPUParticles3D::set_color_initial_ramp)>((new std::string("color_initial_ramp"))->c_str())
			.property<static_cast<double (CPUParticles3D::*)(CPUParticles3D::Parameter) const>(&CPUParticles3D::get_param_min), static_cast<void (CPUParticles3D::*)(CPUParticles3D::Parameter, double)>(&CPUParticles3D::set_param_min)>((new std::string("hue_variation_min"))->c_str())
			.property<static_cast<double (CPUParticles3D::*)(CPUParticles3D::Parameter) const>(&CPUParticles3D::get_param_max), static_cast<void (CPUParticles3D::*)(CPUParticles3D::Parameter, double)>(&CPUParticles3D::set_param_max)>((new std::string("hue_variation_max"))->c_str())
			.property<static_cast<Ref<Curve> (CPUParticles3D::*)(CPUParticles3D::Parameter) const>(&CPUParticles3D::get_param_curve), static_cast<void (CPUParticles3D::*)(CPUParticles3D::Parameter, const Ref<Curve> &)>(&CPUParticles3D::set_param_curve)>((new std::string("hue_variation_curve"))->c_str())
			.property<static_cast<double (CPUParticles3D::*)(CPUParticles3D::Parameter) const>(&CPUParticles3D::get_param_min), static_cast<void (CPUParticles3D::*)(CPUParticles3D::Parameter, double)>(&CPUParticles3D::set_param_min)>((new std::string("anim_speed_min"))->c_str())
			.property<static_cast<double (CPUParticles3D::*)(CPUParticles3D::Parameter) const>(&CPUParticles3D::get_param_max), static_cast<void (CPUParticles3D::*)(CPUParticles3D::Parameter, double)>(&CPUParticles3D::set_param_max)>((new std::string("anim_speed_max"))->c_str())
			.property<static_cast<Ref<Curve> (CPUParticles3D::*)(CPUParticles3D::Parameter) const>(&CPUParticles3D::get_param_curve), static_cast<void (CPUParticles3D::*)(CPUParticles3D::Parameter, const Ref<Curve> &)>(&CPUParticles3D::set_param_curve)>((new std::string("anim_speed_curve"))->c_str())
			.property<static_cast<double (CPUParticles3D::*)(CPUParticles3D::Parameter) const>(&CPUParticles3D::get_param_min), static_cast<void (CPUParticles3D::*)(CPUParticles3D::Parameter, double)>(&CPUParticles3D::set_param_min)>((new std::string("anim_offset_min"))->c_str())
			.property<static_cast<double (CPUParticles3D::*)(CPUParticles3D::Parameter) const>(&CPUParticles3D::get_param_max), static_cast<void (CPUParticles3D::*)(CPUParticles3D::Parameter, double)>(&CPUParticles3D::set_param_max)>((new std::string("anim_offset_max"))->c_str())
			.property<static_cast<Ref<Curve> (CPUParticles3D::*)(CPUParticles3D::Parameter) const>(&CPUParticles3D::get_param_curve), static_cast<void (CPUParticles3D::*)(CPUParticles3D::Parameter, const Ref<Curve> &)>(&CPUParticles3D::set_param_curve)>((new std::string("anim_offset_curve"))->c_str())
			.fun<static_cast<void (CPUParticles3D::*)()>(&CPUParticles3D::restart)>((new std::string("restart"))->c_str())
			.fun<static_cast<void (CPUParticles3D::*)(Node *)>(&CPUParticles3D::convert_from_particles)>((new std::string("convert_from_particles"))->c_str());
	qjs::Value _DrawOrder = context->newObject();
	_DrawOrder[(new std::string("DRAW_ORDER_INDEX"))->c_str()] = CPUParticles3D::DrawOrder::DRAW_ORDER_INDEX;
	_DrawOrder[(new std::string("DRAW_ORDER_LIFETIME"))->c_str()] = CPUParticles3D::DrawOrder::DRAW_ORDER_LIFETIME;
	_DrawOrder[(new std::string("DRAW_ORDER_VIEW_DEPTH"))->c_str()] = CPUParticles3D::DrawOrder::DRAW_ORDER_VIEW_DEPTH;
	_module.add("DrawOrder", std::move(_DrawOrder));
	qjs::Value _Parameter = context->newObject();
	_Parameter[(new std::string("PARAM_INITIAL_LINEAR_VELOCITY"))->c_str()] = CPUParticles3D::Parameter::PARAM_INITIAL_LINEAR_VELOCITY;
	_Parameter[(new std::string("PARAM_ANGULAR_VELOCITY"))->c_str()] = CPUParticles3D::Parameter::PARAM_ANGULAR_VELOCITY;
	_Parameter[(new std::string("PARAM_ORBIT_VELOCITY"))->c_str()] = CPUParticles3D::Parameter::PARAM_ORBIT_VELOCITY;
	_Parameter[(new std::string("PARAM_LINEAR_ACCEL"))->c_str()] = CPUParticles3D::Parameter::PARAM_LINEAR_ACCEL;
	_Parameter[(new std::string("PARAM_RADIAL_ACCEL"))->c_str()] = CPUParticles3D::Parameter::PARAM_RADIAL_ACCEL;
	_Parameter[(new std::string("PARAM_TANGENTIAL_ACCEL"))->c_str()] = CPUParticles3D::Parameter::PARAM_TANGENTIAL_ACCEL;
	_Parameter[(new std::string("PARAM_DAMPING"))->c_str()] = CPUParticles3D::Parameter::PARAM_DAMPING;
	_Parameter[(new std::string("PARAM_ANGLE"))->c_str()] = CPUParticles3D::Parameter::PARAM_ANGLE;
	_Parameter[(new std::string("PARAM_SCALE"))->c_str()] = CPUParticles3D::Parameter::PARAM_SCALE;
	_Parameter[(new std::string("PARAM_HUE_VARIATION"))->c_str()] = CPUParticles3D::Parameter::PARAM_HUE_VARIATION;
	_Parameter[(new std::string("PARAM_ANIM_SPEED"))->c_str()] = CPUParticles3D::Parameter::PARAM_ANIM_SPEED;
	_Parameter[(new std::string("PARAM_ANIM_OFFSET"))->c_str()] = CPUParticles3D::Parameter::PARAM_ANIM_OFFSET;
	_Parameter[(new std::string("PARAM_MAX"))->c_str()] = CPUParticles3D::Parameter::PARAM_MAX;
	_module.add("Parameter", std::move(_Parameter));
	qjs::Value _ParticleFlags = context->newObject();
	_ParticleFlags[(new std::string("PARTICLE_FLAG_ALIGN_Y_TO_VELOCITY"))->c_str()] = CPUParticles3D::ParticleFlags::PARTICLE_FLAG_ALIGN_Y_TO_VELOCITY;
	_ParticleFlags[(new std::string("PARTICLE_FLAG_ROTATE_Y"))->c_str()] = CPUParticles3D::ParticleFlags::PARTICLE_FLAG_ROTATE_Y;
	_ParticleFlags[(new std::string("PARTICLE_FLAG_DISABLE_Z"))->c_str()] = CPUParticles3D::ParticleFlags::PARTICLE_FLAG_DISABLE_Z;
	_ParticleFlags[(new std::string("PARTICLE_FLAG_MAX"))->c_str()] = CPUParticles3D::ParticleFlags::PARTICLE_FLAG_MAX;
	_module.add("ParticleFlags", std::move(_ParticleFlags));
	qjs::Value _EmissionShape = context->newObject();
	_EmissionShape[(new std::string("EMISSION_SHAPE_POINT"))->c_str()] = CPUParticles3D::EmissionShape::EMISSION_SHAPE_POINT;
	_EmissionShape[(new std::string("EMISSION_SHAPE_SPHERE"))->c_str()] = CPUParticles3D::EmissionShape::EMISSION_SHAPE_SPHERE;
	_EmissionShape[(new std::string("EMISSION_SHAPE_SPHERE_SURFACE"))->c_str()] = CPUParticles3D::EmissionShape::EMISSION_SHAPE_SPHERE_SURFACE;
	_EmissionShape[(new std::string("EMISSION_SHAPE_BOX"))->c_str()] = CPUParticles3D::EmissionShape::EMISSION_SHAPE_BOX;
	_EmissionShape[(new std::string("EMISSION_SHAPE_POINTS"))->c_str()] = CPUParticles3D::EmissionShape::EMISSION_SHAPE_POINTS;
	_EmissionShape[(new std::string("EMISSION_SHAPE_DIRECTED_POINTS"))->c_str()] = CPUParticles3D::EmissionShape::EMISSION_SHAPE_DIRECTED_POINTS;
	_EmissionShape[(new std::string("EMISSION_SHAPE_RING"))->c_str()] = CPUParticles3D::EmissionShape::EMISSION_SHAPE_RING;
	_EmissionShape[(new std::string("EMISSION_SHAPE_MAX"))->c_str()] = CPUParticles3D::EmissionShape::EMISSION_SHAPE_MAX;
	_module.add("EmissionShape", std::move(_EmissionShape));
}