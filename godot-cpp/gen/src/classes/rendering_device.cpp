/**************************************************************************/
/*  rendering_device.cpp                                                  */
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

#include <godot_cpp/classes/rendering_device.hpp>

#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/classes/rd_attachment_format.hpp>
#include <godot_cpp/classes/rd_framebuffer_pass.hpp>
#include <godot_cpp/classes/rd_pipeline_color_blend_state.hpp>
#include <godot_cpp/classes/rd_pipeline_depth_stencil_state.hpp>
#include <godot_cpp/classes/rd_pipeline_multisample_state.hpp>
#include <godot_cpp/classes/rd_pipeline_rasterization_state.hpp>
#include <godot_cpp/classes/rd_sampler_state.hpp>
#include <godot_cpp/classes/rd_shader_spirv.hpp>
#include <godot_cpp/classes/rd_shader_source.hpp>
#include <godot_cpp/classes/rd_texture_format.hpp>
#include <godot_cpp/classes/rd_texture_view.hpp>
#include <godot_cpp/classes/rd_uniform.hpp>
#include <godot_cpp/classes/rd_vertex_attribute.hpp>
#include <godot_cpp/variant/vector2i.hpp>
#include <godot_cpp/variant/vector3.hpp>

namespace godot {

const int RenderingDevice::INVALID_ID = -1;
const int RenderingDevice::INVALID_FORMAT_ID = -1;

RID RenderingDevice::texture_create(const Ref<RDTextureFormat> &format, const Ref<RDTextureView> &view, const TypedArray<PackedByteArray> &data) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingDevice::get_class_static()._native_ptr(), StringName("texture_create")._native_ptr(), 3709173589);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner, (format != nullptr ? &format->_owner : nullptr), (view != nullptr ? &view->_owner : nullptr), &data);
}

RID RenderingDevice::texture_create_shared(const Ref<RDTextureView> &view, const RID &with_texture) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingDevice::get_class_static()._native_ptr(), StringName("texture_create_shared")._native_ptr(), 3178156134);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner, (view != nullptr ? &view->_owner : nullptr), &with_texture);
}

RID RenderingDevice::texture_create_shared_from_slice(const Ref<RDTextureView> &view, const RID &with_texture, uint32_t layer, uint32_t mipmap, uint32_t mipmaps, RenderingDevice::TextureSliceType slice_type) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingDevice::get_class_static()._native_ptr(), StringName("texture_create_shared_from_slice")._native_ptr(), 1808971279);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	int64_t layer_encoded;
	PtrToArg<int64_t>::encode(layer, &layer_encoded);
	int64_t mipmap_encoded;
	PtrToArg<int64_t>::encode(mipmap, &mipmap_encoded);
	int64_t mipmaps_encoded;
	PtrToArg<int64_t>::encode(mipmaps, &mipmaps_encoded);
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner, (view != nullptr ? &view->_owner : nullptr), &with_texture, &layer_encoded, &mipmap_encoded, &mipmaps_encoded, &slice_type);
}

RID RenderingDevice::texture_create_from_extension(RenderingDevice::TextureType type, RenderingDevice::DataFormat format, RenderingDevice::TextureSamples samples, BitField<RenderingDevice::TextureUsageBits> usage_flags, uint64_t image, uint64_t width, uint64_t height, uint64_t depth, uint64_t layers) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingDevice::get_class_static()._native_ptr(), StringName("texture_create_from_extension")._native_ptr(), 1397171480);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	int64_t image_encoded;
	PtrToArg<int64_t>::encode(image, &image_encoded);
	int64_t width_encoded;
	PtrToArg<int64_t>::encode(width, &width_encoded);
	int64_t height_encoded;
	PtrToArg<int64_t>::encode(height, &height_encoded);
	int64_t depth_encoded;
	PtrToArg<int64_t>::encode(depth, &depth_encoded);
	int64_t layers_encoded;
	PtrToArg<int64_t>::encode(layers, &layers_encoded);
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner, &type, &format, &samples, &usage_flags, &image_encoded, &width_encoded, &height_encoded, &depth_encoded, &layers_encoded);
}

Error RenderingDevice::texture_update(const RID &texture, uint32_t layer, const PackedByteArray &data) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingDevice::get_class_static()._native_ptr(), StringName("texture_update")._native_ptr(), 1349464008);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Error(0));
	int64_t layer_encoded;
	PtrToArg<int64_t>::encode(layer, &layer_encoded);
	return (Error)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &texture, &layer_encoded, &data);
}

PackedByteArray RenderingDevice::texture_get_data(const RID &texture, uint32_t layer) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingDevice::get_class_static()._native_ptr(), StringName("texture_get_data")._native_ptr(), 1859412099);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedByteArray());
	int64_t layer_encoded;
	PtrToArg<int64_t>::encode(layer, &layer_encoded);
	return internal::_call_native_mb_ret<PackedByteArray>(_gde_method_bind, _owner, &texture, &layer_encoded);
}

bool RenderingDevice::texture_is_format_supported_for_usage(RenderingDevice::DataFormat format, BitField<RenderingDevice::TextureUsageBits> usage_flags) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingDevice::get_class_static()._native_ptr(), StringName("texture_is_format_supported_for_usage")._native_ptr(), 2592520478);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &format, &usage_flags);
}

