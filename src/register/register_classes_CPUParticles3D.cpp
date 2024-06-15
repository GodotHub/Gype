#include <godot_cpp/classes/cpu_particles3d.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/aabb.hpp>
#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/variant/vector3.hpp>
#include <godot_cpp/classes/curve.hpp>
#include <godot_cpp/classes/geometry_instance3d.hpp>
#include <godot_cpp/classes/gradient.hpp>
#include <godot_cpp/classes/mesh.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/variant/packed_color_array.hpp>
#include <godot_cpp/variant/packed_vector3_array.hpp>
#include <stdint.h>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_CPUParticles3D() {
    qjs::Context::Module &_module = get_Node3D_module();
    _module.class_<CPUParticles3D>("CPUParticles3D")
            .constructor<>()
            .base<GeometryInstance3D>()
            .property<static_cast<bool(CPUParticles3D::*)()const>(&CPUParticles3D::is_emitting),static_cast<void(CPUParticles3D::*)(bool)>(&CPUParticles3D::set_emitting)>("emitting")
            .property<static_cast<int32_t(CPUParticles3D::*)()const>(&CPUParticles3D::get_amount),static_cast<void(CPUParticles3D::*)(int32_t)>(&CPUParticles3D::set_amount)>("amount")
            .property<static_cast<double(CPUParticles3D::*)()const>(&CPUParticles3D::get_lifetime),static_cast<void(CPUParticles3D::*)(double)>(&CPUParticles3D::set_lifetime)>("lifetime")
            .property<static_cast<bool(CPUParticles3D::*)()const>(&CPUParticles3D::get_one_shot),static_cast<void(CPUParticles3D::*)(bool)>(&CPUParticles3D::set_one_shot)>("one_shot")
            .property<static_cast<double(CPUParticles3D::*)()const>(&CPUParticles3D::get_pre_process_time),static_cast<void(CPUParticles3D::*)(double)>(&CPUParticles3D::set_pre_process_time)>("preprocess")
            .property<static_cast<double(CPUParticles3D::*)()const>(&CPUParticles3D::get_speed_scale),static_cast<void(CPUParticles3D::*)(double)>(&CPUParticles3D::set_speed_scale)>("speed_scale")
            .property<static_cast<double(CPUParticles3D::*)()const>(&CPUParticles3D::get_explosiveness_ratio),static_cast<void(CPUParticles3D::*)(double)>(&CPUParticles3D::set_explosiveness_ratio)>("explosiveness")
            .property<static_cast<double(CPUParticles3D::*)()const>(&CPUParticles3D::get_randomness_ratio),static_cast<void(CPUParticles3D::*)(double)>(&CPUParticles3D::set_randomness_ratio)>("randomness")
            .property<static_cast<double(CPUParticles3D::*)()const>(&CPUParticles3D::get_lifetime_randomness),static_cast<void(CPUParticles3D::*)(double)>(&CPUParticles3D::set_lifetime_randomness)>("lifetime_randomness")
            .property<static_cast<int32_t(CPUParticles3D::*)()const>(&CPUParticles3D::get_fixed_fps),static_cast<void(CPUParticles3D::*)(int32_t)>(&CPUParticles3D::set_fixed_fps)>("fixed_fps")
            .property<static_cast<bool(CPUParticles3D::*)()const>(&CPUParticles3D::get_fractional_delta),static_cast<void(CPUParticles3D::*)(bool)>(&CPUParticles3D::set_fractional_delta)>("fract_delta")
            .property<static_cast<AABB(CPUParticles3D::*)()const>(&CPUParticles3D::get_visibility_aabb),static_cast<void(CPUParticles3D::*)(const AABB &)>(&CPUParticles3D::set_visibility_aabb)>("visibility_aabb")
            .property<static_cast<bool(CPUParticles3D::*)()const>(&CPUParticles3D::get_use_local_coordinates),static_cast<void(CPUParticles3D::*)(bool)>(&CPUParticles3D::set_use_local_coordinates)>("local_coords")
            .property<static_cast<CPUParticles3D::DrawOrder(CPUParticles3D::*)()const>(&CPUParticles3D::get_draw_order),static_cast<void(CPUParticles3D::*)(CPUParticles3D::DrawOrder)>(&CPUParticles3D::set_draw_order)>("draw_order")
            .property<static_cast<Ref<Mesh>(CPUParticles3D::*)()const>(&CPUParticles3D::get_mesh),static_cast<void(CPUParticles3D::*)(const Ref<Mesh> &)>(&CPUParticles3D::set_mesh)>("mesh")
            .property<static_cast<CPUParticles3D::EmissionShape(CPUParticles3D::*)()const>(&CPUParticles3D::get_emission_shape),static_cast<void(CPUParticles3D::*)(CPUParticles3D::EmissionShape)>(&CPUParticles3D::set_emission_shape)>("emission_shape")
            .property<static_cast<double(CPUParticles3D::*)()const>(&CPUParticles3D::get_emission_sphere_radius),static_cast<void(CPUParticles3D::*)(double)>(&CPUParticles3D::set_emission_sphere_radius)>("emission_sphere_radius")
            .property<static_cast<Vector3(CPUParticles3D::*)()const>(&CPUParticles3D::get_emission_box_extents),static_cast<void(CPUParticles3D::*)(const Vector3 &)>(&CPUParticles3D::set_emission_box_extents)>("emission_box_extents")
            .property<static_cast<PackedVector3Array(CPUParticles3D::*)()const>(&CPUParticles3D::get_emission_points),static_cast<void(CPUParticles3D::*)(const PackedVector3Array &)>(&CPUParticles3D::set_emission_points)>("emission_points")
            .property<static_cast<PackedVector3Array(CPUParticles3D::*)()const>(&CPUParticles3D::get_emission_normals),static_cast<void(CPUParticles3D::*)(const PackedVector3Array &)>(&CPUParticles3D::set_emission_normals)>("emission_normals")
            .property<static_cast<PackedColorArray(CPUParticles3D::*)()const>(&CPUParticles3D::get_emission_colors),static_cast<void(CPUParticles3D::*)(const PackedColorArray &)>(&CPUParticles3D::set_emission_colors)>("emission_colors")
            .property<static_cast<Vector3(CPUParticles3D::*)()const>(&CPUParticles3D::get_emission_ring_axis),static_cast<void(CPUParticles3D::*)(const Vector3 &)>(&CPUParticles3D::set_emission_ring_axis)>("emission_ring_axis")
            .property<static_cast<double(CPUParticles3D::*)()const>(&CPUParticles3D::get_emission_ring_height),static_cast<void(CPUParticles3D::*)(double)>(&CPUParticles3D::set_emission_ring_height)>("emission_ring_height")
            .property<static_cast<double(CPUParticles3D::*)()const>(&CPUParticles3D::get_emission_ring_radius),static_cast<void(CPUParticles3D::*)(double)>(&CPUParticles3D::set_emission_ring_radius)>("emission_ring_radius")
            .property<static_cast<double(CPUParticles3D::*)()const>(&CPUParticles3D::get_emission_ring_inner_radius),static_cast<void(CPUParticles3D::*)(double)>(&CPUParticles3D::set_emission_ring_inner_radius)>("emission_ring_inner_radius")
            .property<static_cast<bool(CPUParticles3D::*)(CPUParticles3D::ParticleFlags)const>(&CPUParticles3D::get_particle_flag),static_cast<void(CPUParticles3D::*)(CPUParticles3D::ParticleFlags,bool)>(&CPUParticles3D::set_particle_flag)>("particle_flag_align_y")
            .property<static_cast<bool(CPUParticles3D::*)(CPUParticles3D::ParticleFlags)const>(&CPUParticles3D::get_particle_flag),static_cast<void(CPUParticles3D::*)(CPUParticles3D::ParticleFlags,bool)>(&CPUParticles3D::set_particle_flag)>("particle_flag_rotate_y")
            .property<static_cast<bool(CPUParticles3D::*)(CPUParticles3D::ParticleFlags)const>(&CPUParticles3D::get_particle_flag),static_cast<void(CPUParticles3D::*)(CPUParticles3D::ParticleFlags,bool)>(&CPUParticles3D::set_particle_flag)>("particle_flag_disable_z")
            .property<static_cast<Vector3(CPUParticles3D::*)()const>(&CPUParticles3D::get_direction),static_cast<void(CPUParticles3D::*)(const Vector3 &)>(&CPUParticles3D::set_direction)>("direction")
            .property<static_cast<double(CPUParticles3D::*)()const>(&CPUParticles3D::get_spread),static_cast<void(CPUParticles3D::*)(double)>(&CPUParticles3D::set_spread)>("spread")
            .property<static_cast<double(CPUParticles3D::*)()const>(&CPUParticles3D::get_flatness),static_cast<void(CPUParticles3D::*)(double)>(&CPUParticles3D::set_flatness)>("flatness")
            .property<static_cast<Vector3(CPUParticles3D::*)()const>(&CPUParticles3D::get_gravity),static_cast<void(CPUParticles3D::*)(const Vector3 &)>(&CPUParticles3D::set_gravity)>("gravity")
            .property<static_cast<double(CPUParticles3D::*)(CPUParticles3D::Parameter)const>(&CPUParticles3D::get_param_min),static_cast<void(CPUParticles3D::*)(CPUParticles3D::Parameter,double)>(&CPUParticles3D::set_param_min)>("initial_velocity_min")
            .property<static_cast<double(CPUParticles3D::*)(CPUParticles3D::Parameter)const>(&CPUParticles3D::get_param_max),static_cast<void(CPUParticles3D::*)(CPUParticles3D::Parameter,double)>(&CPUParticles3D::set_param_max)>("initial_velocity_max")
            .property<static_cast<double(CPUParticles3D::*)(CPUParticles3D::Parameter)const>(&CPUParticles3D::get_param_min),static_cast<void(CPUParticles3D::*)(CPUParticles3D::Parameter,double)>(&CPUParticles3D::set_param_min)>("angular_velocity_min")
            .property<static_cast<double(CPUParticles3D::*)(CPUParticles3D::Parameter)const>(&CPUParticles3D::get_param_max),static_cast<void(CPUParticles3D::*)(CPUParticles3D::Parameter,double)>(&CPUParticles3D::set_param_max)>("angular_velocity_max")
            .property<static_cast<Ref<Curve>(CPUParticles3D::*)(CPUParticles3D::Parameter)const>(&CPUParticles3D::get_param_curve),static_cast<void(CPUParticles3D::*)(CPUParticles3D::Parameter,const Ref<Curve> &)>(&CPUParticles3D::set_param_curve)>("angular_velocity_curve")
            .property<static_cast<double(CPUParticles3D::*)(CPUParticles3D::Parameter)const>(&CPUParticles3D::get_param_min),static_cast<void(CPUParticles3D::*)(CPUParticles3D::Parameter,double)>(&CPUParticles3D::set_param_min)>("orbit_velocity_min")
            .property<static_cast<double(CPUParticles3D::*)(CPUParticles3D::Parameter)const>(&CPUParticles3D::get_param_max),static_cast<void(CPUParticles3D::*)(CPUParticles3D::Parameter,double)>(&CPUParticles3D::set_param_max)>("orbit_velocity_max")
            .property<static_cast<Ref<Curve>(CPUParticles3D::*)(CPUParticles3D::Parameter)const>(&CPUParticles3D::get_param_curve),static_cast<void(CPUParticles3D::*)(CPUParticles3D::Parameter,const Ref<Curve> &)>(&CPUParticles3D::set_param_curve)>("orbit_velocity_curve")
            .property<static_cast<double(CPUParticles3D::*)(CPUParticles3D::Parameter)const>(&CPUParticles3D::get_param_min),static_cast<void(CPUParticles3D::*)(CPUParticles3D::Parameter,double)>(&CPUParticles3D::set_param_min)>("linear_accel_min")
            .property<static_cast<double(CPUParticles3D::*)(CPUParticles3D::Parameter)const>(&CPUParticles3D::get_param_max),static_cast<void(CPUParticles3D::*)(CPUParticles3D::Parameter,double)>(&CPUParticles3D::set_param_max)>("linear_accel_max")
            .property<static_cast<Ref<Curve>(CPUParticles3D::*)(CPUParticles3D::Parameter)const>(&CPUParticles3D::get_param_curve),static_cast<void(CPUParticles3D::*)(CPUParticles3D::Parameter,const Ref<Curve> &)>(&CPUParticles3D::set_param_curve)>("linear_accel_curve")
            .property<static_cast<double(CPUParticles3D::*)(CPUParticles3D::Parameter)const>(&CPUParticles3D::get_param_min),static_cast<void(CPUParticles3D::*)(CPUParticles3D::Parameter,double)>(&CPUParticles3D::set_param_min)>("radial_accel_min")
            .property<static_cast<double(CPUParticles3D::*)(CPUParticles3D::Parameter)const>(&CPUParticles3D::get_param_max),static_cast<void(CPUParticles3D::*)(CPUParticles3D::Parameter,double)>(&CPUParticles3D::set_param_max)>("radial_accel_max")
            .property<static_cast<Ref<Curve>(CPUParticles3D::*)(CPUParticles3D::Parameter)const>(&CPUParticles3D::get_param_curve),static_cast<void(CPUParticles3D::*)(CPUParticles3D::Parameter,const Ref<Curve> &)>(&CPUParticles3D::set_param_curve)>("radial_accel_curve")
            .property<static_cast<double(CPUParticles3D::*)(CPUParticles3D::Parameter)const>(&CPUParticles3D::get_param_min),static_cast<void(CPUParticles3D::*)(CPUParticles3D::Parameter,double)>(&CPUParticles3D::set_param_min)>("tangential_accel_min")
            .property<static_cast<double(CPUParticles3D::*)(CPUParticles3D::Parameter)const>(&CPUParticles3D::get_param_max),static_cast<void(CPUParticles3D::*)(CPUParticles3D::Parameter,double)>(&CPUParticles3D::set_param_max)>("tangential_accel_max")
            .property<static_cast<Ref<Curve>(CPUParticles3D::*)(CPUParticles3D::Parameter)const>(&CPUParticles3D::get_param_curve),static_cast<void(CPUParticles3D::*)(CPUParticles3D::Parameter,const Ref<Curve> &)>(&CPUParticles3D::set_param_curve)>("tangential_accel_curve")
            .property<static_cast<double(CPUParticles3D::*)(CPUParticles3D::Parameter)const>(&CPUParticles3D::get_param_min),static_cast<void(CPUParticles3D::*)(CPUParticles3D::Parameter,double)>(&CPUParticles3D::set_param_min)>("damping_min")
            .property<static_cast<double(CPUParticles3D::*)(CPUParticles3D::Parameter)const>(&CPUParticles3D::get_param_max),static_cast<void(CPUParticles3D::*)(CPUParticles3D::Parameter,double)>(&CPUParticles3D::set_param_max)>("damping_max")
            .property<static_cast<Ref<Curve>(CPUParticles3D::*)(CPUParticles3D::Parameter)const>(&CPUParticles3D::get_param_curve),static_cast<void(CPUParticles3D::*)(CPUParticles3D::Parameter,const Ref<Curve> &)>(&CPUParticles3D::set_param_curve)>("damping_curve")
            .property<static_cast<double(CPUParticles3D::*)(CPUParticles3D::Parameter)const>(&CPUParticles3D::get_param_min),static_cast<void(CPUParticles3D::*)(CPUParticles3D::Parameter,double)>(&CPUParticles3D::set_param_min)>("angle_min")
            .property<static_cast<double(CPUParticles3D::*)(CPUParticles3D::Parameter)const>(&CPUParticles3D::get_param_max),static_cast<void(CPUParticles3D::*)(CPUParticles3D::Parameter,double)>(&CPUParticles3D::set_param_max)>("angle_max")
            .property<static_cast<Ref<Curve>(CPUParticles3D::*)(CPUParticles3D::Parameter)const>(&CPUParticles3D::get_param_curve),static_cast<void(CPUParticles3D::*)(CPUParticles3D::Parameter,const Ref<Curve> &)>(&CPUParticles3D::set_param_curve)>("angle_curve")
            .property<static_cast<double(CPUParticles3D::*)(CPUParticles3D::Parameter)const>(&CPUParticles3D::get_param_min),static_cast<void(CPUParticles3D::*)(CPUParticles3D::Parameter,double)>(&CPUParticles3D::set_param_min)>("scale_amount_min")
            .property<static_cast<double(CPUParticles3D::*)(CPUParticles3D::Parameter)const>(&CPUParticles3D::get_param_max),static_cast<void(CPUParticles3D::*)(CPUParticles3D::Parameter,double)>(&CPUParticles3D::set_param_max)>("scale_amount_max")
            .property<static_cast<Ref<Curve>(CPUParticles3D::*)(CPUParticles3D::Parameter)const>(&CPUParticles3D::get_param_curve),static_cast<void(CPUParticles3D::*)(CPUParticles3D::Parameter,const Ref<Curve> &)>(&CPUParticles3D::set_param_curve)>("scale_amount_curve")
            .property<static_cast<bool(CPUParticles3D::*)()>(&CPUParticles3D::get_split_scale),static_cast<void(CPUParticles3D::*)(bool)>(&CPUParticles3D::set_split_scale)>("split_scale")
            .property<static_cast<Ref<Curve>(CPUParticles3D::*)()const>(&CPUParticles3D::get_scale_curve_x),static_cast<void(CPUParticles3D::*)(const Ref<Curve> &)>(&CPUParticles3D::set_scale_curve_x)>("scale_curve_x")
            .property<static_cast<Ref<Curve>(CPUParticles3D::*)()const>(&CPUParticles3D::get_scale_curve_y),static_cast<void(CPUParticles3D::*)(const Ref<Curve> &)>(&CPUParticles3D::set_scale_curve_y)>("scale_curve_y")
            .property<static_cast<Ref<Curve>(CPUParticles3D::*)()const>(&CPUParticles3D::get_scale_curve_z),static_cast<void(CPUParticles3D::*)(const Ref<Curve> &)>(&CPUParticles3D::set_scale_curve_z)>("scale_curve_z")
            .property<static_cast<Color(CPUParticles3D::*)()const>(&CPUParticles3D::get_color),static_cast<void(CPUParticles3D::*)(const Color &)>(&CPUParticles3D::set_color)>("color")
            .property<static_cast<Ref<Gradient>(CPUParticles3D::*)()const>(&CPUParticles3D::get_color_ramp),static_cast<void(CPUParticles3D::*)(const Ref<Gradient> &)>(&CPUParticles3D::set_color_ramp)>("color_ramp")
            .property<static_cast<Ref<Gradient>(CPUParticles3D::*)()const>(&CPUParticles3D::get_color_initial_ramp),static_cast<void(CPUParticles3D::*)(const Ref<Gradient> &)>(&CPUParticles3D::set_color_initial_ramp)>("color_initial_ramp")
            .property<static_cast<double(CPUParticles3D::*)(CPUParticles3D::Parameter)const>(&CPUParticles3D::get_param_min),static_cast<void(CPUParticles3D::*)(CPUParticles3D::Parameter,double)>(&CPUParticles3D::set_param_min)>("hue_variation_min")
            .property<static_cast<double(CPUParticles3D::*)(CPUParticles3D::Parameter)const>(&CPUParticles3D::get_param_max),static_cast<void(CPUParticles3D::*)(CPUParticles3D::Parameter,double)>(&CPUParticles3D::set_param_max)>("hue_variation_max")
            .property<static_cast<Ref<Curve>(CPUParticles3D::*)(CPUParticles3D::Parameter)const>(&CPUParticles3D::get_param_curve),static_cast<void(CPUParticles3D::*)(CPUParticles3D::Parameter,const Ref<Curve> &)>(&CPUParticles3D::set_param_curve)>("hue_variation_curve")
            .property<static_cast<double(CPUParticles3D::*)(CPUParticles3D::Parameter)const>(&CPUParticles3D::get_param_min),static_cast<void(CPUParticles3D::*)(CPUParticles3D::Parameter,double)>(&CPUParticles3D::set_param_min)>("anim_speed_min")
            .property<static_cast<double(CPUParticles3D::*)(CPUParticles3D::Parameter)const>(&CPUParticles3D::get_param_max),static_cast<void(CPUParticles3D::*)(CPUParticles3D::Parameter,double)>(&CPUParticles3D::set_param_max)>("anim_speed_max")
            .property<static_cast<Ref<Curve>(CPUParticles3D::*)(CPUParticles3D::Parameter)const>(&CPUParticles3D::get_param_curve),static_cast<void(CPUParticles3D::*)(CPUParticles3D::Parameter,const Ref<Curve> &)>(&CPUParticles3D::set_param_curve)>("anim_speed_curve")
            .property<static_cast<double(CPUParticles3D::*)(CPUParticles3D::Parameter)const>(&CPUParticles3D::get_param_min),static_cast<void(CPUParticles3D::*)(CPUParticles3D::Parameter,double)>(&CPUParticles3D::set_param_min)>("anim_offset_min")
            .property<static_cast<double(CPUParticles3D::*)(CPUParticles3D::Parameter)const>(&CPUParticles3D::get_param_max),static_cast<void(CPUParticles3D::*)(CPUParticles3D::Parameter,double)>(&CPUParticles3D::set_param_max)>("anim_offset_max")
            .property<static_cast<Ref<Curve>(CPUParticles3D::*)(CPUParticles3D::Parameter)const>(&CPUParticles3D::get_param_curve),static_cast<void(CPUParticles3D::*)(CPUParticles3D::Parameter,const Ref<Curve> &)>(&CPUParticles3D::set_param_curve)>("anim_offset_curve")
            .fun<static_cast<void(CPUParticles3D::*)()>(&CPUParticles3D::restart)>("restart")
            .fun<static_cast<void(CPUParticles3D::*)(Node *)>(&CPUParticles3D::convert_from_particles)>("convert_from_particles")
