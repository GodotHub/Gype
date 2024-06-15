#include <godot_cpp/classes/gpu_particles3d.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/aabb.hpp>
#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/variant/transform3d.hpp>
#include <godot_cpp/variant/vector3.hpp>
#include <godot_cpp/classes/geometry_instance3d.hpp>
#include <godot_cpp/classes/material.hpp>
#include <godot_cpp/classes/mesh.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/skin.hpp>
#include <godot_cpp/variant/node_path.hpp>
#include <stdint.h>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_GPUParticles3D() {
    qjs::Context::Module &_module = get_Node3D_module();
    _module.class_<GPUParticles3D>("GPUParticles3D")
            .constructor<>()
            .base<GeometryInstance3D>()
            .static_fun<&GPUParticles3D::MAX_DRAW_PASSES>("MAX_DRAW_PASSES")
            .property<static_cast<bool(GPUParticles3D::*)()const>(&GPUParticles3D::is_emitting),static_cast<void(GPUParticles3D::*)(bool)>(&GPUParticles3D::set_emitting)>("emitting")
            .property<static_cast<int32_t(GPUParticles3D::*)()const>(&GPUParticles3D::get_amount),static_cast<void(GPUParticles3D::*)(int32_t)>(&GPUParticles3D::set_amount)>("amount")
            .property<static_cast<double(GPUParticles3D::*)()const>(&GPUParticles3D::get_amount_ratio),static_cast<void(GPUParticles3D::*)(double)>(&GPUParticles3D::set_amount_ratio)>("amount_ratio")
            .property<static_cast<NodePath(GPUParticles3D::*)()const>(&GPUParticles3D::get_sub_emitter),static_cast<void(GPUParticles3D::*)(const NodePath &)>(&GPUParticles3D::set_sub_emitter)>("sub_emitter")
            .property<static_cast<double(GPUParticles3D::*)()const>(&GPUParticles3D::get_lifetime),static_cast<void(GPUParticles3D::*)(double)>(&GPUParticles3D::set_lifetime)>("lifetime")
            .property<static_cast<double(GPUParticles3D::*)()const>(&GPUParticles3D::get_interp_to_end),static_cast<void(GPUParticles3D::*)(double)>(&GPUParticles3D::set_interp_to_end)>("interp_to_end")
            .property<static_cast<bool(GPUParticles3D::*)()const>(&GPUParticles3D::get_one_shot),static_cast<void(GPUParticles3D::*)(bool)>(&GPUParticles3D::set_one_shot)>("one_shot")
            .property<static_cast<double(GPUParticles3D::*)()const>(&GPUParticles3D::get_pre_process_time),static_cast<void(GPUParticles3D::*)(double)>(&GPUParticles3D::set_pre_process_time)>("preprocess")
            .property<static_cast<double(GPUParticles3D::*)()const>(&GPUParticles3D::get_speed_scale),static_cast<void(GPUParticles3D::*)(double)>(&GPUParticles3D::set_speed_scale)>("speed_scale")
            .property<static_cast<double(GPUParticles3D::*)()const>(&GPUParticles3D::get_explosiveness_ratio),static_cast<void(GPUParticles3D::*)(double)>(&GPUParticles3D::set_explosiveness_ratio)>("explosiveness")
            .property<static_cast<double(GPUParticles3D::*)()const>(&GPUParticles3D::get_randomness_ratio),static_cast<void(GPUParticles3D::*)(double)>(&GPUParticles3D::set_randomness_ratio)>("randomness")
            .property<static_cast<int32_t(GPUParticles3D::*)()const>(&GPUParticles3D::get_fixed_fps),static_cast<void(GPUParticles3D::*)(int32_t)>(&GPUParticles3D::set_fixed_fps)>("fixed_fps")
            .property<static_cast<bool(GPUParticles3D::*)()const>(&GPUParticles3D::get_interpolate),static_cast<void(GPUParticles3D::*)(bool)>(&GPUParticles3D::set_interpolate)>("interpolate")
            .property<static_cast<bool(GPUParticles3D::*)()const>(&GPUParticles3D::get_fractional_delta),static_cast<void(GPUParticles3D::*)(bool)>(&GPUParticles3D::set_fractional_delta)>("fract_delta")
            .property<static_cast<double(GPUParticles3D::*)()const>(&GPUParticles3D::get_collision_base_size),static_cast<void(GPUParticles3D::*)(double)>(&GPUParticles3D::set_collision_base_size)>("collision_base_size")
            .property<static_cast<AABB(GPUParticles3D::*)()const>(&GPUParticles3D::get_visibility_aabb),static_cast<void(GPUParticles3D::*)(const AABB &)>(&GPUParticles3D::set_visibility_aabb)>("visibility_aabb")
            .property<static_cast<bool(GPUParticles3D::*)()const>(&GPUParticles3D::get_use_local_coordinates),static_cast<void(GPUParticles3D::*)(bool)>(&GPUParticles3D::set_use_local_coordinates)>("local_coords")
            .property<static_cast<GPUParticles3D::DrawOrder(GPUParticles3D::*)()const>(&GPUParticles3D::get_draw_order),static_cast<void(GPUParticles3D::*)(GPUParticles3D::DrawOrder)>(&GPUParticles3D::set_draw_order)>("draw_order")
            .property<static_cast<GPUParticles3D::TransformAlign(GPUParticles3D::*)()const>(&GPUParticles3D::get_transform_align),static_cast<void(GPUParticles3D::*)(GPUParticles3D::TransformAlign)>(&GPUParticles3D::set_transform_align)>("transform_align")
            .property<static_cast<bool(GPUParticles3D::*)()const>(&GPUParticles3D::is_trail_enabled),static_cast<void(GPUParticles3D::*)(bool)>(&GPUParticles3D::set_trail_enabled)>("trail_enabled")
            .property<static_cast<double(GPUParticles3D::*)()const>(&GPUParticles3D::get_trail_lifetime),static_cast<void(GPUParticles3D::*)(double)>(&GPUParticles3D::set_trail_lifetime)>("trail_lifetime")
            .property<static_cast<Ref<Material>(GPUParticles3D::*)()const>(&GPUParticles3D::get_process_material),static_cast<void(GPUParticles3D::*)(const Ref<Material> &)>(&GPUParticles3D::set_process_material)>("process_material")
            .property<static_cast<int32_t(GPUParticles3D::*)()const>(&GPUParticles3D::get_draw_passes),static_cast<void(GPUParticles3D::*)(int32_t)>(&GPUParticles3D::set_draw_passes)>("draw_passes")
            .property<static_cast<Ref<Mesh>(GPUParticles3D::*)(int32_t)const>(&GPUParticles3D::get_draw_pass_mesh),static_cast<void(GPUParticles3D::*)(int32_t,const Ref<Mesh> &)>(&GPUParticles3D::set_draw_pass_mesh)>("draw_pass_1")
            .property<static_cast<Ref<Mesh>(GPUParticles3D::*)(int32_t)const>(&GPUParticles3D::get_draw_pass_mesh),static_cast<void(GPUParticles3D::*)(int32_t,const Ref<Mesh> &)>(&GPUParticles3D::set_draw_pass_mesh)>("draw_pass_2")
            .property<static_cast<Ref<Mesh>(GPUParticles3D::*)(int32_t)const>(&GPUParticles3D::get_draw_pass_mesh),static_cast<void(GPUParticles3D::*)(int32_t,const Ref<Mesh> &)>(&GPUParticles3D::set_draw_pass_mesh)>("draw_pass_3")
            .property<static_cast<Ref<Mesh>(GPUParticles3D::*)(int32_t)const>(&GPUParticles3D::get_draw_pass_mesh),static_cast<void(GPUParticles3D::*)(int32_t,const Ref<Mesh> &)>(&GPUParticles3D::set_draw_pass_mesh)>("draw_pass_4")
            .property<static_cast<Ref<Skin>(GPUParticles3D::*)()const>(&GPUParticles3D::get_skin),static_cast<void(GPUParticles3D::*)(const Ref<Skin> &)>(&GPUParticles3D::set_skin)>("draw_skin")
            .fun<static_cast<void(GPUParticles3D::*)()>(&GPUParticles3D::restart)>("restart")
            .fun<static_cast<AABB(GPUParticles3D::*)()const>(&GPUParticles3D::capture_aabb)>("capture_aabb")
            .fun<static_cast<void(GPUParticles3D::*)(const Transform3D &,const Vector3 &,const Color &,const Color &,uint32_t)>(&GPUParticles3D::emit_particle)>("emit_particle")
            .fun<static_cast<void(GPUParticles3D::*)(Node *)>(&GPUParticles3D::convert_from_particles)>("convert_from_particles")
