
#include <godot_cpp/classes/cpu_particles2d.hpp>
#include <godot_cpp/classes/curve.hpp>
#include <godot_cpp/classes/gradient.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/node2d.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/variant/packed_color_array.hpp>
#include <godot_cpp/variant/packed_vector2_array.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_CPUParticles2D() {
	qjs::Context::Module &_module = get_Node2D_module();
	_module.class_<CPUParticles2D>("CPUParticles2D")
			.constructor<>()
			.base<Node2D>()
			.property<static_cast<bool (CPUParticles2D::*)() const>(&CPUParticles2D::is_emitting), static_cast<void (CPUParticles2D::*)(bool)>(&CPUParticles2D::set_emitting)>((new std::string("emitting"))->c_str())
			.property<static_cast<int32_t (CPUParticles2D::*)() const>(&CPUParticles2D::get_amount), static_cast<void (CPUParticles2D::*)(int32_t)>(&CPUParticles2D::set_amount)>((new std::string("amount"))->c_str())
			.property<static_cast<double (CPUParticles2D::*)() const>(&CPUParticles2D::get_lifetime), static_cast<void (CPUParticles2D::*)(double)>(&CPUParticles2D::set_lifetime)>((new std::string("lifetime"))->c_str())
			.property<static_cast<bool (CPUParticles2D::*)() const>(&CPUParticles2D::get_one_shot), static_cast<void (CPUParticles2D::*)(bool)>(&CPUParticles2D::set_one_shot)>((new std::string("one_shot"))->c_str())
			.property<static_cast<double (CPUParticles2D::*)() const>(&CPUParticles2D::get_pre_process_time), static_cast<void (CPUParticles2D::*)(double)>(&CPUParticles2D::set_pre_process_time)>((new std::string("preprocess"))->c_str())
			.property<static_cast<double (CPUParticles2D::*)() const>(&CPUParticles2D::get_speed_scale), static_cast<void (CPUParticles2D::*)(double)>(&CPUParticles2D::set_speed_scale)>((new std::string("speed_scale"))->c_str())
			.property<static_cast<double (CPUParticles2D::*)() const>(&CPUParticles2D::get_explosiveness_ratio), static_cast<void (CPUParticles2D::*)(double)>(&CPUParticles2D::set_explosiveness_ratio)>((new std::string("explosiveness"))->c_str())
			.property<static_cast<double (CPUParticles2D::*)() const>(&CPUParticles2D::get_randomness_ratio), static_cast<void (CPUParticles2D::*)(double)>(&CPUParticles2D::set_randomness_ratio)>((new std::string("randomness"))->c_str())
			.property<static_cast<double (CPUParticles2D::*)() const>(&CPUParticles2D::get_lifetime_randomness), static_cast<void (CPUParticles2D::*)(double)>(&CPUParticles2D::set_lifetime_randomness)>((new std::string("lifetime_randomness"))->c_str())
			.property<static_cast<int32_t (CPUParticles2D::*)() const>(&CPUParticles2D::get_fixed_fps), static_cast<void (CPUParticles2D::*)(int32_t)>(&CPUParticles2D::set_fixed_fps)>((new std::string("fixed_fps"))->c_str())
			.property<static_cast<bool (CPUParticles2D::*)() const>(&CPUParticles2D::get_fractional_delta), static_cast<void (CPUParticles2D::*)(bool)>(&CPUParticles2D::set_fractional_delta)>((new std::string("fract_delta"))->c_str())
			.property<static_cast<bool (CPUParticles2D::*)() const>(&CPUParticles2D::get_use_local_coordinates), static_cast<void (CPUParticles2D::*)(bool)>(&CPUParticles2D::set_use_local_coordinates)>((new std::string("local_coords"))->c_str())
			.property<static_cast<CPUParticles2D::DrawOrder (CPUParticles2D::*)() const>(&CPUParticles2D::get_draw_order), static_cast<void (CPUParticles2D::*)(CPUParticles2D::DrawOrder)>(&CPUParticles2D::set_draw_order)>((new std::string("draw_order"))->c_str())
			.property<static_cast<Ref<Texture2D> (CPUParticles2D::*)() const>(&CPUParticles2D::get_texture), static_cast<void (CPUParticles2D::*)(const Ref<Texture2D> &)>(&CPUParticles2D::set_texture)>((new std::string("texture"))->c_str())
			.property<static_cast<CPUParticles2D::EmissionShape (CPUParticles2D::*)() const>(&CPUParticles2D::get_emission_shape), static_cast<void (CPUParticles2D::*)(CPUParticles2D::EmissionShape)>(&CPUParticles2D::set_emission_shape)>((new std::string("emission_shape"))->c_str())
			.property<static_cast<double (CPUParticles2D::*)() const>(&CPUParticles2D::get_emission_sphere_radius), static_cast<void (CPUParticles2D::*)(double)>(&CPUParticles2D::set_emission_sphere_radius)>((new std::string("emission_sphere_radius"))->c_str())
			.property<static_cast<Vector2 (CPUParticles2D::*)() const>(&CPUParticles2D::get_emission_rect_extents), static_cast<void (CPUParticles2D::*)(const Vector2 &)>(&CPUParticles2D::set_emission_rect_extents)>((new std::string("emission_rect_extents"))->c_str())
			.property<static_cast<PackedVector2Array (CPUParticles2D::*)() const>(&CPUParticles2D::get_emission_points), static_cast<void (CPUParticles2D::*)(const PackedVector2Array &)>(&CPUParticles2D::set_emission_points)>((new std::string("emission_points"))->c_str())
			.property<static_cast<PackedVector2Array (CPUParticles2D::*)() const>(&CPUParticles2D::get_emission_normals), static_cast<void (CPUParticles2D::*)(const PackedVector2Array &)>(&CPUParticles2D::set_emission_normals)>((new std::string("emission_normals"))->c_str())
			.property<static_cast<PackedColorArray (CPUParticles2D::*)() const>(&CPUParticles2D::get_emission_colors), static_cast<void (CPUParticles2D::*)(const PackedColorArray &)>(&CPUParticles2D::set_emission_colors)>((new std::string("emission_colors"))->c_str())
			.property<static_cast<bool (CPUParticles2D::*)(CPUParticles2D::ParticleFlags) const>(&CPUParticles2D::get_particle_flag), static_cast<void (CPUParticles2D::*)(CPUParticles2D::ParticleFlags, bool)>(&CPUParticles2D::set_particle_flag)>((new std::string("particle_flag_align_y"))->c_str())
			.property<static_cast<Vector2 (CPUParticles2D::*)() const>(&CPUParticles2D::get_direction), static_cast<void (CPUParticles2D::*)(const Vector2 &)>(&CPUParticles2D::set_direction)>((new std::string("direction"))->c_str())
			.property<static_cast<double (CPUParticles2D::*)() const>(&CPUParticles2D::get_spread), static_cast<void (CPUParticles2D::*)(double)>(&CPUParticles2D::set_spread)>((new std::string("spread"))->c_str())
			.property<static_cast<Vector2 (CPUParticles2D::*)() const>(&CPUParticles2D::get_gravity), static_cast<void (CPUParticles2D::*)(const Vector2 &)>(&CPUParticles2D::set_gravity)>((new std::string("gravity"))->c_str())
			.property<static_cast<double (CPUParticles2D::*)(CPUParticles2D::Parameter) const>(&CPUParticles2D::get_param_min), static_cast<void (CPUParticles2D::*)(CPUParticles2D::Parameter, double)>(&CPUParticles2D::set_param_min)>((new std::string("initial_velocity_min"))->c_str())
			.property<static_cast<double (CPUParticles2D::*)(CPUParticles2D::Parameter) const>(&CPUParticles2D::get_param_max), static_cast<void (CPUParticles2D::*)(CPUParticles2D::Parameter, double)>(&CPUParticles2D::set_param_max)>((new std::string("initial_velocity_max"))->c_str())
			.property<static_cast<double (CPUParticles2D::*)(CPUParticles2D::Parameter) const>(&CPUParticles2D::get_param_min), static_cast<void (CPUParticles2D::*)(CPUParticles2D::Parameter, double)>(&CPUParticles2D::set_param_min)>((new std::string("angular_velocity_min"))->c_str())
			.property<static_cast<double (CPUParticles2D::*)(CPUParticles2D::Parameter) const>(&CPUParticles2D::get_param_max), static_cast<void (CPUParticles2D::*)(CPUParticles2D::Parameter, double)>(&CPUParticles2D::set_param_max)>((new std::string("angular_velocity_max"))->c_str())
			.property<static_cast<Ref<Curve> (CPUParticles2D::*)(CPUParticles2D::Parameter) const>(&CPUParticles2D::get_param_curve), static_cast<void (CPUParticles2D::*)(CPUParticles2D::Parameter, const Ref<Curve> &)>(&CPUParticles2D::set_param_curve)>((new std::string("angular_velocity_curve"))->c_str())
			.property<static_cast<double (CPUParticles2D::*)(CPUParticles2D::Parameter) const>(&CPUParticles2D::get_param_min), static_cast<void (CPUParticles2D::*)(CPUParticles2D::Parameter, double)>(&CPUParticles2D::set_param_min)>((new std::string("orbit_velocity_min"))->c_str())
			.property<static_cast<double (CPUParticles2D::*)(CPUParticles2D::Parameter) const>(&CPUParticles2D::get_param_max), static_cast<void (CPUParticles2D::*)(CPUParticles2D::Parameter, double)>(&CPUParticles2D::set_param_max)>((new std::string("orbit_velocity_max"))->c_str())
			.property<static_cast<Ref<Curve> (CPUParticles2D::*)(CPUParticles2D::Parameter) const>(&CPUParticles2D::get_param_curve), static_cast<void (CPUParticles2D::*)(CPUParticles2D::Parameter, const Ref<Curve> &)>(&CPUParticles2D::set_param_curve)>((new std::string("orbit_velocity_curve"))->c_str())
			.property<static_cast<double (CPUParticles2D::*)(CPUParticles2D::Parameter) const>(&CPUParticles2D::get_param_min), static_cast<void (CPUParticles2D::*)(CPUParticles2D::Parameter, double)>(&CPUParticles2D::set_param_min)>((new std::string("linear_accel_min"))->c_str())
			.property<static_cast<double (CPUParticles2D::*)(CPUParticles2D::Parameter) const>(&CPUParticles2D::get_param_max), static_cast<void (CPUParticles2D::*)(CPUParticles2D::Parameter, double)>(&CPUParticles2D::set_param_max)>((new std::string("linear_accel_max"))->c_str())
			.property<static_cast<Ref<Curve> (CPUParticles2D::*)(CPUParticles2D::Parameter) const>(&CPUParticles2D::get_param_curve), static_cast<void (CPUParticles2D::*)(CPUParticles2D::Parameter, const Ref<Curve> &)>(&CPUParticles2D::set_param_curve)>((new std::string("linear_accel_curve"))->c_str())
			.property<static_cast<double (CPUParticles2D::*)(CPUParticles2D::Parameter) const>(&CPUParticles2D::get_param_min), static_cast<void (CPUParticles2D::*)(CPUParticles2D::Parameter, double)>(&CPUParticles2D::set_param_min)>((new std::string("radial_accel_min"))->c_str())
			.property<static_cast<double (CPUParticles2D::*)(CPUParticles2D::Parameter) const>(&CPUParticles2D::get_param_max), static_cast<void (CPUParticles2D::*)(CPUParticles2D::Parameter, double)>(&CPUParticles2D::set_param_max)>((new std::string("radial_accel_max"))->c_str())
			.property<static_cast<Ref<Curve> (CPUParticles2D::*)(CPUParticles2D::Parameter) const>(&CPUParticles2D::get_param_curve), static_cast<void (CPUParticles2D::*)(CPUParticles2D::Parameter, const Ref<Curve> &)>(&CPUParticles2D::set_param_curve)>((new std::string("radial_accel_curve"))->c_str())
			.property<static_cast<double (CPUParticles2D::*)(CPUParticles2D::Parameter) const>(&CPUParticles2D::get_param_min), static_cast<void (CPUParticles2D::*)(CPUParticles2D::Parameter, double)>(&CPUParticles2D::set_param_min)>((new std::string("tangential_accel_min"))->c_str())
			.property<static_cast<double (CPUParticles2D::*)(CPUParticles2D::Parameter) const>(&CPUParticles2D::get_param_max), static_cast<void (CPUParticles2D::*)(CPUParticles2D::Parameter, double)>(&CPUParticles2D::set_param_max)>((new std::string("tangential_accel_max"))->c_str())
			.property<static_cast<Ref<Curve> (CPUParticles2D::*)(CPUParticles2D::Parameter) const>(&CPUParticles2D::get_param_curve), static_cast<void (CPUParticles2D::*)(CPUParticles2D::Parameter, const Ref<Curve> &)>(&CPUParticles2D::set_param_curve)>((new std::string("tangential_accel_curve"))->c_str())
			.property<static_cast<double (CPUParticles2D::*)(CPUParticles2D::Parameter) const>(&CPUParticles2D::get_param_min), static_cast<void (CPUParticles2D::*)(CPUParticles2D::Parameter, double)>(&CPUParticles2D::set_param_min)>((new std::string("damping_min"))->c_str())
			.property<static_cast<double (CPUParticles2D::*)(CPUParticles2D::Parameter) const>(&CPUParticles2D::get_param_max), static_cast<void (CPUParticles2D::*)(CPUParticles2D::Parameter, double)>(&CPUParticles2D::set_param_max)>((new std::string("damping_max"))->c_str())
			.property<static_cast<Ref<Curve> (CPUParticles2D::*)(CPUParticles2D::Parameter) const>(&CPUParticles2D::get_param_curve), static_cast<void (CPUParticles2D::*)(CPUParticles2D::Parameter, const Ref<Curve> &)>(&CPUParticles2D::set_param_curve)>((new std::string("damping_curve"))->c_str())
			.property<static_cast<double (CPUParticles2D::*)(CPUParticles2D::Parameter) const>(&CPUParticles2D::get_param_min), static_cast<void (CPUParticles2D::*)(CPUParticles2D::Parameter, double)>(&CPUParticles2D::set_param_min)>((new std::string("angle_min"))->c_str())
			.property<static_cast<double (CPUParticles2D::*)(CPUParticles2D::Parameter) const>(&CPUParticles2D::get_param_max), static_cast<void (CPUParticles2D::*)(CPUParticles2D::Parameter, double)>(&CPUParticles2D::set_param_max)>((new std::string("angle_max"))->c_str())
			.property<static_cast<Ref<Curve> (CPUParticles2D::*)(CPUParticles2D::Parameter) const>(&CPUParticles2D::get_param_curve), static_cast<void (CPUParticles2D::*)(CPUParticles2D::Parameter, const Ref<Curve> &)>(&CPUParticles2D::set_param_curve)>((new std::string("angle_curve"))->c_str())
			.property<static_cast<double (CPUParticles2D::*)(CPUParticles2D::Parameter) const>(&CPUParticles2D::get_param_min), static_cast<void (CPUParticles2D::*)(CPUParticles2D::Parameter, double)>(&CPUParticles2D::set_param_min)>((new std::string("scale_amount_min"))->c_str())
			.property<static_cast<double (CPUParticles2D::*)(CPUParticles2D::Parameter) const>(&CPUParticles2D::get_param_max), static_cast<void (CPUParticles2D::*)(CPUParticles2D::Parameter, double)>(&CPUParticles2D::set_param_max)>((new std::string("scale_amount_max"))->c_str())
			.property<static_cast<Ref<Curve> (CPUParticles2D::*)(CPUParticles2D::Parameter) const>(&CPUParticles2D::get_param_curve), static_cast<void (CPUParticles2D::*)(CPUParticles2D::Parameter, const Ref<Curve> &)>(&CPUParticles2D::set_param_curve)>((new std::string("scale_amount_curve"))->c_str())
			.property<static_cast<bool (CPUParticles2D::*)()>(&CPUParticles2D::get_split_scale), static_cast<void (CPUParticles2D::*)(bool)>(&CPUParticles2D::set_split_scale)>((new std::string("split_scale"))->c_str())
			.property<static_cast<Ref<Curve> (CPUParticles2D::*)() const>(&CPUParticles2D::get_scale_curve_x), static_cast<void (CPUParticles2D::*)(const Ref<Curve> &)>(&CPUParticles2D::set_scale_curve_x)>((new std::string("scale_curve_x"))->c_str())
			.property<static_cast<Ref<Curve> (CPUParticles2D::*)() const>(&CPUParticles2D::get_scale_curve_y), static_cast<void (CPUParticles2D::*)(const Ref<Curve> &)>(&CPUParticles2D::set_scale_curve_y)>((new std::string("scale_curve_y"))->c_str())
			.property<static_cast<Color (CPUParticles2D::*)() const>(&CPUParticles2D::get_color), static_cast<void (CPUParticles2D::*)(const Color &)>(&CPUParticles2D::set_color)>((new std::string("color"))->c_str())
			.property<static_cast<Ref<Gradient> (CPUParticles2D::*)() const>(&CPUParticles2D::get_color_ramp), static_cast<void (CPUParticles2D::*)(const Ref<Gradient> &)>(&CPUParticles2D::set_color_ramp)>((new std::string("color_ramp"))->c_str())
			.property<static_cast<Ref<Gradient> (CPUParticles2D::*)() const>(&CPUParticles2D::get_color_initial_ramp), static_cast<void (CPUParticles2D::*)(const Ref<Gradient> &)>(&CPUParticles2D::set_color_initial_ramp)>((new std::string("color_initial_ramp"))->c_str())
			.property<static_cast<double (CPUParticles2D::*)(CPUParticles2D::Parameter) const>(&CPUParticles2D::get_param_min), static_cast<void (CPUParticles2D::*)(CPUParticles2D::Parameter, double)>(&CPUParticles2D::set_param_min)>((new std::string("hue_variation_min"))->c_str())
			.property<static_cast<double (CPUParticles2D::*)(CPUParticles2D::Parameter) const>(&CPUParticles2D::get_param_max), static_cast<void (CPUParticles2D::*)(CPUParticles2D::Parameter, double)>(&CPUParticles2D::set_param_max)>((new std::string("hue_variation_max"))->c_str())
			.property<static_cast<Ref<Curve> (CPUParticles2D::*)(CPUParticles2D::Parameter) const>(&CPUParticles2D::get_param_curve), static_cast<void (CPUParticles2D::*)(CPUParticles2D::Parameter, const Ref<Curve> &)>(&CPUParticles2D::set_param_curve)>((new std::string("hue_variation_curve"))->c_str())
			.property<static_cast<double (CPUParticles2D::*)(CPUParticles2D::Parameter) const>(&CPUParticles2D::get_param_min), static_cast<void (CPUParticles2D::*)(CPUParticles2D::Parameter, double)>(&CPUParticles2D::set_param_min)>((new std::string("anim_speed_min"))->c_str())
			.property<static_cast<double (CPUParticles2D::*)(CPUParticles2D::Parameter) const>(&CPUParticles2D::get_param_max), static_cast<void (CPUParticles2D::*)(CPUParticles2D::Parameter, double)>(&CPUParticles2D::set_param_max)>((new std::string("anim_speed_max"))->c_str())
			.property<static_cast<Ref<Curve> (CPUParticles2D::*)(CPUParticles2D::Parameter) const>(&CPUParticles2D::get_param_curve), static_cast<void (CPUParticles2D::*)(CPUParticles2D::Parameter, const Ref<Curve> &)>(&CPUParticles2D::set_param_curve)>((new std::string("anim_speed_curve"))->c_str())
			.property<static_cast<double (CPUParticles2D::*)(CPUParticles2D::Parameter) const>(&CPUParticles2D::get_param_min), static_cast<void (CPUParticles2D::*)(CPUParticles2D::Parameter, double)>(&CPUParticles2D::set_param_min)>((new std::string("anim_offset_min"))->c_str())
			.property<static_cast<double (CPUParticles2D::*)(CPUParticles2D::Parameter) const>(&CPUParticles2D::get_param_max), static_cast<void (CPUParticles2D::*)(CPUParticles2D::Parameter, double)>(&CPUParticles2D::set_param_max)>((new std::string("anim_offset_max"))->c_str())
			.property<static_cast<Ref<Curve> (CPUParticles2D::*)(CPUParticles2D::Parameter) const>(&CPUParticles2D::get_param_curve), static_cast<void (CPUParticles2D::*)(CPUParticles2D::Parameter, const Ref<Curve> &)>(&CPUParticles2D::set_param_curve)>((new std::string("anim_offset_curve"))->c_str())
			.fun<static_cast<void (CPUParticles2D::*)()>(&CPUParticles2D::restart)>((new std::string("restart"))->c_str())
			.fun<static_cast<void (CPUParticles2D::*)(Node *)>(&CPUParticles2D::convert_from_particles)>((new std::string("convert_from_particles"))->c_str());
	qjs::Value _DrawOrder = context->newObject();
	_DrawOrder[(new std::string("DRAW_ORDER_INDEX"))->c_str()] = CPUParticles2D::DrawOrder::DRAW_ORDER_INDEX;
	_DrawOrder[(new std::string("DRAW_ORDER_LIFETIME"))->c_str()] = CPUParticles2D::DrawOrder::DRAW_ORDER_LIFETIME;
	_module.add("DrawOrder", std::move(_DrawOrder));
	qjs::Value _Parameter = context->newObject();
	_Parameter[(new std::string("PARAM_INITIAL_LINEAR_VELOCITY"))->c_str()] = CPUParticles2D::Parameter::PARAM_INITIAL_LINEAR_VELOCITY;
	_Parameter[(new std::string("PARAM_ANGULAR_VELOCITY"))->c_str()] = CPUParticles2D::Parameter::PARAM_ANGULAR_VELOCITY;
	_Parameter[(new std::string("PARAM_ORBIT_VELOCITY"))->c_str()] = CPUParticles2D::Parameter::PARAM_ORBIT_VELOCITY;
	_Parameter[(new std::string("PARAM_LINEAR_ACCEL"))->c_str()] = CPUParticles2D::Parameter::PARAM_LINEAR_ACCEL;
	_Parameter[(new std::string("PARAM_RADIAL_ACCEL"))->c_str()] = CPUParticles2D::Parameter::PARAM_RADIAL_ACCEL;
	_Parameter[(new std::string("PARAM_TANGENTIAL_ACCEL"))->c_str()] = CPUParticles2D::Parameter::PARAM_TANGENTIAL_ACCEL;
	_Parameter[(new std::string("PARAM_DAMPING"))->c_str()] = CPUParticles2D::Parameter::PARAM_DAMPING;
	_Parameter[(new std::string("PARAM_ANGLE"))->c_str()] = CPUParticles2D::Parameter::PARAM_ANGLE;
	_Parameter[(new std::string("PARAM_SCALE"))->c_str()] = CPUParticles2D::Parameter::PARAM_SCALE;
	_Parameter[(new std::string("PARAM_HUE_VARIATION"))->c_str()] = CPUParticles2D::Parameter::PARAM_HUE_VARIATION;
	_Parameter[(new std::string("PARAM_ANIM_SPEED"))->c_str()] = CPUParticles2D::Parameter::PARAM_ANIM_SPEED;
	_Parameter[(new std::string("PARAM_ANIM_OFFSET"))->c_str()] = CPUParticles2D::Parameter::PARAM_ANIM_OFFSET;
	_Parameter[(new std::string("PARAM_MAX"))->c_str()] = CPUParticles2D::Parameter::PARAM_MAX;
	_module.add("Parameter", std::move(_Parameter));
	qjs::Value _ParticleFlags = context->newObject();
	_ParticleFlags[(new std::string("PARTICLE_FLAG_ALIGN_Y_TO_VELOCITY"))->c_str()] = CPUParticles2D::ParticleFlags::PARTICLE_FLAG_ALIGN_Y_TO_VELOCITY;
	_ParticleFlags[(new std::string("PARTICLE_FLAG_ROTATE_Y"))->c_str()] = CPUParticles2D::ParticleFlags::PARTICLE_FLAG_ROTATE_Y;
	_ParticleFlags[(new std::string("PARTICLE_FLAG_DISABLE_Z"))->c_str()] = CPUParticles2D::ParticleFlags::PARTICLE_FLAG_DISABLE_Z;
	_ParticleFlags[(new std::string("PARTICLE_FLAG_MAX"))->c_str()] = CPUParticles2D::ParticleFlags::PARTICLE_FLAG_MAX;
	_module.add("ParticleFlags", std::move(_ParticleFlags));
	qjs::Value _EmissionShape = context->newObject();
	_EmissionShape[(new std::string("EMISSION_SHAPE_POINT"))->c_str()] = CPUParticles2D::EmissionShape::EMISSION_SHAPE_POINT;
	_EmissionShape[(new std::string("EMISSION_SHAPE_SPHERE"))->c_str()] = CPUParticles2D::EmissionShape::EMISSION_SHAPE_SPHERE;
	_EmissionShape[(new std::string("EMISSION_SHAPE_SPHERE_SURFACE"))->c_str()] = CPUParticles2D::EmissionShape::EMISSION_SHAPE_SPHERE_SURFACE;
	_EmissionShape[(new std::string("EMISSION_SHAPE_RECTANGLE"))->c_str()] = CPUParticles2D::EmissionShape::EMISSION_SHAPE_RECTANGLE;
	_EmissionShape[(new std::string("EMISSION_SHAPE_POINTS"))->c_str()] = CPUParticles2D::EmissionShape::EMISSION_SHAPE_POINTS;
	_EmissionShape[(new std::string("EMISSION_SHAPE_DIRECTED_POINTS"))->c_str()] = CPUParticles2D::EmissionShape::EMISSION_SHAPE_DIRECTED_POINTS;
	_EmissionShape[(new std::string("EMISSION_SHAPE_MAX"))->c_str()] = CPUParticles2D::EmissionShape::EMISSION_SHAPE_MAX;
	_module.add("EmissionShape", std::move(_EmissionShape));
}