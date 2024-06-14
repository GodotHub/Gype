
#include <godot_cpp/classes/gpu_particles2d.hpp>
#include <godot_cpp/classes/material.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/node2d.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/variant/node_path.hpp>
#include <godot_cpp/variant/rect2.hpp>
#include <godot_cpp/variant/transform2d.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_GPUParticles2D() {
	qjs::Context::Module &_module = get_Node2D_module();
	_module.class_<GPUParticles2D>("GPUParticles2D")
			.constructor<>()
			.base<Node2D>()
			.property<static_cast<bool (GPUParticles2D::*)() const>(&GPUParticles2D::is_emitting), static_cast<void (GPUParticles2D::*)(bool)>(&GPUParticles2D::set_emitting)>((new std::string("emitting"))->c_str())
			.property<static_cast<int32_t (GPUParticles2D::*)() const>(&GPUParticles2D::get_amount), static_cast<void (GPUParticles2D::*)(int32_t)>(&GPUParticles2D::set_amount)>((new std::string("amount"))->c_str())
			.property<static_cast<double (GPUParticles2D::*)() const>(&GPUParticles2D::get_amount_ratio), static_cast<void (GPUParticles2D::*)(double)>(&GPUParticles2D::set_amount_ratio)>((new std::string("amount_ratio"))->c_str())
			.property<static_cast<NodePath (GPUParticles2D::*)() const>(&GPUParticles2D::get_sub_emitter), static_cast<void (GPUParticles2D::*)(const NodePath &)>(&GPUParticles2D::set_sub_emitter)>((new std::string("sub_emitter"))->c_str())
			.property<static_cast<Ref<Material> (GPUParticles2D::*)() const>(&GPUParticles2D::get_process_material), static_cast<void (GPUParticles2D::*)(const Ref<Material> &)>(&GPUParticles2D::set_process_material)>((new std::string("process_material"))->c_str())
			.property<static_cast<Ref<Texture2D> (GPUParticles2D::*)() const>(&GPUParticles2D::get_texture), static_cast<void (GPUParticles2D::*)(const Ref<Texture2D> &)>(&GPUParticles2D::set_texture)>((new std::string("texture"))->c_str())
			.property<static_cast<double (GPUParticles2D::*)() const>(&GPUParticles2D::get_lifetime), static_cast<void (GPUParticles2D::*)(double)>(&GPUParticles2D::set_lifetime)>((new std::string("lifetime"))->c_str())
			.property<static_cast<bool (GPUParticles2D::*)() const>(&GPUParticles2D::get_one_shot), static_cast<void (GPUParticles2D::*)(bool)>(&GPUParticles2D::set_one_shot)>((new std::string("one_shot"))->c_str())
			.property<static_cast<double (GPUParticles2D::*)() const>(&GPUParticles2D::get_pre_process_time), static_cast<void (GPUParticles2D::*)(double)>(&GPUParticles2D::set_pre_process_time)>((new std::string("preprocess"))->c_str())
			.property<static_cast<double (GPUParticles2D::*)() const>(&GPUParticles2D::get_speed_scale), static_cast<void (GPUParticles2D::*)(double)>(&GPUParticles2D::set_speed_scale)>((new std::string("speed_scale"))->c_str())
			.property<static_cast<double (GPUParticles2D::*)() const>(&GPUParticles2D::get_explosiveness_ratio), static_cast<void (GPUParticles2D::*)(double)>(&GPUParticles2D::set_explosiveness_ratio)>((new std::string("explosiveness"))->c_str())
			.property<static_cast<double (GPUParticles2D::*)() const>(&GPUParticles2D::get_randomness_ratio), static_cast<void (GPUParticles2D::*)(double)>(&GPUParticles2D::set_randomness_ratio)>((new std::string("randomness"))->c_str())
			.property<static_cast<int32_t (GPUParticles2D::*)() const>(&GPUParticles2D::get_fixed_fps), static_cast<void (GPUParticles2D::*)(int32_t)>(&GPUParticles2D::set_fixed_fps)>((new std::string("fixed_fps"))->c_str())
			.property<static_cast<bool (GPUParticles2D::*)() const>(&GPUParticles2D::get_interpolate), static_cast<void (GPUParticles2D::*)(bool)>(&GPUParticles2D::set_interpolate)>((new std::string("interpolate"))->c_str())
			.property<static_cast<bool (GPUParticles2D::*)() const>(&GPUParticles2D::get_fractional_delta), static_cast<void (GPUParticles2D::*)(bool)>(&GPUParticles2D::set_fractional_delta)>((new std::string("fract_delta"))->c_str())
			.property<static_cast<double (GPUParticles2D::*)() const>(&GPUParticles2D::get_interp_to_end), static_cast<void (GPUParticles2D::*)(double)>(&GPUParticles2D::set_interp_to_end)>((new std::string("interp_to_end"))->c_str())
			.property<static_cast<double (GPUParticles2D::*)() const>(&GPUParticles2D::get_collision_base_size), static_cast<void (GPUParticles2D::*)(double)>(&GPUParticles2D::set_collision_base_size)>((new std::string("collision_base_size"))->c_str())
			.property<static_cast<Rect2 (GPUParticles2D::*)() const>(&GPUParticles2D::get_visibility_rect), static_cast<void (GPUParticles2D::*)(const Rect2 &)>(&GPUParticles2D::set_visibility_rect)>((new std::string("visibility_rect"))->c_str())
			.property<static_cast<bool (GPUParticles2D::*)() const>(&GPUParticles2D::get_use_local_coordinates), static_cast<void (GPUParticles2D::*)(bool)>(&GPUParticles2D::set_use_local_coordinates)>((new std::string("local_coords"))->c_str())
			.property<static_cast<GPUParticles2D::DrawOrder (GPUParticles2D::*)() const>(&GPUParticles2D::get_draw_order), static_cast<void (GPUParticles2D::*)(GPUParticles2D::DrawOrder)>(&GPUParticles2D::set_draw_order)>((new std::string("draw_order"))->c_str())
			.property<static_cast<bool (GPUParticles2D::*)() const>(&GPUParticles2D::is_trail_enabled), static_cast<void (GPUParticles2D::*)(bool)>(&GPUParticles2D::set_trail_enabled)>((new std::string("trail_enabled"))->c_str())
			.property<static_cast<double (GPUParticles2D::*)() const>(&GPUParticles2D::get_trail_lifetime), static_cast<void (GPUParticles2D::*)(double)>(&GPUParticles2D::set_trail_lifetime)>((new std::string("trail_lifetime"))->c_str())
			.property<static_cast<int32_t (GPUParticles2D::*)() const>(&GPUParticles2D::get_trail_sections), static_cast<void (GPUParticles2D::*)(int32_t)>(&GPUParticles2D::set_trail_sections)>((new std::string("trail_sections"))->c_str())
			.property<static_cast<int32_t (GPUParticles2D::*)() const>(&GPUParticles2D::get_trail_section_subdivisions), static_cast<void (GPUParticles2D::*)(int32_t)>(&GPUParticles2D::set_trail_section_subdivisions)>((new std::string("trail_section_subdivisions"))->c_str())
			.fun<static_cast<Rect2 (GPUParticles2D::*)() const>(&GPUParticles2D::capture_rect)>((new std::string("capture_rect"))->c_str())
			.fun<static_cast<void (GPUParticles2D::*)()>(&GPUParticles2D::restart)>((new std::string("restart"))->c_str())
			.fun<static_cast<void (GPUParticles2D::*)(const Transform2D &, const Vector2 &, const Color &, const Color &, uint32_t)>(&GPUParticles2D::emit_particle)>((new std::string("emit_particle"))->c_str())
			.fun<static_cast<void (GPUParticles2D::*)(Node *)>(&GPUParticles2D::convert_from_particles)>((new std::string("convert_from_particles"))->c_str());
	qjs::Value _DrawOrder = context->newObject();
	_DrawOrder[(new std::string("DRAW_ORDER_INDEX"))->c_str()] = GPUParticles2D::DrawOrder::DRAW_ORDER_INDEX;
	_DrawOrder[(new std::string("DRAW_ORDER_LIFETIME"))->c_str()] = GPUParticles2D::DrawOrder::DRAW_ORDER_LIFETIME;
	_DrawOrder[(new std::string("DRAW_ORDER_REVERSE_LIFETIME"))->c_str()] = GPUParticles2D::DrawOrder::DRAW_ORDER_REVERSE_LIFETIME;
	_module.add("DrawOrder", std::move(_DrawOrder));
	qjs::Value _EmitFlags = context->newObject();
	_EmitFlags[(new std::string("EMIT_FLAG_POSITION"))->c_str()] = GPUParticles2D::EmitFlags::EMIT_FLAG_POSITION;
	_EmitFlags[(new std::string("EMIT_FLAG_ROTATION_SCALE"))->c_str()] = GPUParticles2D::EmitFlags::EMIT_FLAG_ROTATION_SCALE;
	_EmitFlags[(new std::string("EMIT_FLAG_VELOCITY"))->c_str()] = GPUParticles2D::EmitFlags::EMIT_FLAG_VELOCITY;
	_EmitFlags[(new std::string("EMIT_FLAG_COLOR"))->c_str()] = GPUParticles2D::EmitFlags::EMIT_FLAG_COLOR;
	_EmitFlags[(new std::string("EMIT_FLAG_CUSTOM"))->c_str()] = GPUParticles2D::EmitFlags::EMIT_FLAG_CUSTOM;
	_module.add("EmitFlags", std::move(_EmitFlags));
}