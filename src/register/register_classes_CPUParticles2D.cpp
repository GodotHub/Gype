#include <godot_cpp/classes/cpu_particles2d.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <godot_cpp/classes/curve.hpp>
#include <godot_cpp/classes/gradient.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/node2d.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/variant/packed_color_array.hpp>
#include <godot_cpp/variant/packed_vector2_array.hpp>
#include <stdint.h>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_CPUParticles2D() {
    qjs::Context::Module &_module = get_Node2D_module();
    _module.class_<CPUParticles2D>("CPUParticles2D")
            .constructor<>()
            .base<Node2D>()
            .property<static_cast<bool(CPUParticles2D::*)()const>(&CPUParticles2D::is_emitting),static_cast<void(CPUParticles2D::*)(bool)>(&CPUParticles2D::set_emitting)>("emitting")
            .property<static_cast<int32_t(CPUParticles2D::*)()const>(&CPUParticles2D::get_amount),static_cast<void(CPUParticles2D::*)(int32_t)>(&CPUParticles2D::set_amount)>("amount")
            .property<static_cast<double(CPUParticles2D::*)()const>(&CPUParticles2D::get_lifetime),static_cast<void(CPUParticles2D::*)(double)>(&CPUParticles2D::set_lifetime)>("lifetime")
            .property<static_cast<bool(CPUParticles2D::*)()const>(&CPUParticles2D::get_one_shot),static_cast<void(CPUParticles2D::*)(bool)>(&CPUParticles2D::set_one_shot)>("one_shot")
            .property<static_cast<double(CPUParticles2D::*)()const>(&CPUParticles2D::get_pre_process_time),static_cast<void(CPUParticles2D::*)(double)>(&CPUParticles2D::set_pre_process_time)>("preprocess")
            .property<static_cast<double(CPUParticles2D::*)()const>(&CPUParticles2D::get_speed_scale),static_cast<void(CPUParticles2D::*)(double)>(&CPUParticles2D::set_speed_scale)>("speed_scale")
            .property<static_cast<double(CPUParticles2D::*)()const>(&CPUParticles2D::get_explosiveness_ratio),static_cast<void(CPUParticles2D::*)(double)>(&CPUParticles2D::set_explosiveness_ratio)>("explosiveness")
            .property<static_cast<double(CPUParticles2D::*)()const>(&CPUParticles2D::get_randomness_ratio),static_cast<void(CPUParticles2D::*)(double)>(&CPUParticles2D::set_randomness_ratio)>("randomness")
            .property<static_cast<double(CPUParticles2D::*)()const>(&CPUParticles2D::get_lifetime_randomness),static_cast<void(CPUParticles2D::*)(double)>(&CPUParticles2D::set_lifetime_randomness)>("lifetime_randomness")
            .property<static_cast<int32_t(CPUParticles2D::*)()const>(&CPUParticles2D::get_fixed_fps),static_cast<void(CPUParticles2D::*)(int32_t)>(&CPUParticles2D::set_fixed_fps)>("fixed_fps")
            .property<static_cast<bool(CPUParticles2D::*)()const>(&CPUParticles2D::get_fractional_delta),static_cast<void(CPUParticles2D::*)(bool)>(&CPUParticles2D::set_fractional_delta)>("fract_delta")
            .property<static_cast<bool(CPUParticles2D::*)()const>(&CPUParticles2D::get_use_local_coordinates),static_cast<void(CPUParticles2D::*)(bool)>(&CPUParticles2D::set_use_local_coordinates)>("local_coords")
            .property<static_cast<CPUParticles2D::DrawOrder(CPUParticles2D::*)()const>(&CPUParticles2D::get_draw_order),static_cast<void(CPUParticles2D::*)(CPUParticles2D::DrawOrder)>(&CPUParticles2D::set_draw_order)>("draw_order")
            .property<static_cast<Ref<Texture2D>(CPUParticles2D::*)()const>(&CPUParticles2D::get_texture),static_cast<void(CPUParticles2D::*)(const Ref<Texture2D> &)>(&CPUParticles2D::set_texture)>("texture")
            .property<static_cast<CPUParticles2D::EmissionShape(CPUParticles2D::*)()const>(&CPUParticles2D::get_emission_shape),static_cast<void(CPUParticles2D::*)(CPUParticles2D::EmissionShape)>(&CPUParticles2D::set_emission_shape)>("emission_shape")
            .property<static_cast<double(CPUParticles2D::*)()const>(&CPUParticles2D::get_emission_sphere_radius),static_cast<void(CPUParticles2D::*)(double)>(&CPUParticles2D::set_emission_sphere_radius)>("emission_sphere_radius")
            .property<static_cast<Vector2(CPUParticles2D::*)()const>(&CPUParticles2D::get_emission_rect_extents),static_cast<void(CPUParticles2D::*)(const Vector2 &)>(&CPUParticles2D::set_emission_rect_extents)>("emission_rect_extents")
            .property<static_cast<PackedVector2Array(CPUParticles2D::*)()const>(&CPUParticles2D::get_emission_points),static_cast<void(CPUParticles2D::*)(const PackedVector2Array &)>(&CPUParticles2D::set_emission_points)>("emission_points")
            .property<static_cast<PackedVector2Array(CPUParticles2D::*)()const>(&CPUParticles2D::get_emission_normals),static_cast<void(CPUParticles2D::*)(const PackedVector2Array &)>(&CPUParticles2D::set_emission_normals)>("emission_normals")
            .property<static_cast<PackedColorArray(CPUParticles2D::*)()const>(&CPUParticles2D::get_emission_colors),static_cast<void(CPUParticles2D::*)(const PackedColorArray &)>(&CPUParticles2D::set_emission_colors)>("emission_colors")
            .property<static_cast<bool(CPUParticles2D::*)(CPUParticles2D::ParticleFlags)const>(&CPUParticles2D::get_particle_flag),static_cast<void(CPUParticles2D::*)(CPUParticles2D::ParticleFlags,bool)>(&CPUParticles2D::set_particle_flag)>("particle_flag_align_y")
            .property<static_cast<Vector2(CPUParticles2D::*)()const>(&CPUParticles2D::get_direction),static_cast<void(CPUParticles2D::*)(const Vector2 &)>(&CPUParticles2D::set_direction)>("direction")
            .property<static_cast<double(CPUParticles2D::*)()const>(&CPUParticles2D::get_spread),static_cast<void(CPUParticles2D::*)(double)>(&CPUParticles2D::set_spread)>("spread")
            .property<static_cast<Vector2(CPUParticles2D::*)()const>(&CPUParticles2D::get_gravity),static_cast<void(CPUParticles2D::*)(const Vector2 &)>(&CPUParticles2D::set_gravity)>("gravity")
            .property<static_cast<double(CPUParticles2D::*)(CPUParticles2D::Parameter)const>(&CPUParticles2D::get_param_min),static_cast<void(CPUParticles2D::*)(CPUParticles2D::Parameter,double)>(&CPUParticles2D::set_param_min)>("initial_velocity_min")
            .property<static_cast<double(CPUParticles2D::*)(CPUParticles2D::Parameter)const>(&CPUParticles2D::get_param_max),static_cast<void(CPUParticles2D::*)(CPUParticles2D::Parameter,double)>(&CPUParticles2D::set_param_max)>("initial_velocity_max")
            .property<static_cast<double(CPUParticles2D::*)(CPUParticles2D::Parameter)const>(&CPUParticles2D::get_param_min),static_cast<void(CPUParticles2D::*)(CPUParticles2D::Parameter,double)>(&CPUParticles2D::set_param_min)>("angular_velocity_min")
            .property<static_cast<double(CPUParticles2D::*)(CPUParticles2D::Parameter)const>(&CPUParticles2D::get_param_max),static_cast<void(CPUParticles2D::*)(CPUParticles2D::Parameter,double)>(&CPUParticles2D::set_param_max)>("angular_velocity_max")
            .property<static_cast<Ref<Curve>(CPUParticles2D::*)(CPUParticles2D::Parameter)const>(&CPUParticles2D::get_param_curve),static_cast<void(CPUParticles2D::*)(CPUParticles2D::Parameter,const Ref<Curve> &)>(&CPUParticles2D::set_param_curve)>("angular_velocity_curve")
            .property<static_cast<double(CPUParticles2D::*)(CPUParticles2D::Parameter)const>(&CPUParticles2D::get_param_min),static_cast<void(CPUParticles2D::*)(CPUParticles2D::Parameter,double)>(&CPUParticles2D::set_param_min)>("orbit_velocity_min")
            .property<static_cast<double(CPUParticles2D::*)(CPUParticles2D::Parameter)const>(&CPUParticles2D::get_param_max),static_cast<void(CPUParticles2D::*)(CPUParticles2D::Parameter,double)>(&CPUParticles2D::set_param_max)>("orbit_velocity_max")
            .property<static_cast<Ref<Curve>(CPUParticles2D::*)(CPUParticles2D::Parameter)const>(&CPUParticles2D::get_param_curve),static_cast<void(CPUParticles2D::*)(CPUParticles2D::Parameter,const Ref<Curve> &)>(&CPUParticles2D::set_param_curve)>("orbit_velocity_curve")
            .property<static_cast<double(CPUParticles2D::*)(CPUParticles2D::Parameter)const>(&CPUParticles2D::get_param_min),static_cast<void(CPUParticles2D::*)(CPUParticles2D::Parameter,double)>(&CPUParticles2D::set_param_min)>("linear_accel_min")
            .property<static_cast<double(CPUParticles2D::*)(CPUParticles2D::Parameter)const>(&CPUParticles2D::get_param_max),static_cast<void(CPUParticles2D::*)(CPUParticles2D::Parameter,double)>(&CPUParticles2D::set_param_max)>("linear_accel_max")
            .property<static_cast<Ref<Curve>(CPUParticles2D::*)(CPUParticles2D::Parameter)const>(&CPUParticles2D::get_param_curve),static_cast<void(CPUParticles2D::*)(CPUParticles2D::Parameter,const Ref<Curve> &)>(&CPUParticles2D::set_param_curve)>("linear_accel_curve")
            .property<static_cast<double(CPUParticles2D::*)(CPUParticles2D::Parameter)const>(&CPUParticles2D::get_param_min),static_cast<void(CPUParticles2D::*)(CPUParticles2D::Parameter,double)>(&CPUParticles2D::set_param_min)>("radial_accel_min")
            .property<static_cast<double(CPUParticles2D::*)(CPUParticles2D::Parameter)const>(&CPUParticles2D::get_param_max),static_cast<void(CPUParticles2D::*)(CPUParticles2D::Parameter,double)>(&CPUParticles2D::set_param_max)>("radial_accel_max")
            .property<static_cast<Ref<Curve>(CPUParticles2D::*)(CPUParticles2D::Parameter)const>(&CPUParticles2D::get_param_curve),static_cast<void(CPUParticles2D::*)(CPUParticles2D::Parameter,const Ref<Curve> &)>(&CPUParticles2D::set_param_curve)>("radial_accel_curve")
            .property<static_cast<double(CPUParticles2D::*)(CPUParticles2D::Parameter)const>(&CPUParticles2D::get_param_min),static_cast<void(CPUParticles2D::*)(CPUParticles2D::Parameter,double)>(&CPUParticles2D::set_param_min)>("tangential_accel_min")
            .property<static_cast<double(CPUParticles2D::*)(CPUParticles2D::Parameter)const>(&CPUParticles2D::get_param_max),static_cast<void(CPUParticles2D::*)(CPUParticles2D::Parameter,double)>(&CPUParticles2D::set_param_max)>("tangential_accel_max")
            .property<static_cast<Ref<Curve>(CPUParticles2D::*)(CPUParticles2D::Parameter)const>(&CPUParticles2D::get_param_curve),static_cast<void(CPUParticles2D::*)(CPUParticles2D::Parameter,const Ref<Curve> &)>(&CPUParticles2D::set_param_curve)>("tangential_accel_curve")
            .property<static_cast<double(CPUParticles2D::*)(CPUParticles2D::Parameter)const>(&CPUParticles2D::get_param_min),static_cast<void(CPUParticles2D::*)(CPUParticles2D::Parameter,double)>(&CPUParticles2D::set_param_min)>("damping_min")
            .property<static_cast<double(CPUParticles2D::*)(CPUParticles2D::Parameter)const>(&CPUParticles2D::get_param_max),static_cast<void(CPUParticles2D::*)(CPUParticles2D::Parameter,double)>(&CPUParticles2D::set_param_max)>("damping_max")
            .property<static_cast<Ref<Curve>(CPUParticles2D::*)(CPUParticles2D::Parameter)const>(&CPUParticles2D::get_param_curve),static_cast<void(CPUParticles2D::*)(CPUParticles2D::Parameter,const Ref<Curve> &)>(&CPUParticles2D::set_param_curve)>("damping_curve")
            .property<static_cast<double(CPUParticles2D::*)(CPUParticles2D::Parameter)const>(&CPUParticles2D::get_param_min),static_cast<void(CPUParticles2D::*)(CPUParticles2D::Parameter,double)>(&CPUParticles2D::set_param_min)>("angle_min")
            .property<static_cast<double(CPUParticles2D::*)(CPUParticles2D::Parameter)const>(&CPUParticles2D::get_param_max),static_cast<void(CPUParticles2D::*)(CPUParticles2D::Parameter,double)>(&CPUParticles2D::set_param_max)>("angle_max")
            .property<static_cast<Ref<Curve>(CPUParticles2D::*)(CPUParticles2D::Parameter)const>(&CPUParticles2D::get_param_curve),static_cast<void(CPUParticles2D::*)(CPUParticles2D::Parameter,const Ref<Curve> &)>(&CPUParticles2D::set_param_curve)>("angle_curve")
            .property<static_cast<double(CPUParticles2D::*)(CPUParticles2D::Parameter)const>(&CPUParticles2D::get_param_min),static_cast<void(CPUParticles2D::*)(CPUParticles2D::Parameter,double)>(&CPUParticles2D::set_param_min)>("scale_amount_min")
            .property<static_cast<double(CPUParticles2D::*)(CPUParticles2D::Parameter)const>(&CPUParticles2D::get_param_max),static_cast<void(CPUParticles2D::*)(CPUParticles2D::Parameter,double)>(&CPUParticles2D::set_param_max)>("scale_amount_max")
            .property<static_cast<Ref<Curve>(CPUParticles2D::*)(CPUParticles2D::Parameter)const>(&CPUParticles2D::get_param_curve),static_cast<void(CPUParticles2D::*)(CPUParticles2D::Parameter,const Ref<Curve> &)>(&CPUParticles2D::set_param_curve)>("scale_amount_curve")
            .property<static_cast<bool(CPUParticles2D::*)()>(&CPUParticles2D::get_split_scale),static_cast<void(CPUParticles2D::*)(bool)>(&CPUParticles2D::set_split_scale)>("split_scale")
            .property<static_cast<Ref<Curve>(CPUParticles2D::*)()const>(&CPUParticles2D::get_scale_curve_x),static_cast<void(CPUParticles2D::*)(const Ref<Curve> &)>(&CPUParticles2D::set_scale_curve_x)>("scale_curve_x")
            .property<static_cast<Ref<Curve>(CPUParticles2D::*)()const>(&CPUParticles2D::get_scale_curve_y),static_cast<void(CPUParticles2D::*)(const Ref<Curve> &)>(&CPUParticles2D::set_scale_curve_y)>("scale_curve_y")
            .property<static_cast<Color(CPUParticles2D::*)()const>(&CPUParticles2D::get_color),static_cast<void(CPUParticles2D::*)(const Color &)>(&CPUParticles2D::set_color)>("color")
            .property<static_cast<Ref<Gradient>(CPUParticles2D::*)()const>(&CPUParticles2D::get_color_ramp),static_cast<void(CPUParticles2D::*)(const Ref<Gradient> &)>(&CPUParticles2D::set_color_ramp)>("color_ramp")
            .property<static_cast<Ref<Gradient>(CPUParticles2D::*)()const>(&CPUParticles2D::get_color_initial_ramp),static_cast<void(CPUParticles2D::*)(const Ref<Gradient> &)>(&CPUParticles2D::set_color_initial_ramp)>("color_initial_ramp")
            .property<static_cast<double(CPUParticles2D::*)(CPUParticles2D::Parameter)const>(&CPUParticles2D::get_param_min),static_cast<void(CPUParticles2D::*)(CPUParticles2D::Parameter,double)>(&CPUParticles2D::set_param_min)>("hue_variation_min")
            .property<static_cast<double(CPUParticles2D::*)(CPUParticles2D::Parameter)const>(&CPUParticles2D::get_param_max),static_cast<void(CPUParticles2D::*)(CPUParticles2D::Parameter,double)>(&CPUParticles2D::set_param_max)>("hue_variation_max")
            .property<static_cast<Ref<Curve>(CPUParticles2D::*)(CPUParticles2D::Parameter)const>(&CPUParticles2D::get_param_curve),static_cast<void(CPUParticles2D::*)(CPUParticles2D::Parameter,const Ref<Curve> &)>(&CPUParticles2D::set_param_curve)>("hue_variation_curve")
            .property<static_cast<double(CPUParticles2D::*)(CPUParticles2D::Parameter)const>(&CPUParticles2D::get_param_min),static_cast<void(CPUParticles2D::*)(CPUParticles2D::Parameter,double)>(&CPUParticles2D::set_param_min)>("anim_speed_min")
            .property<static_cast<double(CPUParticles2D::*)(CPUParticles2D::Parameter)const>(&CPUParticles2D::get_param_max),static_cast<void(CPUParticles2D::*)(CPUParticles2D::Parameter,double)>(&CPUParticles2D::set_param_max)>("anim_speed_max")
            .property<static_cast<Ref<Curve>(CPUParticles2D::*)(CPUParticles2D::Parameter)const>(&CPUParticles2D::get_param_curve),static_cast<void(CPUParticles2D::*)(CPUParticles2D::Parameter,const Ref<Curve> &)>(&CPUParticles2D::set_param_curve)>("anim_speed_curve")
            .property<static_cast<double(CPUParticles2D::*)(CPUParticles2D::Parameter)const>(&CPUParticles2D::get_param_min),static_cast<void(CPUParticles2D::*)(CPUParticles2D::Parameter,double)>(&CPUParticles2D::set_param_min)>("anim_offset_min")
            .property<static_cast<double(CPUParticles2D::*)(CPUParticles2D::Parameter)const>(&CPUParticles2D::get_param_max),static_cast<void(CPUParticles2D::*)(CPUParticles2D::Parameter,double)>(&CPUParticles2D::set_param_max)>("anim_offset_max")
            .property<static_cast<Ref<Curve>(CPUParticles2D::*)(CPUParticles2D::Parameter)const>(&CPUParticles2D::get_param_curve),static_cast<void(CPUParticles2D::*)(CPUParticles2D::Parameter,const Ref<Curve> &)>(&CPUParticles2D::set_param_curve)>("anim_offset_curve")
            .fun<static_cast<void(CPUParticles2D::*)()>(&CPUParticles2D::restart)>("restart")
            .fun<static_cast<void(CPUParticles2D::*)(Node *)>(&CPUParticles2D::convert_from_particles)>("convert_from_particles")