bool RenderingDevice::texture_is_shared(const RID &texture) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingDevice::get_class_static()._native_ptr(), StringName("texture_is_shared")._native_ptr(), 3521089500);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &texture);
}

bool RenderingDevice::texture_is_valid(const RID &texture) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingDevice::get_class_static()._native_ptr(), StringName("texture_is_valid")._native_ptr(), 3521089500);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &texture);
}

Error RenderingDevice::texture_copy(const RID &from_texture, const RID &to_texture, const Vector3 &from_pos, const Vector3 &to_pos, const Vector3 &size, uint32_t src_mipmap, uint32_t dst_mipmap, uint32_t src_layer, uint32_t dst_layer) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingDevice::get_class_static()._native_ptr(), StringName("texture_copy")._native_ptr(), 2859522160);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Error(0));
	int64_t src_mipmap_encoded;
	PtrToArg<int64_t>::encode(src_mipmap, &src_mipmap_encoded);
	int64_t dst_mipmap_encoded;
	PtrToArg<int64_t>::encode(dst_mipmap, &dst_mipmap_encoded);
	int64_t src_layer_encoded;
	PtrToArg<int64_t>::encode(src_layer, &src_layer_encoded);
	int64_t dst_layer_encoded;
	PtrToArg<int64_t>::encode(dst_layer, &dst_layer_encoded);
	return (Error)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &from_texture, &to_texture, &from_pos, &to_pos, &size, &src_mipmap_encoded, &dst_mipmap_encoded, &src_layer_encoded, &dst_layer_encoded);
}

Error RenderingDevice::texture_clear(const RID &texture, const Color &color, uint32_t base_mipmap, uint32_t mipmap_count, uint32_t base_layer, uint32_t layer_count) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingDevice::get_class_static()._native_ptr(), StringName("texture_clear")._native_ptr(), 3477703247);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Error(0));
	int64_t base_mipmap_encoded;
	PtrToArg<int64_t>::encode(base_mipmap, &base_mipmap_encoded);
	int64_t mipmap_count_encoded;
	PtrToArg<int64_t>::encode(mipmap_count, &mipmap_count_encoded);
	int64_t base_layer_encoded;
	PtrToArg<int64_t>::encode(base_layer, &base_layer_encoded);
	int64_t layer_count_encoded;
	PtrToArg<int64_t>::encode(layer_count, &layer_count_encoded);
	return (Error)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &texture, &color, &base_mipmap_encoded, &mipmap_count_encoded, &base_layer_encoded, &layer_count_encoded);
}

Error RenderingDevice::texture_resolve_multisample(const RID &from_texture, const RID &to_texture) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingDevice::get_class_static()._native_ptr(), StringName("texture_resolve_multisample")._native_ptr(), 3181288260);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Error(0));
	return (Error)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &from_texture, &to_texture);
}

Ref<RDTextureFormat> RenderingDevice::texture_get_format(const RID &texture) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingDevice::get_class_static()._native_ptr(), StringName("texture_get_format")._native_ptr(), 1374471690);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<RDTextureFormat>());
	return Ref<RDTextureFormat>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<RDTextureFormat>(_gde_method_bind, _owner, &texture));
}

uint64_t RenderingDevice::texture_get_native_handle(const RID &texture) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingDevice::get_class_static()._native_ptr(), StringName("texture_get_native_handle")._native_ptr(), 3917799429);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<uint64_t>(_gde_method_bind, _owner, &texture);
}

int64_t RenderingDevice::framebuffer_format_create(const TypedArray<RDAttachmentFormat> &attachments, uint32_t view_count) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingDevice::get_class_static()._native_ptr(), StringName("framebuffer_format_create")._native_ptr(), 697032759);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t view_count_encoded;
	PtrToArg<int64_t>::encode(view_count, &view_count_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &attachments, &view_count_encoded);
}

int64_t RenderingDevice::framebuffer_format_create_multipass(const TypedArray<RDAttachmentFormat> &attachments, const TypedArray<RDFramebufferPass> &passes, uint32_t view_count) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingDevice::get_class_static()._native_ptr(), StringName("framebuffer_format_create_multipass")._native_ptr(), 2647479094);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t view_count_encoded;
	PtrToArg<int64_t>::encode(view_count, &view_count_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &attachments, &passes, &view_count_encoded);
}

int64_t RenderingDevice::framebuffer_format_create_empty(RenderingDevice::TextureSamples samples) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingDevice::get_class_static()._native_ptr(), StringName("framebuffer_format_create_empty")._native_ptr(), 555930169);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &samples);
}

RenderingDevice::TextureSamples RenderingDevice::framebuffer_format_get_texture_samples(int64_t format, uint32_t render_pass) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingDevice::get_class_static()._native_ptr(), StringName("framebuffer_format_get_texture_samples")._native_ptr(), 4223391010);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RenderingDevice::TextureSamples(0));
	int64_t format_encoded;
	PtrToArg<int64_t>::encode(format, &format_encoded);
	int64_t render_pass_encoded;
	PtrToArg<int64_t>::encode(render_pass, &render_pass_encoded);
	return (RenderingDevice::TextureSamples)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &format_encoded, &render_pass_encoded);
}

