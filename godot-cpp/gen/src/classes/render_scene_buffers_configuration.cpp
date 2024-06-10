/**************************************************************************/
/*  render_scene_buffers_configuration.cpp                                */
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

#include <godot_cpp/classes/render_scene_buffers_configuration.hpp>

#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

namespace godot {

RID RenderSceneBuffersConfiguration::get_render_target() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderSceneBuffersConfiguration::get_class_static()._native_ptr(), StringName("get_render_target")._native_ptr(), 2944877500);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner);
}

void RenderSceneBuffersConfiguration::set_render_target(const RID &render_target) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderSceneBuffersConfiguration::get_class_static()._native_ptr(), StringName("set_render_target")._native_ptr(), 2722037293);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &render_target);
}

Vector2i RenderSceneBuffersConfiguration::get_internal_size() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderSceneBuffersConfiguration::get_class_static()._native_ptr(), StringName("get_internal_size")._native_ptr(), 3690982128);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector2i());
	return internal::_call_native_mb_ret<Vector2i>(_gde_method_bind, _owner);
}

void RenderSceneBuffersConfiguration::set_internal_size(const Vector2i &internal_size) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderSceneBuffersConfiguration::get_class_static()._native_ptr(), StringName("set_internal_size")._native_ptr(), 1130785943);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &internal_size);
}

Vector2i RenderSceneBuffersConfiguration::get_target_size() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderSceneBuffersConfiguration::get_class_static()._native_ptr(), StringName("get_target_size")._native_ptr(), 3690982128);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector2i());
	return internal::_call_native_mb_ret<Vector2i>(_gde_method_bind, _owner);
}

void RenderSceneBuffersConfiguration::set_target_size(const Vector2i &target_size) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderSceneBuffersConfiguration::get_class_static()._native_ptr(), StringName("set_target_size")._native_ptr(), 1130785943);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &target_size);
}

uint32_t RenderSceneBuffersConfiguration::get_view_count() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderSceneBuffersConfiguration::get_class_static()._native_ptr(), StringName("get_view_count")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void RenderSceneBuffersConfiguration::set_view_count(uint32_t view_count) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderSceneBuffersConfiguration::get_class_static()._native_ptr(), StringName("set_view_count")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t view_count_encoded;
	PtrToArg<int64_t>::encode(view_count, &view_count_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &view_count_encoded);
}

RenderingServer::ViewportScaling3DMode RenderSceneBuffersConfiguration::get_scaling_3d_mode() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderSceneBuffersConfiguration::get_class_static()._native_ptr(), StringName("get_scaling_3d_mode")._native_ptr(), 976778074);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RenderingServer::ViewportScaling3DMode(0));
	return (RenderingServer::ViewportScaling3DMode)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void RenderSceneBuffersConfiguration::set_scaling_3d_mode(RenderingServer::ViewportScaling3DMode scaling_3d_mode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderSceneBuffersConfiguration::get_class_static()._native_ptr(), StringName("set_scaling_3d_mode")._native_ptr(), 447477857);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &scaling_3d_mode);
}

RenderingServer::ViewportMSAA RenderSceneBuffersConfiguration::get_msaa_3d() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderSceneBuffersConfiguration::get_class_static()._native_ptr(), StringName("get_msaa_3d")._native_ptr(), 3109158617);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RenderingServer::ViewportMSAA(0));
	return (RenderingServer::ViewportMSAA)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void RenderSceneBuffersConfiguration::set_msaa_3d(RenderingServer::ViewportMSAA msaa_3d) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderSceneBuffersConfiguration::get_class_static()._native_ptr(), StringName("set_msaa_3d")._native_ptr(), 3952630748);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &msaa_3d);
}

RenderingServer::ViewportScreenSpaceAA RenderSceneBuffersConfiguration::get_screen_space_aa() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderSceneBuffersConfiguration::get_class_static()._native_ptr(), StringName("get_screen_space_aa")._native_ptr(), 641513172);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RenderingServer::ViewportScreenSpaceAA(0));
	return (RenderingServer::ViewportScreenSpaceAA)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void RenderSceneBuffersConfiguration::set_screen_space_aa(RenderingServer::ViewportScreenSpaceAA screen_space_aa) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderSceneBuffersConfiguration::get_class_static()._native_ptr(), StringName("set_screen_space_aa")._native_ptr(), 139543108);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &screen_space_aa);
}

double RenderSceneBuffersConfiguration::get_fsr_sharpness() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderSceneBuffersConfiguration::get_class_static()._native_ptr(), StringName("get_fsr_sharpness")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void RenderSceneBuffersConfiguration::set_fsr_sharpness(double fsr_sharpness) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderSceneBuffersConfiguration::get_class_static()._native_ptr(), StringName("set_fsr_sharpness")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double fsr_sharpness_encoded;
	PtrToArg<double>::encode(fsr_sharpness, &fsr_sharpness_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &fsr_sharpness_encoded);
}

double RenderSceneBuffersConfiguration::get_texture_mipmap_bias() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderSceneBuffersConfiguration::get_class_static()._native_ptr(), StringName("get_texture_mipmap_bias")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void RenderSceneBuffersConfiguration::set_texture_mipmap_bias(double texture_mipmap_bias) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderSceneBuffersConfiguration::get_class_static()._native_ptr(), StringName("set_texture_mipmap_bias")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double texture_mipmap_bias_encoded;
	PtrToArg<double>::encode(texture_mipmap_bias, &texture_mipmap_bias_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &texture_mipmap_bias_encoded);
}


} // namespace godot 