;    qjs::Value _DrawOrder = context->newObject();
    _DrawOrder["DRAW_ORDER_INDEX"] = GPUParticles3D::DrawOrder::DRAW_ORDER_INDEX;
    _DrawOrder["DRAW_ORDER_LIFETIME"] = GPUParticles3D::DrawOrder::DRAW_ORDER_LIFETIME;
    _DrawOrder["DRAW_ORDER_REVERSE_LIFETIME"] = GPUParticles3D::DrawOrder::DRAW_ORDER_REVERSE_LIFETIME;
    _DrawOrder["DRAW_ORDER_VIEW_DEPTH"] = GPUParticles3D::DrawOrder::DRAW_ORDER_VIEW_DEPTH;
    _module.add("DrawOrder", std::move(_DrawOrder));
    qjs::Value _EmitFlags = context->newObject();
    _EmitFlags["EMIT_FLAG_POSITION"] = GPUParticles3D::EmitFlags::EMIT_FLAG_POSITION;
    _EmitFlags["EMIT_FLAG_ROTATION_SCALE"] = GPUParticles3D::EmitFlags::EMIT_FLAG_ROTATION_SCALE;
    _EmitFlags["EMIT_FLAG_VELOCITY"] = GPUParticles3D::EmitFlags::EMIT_FLAG_VELOCITY;
    _EmitFlags["EMIT_FLAG_COLOR"] = GPUParticles3D::EmitFlags::EMIT_FLAG_COLOR;
    _EmitFlags["EMIT_FLAG_CUSTOM"] = GPUParticles3D::EmitFlags::EMIT_FLAG_CUSTOM;
    _module.add("EmitFlags", std::move(_EmitFlags));
    qjs::Value _TransformAlign = context->newObject();
    _TransformAlign["TRANSFORM_ALIGN_DISABLED"] = GPUParticles3D::TransformAlign::TRANSFORM_ALIGN_DISABLED;
    _TransformAlign["TRANSFORM_ALIGN_Z_BILLBOARD"] = GPUParticles3D::TransformAlign::TRANSFORM_ALIGN_Z_BILLBOARD;
    _TransformAlign["TRANSFORM_ALIGN_Y_TO_VELOCITY"] = GPUParticles3D::TransformAlign::TRANSFORM_ALIGN_Y_TO_VELOCITY;
    _TransformAlign["TRANSFORM_ALIGN_Z_BILLBOARD_Y_TO_VELOCITY"] = GPUParticles3D::TransformAlign::TRANSFORM_ALIGN_Z_BILLBOARD_Y_TO_VELOCITY;
    _module.add("TransformAlign", std::move(_TransformAlign));
}