RID RenderingDevice::framebuffer_create(const TypedArray<RID> &textures, int64_t validate_with_format, uint32_t view_count) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingDevice::get_class_static()._native_ptr(), StringName("framebuffer_create")._native_ptr(), 3284231055);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	int64_t validate_with_format_encoded;
	PtrToArg<int64_t>::encode(validate_with_format, &validate_with_format_encoded);
	int64_t view_count_encoded;
	PtrToArg<int64_t>::encode(view_count, &view_count_encoded);
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner, &textures, &validate_with_format_encoded, &view_count_encoded);
}

RID RenderingDevice::framebuffer_create_multipass(const TypedArray<RID> &textures, const TypedArray<RDFramebufferPass> &passes, int64_t validate_with_format, uint32_t view_count) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingDevice::get_class_static()._native_ptr(), StringName("framebuffer_create_multipass")._native_ptr(), 1750306695);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	int64_t validate_with_format_encoded;
	PtrToArg<int64_t>::encode(validate_with_format, &validate_with_format_encoded);
	int64_t view_count_encoded;
	PtrToArg<int64_t>::encode(view_count, &view_count_encoded);
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner, &textures, &passes, &validate_with_format_encoded, &view_count_encoded);
}

RID RenderingDevice::framebuffer_create_empty(const Vector2i &size, RenderingDevice::TextureSamples samples, int64_t validate_with_format) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingDevice::get_class_static()._native_ptr(), StringName("framebuffer_create_empty")._native_ptr(), 3058360618);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	int64_t validate_with_format_encoded;
	PtrToArg<int64_t>::encode(validate_with_format, &validate_with_format_encoded);
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner, &size, &samples, &validate_with_format_encoded);
}

int64_t RenderingDevice::framebuffer_get_format(const RID &framebuffer) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingDevice::get_class_static()._native_ptr(), StringName("framebuffer_get_format")._native_ptr(), 3917799429);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &framebuffer);
}

bool RenderingDevice::framebuffer_is_valid(const RID &framebuffer) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingDevice::get_class_static()._native_ptr(), StringName("framebuffer_is_valid")._native_ptr(), 4155700596);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &framebuffer);
}

RID RenderingDevice::sampler_create(const Ref<RDSamplerState> &state) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingDevice::get_class_static()._native_ptr(), StringName("sampler_create")._native_ptr(), 2327892535);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner, (state != nullptr ? &state->_owner : nullptr));
}

bool RenderingDevice::sampler_is_format_supported_for_filter(RenderingDevice::DataFormat format, RenderingDevice::SamplerFilter sampler_filter) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingDevice::get_class_static()._native_ptr(), StringName("sampler_is_format_supported_for_filter")._native_ptr(), 2247922238);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &format, &sampler_filter);
}

RID RenderingDevice::vertex_buffer_create(uint32_t size_bytes, const PackedByteArray &data, bool use_as_storage) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingDevice::get_class_static()._native_ptr(), StringName("vertex_buffer_create")._native_ptr(), 3410049843);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	int64_t size_bytes_encoded;
	PtrToArg<int64_t>::encode(size_bytes, &size_bytes_encoded);
	int8_t use_as_storage_encoded;
	PtrToArg<bool>::encode(use_as_storage, &use_as_storage_encoded);
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner, &size_bytes_encoded, &data, &use_as_storage_encoded);
}

int64_t RenderingDevice::vertex_format_create(const TypedArray<RDVertexAttribute> &vertex_descriptions) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingDevice::get_class_static()._native_ptr(), StringName("vertex_format_create")._native_ptr(), 1242678479);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &vertex_descriptions);
}

RID RenderingDevice::vertex_array_create(uint32_t vertex_count, int64_t vertex_format, const TypedArray<RID> &src_buffers, const PackedInt64Array &offsets) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingDevice::get_class_static()._native_ptr(), StringName("vertex_array_create")._native_ptr(), 3799816279);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	int64_t vertex_count_encoded;
	PtrToArg<int64_t>::encode(vertex_count, &vertex_count_encoded);
	int64_t vertex_format_encoded;
	PtrToArg<int64_t>::encode(vertex_format, &vertex_format_encoded);
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner, &vertex_count_encoded, &vertex_format_encoded, &src_buffers, &offsets);
}

RID RenderingDevice::index_buffer_create(uint32_t size_indices, RenderingDevice::IndexBufferFormat format, const PackedByteArray &data, bool use_restart_indices) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingDevice::get_class_static()._native_ptr(), StringName("index_buffer_create")._native_ptr(), 3935920523);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	int64_t size_indices_encoded;
	PtrToArg<int64_t>::encode(size_indices, &size_indices_encoded);
	int8_t use_restart_indices_encoded;
	PtrToArg<bool>::encode(use_restart_indices, &use_restart_indices_encoded);
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner, &size_indices_encoded, &format, &data, &use_restart_indices_encoded);
}

RID RenderingDevice::index_array_create(const RID &index_buffer, uint32_t index_offset, uint32_t index_count) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingDevice::get_class_static()._native_ptr(), StringName("index_array_create")._native_ptr(), 2256026069);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	int64_t index_offset_encoded;
	PtrToArg<int64_t>::encode(index_offset, &index_offset_encoded);
	int64_t index_count_encoded;
	PtrToArg<int64_t>::encode(index_count, &index_count_encoded);
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner, &index_buffer, &index_offset_encoded, &index_count_encoded);
}

