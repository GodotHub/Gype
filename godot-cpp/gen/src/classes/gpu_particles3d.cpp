/**************************************************************************/
/*  gpu_particles3d.cpp                                                   */
/**************************************************************************/
/*                         This file is part of:                          */
/*                             GODOT ENGINE                               */
/*                        https://godotengine.org                         */
/**************************************************************************/
/* Copyright (c) 2014-present Godot Engine contributors (see AUTHORS.md). */
/* Copyright (c) 2007-2014 Juan Linietsky, Ariel Manzur.                  */
/*                                                                        */
/* Permission is hereby granted, free of charge, to any person obtaining  */
/* a copy of this software and associated documentation files (the        */
/* "Software"), to deal in the Software without restriction, including    */
/* without limitation the rights to use, copy, modify, merge, publish,    */
/* distribute, sublicense, and/or sell copies of the Software, and to     */
/* permit persons to whom the Software is furnished to do so, subject to  */
/* the following conditions:                                              */
/*                                                                        */
/* The above copyright notice and this permission notice shall be         */
/* included in all copies or substantial portions of the Software.        */
/*                                                                        */
/* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,        */
/* EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF     */
/* MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. */
/* IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY   */
/* CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,   */
/* TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE      */
/* SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.                 */
/**************************************************************************/

// THIS FILE IS GENERATED. EDITS WILL BE LOST.

#include <godot_cpp/classes/gpu_particles3d.hpp>

#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/classes/material.hpp>
#include <godot_cpp/classes/mesh.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/skin.hpp>
#include <godot_cpp/variant/transform3d.hpp>
#include <godot_cpp/variant/vector3.hpp>

namespace godot {

const int GPUParticles3D::MAX_DRAW_PASSES = 4;

void GPUParticles3D::set_emitting(bool emitting) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GPUParticles3D::get_class_static()._native_ptr(), StringName("set_emitting")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t emitting_encoded;
	PtrToArg<bool>::encode(emitting, &emitting_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &emitting_encoded);
}

void GPUParticles3D::set_amount(int32_t amount) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GPUParticles3D::get_class_static()._native_ptr(), StringName("set_amount")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t amount_encoded;
	PtrToArg<int64_t>::encode(amount, &amount_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &amount_encoded);
}

void GPUParticles3D::set_lifetime(double secs) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GPUParticles3D::get_class_static()._native_ptr(), StringName("set_lifetime")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double secs_encoded;
	PtrToArg<double>::encode(secs, &secs_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &secs_encoded);
}

void GPUParticles3D::set_one_shot(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GPUParticles3D::get_class_static()._native_ptr(), StringName("set_one_shot")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

void GPUParticles3D::set_pre_process_time(double secs) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GPUParticles3D::get_class_static()._native_ptr(), StringName("set_pre_process_time")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double secs_encoded;
	PtrToArg<double>::encode(secs, &secs_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &secs_encoded);
}

void GPUParticles3D::set_explosiveness_ratio(double ratio) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GPUParticles3D::get_class_static()._native_ptr(), StringName("set_explosiveness_ratio")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double ratio_encoded;
	PtrToArg<double>::encode(ratio, &ratio_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &ratio_encoded);
}

void GPUParticles3D::set_randomness_ratio(double ratio) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GPUParticles3D::get_class_static()._native_ptr(), StringName("set_randomness_ratio")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double ratio_encoded;
	PtrToArg<double>::encode(ratio, &ratio_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &ratio_encoded);
}

void GPUParticles3D::set_visibility_aabb(const AABB &aabb) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GPUParticles3D::get_class_static()._native_ptr(), StringName("set_visibility_aabb")._native_ptr(), 259215842);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &aabb);
}

void GPUParticles3D::set_use_local_coordinates(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GPUParticles3D::get_class_static()._native_ptr(), StringName("set_use_local_coordinates")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

void GPUParticles3D::set_fixed_fps(int32_t fps) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GPUParticles3D::get_class_static()._native_ptr(), StringName("set_fixed_fps")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t fps_encoded;
	PtrToArg<int64_t>::encode(fps, &fps_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &fps_encoded);
}

void GPUParticles3D::set_fractional_delta(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GPUParticles3D::get_class_static()._native_ptr(), StringName("set_fractional_delta")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

void GPUParticles3D::set_interpolate(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GPUParticles3D::get_class_static()._native_ptr(), StringName("set_interpolate")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

void GPUParticles3D::set_process_material(const Ref<Material> &material) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GPUParticles3D::get_class_static()._native_ptr(), StringName("set_process_material")._native_ptr(), 2757459619);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (material != nullptr ? &material->_owner : nullptr));
}