;    qjs::Value _DrawOrder = context->newObject();
    _DrawOrder["DRAW_ORDER_INDEX"] = CPUParticles3D::DrawOrder::DRAW_ORDER_INDEX;
    _DrawOrder["DRAW_ORDER_LIFETIME"] = CPUParticles3D::DrawOrder::DRAW_ORDER_LIFETIME;
    _DrawOrder["DRAW_ORDER_VIEW_DEPTH"] = CPUParticles3D::DrawOrder::DRAW_ORDER_VIEW_DEPTH;
    _module.add("DrawOrder", std::move(_DrawOrder));
    qjs::Value _Parameter = context->newObject();
    _Parameter["PARAM_INITIAL_LINEAR_VELOCITY"] = CPUParticles3D::Parameter::PARAM_INITIAL_LINEAR_VELOCITY;
    _Parameter["PARAM_ANGULAR_VELOCITY"] = CPUParticles3D::Parameter::PARAM_ANGULAR_VELOCITY;
    _Parameter["PARAM_ORBIT_VELOCITY"] = CPUParticles3D::Parameter::PARAM_ORBIT_VELOCITY;
    _Parameter["PARAM_LINEAR_ACCEL"] = CPUParticles3D::Parameter::PARAM_LINEAR_ACCEL;
    _Parameter["PARAM_RADIAL_ACCEL"] = CPUParticles3D::Parameter::PARAM_RADIAL_ACCEL;
    _Parameter["PARAM_TANGENTIAL_ACCEL"] = CPUParticles3D::Parameter::PARAM_TANGENTIAL_ACCEL;
    _Parameter["PARAM_DAMPING"] = CPUParticles3D::Parameter::PARAM_DAMPING;
    _Parameter["PARAM_ANGLE"] = CPUParticles3D::Parameter::PARAM_ANGLE;
    _Parameter["PARAM_SCALE"] = CPUParticles3D::Parameter::PARAM_SCALE;
    _Parameter["PARAM_HUE_VARIATION"] = CPUParticles3D::Parameter::PARAM_HUE_VARIATION;
    _Parameter["PARAM_ANIM_SPEED"] = CPUParticles3D::Parameter::PARAM_ANIM_SPEED;
    _Parameter["PARAM_ANIM_OFFSET"] = CPUParticles3D::Parameter::PARAM_ANIM_OFFSET;
    _Parameter["PARAM_MAX"] = CPUParticles3D::Parameter::PARAM_MAX;
    _module.add("Parameter", std::move(_Parameter));
    qjs::Value _ParticleFlags = context->newObject();
    _ParticleFlags["PARTICLE_FLAG_ALIGN_Y_TO_VELOCITY"] = CPUParticles3D::ParticleFlags::PARTICLE_FLAG_ALIGN_Y_TO_VELOCITY;
    _ParticleFlags["PARTICLE_FLAG_ROTATE_Y"] = CPUParticles3D::ParticleFlags::PARTICLE_FLAG_ROTATE_Y;
    _ParticleFlags["PARTICLE_FLAG_DISABLE_Z"] = CPUParticles3D::ParticleFlags::PARTICLE_FLAG_DISABLE_Z;
    _ParticleFlags["PARTICLE_FLAG_MAX"] = CPUParticles3D::ParticleFlags::PARTICLE_FLAG_MAX;
    _module.add("ParticleFlags", std::move(_ParticleFlags));
    qjs::Value _EmissionShape = context->newObject();
    _EmissionShape["EMISSION_SHAPE_POINT"] = CPUParticles3D::EmissionShape::EMISSION_SHAPE_POINT;
    _EmissionShape["EMISSION_SHAPE_SPHERE"] = CPUParticles3D::EmissionShape::EMISSION_SHAPE_SPHERE;
    _EmissionShape["EMISSION_SHAPE_SPHERE_SURFACE"] = CPUParticles3D::EmissionShape::EMISSION_SHAPE_SPHERE_SURFACE;
    _EmissionShape["EMISSION_SHAPE_BOX"] = CPUParticles3D::EmissionShape::EMISSION_SHAPE_BOX;
    _EmissionShape["EMISSION_SHAPE_POINTS"] = CPUParticles3D::EmissionShape::EMISSION_SHAPE_POINTS;
    _EmissionShape["EMISSION_SHAPE_DIRECTED_POINTS"] = CPUParticles3D::EmissionShape::EMISSION_SHAPE_DIRECTED_POINTS;
    _EmissionShape["EMISSION_SHAPE_RING"] = CPUParticles3D::EmissionShape::EMISSION_SHAPE_RING;
    _EmissionShape["EMISSION_SHAPE_MAX"] = CPUParticles3D::EmissionShape::EMISSION_SHAPE_MAX;
    _module.add("EmissionShape", std::move(_EmissionShape));
}