Ref<RDShaderSPIRV> RenderingDevice::shader_compile_spirv_from_source(const Ref<RDShaderSource> &shader_source, bool allow_cache) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingDevice::get_class_static()._native_ptr(), StringName("shader_compile_spirv_from_source")._native_ptr(), 1178973306);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<RDShaderSPIRV>());
	int8_t allow_cache_encoded;
	PtrToArg<bool>::encode(allow_cache, &allow_cache_encoded);
	return Ref<RDShaderSPIRV>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<RDShaderSPIRV>(_gde_method_bind, _owner, (shader_source != nullptr ? &shader_source->_owner : nullptr), &allow_cache_encoded));
}

PackedByteArray RenderingDevice::shader_compile_binary_from_spirv(const Ref<RDShaderSPIRV> &spirv_data, const String &name) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingDevice::get_class_static()._native_ptr(), StringName("shader_compile_binary_from_spirv")._native_ptr(), 134910450);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedByteArray());
	return internal::_call_native_mb_ret<PackedByteArray>(_gde_method_bind, _owner, (spirv_data != nullptr ? &spirv_data->_owner : nullptr), &name);
}

RID RenderingDevice::shader_create_from_spirv(const Ref<RDShaderSPIRV> &spirv_data, const String &name) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingDevice::get_class_static()._native_ptr(), StringName("shader_create_from_spirv")._native_ptr(), 342949005);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner, (spirv_data != nullptr ? &spirv_data->_owner : nullptr), &name);
}

RID RenderingDevice::shader_create_from_bytecode(const PackedByteArray &binary_data, const RID &placeholder_rid) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingDevice::get_class_static()._native_ptr(), StringName("shader_create_from_bytecode")._native_ptr(), 1687031350);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner, &binary_data, &placeholder_rid);
}

RID RenderingDevice::shader_create_placeholder() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingDevice::get_class_static()._native_ptr(), StringName("shader_create_placeholder")._native_ptr(), 529393457);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner);
}

uint64_t RenderingDevice::shader_get_vertex_input_attribute_mask(const RID &shader) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingDevice::get_class_static()._native_ptr(), StringName("shader_get_vertex_input_attribute_mask")._native_ptr(), 3917799429);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<uint64_t>(_gde_method_bind, _owner, &shader);
}

RID RenderingDevice::uniform_buffer_create(uint32_t size_bytes, const PackedByteArray &data) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingDevice::get_class_static()._native_ptr(), StringName("uniform_buffer_create")._native_ptr(), 34556762);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	int64_t size_bytes_encoded;
	PtrToArg<int64_t>::encode(size_bytes, &size_bytes_encoded);
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner, &size_bytes_encoded, &data);
}

RID RenderingDevice::storage_buffer_create(uint32_t size_bytes, const PackedByteArray &data, BitField<RenderingDevice::StorageBufferUsage> usage) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingDevice::get_class_static()._native_ptr(), StringName("storage_buffer_create")._native_ptr(), 2316365934);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	int64_t size_bytes_encoded;
	PtrToArg<int64_t>::encode(size_bytes, &size_bytes_encoded);
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner, &size_bytes_encoded, &data, &usage);
}

RID RenderingDevice::texture_buffer_create(uint32_t size_bytes, RenderingDevice::DataFormat format, const PackedByteArray &data) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingDevice::get_class_static()._native_ptr(), StringName("texture_buffer_create")._native_ptr(), 1470338698);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	int64_t size_bytes_encoded;
	PtrToArg<int64_t>::encode(size_bytes, &size_bytes_encoded);
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner, &size_bytes_encoded, &format, &data);
}

RID RenderingDevice::uniform_set_create(const TypedArray<RDUniform> &uniforms, const RID &shader, uint32_t shader_set) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingDevice::get_class_static()._native_ptr(), StringName("uniform_set_create")._native_ptr(), 2280795797);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	int64_t shader_set_encoded;
	PtrToArg<int64_t>::encode(shader_set, &shader_set_encoded);
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner, &uniforms, &shader, &shader_set_encoded);
}

bool RenderingDevice::uniform_set_is_valid(const RID &uniform_set) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingDevice::get_class_static()._native_ptr(), StringName("uniform_set_is_valid")._native_ptr(), 3521089500);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &uniform_set);
}

Error RenderingDevice::buffer_copy(const RID &src_buffer, const RID &dst_buffer, uint32_t src_offset, uint32_t dst_offset, uint32_t size) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingDevice::get_class_static()._native_ptr(), StringName("buffer_copy")._native_ptr(), 864257779);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Error(0));
	int64_t src_offset_encoded;
	PtrToArg<int64_t>::encode(src_offset, &src_offset_encoded);
	int64_t dst_offset_encoded;
	PtrToArg<int64_t>::encode(dst_offset, &dst_offset_encoded);
	int64_t size_encoded;
	PtrToArg<int64_t>::encode(size, &size_encoded);
	return (Error)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &src_buffer, &dst_buffer, &src_offset_encoded, &dst_offset_encoded, &size_encoded);
}