void GPUParticles3D::set_speed_scale(double scale) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GPUParticles3D::get_class_static()._native_ptr(), StringName("set_speed_scale")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double scale_encoded;
	PtrToArg<double>::encode(scale, &scale_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &scale_encoded);
}

void GPUParticles3D::set_collision_base_size(double size) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GPUParticles3D::get_class_static()._native_ptr(), StringName("set_collision_base_size")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double size_encoded;
	PtrToArg<double>::encode(size, &size_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &size_encoded);
}

void GPUParticles3D::set_interp_to_end(double interp) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GPUParticles3D::get_class_static()._native_ptr(), StringName("set_interp_to_end")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double interp_encoded;
	PtrToArg<double>::encode(interp, &interp_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &interp_encoded);
}

bool GPUParticles3D::is_emitting() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GPUParticles3D::get_class_static()._native_ptr(), StringName("is_emitting")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

int32_t GPUParticles3D::get_amount() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GPUParticles3D::get_class_static()._native_ptr(), StringName("get_amount")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

double GPUParticles3D::get_lifetime() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GPUParticles3D::get_class_static()._native_ptr(), StringName("get_lifetime")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

bool GPUParticles3D::get_one_shot() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GPUParticles3D::get_class_static()._native_ptr(), StringName("get_one_shot")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

double GPUParticles3D::get_pre_process_time() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GPUParticles3D::get_class_static()._native_ptr(), StringName("get_pre_process_time")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

double GPUParticles3D::get_explosiveness_ratio() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GPUParticles3D::get_class_static()._native_ptr(), StringName("get_explosiveness_ratio")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

double GPUParticles3D::get_randomness_ratio() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GPUParticles3D::get_class_static()._native_ptr(), StringName("get_randomness_ratio")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

AABB GPUParticles3D::get_visibility_aabb() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GPUParticles3D::get_class_static()._native_ptr(), StringName("get_visibility_aabb")._native_ptr(), 1068685055);
	CHECK_METHOD_BIND_RET(_gde_method_bind, AABB());
	return internal::_call_native_mb_ret<AABB>(_gde_method_bind, _owner);
}

bool GPUParticles3D::get_use_local_coordinates() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GPUParticles3D::get_class_static()._native_ptr(), StringName("get_use_local_coordinates")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

int32_t GPUParticles3D::get_fixed_fps() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GPUParticles3D::get_class_static()._native_ptr(), StringName("get_fixed_fps")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

bool GPUParticles3D::get_fractional_delta() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GPUParticles3D::get_class_static()._native_ptr(), StringName("get_fractional_delta")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

bool GPUParticles3D::get_interpolate() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GPUParticles3D::get_class_static()._native_ptr(), StringName("get_interpolate")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

Ref<Material> GPUParticles3D::get_process_material() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GPUParticles3D::get_class_static()._native_ptr(), StringName("get_process_material")._native_ptr(), 5934680);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<Material>());
	return Ref<Material>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<Material>(_gde_method_bind, _owner));
}

double GPUParticles3D::get_speed_scale() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GPUParticles3D::get_class_static()._native_ptr(), StringName("get_speed_scale")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

double GPUParticles3D::get_collision_base_size() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GPUParticles3D::get_class_static()._native_ptr(), StringName("get_collision_base_size")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

double GPUParticles3D::get_interp_to_end() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GPUParticles3D::get_class_static()._native_ptr(), StringName("get_interp_to_end")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void GPUParticles3D::set_draw_order(GPUParticles3D::DrawOrder order) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GPUParticles3D::get_class_static()._native_ptr(), StringName("set_draw_order")._native_ptr(), 1208074815);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &order);
}

GPUParticles3D::DrawOrder GPUParticles3D::get_draw_order() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GPUParticles3D::get_class_static()._native_ptr(), StringName("get_draw_order")._native_ptr(), 3770381780);
	CHECK_METHOD_BIND_RET(_gde_method_bind, GPUParticles3D::DrawOrder(0));
	return (GPUParticles3D::DrawOrder)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void GPUParticles3D::set_draw_passes(int32_t passes) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GPUParticles3D::get_class_static()._native_ptr(), StringName("set_draw_passes")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t passes_encoded;
	PtrToArg<int64_t>::encode(passes, &passes_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &passes_encoded);
}

void GPUParticles3D::set_draw_pass_mesh(int32_t pass, const Ref<Mesh> &mesh) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GPUParticles3D::get_class_static()._native_ptr(), StringName("set_draw_pass_mesh")._native_ptr(), 969122797);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t pass_encoded;
	PtrToArg<int64_t>::encode(pass, &pass_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &pass_encoded, (mesh != nullptr ? &mesh->_owner : nullptr));
}

