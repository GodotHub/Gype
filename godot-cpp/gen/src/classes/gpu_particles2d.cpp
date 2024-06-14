/**************************************************************************/
/*  gpu_particles2d.cpp                                                   */
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

#include <godot_cpp/classes/gpu_particles2d.hpp>

#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/classes/material.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/variant/transform2d.hpp>
#include <godot_cpp/variant/vector2.hpp>

namespace godot {


void GPUParticles2D::set_emitting(bool emitting) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GPUParticles2D::get_class_static()._native_ptr(), StringName("set_emitting")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t emitting_encoded;
	PtrToArg<bool>::encode(emitting, &emitting_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &emitting_encoded);
}

void GPUParticles2D::set_amount(int32_t amount) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GPUParticles2D::get_class_static()._native_ptr(), StringName("set_amount")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t amount_encoded;
	PtrToArg<int64_t>::encode(amount, &amount_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &amount_encoded);
}

void GPUParticles2D::set_lifetime(double secs) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GPUParticles2D::get_class_static()._native_ptr(), StringName("set_lifetime")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double secs_encoded;
	PtrToArg<double>::encode(secs, &secs_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &secs_encoded);
}

void GPUParticles2D::set_one_shot(bool secs) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GPUParticles2D::get_class_static()._native_ptr(), StringName("set_one_shot")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t secs_encoded;
	PtrToArg<bool>::encode(secs, &secs_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &secs_encoded);
}

void GPUParticles2D::set_pre_process_time(double secs) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GPUParticles2D::get_class_static()._native_ptr(), StringName("set_pre_process_time")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double secs_encoded;
	PtrToArg<double>::encode(secs, &secs_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &secs_encoded);
}

void GPUParticles2D::set_explosiveness_ratio(double ratio) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GPUParticles2D::get_class_static()._native_ptr(), StringName("set_explosiveness_ratio")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double ratio_encoded;
	PtrToArg<double>::encode(ratio, &ratio_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &ratio_encoded);
}

void GPUParticles2D::set_randomness_ratio(double ratio) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GPUParticles2D::get_class_static()._native_ptr(), StringName("set_randomness_ratio")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double ratio_encoded;
	PtrToArg<double>::encode(ratio, &ratio_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &ratio_encoded);
}

void GPUParticles2D::set_visibility_rect(const Rect2 &visibility_rect) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GPUParticles2D::get_class_static()._native_ptr(), StringName("set_visibility_rect")._native_ptr(), 2046264180);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &visibility_rect);
}

void GPUParticles2D::set_use_local_coordinates(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GPUParticles2D::get_class_static()._native_ptr(), StringName("set_use_local_coordinates")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

void GPUParticles2D::set_fixed_fps(int32_t fps) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GPUParticles2D::get_class_static()._native_ptr(), StringName("set_fixed_fps")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t fps_encoded;
	PtrToArg<int64_t>::encode(fps, &fps_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &fps_encoded);
}

void GPUParticles2D::set_fractional_delta(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GPUParticles2D::get_class_static()._native_ptr(), StringName("set_fractional_delta")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

void GPUParticles2D::set_interpolate(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GPUParticles2D::get_class_static()._native_ptr(), StringName("set_interpolate")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

void GPUParticles2D::set_process_material(const Ref<Material> &material) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GPUParticles2D::get_class_static()._native_ptr(), StringName("set_process_material")._native_ptr(), 2757459619);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (material != nullptr ? &material->_owner : nullptr));
}

void GPUParticles2D::set_speed_scale(double scale) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GPUParticles2D::get_class_static()._native_ptr(), StringName("set_speed_scale")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double scale_encoded;
	PtrToArg<double>::encode(scale, &scale_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &scale_encoded);
}

void GPUParticles2D::set_collision_base_size(double size) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GPUParticles2D::get_class_static()._native_ptr(), StringName("set_collision_base_size")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double size_encoded;
	PtrToArg<double>::encode(size, &size_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &size_encoded);
}

