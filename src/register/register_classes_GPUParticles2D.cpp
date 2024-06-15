#include <godot_cpp/classes/gpu_particles2d.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/variant/rect2.hpp>
#include <godot_cpp/variant/transform2d.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <godot_cpp/classes/material.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/node2d.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/variant/node_path.hpp>
#include <stdint.h>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_GPUParticles2D() {
    qjs::Context::Module &_module = get_Node2D_module();
    _module.class_<GPUParticles2D>("GPUParticles2D")
            .constructor<>()
            .base<Node2D>()
            .property<static_cast<bool(GPUParticles2D::*)()const>(&GPUParticles2D::is_emitting),static_cast<void(GPUParticles2D::*)(bool)>(&GPUParticles2D::set_emitting)>("emitting")
            .property<static_cast<int32_t(GPUParticles2D::*)()const>(&GPUParticles2D::get_amount),static_cast<void(GPUParticles2D::*)(int32_t)>(&GPUParticles2D::set_amount)>("amount")
            .property<static_cast<double(GPUParticles2D::*)()const>(&GPUParticles2D::get_amount_ratio),static_cast<void(GPUParticles2D::*)(double)>(&GPUParticles2D::set_amount_ratio)>("amount_ratio")
            .property<static_cast<NodePath(GPUParticles2D::*)()const>(&GPUParticles2D::get_sub_emitter),static_cast<void(GPUParticles2D::*)(const NodePath &)>(&GPUParticles2D::set_sub_emitter)>("sub_emitter")
            .property<static_cast<Ref<Material>(GPUParticles2D::*)()const>(&GPUParticles2D::get_process_material),static_cast<void(GPUParticles2D::*)(const Ref<Material> &)>(&GPUParticles2D::set_process_material)>("process_material")
            .property<static_cast<Ref<Texture2D>(GPUParticles2D::*)()const>(&GPUParticles2D::get_texture),static_cast<void(GPUParticles2D::*)(const Ref<Texture2D> &)>(&GPUParticles2D::set_texture)>("texture")
            .property<static_cast<double(GPUParticles2D::*)()const>(&GPUParticles2D::get_lifetime),static_cast<void(GPUParticles2D::*)(double)>(&GPUParticles2D::set_lifetime)>("lifetime")
            .property<static_cast<bool(GPUParticles2D::*)()const>(&GPUParticles2D::get_one_shot),static_cast<void(GPUParticles2D::*)(bool)>(&GPUParticles2D::set_one_shot)>("one_shot")
            .property<static_cast<double(GPUParticles2D::*)()const>(&GPUParticles2D::get_pre_process_time),static_cast<void(GPUParticles2D::*)(double)>(&GPUParticles2D::set_pre_process_time)>("preprocess")
            .property<static_cast<double(GPUParticles2D::*)()const>(&GPUParticles2D::get_speed_scale),static_cast<void(GPUParticles2D::*)(double)>(&GPUParticles2D::set_speed_scale)>("speed_scale")
            .property<static_cast<double(GPUParticles2D::*)()const>(&GPUParticles2D::get_explosiveness_ratio),static_cast<void(GPUParticles2D::*)(double)>(&GPUParticles2D::set_explosiveness_ratio)>("explosiveness")
            .property<static_cast<double(GPUParticles2D::*)()const>(&GPUParticles2D::get_randomness_ratio),static_cast<void(GPUParticles2D::*)(double)>(&GPUParticles2D::set_randomness_ratio)>("randomness")
            .property<static_cast<int32_t(GPUParticles2D::*)()const>(&GPUParticles2D::get_fixed_fps),static_cast<void(GPUParticles2D::*)(int32_t)>(&GPUParticles2D::set_fixed_fps)>("fixed_fps")
            .property<static_cast<bool(GPUParticles2D::*)()const>(&GPUParticles2D::get_interpolate),static_cast<void(GPUParticles2D::*)(bool)>(&GPUParticles2D::set_interpolate)>("interpolate")
            .property<static_cast<bool(GPUParticles2D::*)()const>(&GPUParticles2D::get_fractional_delta),static_cast<void(GPUParticles2D::*)(bool)>(&GPUParticles2D::set_fractional_delta)>("fract_delta")
            .property<static_cast<double(GPUParticles2D::*)()const>(&GPUParticles2D::get_interp_to_end),static_cast<void(GPUParticles2D::*)(double)>(&GPUParticles2D::set_interp_to_end)>("interp_to_end")
            .property<static_cast<double(GPUParticles2D::*)()const>(&GPUParticles2D::get_collision_base_size),static_cast<void(GPUParticles2D::*)(double)>(&GPUParticles2D::set_collision_base_size)>("collision_base_size")
            .property<static_cast<Rect2(GPUParticles2D::*)()const>(&GPUParticles2D::get_visibility_rect),static_cast<void(GPUParticles2D::*)(const Rect2 &)>(&GPUParticles2D::set_visibility_rect)>("visibility_rect")
            .property<static_cast<bool(GPUParticles2D::*)()const>(&GPUParticles2D::get_use_local_coordinates),static_cast<void(GPUParticles2D::*)(bool)>(&GPUParticles2D::set_use_local_coordinates)>("local_coords")
            .property<static_cast<GPUParticles2D::DrawOrder(GPUParticles2D::*)()const>(&GPUParticles2D::get_draw_order),static_cast<void(GPUParticles2D::*)(GPUParticles2D::DrawOrder)>(&GPUParticles2D::set_draw_order)>("draw_order")
            .property<static_cast<bool(GPUParticles2D::*)()const>(&GPUParticles2D::is_trail_enabled),static_cast<void(GPUParticles2D::*)(bool)>(&GPUParticles2D::set_trail_enabled)>("trail_enabled")
            .property<static_cast<double(GPUParticles2D::*)()const>(&GPUParticles2D::get_trail_lifetime),static_cast<void(GPUParticles2D::*)(double)>(&GPUParticles2D::set_trail_lifetime)>("trail_lifetime")
            .property<static_cast<int32_t(GPUParticles2D::*)()const>(&GPUParticles2D::get_trail_sections),static_cast<void(GPUParticles2D::*)(int32_t)>(&GPUParticles2D::set_trail_sections)>("trail_sections")
            .property<static_cast<int32_t(GPUParticles2D::*)()const>(&GPUParticles2D::get_trail_section_subdivisions),static_cast<void(GPUParticles2D::*)(int32_t)>(&GPUParticles2D::set_trail_section_subdivisions)>("trail_section_subdivisions")
            .fun<static_cast<Rect2(GPUParticles2D::*)()const>(&GPUParticles2D::capture_rect)>("capture_rect")
            .fun<static_cast<void(GPUParticles2D::*)()>(&GPUParticles2D::restart)>("restart")
            .fun<static_cast<void(GPUParticles2D::*)(const Transform2D &,const Vector2 &,const Color &,const Color &,uint32_t)>(&GPUParticles2D::emit_particle)>("emit_particle")
            .fun<static_cast<void(GPUParticles2D::*)(Node *)>(&GPUParticles2D::convert_from_particles)>("convert_from_particles")