Error RenderingDevice::buffer_update(const RID &buffer, uint32_t offset, uint32_t size_bytes, const PackedByteArray &data) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingDevice::get_class_static()._native_ptr(), StringName("buffer_update")._native_ptr(), 3454956949);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Error(0));
	int64_t offset_encoded;
	PtrToArg<int64_t>::encode(offset, &offset_encoded);
	int64_t size_bytes_encoded;
	PtrToArg<int64_t>::encode(size_bytes, &size_bytes_encoded);
	return (Error)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &buffer, &offset_encoded, &size_bytes_encoded, &data);
}

Error RenderingDevice::buffer_clear(const RID &buffer, uint32_t offset, uint32_t size_bytes) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingDevice::get_class_static()._native_ptr(), StringName("buffer_clear")._native_ptr(), 2452320800);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Error(0));
	int64_t offset_encoded;
	PtrToArg<int64_t>::encode(offset, &offset_encoded);
	int64_t size_bytes_encoded;
	PtrToArg<int64_t>::encode(size_bytes, &size_bytes_encoded);
	return (Error)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &buffer, &offset_encoded, &size_bytes_encoded);
}

PackedByteArray RenderingDevice::buffer_get_data(const RID &buffer, uint32_t offset_bytes, uint32_t size_bytes) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingDevice::get_class_static()._native_ptr(), StringName("buffer_get_data")._native_ptr(), 3101830688);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedByteArray());
	int64_t offset_bytes_encoded;
	PtrToArg<int64_t>::encode(offset_bytes, &offset_bytes_encoded);
	int64_t size_bytes_encoded;
	PtrToArg<int64_t>::encode(size_bytes, &size_bytes_encoded);
	return internal::_call_native_mb_ret<PackedByteArray>(_gde_method_bind, _owner, &buffer, &offset_bytes_encoded, &size_bytes_encoded);
}

RID RenderingDevice::render_pipeline_create(const RID &shader, int64_t framebuffer_format, int64_t vertex_format, RenderingDevice::RenderPrimitive primitive, const Ref<RDPipelineRasterizationState> &rasterization_state, const Ref<RDPipelineMultisampleState> &multisample_state, const Ref<RDPipelineDepthStencilState> &stencil_state, const Ref<RDPipelineColorBlendState> &color_blend_state, BitField<RenderingDevice::PipelineDynamicStateFlags> dynamic_state_flags, uint32_t for_render_pass, const TypedArray<RDPipelineSpecializationConstant> &specialization_constants) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingDevice::get_class_static()._native_ptr(), StringName("render_pipeline_create")._native_ptr(), 2385451958);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	int64_t framebuffer_format_encoded;
	PtrToArg<int64_t>::encode(framebuffer_format, &framebuffer_format_encoded);
	int64_t vertex_format_encoded;
	PtrToArg<int64_t>::encode(vertex_format, &vertex_format_encoded);
	int64_t for_render_pass_encoded;
	PtrToArg<int64_t>::encode(for_render_pass, &for_render_pass_encoded);
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner, &shader, &framebuffer_format_encoded, &vertex_format_encoded, &primitive, (rasterization_state != nullptr ? &rasterization_state->_owner : nullptr), (multisample_state != nullptr ? &multisample_state->_owner : nullptr), (stencil_state != nullptr ? &stencil_state->_owner : nullptr), (color_blend_state != nullptr ? &color_blend_state->_owner : nullptr), &dynamic_state_flags, &for_render_pass_encoded, &specialization_constants);
}

bool RenderingDevice::render_pipeline_is_valid(const RID &render_pipeline) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingDevice::get_class_static()._native_ptr(), StringName("render_pipeline_is_valid")._native_ptr(), 3521089500);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &render_pipeline);
}

RID RenderingDevice::compute_pipeline_create(const RID &shader, const TypedArray<RDPipelineSpecializationConstant> &specialization_constants) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingDevice::get_class_static()._native_ptr(), StringName("compute_pipeline_create")._native_ptr(), 1448838280);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner, &shader, &specialization_constants);
}

bool RenderingDevice::compute_pipeline_is_valid(const RID &compute_pipeline) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingDevice::get_class_static()._native_ptr(), StringName("compute_pipeline_is_valid")._native_ptr(), 3521089500);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &compute_pipeline);
}

int32_t RenderingDevice::screen_get_width(int32_t screen) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingDevice::get_class_static()._native_ptr(), StringName("screen_get_width")._native_ptr(), 1591665591);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t screen_encoded;
	PtrToArg<int64_t>::encode(screen, &screen_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &screen_encoded);
}

int32_t RenderingDevice::screen_get_height(int32_t screen) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingDevice::get_class_static()._native_ptr(), StringName("screen_get_height")._native_ptr(), 1591665591);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t screen_encoded;
	PtrToArg<int64_t>::encode(screen, &screen_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &screen_encoded);
}

int64_t RenderingDevice::screen_get_framebuffer_format(int32_t screen) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingDevice::get_class_static()._native_ptr(), StringName("screen_get_framebuffer_format")._native_ptr(), 1591665591);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t screen_encoded;
	PtrToArg<int64_t>::encode(screen, &screen_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &screen_encoded);
}

int64_t RenderingDevice::draw_list_begin_for_screen(int32_t screen, const Color &clear_color) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingDevice::get_class_static()._native_ptr(), StringName("draw_list_begin_for_screen")._native_ptr(), 3988079995);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t screen_encoded;
	PtrToArg<int64_t>::encode(screen, &screen_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &screen_encoded, &clear_color);
}