;    qjs::Value _DrawOrder = context->newObject();
    _DrawOrder["DRAW_ORDER_INDEX"] = CPUParticles2D::DrawOrder::DRAW_ORDER_INDEX;
    _DrawOrder["DRAW_ORDER_LIFETIME"] = CPUParticles2D::DrawOrder::DRAW_ORDER_LIFETIME;
    _module.add("DrawOrder", std::move(_DrawOrder));
    qjs::Value _Parameter = context->newObject();
    _Parameter["PARAM_INITIAL_LINEAR_VELOCITY"] = CPUParticles2D::Parameter::PARAM_INITIAL_LINEAR_VELOCITY;
    _Parameter["PARAM_ANGULAR_VELOCITY"] = CPUParticles2D::Parameter::PARAM_ANGULAR_VELOCITY;
    _Parameter["PARAM_ORBIT_VELOCITY"] = CPUParticles2D::Parameter::PARAM_ORBIT_VELOCITY;
    _Parameter["PARAM_LINEAR_ACCEL"] = CPUParticles2D::Parameter::PARAM_LINEAR_ACCEL;
    _Parameter["PARAM_RADIAL_ACCEL"] = CPUParticles2D::Parameter::PARAM_RADIAL_ACCEL;
    _Parameter["PARAM_TANGENTIAL_ACCEL"] = CPUParticles2D::Parameter::PARAM_TANGENTIAL_ACCEL;
    _Parameter["PARAM_DAMPING"] = CPUParticles2D::Parameter::PARAM_DAMPING;
    _Parameter["PARAM_ANGLE"] = CPUParticles2D::Parameter::PARAM_ANGLE;
    _Parameter["PARAM_SCALE"] = CPUParticles2D::Parameter::PARAM_SCALE;
    _Parameter["PARAM_HUE_VARIATION"] = CPUParticles2D::Parameter::PARAM_HUE_VARIATION;
    _Parameter["PARAM_ANIM_SPEED"] = CPUParticles2D::Parameter::PARAM_ANIM_SPEED;
    _Parameter["PARAM_ANIM_OFFSET"] = CPUParticles2D::Parameter::PARAM_ANIM_OFFSET;
    _Parameter["PARAM_MAX"] = CPUParticles2D::Parameter::PARAM_MAX;
    _module.add("Parameter", std::move(_Parameter));
    qjs::Value _ParticleFlags = context->newObject();
    _ParticleFlags["PARTICLE_FLAG_ALIGN_Y_TO_VELOCITY"] = CPUParticles2D::ParticleFlags::PARTICLE_FLAG_ALIGN_Y_TO_VELOCITY;
    _ParticleFlags["PARTICLE_FLAG_ROTATE_Y"] = CPUParticles2D::ParticleFlags::PARTICLE_FLAG_ROTATE_Y;
    _ParticleFlags["PARTICLE_FLAG_DISABLE_Z"] = CPUParticles2D::ParticleFlags::PARTICLE_FLAG_DISABLE_Z;
    _ParticleFlags["PARTICLE_FLAG_MAX"] = CPUParticles2D::ParticleFlags::PARTICLE_FLAG_MAX;
    _module.add("ParticleFlags", std::move(_ParticleFlags));
    qjs::Value _EmissionShape = context->newObject();
    _EmissionShape["EMISSION_SHAPE_POINT"] = CPUParticles2D::EmissionShape::EMISSION_SHAPE_POINT;
    _EmissionShape["EMISSION_SHAPE_SPHERE"] = CPUParticles2D::EmissionShape::EMISSION_SHAPE_SPHERE;
    _EmissionShape["EMISSION_SHAPE_SPHERE_SURFACE"] = CPUParticles2D::EmissionShape::EMISSION_SHAPE_SPHERE_SURFACE;
    _EmissionShape["EMISSION_SHAPE_RECTANGLE"] = CPUParticles2D::EmissionShape::EMISSION_SHAPE_RECTANGLE;
    _EmissionShape["EMISSION_SHAPE_POINTS"] = CPUParticles2D::EmissionShape::EMISSION_SHAPE_POINTS;
    _EmissionShape["EMISSION_SHAPE_DIRECTED_POINTS"] = CPUParticles2D::EmissionShape::EMISSION_SHAPE_DIRECTED_POINTS;
    _EmissionShape["EMISSION_SHAPE_MAX"] = CPUParticles2D::EmissionShape::EMISSION_SHAPE_MAX;
    _module.add("EmissionShape", std::move(_EmissionShape));
}