;    qjs::Value _DrawOrder = context->newObject();
    _DrawOrder["DRAW_ORDER_INDEX"] = GPUParticles2D::DrawOrder::DRAW_ORDER_INDEX;
    _DrawOrder["DRAW_ORDER_LIFETIME"] = GPUParticles2D::DrawOrder::DRAW_ORDER_LIFETIME;
    _DrawOrder["DRAW_ORDER_REVERSE_LIFETIME"] = GPUParticles2D::DrawOrder::DRAW_ORDER_REVERSE_LIFETIME;
    _module.add("DrawOrder", std::move(_DrawOrder));
    qjs::Value _EmitFlags = context->newObject();
    _EmitFlags["EMIT_FLAG_POSITION"] = GPUParticles2D::EmitFlags::EMIT_FLAG_POSITION;
    _EmitFlags["EMIT_FLAG_ROTATION_SCALE"] = GPUParticles2D::EmitFlags::EMIT_FLAG_ROTATION_SCALE;
    _EmitFlags["EMIT_FLAG_VELOCITY"] = GPUParticles2D::EmitFlags::EMIT_FLAG_VELOCITY;
    _EmitFlags["EMIT_FLAG_COLOR"] = GPUParticles2D::EmitFlags::EMIT_FLAG_COLOR;
    _EmitFlags["EMIT_FLAG_CUSTOM"] = GPUParticles2D::EmitFlags::EMIT_FLAG_CUSTOM;
    _module.add("EmitFlags", std::move(_EmitFlags));
}