int64_t RenderingDevice::draw_list_begin(const RID &framebuffer, RenderingDevice::InitialAction initial_color_action, RenderingDevice::FinalAction final_color_action, RenderingDevice::InitialAction initial_depth_action, RenderingDevice::FinalAction final_depth_action, const PackedColorArray &clear_color_values, double clear_depth, uint32_t clear_stencil, const Rect2 &region) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingDevice::get_class_static()._native_ptr(), StringName("draw_list_begin")._native_ptr(), 2686605154);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	double clear_depth_encoded;
	PtrToArg<double>::encode(clear_depth, &clear_depth_encoded);
	int64_t clear_stencil_encoded;
	PtrToArg<int64_t>::encode(clear_stencil, &clear_stencil_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &framebuffer, &initial_color_action, &final_color_action, &initial_depth_action, &final_depth_action, &clear_color_values, &clear_depth_encoded, &clear_stencil_encoded, &region);
}

PackedInt64Array RenderingDevice::draw_list_begin_split(const RID &framebuffer, uint32_t splits, RenderingDevice::InitialAction initial_color_action, RenderingDevice::FinalAction final_color_action, RenderingDevice::InitialAction initial_depth_action, RenderingDevice::FinalAction final_depth_action, const PackedColorArray &clear_color_values, double clear_depth, uint32_t clear_stencil, const Rect2 &region, const TypedArray<RID> &storage_textures) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingDevice::get_class_static()._native_ptr(), StringName("draw_list_begin_split")._native_ptr(), 2406300660);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedInt64Array());
	int64_t splits_encoded;
	PtrToArg<int64_t>::encode(splits, &splits_encoded);
	double clear_depth_encoded;
	PtrToArg<double>::encode(clear_depth, &clear_depth_encoded);
	int64_t clear_stencil_encoded;
	PtrToArg<int64_t>::encode(clear_stencil, &clear_stencil_encoded);
	return internal::_call_native_mb_ret<PackedInt64Array>(_gde_method_bind, _owner, &framebuffer, &splits_encoded, &initial_color_action, &final_color_action, &initial_depth_action, &final_depth_action, &clear_color_values, &clear_depth_encoded, &clear_stencil_encoded, &region, &storage_textures);
}

void RenderingDevice::draw_list_set_blend_constants(int64_t draw_list, const Color &color) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingDevice::get_class_static()._native_ptr(), StringName("draw_list_set_blend_constants")._native_ptr(), 2878471219);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t draw_list_encoded;
	PtrToArg<int64_t>::encode(draw_list, &draw_list_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &draw_list_encoded, &color);
}

void RenderingDevice::draw_list_bind_render_pipeline(int64_t draw_list, const RID &render_pipeline) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingDevice::get_class_static()._native_ptr(), StringName("draw_list_bind_render_pipeline")._native_ptr(), 4040184819);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t draw_list_encoded;
	PtrToArg<int64_t>::encode(draw_list, &draw_list_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &draw_list_encoded, &render_pipeline);
}

void RenderingDevice::draw_list_bind_uniform_set(int64_t draw_list, const RID &uniform_set, uint32_t set_index) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingDevice::get_class_static()._native_ptr(), StringName("draw_list_bind_uniform_set")._native_ptr(), 749655778);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t draw_list_encoded;
	PtrToArg<int64_t>::encode(draw_list, &draw_list_encoded);
	int64_t set_index_encoded;
	PtrToArg<int64_t>::encode(set_index, &set_index_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &draw_list_encoded, &uniform_set, &set_index_encoded);
}

void RenderingDevice::draw_list_bind_vertex_array(int64_t draw_list, const RID &vertex_array) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingDevice::get_class_static()._native_ptr(), StringName("draw_list_bind_vertex_array")._native_ptr(), 4040184819);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t draw_list_encoded;
	PtrToArg<int64_t>::encode(draw_list, &draw_list_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &draw_list_encoded, &vertex_array);
}

void RenderingDevice::draw_list_bind_index_array(int64_t draw_list, const RID &index_array) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingDevice::get_class_static()._native_ptr(), StringName("draw_list_bind_index_array")._native_ptr(), 4040184819);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t draw_list_encoded;
	PtrToArg<int64_t>::encode(draw_list, &draw_list_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &draw_list_encoded, &index_array);
}

void RenderingDevice::draw_list_set_push_constant(int64_t draw_list, const PackedByteArray &buffer, uint32_t size_bytes) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingDevice::get_class_static()._native_ptr(), StringName("draw_list_set_push_constant")._native_ptr(), 2772371345);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t draw_list_encoded;
	PtrToArg<int64_t>::encode(draw_list, &draw_list_encoded);
	int64_t size_bytes_encoded;
	PtrToArg<int64_t>::encode(size_bytes, &size_bytes_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &draw_list_encoded, &buffer, &size_bytes_encoded);
}