void GPUParticles2D::set_interp_to_end(double interp) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GPUParticles2D::get_class_static()._native_ptr(), StringName("set_interp_to_end")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double interp_encoded;
	PtrToArg<double>::encode(interp, &interp_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &interp_encoded);
}

bool GPUParticles2D::is_emitting() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GPUParticles2D::get_class_static()._native_ptr(), StringName("is_emitting")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

int32_t GPUParticles2D::get_amount() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GPUParticles2D::get_class_static()._native_ptr(), StringName("get_amount")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

double GPUParticles2D::get_lifetime() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GPUParticles2D::get_class_static()._native_ptr(), StringName("get_lifetime")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

bool GPUParticles2D::get_one_shot() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GPUParticles2D::get_class_static()._native_ptr(), StringName("get_one_shot")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

double GPUParticles2D::get_pre_process_time() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GPUParticles2D::get_class_static()._native_ptr(), StringName("get_pre_process_time")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

double GPUParticles2D::get_explosiveness_ratio() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GPUParticles2D::get_class_static()._native_ptr(), StringName("get_explosiveness_ratio")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

double GPUParticles2D::get_randomness_ratio() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GPUParticles2D::get_class_static()._native_ptr(), StringName("get_randomness_ratio")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

Rect2 GPUParticles2D::get_visibility_rect() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GPUParticles2D::get_class_static()._native_ptr(), StringName("get_visibility_rect")._native_ptr(), 1639390495);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Rect2());
	return internal::_call_native_mb_ret<Rect2>(_gde_method_bind, _owner);
}

bool GPUParticles2D::get_use_local_coordinates() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GPUParticles2D::get_class_static()._native_ptr(), StringName("get_use_local_coordinates")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

int32_t GPUParticles2D::get_fixed_fps() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GPUParticles2D::get_class_static()._native_ptr(), StringName("get_fixed_fps")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

bool GPUParticles2D::get_fractional_delta() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GPUParticles2D::get_class_static()._native_ptr(), StringName("get_fractional_delta")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

bool GPUParticles2D::get_interpolate() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GPUParticles2D::get_class_static()._native_ptr(), StringName("get_interpolate")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

Ref<Material> GPUParticles2D::get_process_material() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GPUParticles2D::get_class_static()._native_ptr(), StringName("get_process_material")._native_ptr(), 5934680);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<Material>());
	return Ref<Material>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<Material>(_gde_method_bind, _owner));
}

double GPUParticles2D::get_speed_scale() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GPUParticles2D::get_class_static()._native_ptr(), StringName("get_speed_scale")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

double GPUParticles2D::get_collision_base_size() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GPUParticles2D::get_class_static()._native_ptr(), StringName("get_collision_base_size")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

double GPUParticles2D::get_interp_to_end() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GPUParticles2D::get_class_static()._native_ptr(), StringName("get_interp_to_end")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void GPUParticles2D::set_draw_order(GPUParticles2D::DrawOrder order) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GPUParticles2D::get_class_static()._native_ptr(), StringName("set_draw_order")._native_ptr(), 1939677959);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &order);
}

GPUParticles2D::DrawOrder GPUParticles2D::get_draw_order() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GPUParticles2D::get_class_static()._native_ptr(), StringName("get_draw_order")._native_ptr(), 941479095);
	CHECK_METHOD_BIND_RET(_gde_method_bind, GPUParticles2D::DrawOrder(0));
	return (GPUParticles2D::DrawOrder)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void GPUParticles2D::set_texture(const Ref<Texture2D> &texture) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GPUParticles2D::get_class_static()._native_ptr(), StringName("set_texture")._native_ptr(), 4051416890);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (texture != nullptr ? &texture->_owner : nullptr));
}

