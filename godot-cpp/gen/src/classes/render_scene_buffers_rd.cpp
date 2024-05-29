/**************************************************************************/
/*  render_scene_buffers_rd.cpp                                           */
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

#include <godot_cpp/classes/render_scene_buffers_rd.hpp>

#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/classes/rd_texture_format.hpp>
#include <godot_cpp/classes/rd_texture_view.hpp>
#include <godot_cpp/variant/string_name.hpp>

namespace godot {

bool RenderSceneBuffersRD::has_texture(const StringName &context, const StringName &name) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderSceneBuffersRD::get_class_static()._native_ptr(), StringName("has_texture")._native_ptr(), 471820014);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &context, &name);
}

RID RenderSceneBuffersRD::create_texture(const StringName &context, const StringName &name, RenderingDevice::DataFormat data_format, uint32_t usage_bits, RenderingDevice::TextureSamples texture_samples, const Vector2i &size, uint32_t layers, uint32_t mipmaps, bool unique) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderSceneBuffersRD::get_class_static()._native_ptr(), StringName("create_texture")._native_ptr(), 3559915770);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	int64_t usage_bits_encoded;
	PtrToArg<int64_t>::encode(usage_bits, &usage_bits_encoded);
	int64_t layers_encoded;
	PtrToArg<int64_t>::encode(layers, &layers_encoded);
	int64_t mipmaps_encoded;
	PtrToArg<int64_t>::encode(mipmaps, &mipmaps_encoded);
	int8_t unique_encoded;
	PtrToArg<bool>::encode(unique, &unique_encoded);
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner, &context, &name, &data_format, &usage_bits_encoded, &texture_samples, &size, &layers_encoded, &mipmaps_encoded, &unique_encoded);
}

RID RenderSceneBuffersRD::create_texture_from_format(const StringName &context, const StringName &name, const Ref<RDTextureFormat> &format, const Ref<RDTextureView> &view, bool unique) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderSceneBuffersRD::get_class_static()._native_ptr(), StringName("create_texture_from_format")._native_ptr(), 3344669382);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	int8_t unique_encoded;
	PtrToArg<bool>::encode(unique, &unique_encoded);
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner, &context, &name, (format != nullptr ? &format->_owner : nullptr), (view != nullptr ? &view->_owner : nullptr), &unique_encoded);
}

RID RenderSceneBuffersRD::create_texture_view(const StringName &context, const StringName &name, const StringName &view_name, const Ref<RDTextureView> &view) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderSceneBuffersRD::get_class_static()._native_ptr(), StringName("create_texture_view")._native_ptr(), 283055834);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner, &context, &name, &view_name, (view != nullptr ? &view->_owner : nullptr));
}

RID RenderSceneBuffersRD::get_texture(const StringName &context, const StringName &name) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderSceneBuffersRD::get_class_static()._native_ptr(), StringName("get_texture")._native_ptr(), 750006389);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner, &context, &name);
}

Ref<RDTextureFormat> RenderSceneBuffersRD::get_texture_format(const StringName &context, const StringName &name) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderSceneBuffersRD::get_class_static()._native_ptr(), StringName("get_texture_format")._native_ptr(), 371461758);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<RDTextureFormat>());
	return Ref<RDTextureFormat>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<RDTextureFormat>(_gde_method_bind, _owner, &context, &name));
}

RID RenderSceneBuffersRD::get_texture_slice(const StringName &context, const StringName &name, uint32_t layer, uint32_t mipmap, uint32_t layers, uint32_t mipmaps) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderSceneBuffersRD::get_class_static()._native_ptr(), StringName("get_texture_slice")._native_ptr(), 588440706);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	int64_t layer_encoded;
	PtrToArg<int64_t>::encode(layer, &layer_encoded);
	int64_t mipmap_encoded;
	PtrToArg<int64_t>::encode(mipmap, &mipmap_encoded);
	int64_t layers_encoded;
	PtrToArg<int64_t>::encode(layers, &layers_encoded);
	int64_t mipmaps_encoded;
	PtrToArg<int64_t>::encode(mipmaps, &mipmaps_encoded);
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner, &context, &name, &layer_encoded, &mipmap_encoded, &layers_encoded, &mipmaps_encoded);
}