int32_t GPUParticles3D::get_draw_passes() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GPUParticles3D::get_class_static()._native_ptr(), StringName("get_draw_passes")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

Ref<Mesh> GPUParticles3D::get_draw_pass_mesh(int32_t pass) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GPUParticles3D::get_class_static()._native_ptr(), StringName("get_draw_pass_mesh")._native_ptr(), 1576363275);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<Mesh>());
	int64_t pass_encoded;
	PtrToArg<int64_t>::encode(pass, &pass_encoded);
	return Ref<Mesh>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<Mesh>(_gde_method_bind, _owner, &pass_encoded));
}

void GPUParticles3D::set_skin(const Ref<Skin> &skin) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GPUParticles3D::get_class_static()._native_ptr(), StringName("set_skin")._native_ptr(), 3971435618);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (skin != nullptr ? &skin->_owner : nullptr));
}

Ref<Skin> GPUParticles3D::get_skin() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GPUParticles3D::get_class_static()._native_ptr(), StringName("get_skin")._native_ptr(), 2074563878);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<Skin>());
	return Ref<Skin>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<Skin>(_gde_method_bind, _owner));
}

void GPUParticles3D::restart() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GPUParticles3D::get_class_static()._native_ptr(), StringName("restart")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

AABB GPUParticles3D::capture_aabb() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GPUParticles3D::get_class_static()._native_ptr(), StringName("capture_aabb")._native_ptr(), 1068685055);
	CHECK_METHOD_BIND_RET(_gde_method_bind, AABB());
	return internal::_call_native_mb_ret<AABB>(_gde_method_bind, _owner);
}

void GPUParticles3D::set_sub_emitter(const NodePath &path) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GPUParticles3D::get_class_static()._native_ptr(), StringName("set_sub_emitter")._native_ptr(), 1348162250);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &path);
}

NodePath GPUParticles3D::get_sub_emitter() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GPUParticles3D::get_class_static()._native_ptr(), StringName("get_sub_emitter")._native_ptr(), 4075236667);
	CHECK_METHOD_BIND_RET(_gde_method_bind, NodePath());
	return internal::_call_native_mb_ret<NodePath>(_gde_method_bind, _owner);
}

void GPUParticles3D::emit_particle(const Transform3D &xform, const Vector3 &velocity, const Color &color, const Color &custom, uint32_t flags) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GPUParticles3D::get_class_static()._native_ptr(), StringName("emit_particle")._native_ptr(), 992173727);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t flags_encoded;
	PtrToArg<int64_t>::encode(flags, &flags_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &xform, &velocity, &color, &custom, &flags_encoded);
}

void GPUParticles3D::set_trail_enabled(bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GPUParticles3D::get_class_static()._native_ptr(), StringName("set_trail_enabled")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enabled_encoded);
}

void GPUParticles3D::set_trail_lifetime(double secs) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GPUParticles3D::get_class_static()._native_ptr(), StringName("set_trail_lifetime")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double secs_encoded;
	PtrToArg<double>::encode(secs, &secs_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &secs_encoded);
}

bool GPUParticles3D::is_trail_enabled() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GPUParticles3D::get_class_static()._native_ptr(), StringName("is_trail_enabled")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

double GPUParticles3D::get_trail_lifetime() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GPUParticles3D::get_class_static()._native_ptr(), StringName("get_trail_lifetime")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void GPUParticles3D::set_transform_align(GPUParticles3D::TransformAlign align) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GPUParticles3D::get_class_static()._native_ptr(), StringName("set_transform_align")._native_ptr(), 3892425954);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &align);
}

GPUParticles3D::TransformAlign GPUParticles3D::get_transform_align() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GPUParticles3D::get_class_static()._native_ptr(), StringName("get_transform_align")._native_ptr(), 2100992166);
	CHECK_METHOD_BIND_RET(_gde_method_bind, GPUParticles3D::TransformAlign(0));
	return (GPUParticles3D::TransformAlign)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void GPUParticles3D::convert_from_particles(Node *particles) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GPUParticles3D::get_class_static()._native_ptr(), StringName("convert_from_particles")._native_ptr(), 1078189570);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (particles != nullptr ? &particles->_owner : nullptr));
}

void GPUParticles3D::set_amount_ratio(double ratio) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GPUParticles3D::get_class_static()._native_ptr(), StringName("set_amount_ratio")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double ratio_encoded;
	PtrToArg<double>::encode(ratio, &ratio_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &ratio_encoded);
}

double GPUParticles3D::get_amount_ratio() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GPUParticles3D::get_class_static()._native_ptr(), StringName("get_amount_ratio")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}


} // namespace godot 