void RenderingDevice::draw_list_draw(int64_t draw_list, bool use_indices, uint32_t instances, uint32_t procedural_vertex_count) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingDevice::get_class_static()._native_ptr(), StringName("draw_list_draw")._native_ptr(), 4230067973);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t draw_list_encoded;
	PtrToArg<int64_t>::encode(draw_list, &draw_list_encoded);
	int8_t use_indices_encoded;
	PtrToArg<bool>::encode(use_indices, &use_indices_encoded);
	int64_t instances_encoded;
	PtrToArg<int64_t>::encode(instances, &instances_encoded);
	int64_t procedural_vertex_count_encoded;
	PtrToArg<int64_t>::encode(procedural_vertex_count, &procedural_vertex_count_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &draw_list_encoded, &use_indices_encoded, &instances_encoded, &procedural_vertex_count_encoded);
}

void RenderingDevice::draw_list_enable_scissor(int64_t draw_list, const Rect2 &rect) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingDevice::get_class_static()._native_ptr(), StringName("draw_list_enable_scissor")._native_ptr(), 244650101);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t draw_list_encoded;
	PtrToArg<int64_t>::encode(draw_list, &draw_list_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &draw_list_encoded, &rect);
}

void RenderingDevice::draw_list_disable_scissor(int64_t draw_list) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingDevice::get_class_static()._native_ptr(), StringName("draw_list_disable_scissor")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t draw_list_encoded;
	PtrToArg<int64_t>::encode(draw_list, &draw_list_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &draw_list_encoded);
}

int64_t RenderingDevice::draw_list_switch_to_next_pass() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingDevice::get_class_static()._native_ptr(), StringName("draw_list_switch_to_next_pass")._native_ptr(), 2455072627);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

PackedInt64Array RenderingDevice::draw_list_switch_to_next_pass_split(uint32_t splits) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingDevice::get_class_static()._native_ptr(), StringName("draw_list_switch_to_next_pass_split")._native_ptr(), 2865087369);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedInt64Array());
	int64_t splits_encoded;
	PtrToArg<int64_t>::encode(splits, &splits_encoded);
	return internal::_call_native_mb_ret<PackedInt64Array>(_gde_method_bind, _owner, &splits_encoded);
}

void RenderingDevice::draw_list_end() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingDevice::get_class_static()._native_ptr(), StringName("draw_list_end")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

int64_t RenderingDevice::compute_list_begin() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingDevice::get_class_static()._native_ptr(), StringName("compute_list_begin")._native_ptr(), 2455072627);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void RenderingDevice::compute_list_bind_compute_pipeline(int64_t compute_list, const RID &compute_pipeline) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingDevice::get_class_static()._native_ptr(), StringName("compute_list_bind_compute_pipeline")._native_ptr(), 4040184819);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t compute_list_encoded;
	PtrToArg<int64_t>::encode(compute_list, &compute_list_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &compute_list_encoded, &compute_pipeline);
}

void RenderingDevice::compute_list_set_push_constant(int64_t compute_list, const PackedByteArray &buffer, uint32_t size_bytes) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingDevice::get_class_static()._native_ptr(), StringName("compute_list_set_push_constant")._native_ptr(), 2772371345);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t compute_list_encoded;
	PtrToArg<int64_t>::encode(compute_list, &compute_list_encoded);
	int64_t size_bytes_encoded;
	PtrToArg<int64_t>::encode(size_bytes, &size_bytes_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &compute_list_encoded, &buffer, &size_bytes_encoded);
}

void RenderingDevice::compute_list_bind_uniform_set(int64_t compute_list, const RID &uniform_set, uint32_t set_index) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingDevice::get_class_static()._native_ptr(), StringName("compute_list_bind_uniform_set")._native_ptr(), 749655778);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t compute_list_encoded;
	PtrToArg<int64_t>::encode(compute_list, &compute_list_encoded);
	int64_t set_index_encoded;
	PtrToArg<int64_t>::encode(set_index, &set_index_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &compute_list_encoded, &uniform_set, &set_index_encoded);
}

void RenderingDevice::compute_list_dispatch(int64_t compute_list, uint32_t x_groups, uint32_t y_groups, uint32_t z_groups) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingDevice::get_class_static()._native_ptr(), StringName("compute_list_dispatch")._native_ptr(), 4275841770);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t compute_list_encoded;
	PtrToArg<int64_t>::encode(compute_list, &compute_list_encoded);
	int64_t x_groups_encoded;
	PtrToArg<int64_t>::encode(x_groups, &x_groups_encoded);
	int64_t y_groups_encoded;
	PtrToArg<int64_t>::encode(y_groups, &y_groups_encoded);
	int64_t z_groups_encoded;
	PtrToArg<int64_t>::encode(z_groups, &z_groups_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &compute_list_encoded, &x_groups_encoded, &y_groups_encoded, &z_groups_encoded);
}

void RenderingDevice::compute_list_dispatch_indirect(int64_t compute_list, const RID &buffer, uint32_t offset) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingDevice::get_class_static()._native_ptr(), StringName("compute_list_dispatch_indirect")._native_ptr(), 749655778);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t compute_list_encoded;
	PtrToArg<int64_t>::encode(compute_list, &compute_list_encoded);
	int64_t offset_encoded;
	PtrToArg<int64_t>::encode(offset, &offset_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &compute_list_encoded, &buffer, &offset_encoded);
}

void RenderingDevice::compute_list_add_barrier(int64_t compute_list) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingDevice::get_class_static()._native_ptr(), StringName("compute_list_add_barrier")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t compute_list_encoded;
	PtrToArg<int64_t>::encode(compute_list, &compute_list_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &compute_list_encoded);
}