RID RenderSceneBuffersRD::get_texture_slice_view(const StringName &context, const StringName &name, uint32_t layer, uint32_t mipmap, uint32_t layers, uint32_t mipmaps, const Ref<RDTextureView> &view) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderSceneBuffersRD::get_class_static()._native_ptr(), StringName("get_texture_slice_view")._native_ptr(), 682451778);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	int64_t layer_encoded;
	PtrToArg<int64_t>::encode(layer, &layer_encoded);
	int64_t mipmap_encoded;
	PtrToArg<int64_t>::encode(mipmap, &mipmap_encoded);
	int64_t layers_encoded;
	PtrToArg<int64_t>::encode(layers, &layers_encoded);
	int64_t mipmaps_encoded;
	PtrToArg<int64_t>::encode(mipmaps, &mipmaps_encoded);
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner, &context, &name, &layer_encoded, &mipmap_encoded, &layers_encoded, &mipmaps_encoded, (view != nullptr ? &view->_owner : nullptr));
}

Vector2i RenderSceneBuffersRD::get_texture_slice_size(const StringName &context, const StringName &name, uint32_t mipmap) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderSceneBuffersRD::get_class_static()._native_ptr(), StringName("get_texture_slice_size")._native_ptr(), 2617625368);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector2i());
	int64_t mipmap_encoded;
	PtrToArg<int64_t>::encode(mipmap, &mipmap_encoded);
	return internal::_call_native_mb_ret<Vector2i>(_gde_method_bind, _owner, &context, &name, &mipmap_encoded);
}

void RenderSceneBuffersRD::clear_context(const StringName &context) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderSceneBuffersRD::get_class_static()._native_ptr(), StringName("clear_context")._native_ptr(), 3304788590);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &context);
}

RID RenderSceneBuffersRD::get_color_texture() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderSceneBuffersRD::get_class_static()._native_ptr(), StringName("get_color_texture")._native_ptr(), 529393457);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner);
}

RID RenderSceneBuffersRD::get_color_layer(uint32_t layer) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderSceneBuffersRD::get_class_static()._native_ptr(), StringName("get_color_layer")._native_ptr(), 937000113);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	int64_t layer_encoded;
	PtrToArg<int64_t>::encode(layer, &layer_encoded);
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner, &layer_encoded);
}

RID RenderSceneBuffersRD::get_depth_texture() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderSceneBuffersRD::get_class_static()._native_ptr(), StringName("get_depth_texture")._native_ptr(), 529393457);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner);
}

RID RenderSceneBuffersRD::get_depth_layer(uint32_t layer) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderSceneBuffersRD::get_class_static()._native_ptr(), StringName("get_depth_layer")._native_ptr(), 937000113);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	int64_t layer_encoded;
	PtrToArg<int64_t>::encode(layer, &layer_encoded);
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner, &layer_encoded);
}

RID RenderSceneBuffersRD::get_velocity_texture() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderSceneBuffersRD::get_class_static()._native_ptr(), StringName("get_velocity_texture")._native_ptr(), 529393457);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner);
}

RID RenderSceneBuffersRD::get_velocity_layer(uint32_t layer) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderSceneBuffersRD::get_class_static()._native_ptr(), StringName("get_velocity_layer")._native_ptr(), 937000113);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	int64_t layer_encoded;
	PtrToArg<int64_t>::encode(layer, &layer_encoded);
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner, &layer_encoded);
}

RID RenderSceneBuffersRD::get_render_target() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderSceneBuffersRD::get_class_static()._native_ptr(), StringName("get_render_target")._native_ptr(), 2944877500);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner);
}

uint32_t RenderSceneBuffersRD::get_view_count() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderSceneBuffersRD::get_class_static()._native_ptr(), StringName("get_view_count")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

Vector2i RenderSceneBuffersRD::get_internal_size() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderSceneBuffersRD::get_class_static()._native_ptr(), StringName("get_internal_size")._native_ptr(), 3690982128);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector2i());
	return internal::_call_native_mb_ret<Vector2i>(_gde_method_bind, _owner);
}

bool RenderSceneBuffersRD::get_use_taa() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderSceneBuffersRD::get_class_static()._native_ptr(), StringName("get_use_taa")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}


} // namespace godot 