Ref<Texture2D> GPUParticles2D::get_texture() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GPUParticles2D::get_class_static()._native_ptr(), StringName("get_texture")._native_ptr(), 3635182373);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<Texture2D>());
	return Ref<Texture2D>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<Texture2D>(_gde_method_bind, _owner));
}

Rect2 GPUParticles2D::capture_rect() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GPUParticles2D::get_class_static()._native_ptr(), StringName("capture_rect")._native_ptr(), 1639390495);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Rect2());
	return internal::_call_native_mb_ret<Rect2>(_gde_method_bind, _owner);
}

void GPUParticles2D::restart() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GPUParticles2D::get_class_static()._native_ptr(), StringName("restart")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void GPUParticles2D::set_sub_emitter(const NodePath &path) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GPUParticles2D::get_class_static()._native_ptr(), StringName("set_sub_emitter")._native_ptr(), 1348162250);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &path);
}

NodePath GPUParticles2D::get_sub_emitter() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GPUParticles2D::get_class_static()._native_ptr(), StringName("get_sub_emitter")._native_ptr(), 4075236667);
	CHECK_METHOD_BIND_RET(_gde_method_bind, NodePath());
	return internal::_call_native_mb_ret<NodePath>(_gde_method_bind, _owner);
}

void GPUParticles2D::emit_particle(const Transform2D &xform, const Vector2 &velocity, const Color &color, const Color &custom, uint32_t flags) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GPUParticles2D::get_class_static()._native_ptr(), StringName("emit_particle")._native_ptr(), 2179202058);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t flags_encoded;
	PtrToArg<int64_t>::encode(flags, &flags_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &xform, &velocity, &color, &custom, &flags_encoded);
}

void GPUParticles2D::set_trail_enabled(bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GPUParticles2D::get_class_static()._native_ptr(), StringName("set_trail_enabled")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enabled_encoded);
}

void GPUParticles2D::set_trail_lifetime(double secs) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GPUParticles2D::get_class_static()._native_ptr(), StringName("set_trail_lifetime")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double secs_encoded;
	PtrToArg<double>::encode(secs, &secs_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &secs_encoded);
}

bool GPUParticles2D::is_trail_enabled() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GPUParticles2D::get_class_static()._native_ptr(), StringName("is_trail_enabled")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

double GPUParticles2D::get_trail_lifetime() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GPUParticles2D::get_class_static()._native_ptr(), StringName("get_trail_lifetime")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void GPUParticles2D::set_trail_sections(int32_t sections) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GPUParticles2D::get_class_static()._native_ptr(), StringName("set_trail_sections")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t sections_encoded;
	PtrToArg<int64_t>::encode(sections, &sections_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &sections_encoded);
}

int32_t GPUParticles2D::get_trail_sections() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GPUParticles2D::get_class_static()._native_ptr(), StringName("get_trail_sections")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void GPUParticles2D::set_trail_section_subdivisions(int32_t subdivisions) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GPUParticles2D::get_class_static()._native_ptr(), StringName("set_trail_section_subdivisions")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t subdivisions_encoded;
	PtrToArg<int64_t>::encode(subdivisions, &subdivisions_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &subdivisions_encoded);
}

int32_t GPUParticles2D::get_trail_section_subdivisions() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GPUParticles2D::get_class_static()._native_ptr(), StringName("get_trail_section_subdivisions")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void GPUParticles2D::convert_from_particles(Node *particles) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GPUParticles2D::get_class_static()._native_ptr(), StringName("convert_from_particles")._native_ptr(), 1078189570);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (particles != nullptr ? &particles->_owner : nullptr));
}

void GPUParticles2D::set_amount_ratio(double ratio) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GPUParticles2D::get_class_static()._native_ptr(), StringName("set_amount_ratio")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double ratio_encoded;
	PtrToArg<double>::encode(ratio, &ratio_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &ratio_encoded);
}

double GPUParticles2D::get_amount_ratio() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GPUParticles2D::get_class_static()._native_ptr(), StringName("get_amount_ratio")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}


} // namespace godot 