void RenderingDevice::compute_list_end() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingDevice::get_class_static()._native_ptr(), StringName("compute_list_end")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void RenderingDevice::free_rid(const RID &rid) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingDevice::get_class_static()._native_ptr(), StringName("free_rid")._native_ptr(), 2722037293);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &rid);
}

void RenderingDevice::capture_timestamp(const String &name) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingDevice::get_class_static()._native_ptr(), StringName("capture_timestamp")._native_ptr(), 83702148);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &name);
}

uint32_t RenderingDevice::get_captured_timestamps_count() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingDevice::get_class_static()._native_ptr(), StringName("get_captured_timestamps_count")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

uint64_t RenderingDevice::get_captured_timestamps_frame() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingDevice::get_class_static()._native_ptr(), StringName("get_captured_timestamps_frame")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<uint64_t>(_gde_method_bind, _owner);
}

uint64_t RenderingDevice::get_captured_timestamp_gpu_time(uint32_t index) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingDevice::get_class_static()._native_ptr(), StringName("get_captured_timestamp_gpu_time")._native_ptr(), 923996154);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	return internal::_call_native_mb_ret<uint64_t>(_gde_method_bind, _owner, &index_encoded);
}

uint64_t RenderingDevice::get_captured_timestamp_cpu_time(uint32_t index) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingDevice::get_class_static()._native_ptr(), StringName("get_captured_timestamp_cpu_time")._native_ptr(), 923996154);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	return internal::_call_native_mb_ret<uint64_t>(_gde_method_bind, _owner, &index_encoded);
}

String RenderingDevice::get_captured_timestamp_name(uint32_t index) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingDevice::get_class_static()._native_ptr(), StringName("get_captured_timestamp_name")._native_ptr(), 844755477);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner, &index_encoded);
}

uint64_t RenderingDevice::limit_get(RenderingDevice::Limit limit) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingDevice::get_class_static()._native_ptr(), StringName("limit_get")._native_ptr(), 1559202131);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<uint64_t>(_gde_method_bind, _owner, &limit);
}

uint32_t RenderingDevice::get_frame_delay() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingDevice::get_class_static()._native_ptr(), StringName("get_frame_delay")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void RenderingDevice::submit() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingDevice::get_class_static()._native_ptr(), StringName("submit")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void RenderingDevice::sync() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingDevice::get_class_static()._native_ptr(), StringName("sync")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void RenderingDevice::barrier(BitField<RenderingDevice::BarrierMask> from, BitField<RenderingDevice::BarrierMask> to) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingDevice::get_class_static()._native_ptr(), StringName("barrier")._native_ptr(), 3718155691);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &from, &to);
}

void RenderingDevice::full_barrier() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingDevice::get_class_static()._native_ptr(), StringName("full_barrier")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

RenderingDevice *RenderingDevice::create_local_device() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingDevice::get_class_static()._native_ptr(), StringName("create_local_device")._native_ptr(), 2846302423);
	CHECK_METHOD_BIND_RET(_gde_method_bind, nullptr);
	return internal::_call_native_mb_ret_obj<RenderingDevice>(_gde_method_bind, _owner);
}

void RenderingDevice::set_resource_name(const RID &id, const String &name) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingDevice::get_class_static()._native_ptr(), StringName("set_resource_name")._native_ptr(), 2726140452);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &id, &name);
}

void RenderingDevice::draw_command_begin_label(const String &name, const Color &color) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingDevice::get_class_static()._native_ptr(), StringName("draw_command_begin_label")._native_ptr(), 1636512886);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &name, &color);
}

void RenderingDevice::draw_command_insert_label(const String &name, const Color &color) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingDevice::get_class_static()._native_ptr(), StringName("draw_command_insert_label")._native_ptr(), 1636512886);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &name, &color);
}

void RenderingDevice::draw_command_end_label() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingDevice::get_class_static()._native_ptr(), StringName("draw_command_end_label")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

String RenderingDevice::get_device_vendor_name() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingDevice::get_class_static()._native_ptr(), StringName("get_device_vendor_name")._native_ptr(), 201670096);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner);
}

String RenderingDevice::get_device_name() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingDevice::get_class_static()._native_ptr(), StringName("get_device_name")._native_ptr(), 201670096);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner);
}

String RenderingDevice::get_device_pipeline_cache_uuid() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingDevice::get_class_static()._native_ptr(), StringName("get_device_pipeline_cache_uuid")._native_ptr(), 201670096);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner);
}

uint64_t RenderingDevice::get_memory_usage(RenderingDevice::MemoryType type) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingDevice::get_class_static()._native_ptr(), StringName("get_memory_usage")._native_ptr(), 251690689);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<uint64_t>(_gde_method_bind, _owner, &type);
}

uint64_t RenderingDevice::get_driver_resource(RenderingDevice::DriverResource resource, const RID &rid, uint64_t index) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingDevice::get_class_static()._native_ptr(), StringName("get_driver_resource")._native_ptr(), 501815484);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	return internal::_call_native_mb_ret<uint64_t>(_gde_method_bind, _owner, &resource, &rid, &index_encoded);
}


} // namespace godot 