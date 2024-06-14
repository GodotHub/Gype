
#include <godot_cpp/classes/geometry_instance3d.hpp>
#include <godot_cpp/classes/gpu_particles3d.hpp>
#include <godot_cpp/classes/material.hpp>
#include <godot_cpp/classes/mesh.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/skin.hpp>
#include <godot_cpp/variant/aabb.hpp>
#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/variant/node_path.hpp>
#include <godot_cpp/variant/transform3d.hpp>
#include <godot_cpp/variant/vector3.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_GPUParticles3D() {
	qjs::Context::Module &_module = get_Node3D_module();
	_module.class_<GPUParticles3D>("GPUParticles3D")
			.constructor<>()
			.base<GeometryInstance3D>()
			.static_fun<&GPUParticles3D::MAX_DRAW_PASSES>((new std::string("MAX_DRAW_PASSES"))->c_str())
			.property<static_cast<bool (GPUParticles3D::*)() const>(&GPUParticles3D::is_emitting), static_cast<void (GPUParticles3D::*)(bool)>(&GPUParticles3D::set_emitting)>((new std::string("emitting"))->c_str())
			.property<static_cast<int32_t (GPUParticles3D::*)() const>(&GPUParticles3D::get_amount), static_cast<void (GPUParticles3D::*)(int32_t)>(&GPUParticles3D::set_amount)>((new std::string("amount"))->c_str())
			.property<static_cast<double (GPUParticles3D::*)() const>(&GPUParticles3D::get_amount_ratio), static_cast<void (GPUParticles3D::*)(double)>(&GPUParticles3D::set_amount_ratio)>((new std::string("amount_ratio"))->c_str())
			.property<static_cast<NodePath (GPUParticles3D::*)() const>(&GPUParticles3D::get_sub_emitter), static_cast<void (GPUParticles3D::*)(const NodePath &)>(&GPUParticles3D::set_sub_emitter)>((new std::string("sub_emitter"))->c_str())
			.property<static_cast<double (GPUParticles3D::*)() const>(&GPUParticles3D::get_lifetime), static_cast<void (GPUParticles3D::*)(double)>(&GPUParticles3D::set_lifetime)>((new std::string("lifetime"))->c_str())
			.property<static_cast<double (GPUParticles3D::*)() const>(&GPUParticles3D::get_interp_to_end), static_cast<void (GPUParticles3D::*)(double)>(&GPUParticles3D::set_interp_to_end)>((new std::string("interp_to_end"))->c_str())
			.property<static_cast<bool (GPUParticles3D::*)() const>(&GPUParticles3D::get_one_shot), static_cast<void (GPUParticles3D::*)(bool)>(&GPUParticles3D::set_one_shot)>((new std::string("one_shot"))->c_str())
			.property<static_cast<double (GPUParticles3D::*)() const>(&GPUParticles3D::get_pre_process_time), static_cast<void (GPUParticles3D::*)(double)>(&GPUParticles3D::set_pre_process_time)>((new std::string("preprocess"))->c_str())
			.property<static_cast<double (GPUParticles3D::*)() const>(&GPUParticles3D::get_speed_scale), static_cast<void (GPUParticles3D::*)(double)>(&GPUParticles3D::set_speed_scale)>((new std::string("speed_scale"))->c_str())
			.property<static_cast<double (GPUParticles3D::*)() const>(&GPUParticles3D::get_explosiveness_ratio), static_cast<void (GPUParticles3D::*)(double)>(&GPUParticles3D::set_explosiveness_ratio)>((new std::string("explosiveness"))->c_str())
			.property<static_cast<double (GPUParticles3D::*)() const>(&GPUParticles3D::get_randomness_ratio), static_cast<void (GPUParticles3D::*)(double)>(&GPUParticles3D::set_randomness_ratio)>((new std::string("randomness"))->c_str())
			.property<static_cast<int32_t (GPUParticles3D::*)() const>(&GPUParticles3D::get_fixed_fps), static_cast<void (GPUParticles3D::*)(int32_t)>(&GPUParticles3D::set_fixed_fps)>((new std::string("fixed_fps"))->c_str())
			.property<static_cast<bool (GPUParticles3D::*)() const>(&GPUParticles3D::get_interpolate), static_cast<void (GPUParticles3D::*)(bool)>(&GPUParticles3D::set_interpolate)>((new std::string("interpolate"))->c_str())
			.property<static_cast<bool (GPUParticles3D::*)() const>(&GPUParticles3D::get_fractional_delta), static_cast<void (GPUParticles3D::*)(bool)>(&GPUParticles3D::set_fractional_delta)>((new std::string("fract_delta"))->c_str())
			.property<static_cast<double (GPUParticles3D::*)() const>(&GPUParticles3D::get_collision_base_size), static_cast<void (GPUParticles3D::*)(double)>(&GPUParticles3D::set_collision_base_size)>((new std::string("collision_base_size"))->c_str())
			.property<static_cast<AABB (GPUParticles3D::*)() const>(&GPUParticles3D::get_visibility_aabb), static_cast<void (GPUParticles3D::*)(const AABB &)>(&GPUParticles3D::set_visibility_aabb)>((new std::string("visibility_aabb"))->c_str())
			.property<static_cast<bool (GPUParticles3D::*)() const>(&GPUParticles3D::get_use_local_coordinates), static_cast<void (GPUParticles3D::*)(bool)>(&GPUParticles3D::set_use_local_coordinates)>((new std::string("local_coords"))->c_str())
			.property<static_cast<GPUParticles3D::DrawOrder (GPUParticles3D::*)() const>(&GPUParticles3D::get_draw_order), static_cast<void (GPUParticles3D::*)(GPUParticles3D::DrawOrder)>(&GPUParticles3D::set_draw_order)>((new std::string("draw_order"))->c_str())
			.property<static_cast<GPUParticles3D::TransformAlign (GPUParticles3D::*)() const>(&GPUParticles3D::get_transform_align), static_cast<void (GPUParticles3D::*)(GPUParticles3D::TransformAlign)>(&GPUParticles3D::set_transform_align)>((new std::string("transform_align"))->c_str())
			.property<static_cast<bool (GPUParticles3D::*)() const>(&GPUParticles3D::is_trail_enabled), static_cast<void (GPUParticles3D::*)(bool)>(&GPUParticles3D::set_trail_enabled)>((new std::string("trail_enabled"))->c_str())
			.property<static_cast<double (GPUParticles3D::*)() const>(&GPUParticles3D::get_trail_lifetime), static_cast<void (GPUParticles3D::*)(double)>(&GPUParticles3D::set_trail_lifetime)>((new std::string("trail_lifetime"))->c_str())
			.property<static_cast<Ref<Material> (GPUParticles3D::*)() const>(&GPUParticles3D::get_process_material), static_cast<void (GPUParticles3D::*)(const Ref<Material> &)>(&GPUParticles3D::set_process_material)>((new std::string("process_material"))->c_str())
			.property<static_cast<int32_t (GPUParticles3D::*)() const>(&GPUParticles3D::get_draw_passes), static_cast<void (GPUParticles3D::*)(int32_t)>(&GPUParticles3D::set_draw_passes)>((new std::string("draw_passes"))->c_str())
			.property<static_cast<Ref<Mesh> (GPUParticles3D::*)(int32_t) const>(&GPUParticles3D::get_draw_pass_mesh), static_cast<void (GPUParticles3D::*)(int32_t, const Ref<Mesh> &)>(&GPUParticles3D::set_draw_pass_mesh)>((new std::string("draw_pass_1"))->c_str())
			.property<static_cast<Ref<Mesh> (GPUParticles3D::*)(int32_t) const>(&GPUParticles3D::get_draw_pass_mesh), static_cast<void (GPUParticles3D::*)(int32_t, const Ref<Mesh> &)>(&GPUParticles3D::set_draw_pass_mesh)>((new std::string("draw_pass_2"))->c_str())
			.property<static_cast<Ref<Mesh> (GPUParticles3D::*)(int32_t) const>(&GPUParticles3D::get_draw_pass_mesh), static_cast<void (GPUParticles3D::*)(int32_t, const Ref<Mesh> &)>(&GPUParticles3D::set_draw_pass_mesh)>((new std::string("draw_pass_3"))->c_str())
			.property<static_cast<Ref<Mesh> (GPUParticles3D::*)(int32_t) const>(&GPUParticles3D::get_draw_pass_mesh), static_cast<void (GPUParticles3D::*)(int32_t, const Ref<Mesh> &)>(&GPUParticles3D::set_draw_pass_mesh)>((new std::string("draw_pass_4"))->c_str())
			.property<static_cast<Ref<Skin> (GPUParticles3D::*)() const>(&GPUParticles3D::get_skin), static_cast<void (GPUParticles3D::*)(const Ref<Skin> &)>(&GPUParticles3D::set_skin)>((new std::string("draw_skin"))->c_str())
			.fun<static_cast<void (GPUParticles3D::*)()>(&GPUParticles3D::restart)>((new std::string("restart"))->c_str())
			.fun<static_cast<AABB (GPUParticles3D::*)() const>(&GPUParticles3D::capture_aabb)>((new std::string("capture_aabb"))->c_str())
			.fun<static_cast<void (GPUParticles3D::*)(const Transform3D &, const Vector3 &, const Color &, const Color &, uint32_t)>(&GPUParticles3D::emit_particle)>((new std::string("emit_particle"))->c_str())
			.fun<static_cast<void (GPUParticles3D::*)(Node *)>(&GPUParticles3D::convert_from_particles)>((new std::string("convert_from_particles"))->c_str());
	qjs::Value _DrawOrder = context->newObject();
	_DrawOrder[(new std::string("DRAW_ORDER_INDEX"))->c_str()] = GPUParticles3D::DrawOrder::DRAW_ORDER_INDEX;
	_DrawOrder[(new std::string("DRAW_ORDER_LIFETIME"))->c_str()] = GPUParticles3D::DrawOrder::DRAW_ORDER_LIFETIME;
	_DrawOrder[(new std::string("DRAW_ORDER_REVERSE_LIFETIME"))->c_str()] = GPUParticles3D::DrawOrder::DRAW_ORDER_REVERSE_LIFETIME;
	_DrawOrder[(new std::string("DRAW_ORDER_VIEW_DEPTH"))->c_str()] = GPUParticles3D::DrawOrder::DRAW_ORDER_VIEW_DEPTH;
	_module.add("DrawOrder", std::move(_DrawOrder));
	qjs::Value _EmitFlags = context->newObject();
	_EmitFlags[(new std::string("EMIT_FLAG_POSITION"))->c_str()] = GPUParticles3D::EmitFlags::EMIT_FLAG_POSITION;
	_EmitFlags[(new std::string("EMIT_FLAG_ROTATION_SCALE"))->c_str()] = GPUParticles3D::EmitFlags::EMIT_FLAG_ROTATION_SCALE;
	_EmitFlags[(new std::string("EMIT_FLAG_VELOCITY"))->c_str()] = GPUParticles3D::EmitFlags::EMIT_FLAG_VELOCITY;
	_EmitFlags[(new std::string("EMIT_FLAG_COLOR"))->c_str()] = GPUParticles3D::EmitFlags::EMIT_FLAG_COLOR;
	_EmitFlags[(new std::string("EMIT_FLAG_CUSTOM"))->c_str()] = GPUParticles3D::EmitFlags::EMIT_FLAG_CUSTOM;
	_module.add("EmitFlags", std::move(_EmitFlags));
	qjs::Value _TransformAlign = context->newObject();
	_TransformAlign[(new std::string("TRANSFORM_ALIGN_DISABLED"))->c_str()] = GPUParticles3D::TransformAlign::TRANSFORM_ALIGN_DISABLED;
	_TransformAlign[(new std::string("TRANSFORM_ALIGN_Z_BILLBOARD"))->c_str()] = GPUParticles3D::TransformAlign::TRANSFORM_ALIGN_Z_BILLBOARD;
	_TransformAlign[(new std::string("TRANSFORM_ALIGN_Y_TO_VELOCITY"))->c_str()] = GPUParticles3D::TransformAlign::TRANSFORM_ALIGN_Y_TO_VELOCITY;
	_TransformAlign[(new std::string("TRANSFORM_ALIGN_Z_BILLBOARD_Y_TO_VELOCITY"))->c_str()] = GPUParticles3D::TransformAlign::TRANSFORM_ALIGN_Z_BILLBOARD_Y_TO_VELOCITY;
	_module.add("TransformAlign", std::move(_TransformAlign));
}