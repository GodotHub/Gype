/**************************************************************************/
/*  rendering_server.cpp                                                  */
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

#include <godot_cpp/classes/rendering_server.hpp>

#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/variant/basis.hpp>
#include <godot_cpp/variant/callable.hpp>
#include <godot_cpp/variant/plane.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <godot_cpp/variant/vector2i.hpp>
#include <godot_cpp/variant/vector3.hpp>

namespace godot {

const int RenderingServer::NO_INDEX_ARRAY = -1;
const int RenderingServer::ARRAY_WEIGHTS_SIZE = 4;
const int RenderingServer::CANVAS_ITEM_Z_MIN = -4096;
const int RenderingServer::CANVAS_ITEM_Z_MAX = 4096;
const int RenderingServer::MAX_GLOW_LEVELS = 7;
const int RenderingServer::MAX_CURSORS = 8;
const int RenderingServer::MAX_2D_DIRECTIONAL_LIGHTS = 8;
const int RenderingServer::MAX_MESH_SURFACES = 256;
const int RenderingServer::MATERIAL_RENDER_PRIORITY_MIN = -128;
const int RenderingServer::MATERIAL_RENDER_PRIORITY_MAX = 127;
const int RenderingServer::ARRAY_CUSTOM_COUNT = 4;
const int RenderingServer::PARTICLES_EMIT_FLAG_POSITION = 1;
const int RenderingServer::PARTICLES_EMIT_FLAG_ROTATION_SCALE = 2;
const int RenderingServer::PARTICLES_EMIT_FLAG_VELOCITY = 4;
const int RenderingServer::PARTICLES_EMIT_FLAG_COLOR = 8;
const int RenderingServer::PARTICLES_EMIT_FLAG_CUSTOM = 16;

RenderingServer *RenderingServer::singleton = nullptr;

RenderingServer *RenderingServer::get_singleton() {
	if (unlikely(singleton == nullptr)) {
		GDExtensionObjectPtr singleton_obj = internal::gdextension_interface_global_get_singleton(RenderingServer::get_class_static()._native_ptr());
#ifdef DEBUG_ENABLED
		ERR_FAIL_NULL_V(singleton_obj, nullptr);
#endif // DEBUG_ENABLED
		singleton = reinterpret_cast<RenderingServer *>(internal::gdextension_interface_object_get_instance_binding(singleton_obj, internal::token, &RenderingServer::_gde_binding_callbacks));
#ifdef DEBUG_ENABLED
		ERR_FAIL_NULL_V(singleton, nullptr);
#endif // DEBUG_ENABLED
		if (likely(singleton)) {
			ClassDB::_register_engine_singleton(RenderingServer::get_class_static(), singleton);
		}
	}
	return singleton;
}

RenderingServer::~RenderingServer() {
	if (singleton == this) {
		ClassDB::_unregister_engine_singleton(RenderingServer::get_class_static());
		singleton = nullptr;
	}
}

RID RenderingServer::texture_2d_create(const Ref<Image> &image) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("texture_2d_create")._native_ptr(), 2010018390);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner, (image != nullptr ? &image->_owner : nullptr));
}

RID RenderingServer::texture_2d_layered_create(const TypedArray<Image> &layers, RenderingServer::TextureLayeredType layered_type) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("texture_2d_layered_create")._native_ptr(), 913689023);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner, &layers, &layered_type);
}

RID RenderingServer::texture_3d_create(Image::Format format, int32_t width, int32_t height, int32_t depth, bool mipmaps, const TypedArray<Image> &data) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("texture_3d_create")._native_ptr(), 4036838706);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	int64_t width_encoded;
	PtrToArg<int64_t>::encode(width, &width_encoded);
	int64_t height_encoded;
	PtrToArg<int64_t>::encode(height, &height_encoded);
	int64_t depth_encoded;
	PtrToArg<int64_t>::encode(depth, &depth_encoded);
	int8_t mipmaps_encoded;
	PtrToArg<bool>::encode(mipmaps, &mipmaps_encoded);
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner, &format, &width_encoded, &height_encoded, &depth_encoded, &mipmaps_encoded, &data);
}

RID RenderingServer::texture_proxy_create(const RID &base) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("texture_proxy_create")._native_ptr(), 41030802);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner, &base);
}

void RenderingServer::texture_2d_update(const RID &texture, const Ref<Image> &image, int32_t layer) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("texture_2d_update")._native_ptr(), 999539803);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t layer_encoded;
	PtrToArg<int64_t>::encode(layer, &layer_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &texture, (image != nullptr ? &image->_owner : nullptr), &layer_encoded);
}

void RenderingServer::texture_3d_update(const RID &texture, const TypedArray<Image> &data) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("texture_3d_update")._native_ptr(), 684822712);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &texture, &data);
}

void RenderingServer::texture_proxy_update(const RID &texture, const RID &proxy_to) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("texture_proxy_update")._native_ptr(), 395945892);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &texture, &proxy_to);
}

RID RenderingServer::texture_2d_placeholder_create() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("texture_2d_placeholder_create")._native_ptr(), 529393457);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner);
}

RID RenderingServer::texture_2d_layered_placeholder_create(RenderingServer::TextureLayeredType layered_type) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("texture_2d_layered_placeholder_create")._native_ptr(), 1394585590);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner, &layered_type);
}

RID RenderingServer::texture_3d_placeholder_create() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("texture_3d_placeholder_create")._native_ptr(), 529393457);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner);
}

Ref<Image> RenderingServer::texture_2d_get(const RID &texture) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("texture_2d_get")._native_ptr(), 4206205781);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<Image>());
	return Ref<Image>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<Image>(_gde_method_bind, _owner, &texture));
}

Ref<Image> RenderingServer::texture_2d_layer_get(const RID &texture, int32_t layer) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("texture_2d_layer_get")._native_ptr(), 2705440895);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<Image>());
	int64_t layer_encoded;
	PtrToArg<int64_t>::encode(layer, &layer_encoded);
	return Ref<Image>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<Image>(_gde_method_bind, _owner, &texture, &layer_encoded));
}

TypedArray<Image> RenderingServer::texture_3d_get(const RID &texture) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("texture_3d_get")._native_ptr(), 2684255073);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TypedArray<Image>());
	return internal::_call_native_mb_ret<TypedArray<Image>>(_gde_method_bind, _owner, &texture);
}

void RenderingServer::texture_replace(const RID &texture, const RID &by_texture) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("texture_replace")._native_ptr(), 395945892);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &texture, &by_texture);
}

void RenderingServer::texture_set_size_override(const RID &texture, int32_t width, int32_t height) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("texture_set_size_override")._native_ptr(), 4288446313);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t width_encoded;
	PtrToArg<int64_t>::encode(width, &width_encoded);
	int64_t height_encoded;
	PtrToArg<int64_t>::encode(height, &height_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &texture, &width_encoded, &height_encoded);
}

void RenderingServer::texture_set_path(const RID &texture, const String &path) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("texture_set_path")._native_ptr(), 2726140452);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &texture, &path);
}

String RenderingServer::texture_get_path(const RID &texture) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("texture_get_path")._native_ptr(), 642473191);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner, &texture);
}

Image::Format RenderingServer::texture_get_format(const RID &texture) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("texture_get_format")._native_ptr(), 1932918979);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Image::Format(0));
	return (Image::Format)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &texture);
}

void RenderingServer::texture_set_force_redraw_if_visible(const RID &texture, bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("texture_set_force_redraw_if_visible")._native_ptr(), 1265174801);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &texture, &enable_encoded);
}

RID RenderingServer::texture_rd_create(const RID &rd_texture, RenderingServer::TextureLayeredType layer_type) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("texture_rd_create")._native_ptr(), 1434128712);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner, &rd_texture, &layer_type);
}

RID RenderingServer::texture_get_rd_texture(const RID &texture, bool srgb) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("texture_get_rd_texture")._native_ptr(), 2790148051);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	int8_t srgb_encoded;
	PtrToArg<bool>::encode(srgb, &srgb_encoded);
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner, &texture, &srgb_encoded);
}

uint64_t RenderingServer::texture_get_native_handle(const RID &texture, bool srgb) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("texture_get_native_handle")._native_ptr(), 1834114100);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int8_t srgb_encoded;
	PtrToArg<bool>::encode(srgb, &srgb_encoded);
	return internal::_call_native_mb_ret<uint64_t>(_gde_method_bind, _owner, &texture, &srgb_encoded);
}

RID RenderingServer::shader_create() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("shader_create")._native_ptr(), 529393457);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner);
}

void RenderingServer::shader_set_code(const RID &shader, const String &code) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("shader_set_code")._native_ptr(), 2726140452);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &shader, &code);
}

void RenderingServer::shader_set_path_hint(const RID &shader, const String &path) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("shader_set_path_hint")._native_ptr(), 2726140452);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &shader, &path);
}

String RenderingServer::shader_get_code(const RID &shader) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("shader_get_code")._native_ptr(), 642473191);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner, &shader);
}

TypedArray<Dictionary> RenderingServer::get_shader_parameter_list(const RID &shader) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("get_shader_parameter_list")._native_ptr(), 2684255073);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TypedArray<Dictionary>());
	return internal::_call_native_mb_ret<TypedArray<Dictionary>>(_gde_method_bind, _owner, &shader);
}

Variant RenderingServer::shader_get_parameter_default(const RID &shader, const StringName &name) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("shader_get_parameter_default")._native_ptr(), 2621281810);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Variant());
	return internal::_call_native_mb_ret<Variant>(_gde_method_bind, _owner, &shader, &name);
}

void RenderingServer::shader_set_default_texture_parameter(const RID &shader, const StringName &name, const RID &texture, int32_t index) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("shader_set_default_texture_parameter")._native_ptr(), 4094001817);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &shader, &name, &texture, &index_encoded);
}

RID RenderingServer::shader_get_default_texture_parameter(const RID &shader, const StringName &name, int32_t index) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("shader_get_default_texture_parameter")._native_ptr(), 1464608890);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner, &shader, &name, &index_encoded);
}

RID RenderingServer::material_create() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("material_create")._native_ptr(), 529393457);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner);
}

void RenderingServer::material_set_shader(const RID &shader_material, const RID &shader) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("material_set_shader")._native_ptr(), 395945892);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &shader_material, &shader);
}

void RenderingServer::material_set_param(const RID &material, const StringName &parameter, const Variant &value) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("material_set_param")._native_ptr(), 3477296213);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &material, &parameter, &value);
}

Variant RenderingServer::material_get_param(const RID &material, const StringName &parameter) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("material_get_param")._native_ptr(), 2621281810);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Variant());
	return internal::_call_native_mb_ret<Variant>(_gde_method_bind, _owner, &material, &parameter);
}

void RenderingServer::material_set_render_priority(const RID &material, int32_t priority) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("material_set_render_priority")._native_ptr(), 3411492887);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t priority_encoded;
	PtrToArg<int64_t>::encode(priority, &priority_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &material, &priority_encoded);
}

void RenderingServer::material_set_next_pass(const RID &material, const RID &next_material) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("material_set_next_pass")._native_ptr(), 395945892);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &material, &next_material);
}

RID RenderingServer::mesh_create_from_surfaces(const TypedArray<Dictionary> &surfaces, int32_t blend_shape_count) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("mesh_create_from_surfaces")._native_ptr(), 4291747531);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	int64_t blend_shape_count_encoded;
	PtrToArg<int64_t>::encode(blend_shape_count, &blend_shape_count_encoded);
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner, &surfaces, &blend_shape_count_encoded);
}

RID RenderingServer::mesh_create() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("mesh_create")._native_ptr(), 529393457);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner);
}

uint32_t RenderingServer::mesh_surface_get_format_offset(BitField<RenderingServer::ArrayFormat> format, int32_t vertex_count, int32_t array_index) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("mesh_surface_get_format_offset")._native_ptr(), 2981368685);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t vertex_count_encoded;
	PtrToArg<int64_t>::encode(vertex_count, &vertex_count_encoded);
	int64_t array_index_encoded;
	PtrToArg<int64_t>::encode(array_index, &array_index_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &format, &vertex_count_encoded, &array_index_encoded);
}

uint32_t RenderingServer::mesh_surface_get_format_vertex_stride(BitField<RenderingServer::ArrayFormat> format, int32_t vertex_count) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("mesh_surface_get_format_vertex_stride")._native_ptr(), 3188363337);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t vertex_count_encoded;
	PtrToArg<int64_t>::encode(vertex_count, &vertex_count_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &format, &vertex_count_encoded);
}

uint32_t RenderingServer::mesh_surface_get_format_normal_tangent_stride(BitField<RenderingServer::ArrayFormat> format, int32_t vertex_count) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("mesh_surface_get_format_normal_tangent_stride")._native_ptr(), 3188363337);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t vertex_count_encoded;
	PtrToArg<int64_t>::encode(vertex_count, &vertex_count_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &format, &vertex_count_encoded);
}

uint32_t RenderingServer::mesh_surface_get_format_attribute_stride(BitField<RenderingServer::ArrayFormat> format, int32_t vertex_count) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("mesh_surface_get_format_attribute_stride")._native_ptr(), 3188363337);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t vertex_count_encoded;
	PtrToArg<int64_t>::encode(vertex_count, &vertex_count_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &format, &vertex_count_encoded);
}

uint32_t RenderingServer::mesh_surface_get_format_skin_stride(BitField<RenderingServer::ArrayFormat> format, int32_t vertex_count) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("mesh_surface_get_format_skin_stride")._native_ptr(), 3188363337);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t vertex_count_encoded;
	PtrToArg<int64_t>::encode(vertex_count, &vertex_count_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &format, &vertex_count_encoded);
}

void RenderingServer::mesh_add_surface(const RID &mesh, const Dictionary &surface) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("mesh_add_surface")._native_ptr(), 1217542888);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &mesh, &surface);
}

void RenderingServer::mesh_add_surface_from_arrays(const RID &mesh, RenderingServer::PrimitiveType primitive, const Array &arrays, const Array &blend_shapes, const Dictionary &lods, BitField<RenderingServer::ArrayFormat> compress_format) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("mesh_add_surface_from_arrays")._native_ptr(), 2342446560);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &mesh, &primitive, &arrays, &blend_shapes, &lods, &compress_format);
}

int32_t RenderingServer::mesh_get_blend_shape_count(const RID &mesh) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("mesh_get_blend_shape_count")._native_ptr(), 2198884583);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &mesh);
}

void RenderingServer::mesh_set_blend_shape_mode(const RID &mesh, RenderingServer::BlendShapeMode mode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("mesh_set_blend_shape_mode")._native_ptr(), 1294662092);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &mesh, &mode);
}

RenderingServer::BlendShapeMode RenderingServer::mesh_get_blend_shape_mode(const RID &mesh) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("mesh_get_blend_shape_mode")._native_ptr(), 4282291819);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RenderingServer::BlendShapeMode(0));
	return (RenderingServer::BlendShapeMode)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &mesh);
}

void RenderingServer::mesh_surface_set_material(const RID &mesh, int32_t surface, const RID &material) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("mesh_surface_set_material")._native_ptr(), 2310537182);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t surface_encoded;
	PtrToArg<int64_t>::encode(surface, &surface_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &mesh, &surface_encoded, &material);
}

RID RenderingServer::mesh_surface_get_material(const RID &mesh, int32_t surface) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("mesh_surface_get_material")._native_ptr(), 1066463050);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	int64_t surface_encoded;
	PtrToArg<int64_t>::encode(surface, &surface_encoded);
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner, &mesh, &surface_encoded);
}

Dictionary RenderingServer::mesh_get_surface(const RID &mesh, int32_t surface) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("mesh_get_surface")._native_ptr(), 186674697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Dictionary());
	int64_t surface_encoded;
	PtrToArg<int64_t>::encode(surface, &surface_encoded);
	return internal::_call_native_mb_ret<Dictionary>(_gde_method_bind, _owner, &mesh, &surface_encoded);
}

Array RenderingServer::mesh_surface_get_arrays(const RID &mesh, int32_t surface) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("mesh_surface_get_arrays")._native_ptr(), 1778388067);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Array());
	int64_t surface_encoded;
	PtrToArg<int64_t>::encode(surface, &surface_encoded);
	return internal::_call_native_mb_ret<Array>(_gde_method_bind, _owner, &mesh, &surface_encoded);
}

TypedArray<Array> RenderingServer::mesh_surface_get_blend_shape_arrays(const RID &mesh, int32_t surface) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("mesh_surface_get_blend_shape_arrays")._native_ptr(), 1778388067);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TypedArray<Array>());
	int64_t surface_encoded;
	PtrToArg<int64_t>::encode(surface, &surface_encoded);
	return internal::_call_native_mb_ret<TypedArray<Array>>(_gde_method_bind, _owner, &mesh, &surface_encoded);
}

int32_t RenderingServer::mesh_get_surface_count(const RID &mesh) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("mesh_get_surface_count")._native_ptr(), 2198884583);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &mesh);
}

void RenderingServer::mesh_set_custom_aabb(const RID &mesh, const AABB &aabb) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("mesh_set_custom_aabb")._native_ptr(), 3696536120);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &mesh, &aabb);
}

AABB RenderingServer::mesh_get_custom_aabb(const RID &mesh) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("mesh_get_custom_aabb")._native_ptr(), 974181306);
	CHECK_METHOD_BIND_RET(_gde_method_bind, AABB());
	return internal::_call_native_mb_ret<AABB>(_gde_method_bind, _owner, &mesh);
}

void RenderingServer::mesh_clear(const RID &mesh) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("mesh_clear")._native_ptr(), 2722037293);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &mesh);
}

void RenderingServer::mesh_surface_update_vertex_region(const RID &mesh, int32_t surface, int32_t offset, const PackedByteArray &data) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("mesh_surface_update_vertex_region")._native_ptr(), 2900195149);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t surface_encoded;
	PtrToArg<int64_t>::encode(surface, &surface_encoded);
	int64_t offset_encoded;
	PtrToArg<int64_t>::encode(offset, &offset_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &mesh, &surface_encoded, &offset_encoded, &data);
}

void RenderingServer::mesh_surface_update_attribute_region(const RID &mesh, int32_t surface, int32_t offset, const PackedByteArray &data) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("mesh_surface_update_attribute_region")._native_ptr(), 2900195149);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t surface_encoded;
	PtrToArg<int64_t>::encode(surface, &surface_encoded);
	int64_t offset_encoded;
	PtrToArg<int64_t>::encode(offset, &offset_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &mesh, &surface_encoded, &offset_encoded, &data);
}

void RenderingServer::mesh_surface_update_skin_region(const RID &mesh, int32_t surface, int32_t offset, const PackedByteArray &data) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("mesh_surface_update_skin_region")._native_ptr(), 2900195149);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t surface_encoded;
	PtrToArg<int64_t>::encode(surface, &surface_encoded);
	int64_t offset_encoded;
	PtrToArg<int64_t>::encode(offset, &offset_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &mesh, &surface_encoded, &offset_encoded, &data);
}

void RenderingServer::mesh_set_shadow_mesh(const RID &mesh, const RID &shadow_mesh) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("mesh_set_shadow_mesh")._native_ptr(), 395945892);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &mesh, &shadow_mesh);
}

RID RenderingServer::multimesh_create() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("multimesh_create")._native_ptr(), 529393457);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner);
}

void RenderingServer::multimesh_allocate_data(const RID &multimesh, int32_t instances, RenderingServer::MultimeshTransformFormat transform_format, bool color_format, bool custom_data_format) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("multimesh_allocate_data")._native_ptr(), 283685892);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t instances_encoded;
	PtrToArg<int64_t>::encode(instances, &instances_encoded);
	int8_t color_format_encoded;
	PtrToArg<bool>::encode(color_format, &color_format_encoded);
	int8_t custom_data_format_encoded;
	PtrToArg<bool>::encode(custom_data_format, &custom_data_format_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &multimesh, &instances_encoded, &transform_format, &color_format_encoded, &custom_data_format_encoded);
}

int32_t RenderingServer::multimesh_get_instance_count(const RID &multimesh) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("multimesh_get_instance_count")._native_ptr(), 2198884583);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &multimesh);
}

void RenderingServer::multimesh_set_mesh(const RID &multimesh, const RID &mesh) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("multimesh_set_mesh")._native_ptr(), 395945892);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &multimesh, &mesh);
}

void RenderingServer::multimesh_instance_set_transform(const RID &multimesh, int32_t index, const Transform3D &transform) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("multimesh_instance_set_transform")._native_ptr(), 675327471);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &multimesh, &index_encoded, &transform);
}

void RenderingServer::multimesh_instance_set_transform_2d(const RID &multimesh, int32_t index, const Transform2D &transform) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("multimesh_instance_set_transform_2d")._native_ptr(), 736082694);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &multimesh, &index_encoded, &transform);
}

void RenderingServer::multimesh_instance_set_color(const RID &multimesh, int32_t index, const Color &color) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("multimesh_instance_set_color")._native_ptr(), 176975443);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &multimesh, &index_encoded, &color);
}

void RenderingServer::multimesh_instance_set_custom_data(const RID &multimesh, int32_t index, const Color &custom_data) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("multimesh_instance_set_custom_data")._native_ptr(), 176975443);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &multimesh, &index_encoded, &custom_data);
}

RID RenderingServer::multimesh_get_mesh(const RID &multimesh) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("multimesh_get_mesh")._native_ptr(), 3814569979);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner, &multimesh);
}

AABB RenderingServer::multimesh_get_aabb(const RID &multimesh) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("multimesh_get_aabb")._native_ptr(), 974181306);
	CHECK_METHOD_BIND_RET(_gde_method_bind, AABB());
	return internal::_call_native_mb_ret<AABB>(_gde_method_bind, _owner, &multimesh);
}

void RenderingServer::multimesh_set_custom_aabb(const RID &multimesh, const AABB &aabb) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("multimesh_set_custom_aabb")._native_ptr(), 3696536120);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &multimesh, &aabb);
}

AABB RenderingServer::multimesh_get_custom_aabb(const RID &multimesh) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("multimesh_get_custom_aabb")._native_ptr(), 974181306);
	CHECK_METHOD_BIND_RET(_gde_method_bind, AABB());
	return internal::_call_native_mb_ret<AABB>(_gde_method_bind, _owner, &multimesh);
}

Transform3D RenderingServer::multimesh_instance_get_transform(const RID &multimesh, int32_t index) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("multimesh_instance_get_transform")._native_ptr(), 1050775521);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Transform3D());
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	return internal::_call_native_mb_ret<Transform3D>(_gde_method_bind, _owner, &multimesh, &index_encoded);
}

Transform2D RenderingServer::multimesh_instance_get_transform_2d(const RID &multimesh, int32_t index) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("multimesh_instance_get_transform_2d")._native_ptr(), 1324854622);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Transform2D());
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	return internal::_call_native_mb_ret<Transform2D>(_gde_method_bind, _owner, &multimesh, &index_encoded);
}

Color RenderingServer::multimesh_instance_get_color(const RID &multimesh, int32_t index) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("multimesh_instance_get_color")._native_ptr(), 2946315076);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Color());
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	return internal::_call_native_mb_ret<Color>(_gde_method_bind, _owner, &multimesh, &index_encoded);
}

Color RenderingServer::multimesh_instance_get_custom_data(const RID &multimesh, int32_t index) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("multimesh_instance_get_custom_data")._native_ptr(), 2946315076);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Color());
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	return internal::_call_native_mb_ret<Color>(_gde_method_bind, _owner, &multimesh, &index_encoded);
}

void RenderingServer::multimesh_set_visible_instances(const RID &multimesh, int32_t visible) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("multimesh_set_visible_instances")._native_ptr(), 3411492887);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t visible_encoded;
	PtrToArg<int64_t>::encode(visible, &visible_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &multimesh, &visible_encoded);
}

int32_t RenderingServer::multimesh_get_visible_instances(const RID &multimesh) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("multimesh_get_visible_instances")._native_ptr(), 2198884583);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &multimesh);
}

void RenderingServer::multimesh_set_buffer(const RID &multimesh, const PackedFloat32Array &buffer) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("multimesh_set_buffer")._native_ptr(), 2960552364);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &multimesh, &buffer);
}

PackedFloat32Array RenderingServer::multimesh_get_buffer(const RID &multimesh) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("multimesh_get_buffer")._native_ptr(), 3964669176);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedFloat32Array());
	return internal::_call_native_mb_ret<PackedFloat32Array>(_gde_method_bind, _owner, &multimesh);
}

RID RenderingServer::skeleton_create() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("skeleton_create")._native_ptr(), 529393457);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner);
}

void RenderingServer::skeleton_allocate_data(const RID &skeleton, int32_t bones, bool is_2d_skeleton) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("skeleton_allocate_data")._native_ptr(), 1904426712);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t bones_encoded;
	PtrToArg<int64_t>::encode(bones, &bones_encoded);
	int8_t is_2d_skeleton_encoded;
	PtrToArg<bool>::encode(is_2d_skeleton, &is_2d_skeleton_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &skeleton, &bones_encoded, &is_2d_skeleton_encoded);
}

int32_t RenderingServer::skeleton_get_bone_count(const RID &skeleton) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("skeleton_get_bone_count")._native_ptr(), 2198884583);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &skeleton);
}

void RenderingServer::skeleton_bone_set_transform(const RID &skeleton, int32_t bone, const Transform3D &transform) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("skeleton_bone_set_transform")._native_ptr(), 675327471);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t bone_encoded;
	PtrToArg<int64_t>::encode(bone, &bone_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &skeleton, &bone_encoded, &transform);
}

Transform3D RenderingServer::skeleton_bone_get_transform(const RID &skeleton, int32_t bone) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("skeleton_bone_get_transform")._native_ptr(), 1050775521);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Transform3D());
	int64_t bone_encoded;
	PtrToArg<int64_t>::encode(bone, &bone_encoded);
	return internal::_call_native_mb_ret<Transform3D>(_gde_method_bind, _owner, &skeleton, &bone_encoded);
}

void RenderingServer::skeleton_bone_set_transform_2d(const RID &skeleton, int32_t bone, const Transform2D &transform) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("skeleton_bone_set_transform_2d")._native_ptr(), 736082694);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t bone_encoded;
	PtrToArg<int64_t>::encode(bone, &bone_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &skeleton, &bone_encoded, &transform);
}

Transform2D RenderingServer::skeleton_bone_get_transform_2d(const RID &skeleton, int32_t bone) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("skeleton_bone_get_transform_2d")._native_ptr(), 1324854622);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Transform2D());
	int64_t bone_encoded;
	PtrToArg<int64_t>::encode(bone, &bone_encoded);
	return internal::_call_native_mb_ret<Transform2D>(_gde_method_bind, _owner, &skeleton, &bone_encoded);
}

void RenderingServer::skeleton_set_base_transform_2d(const RID &skeleton, const Transform2D &base_transform) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("skeleton_set_base_transform_2d")._native_ptr(), 1246044741);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &skeleton, &base_transform);
}

RID RenderingServer::directional_light_create() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("directional_light_create")._native_ptr(), 529393457);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner);
}

RID RenderingServer::omni_light_create() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("omni_light_create")._native_ptr(), 529393457);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner);
}

RID RenderingServer::spot_light_create() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("spot_light_create")._native_ptr(), 529393457);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner);
}

void RenderingServer::light_set_color(const RID &light, const Color &color) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("light_set_color")._native_ptr(), 2948539648);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &light, &color);
}

void RenderingServer::light_set_param(const RID &light, RenderingServer::LightParam param, double value) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("light_set_param")._native_ptr(), 501936875);
	CHECK_METHOD_BIND(_gde_method_bind);
	double value_encoded;
	PtrToArg<double>::encode(value, &value_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &light, &param, &value_encoded);
}

void RenderingServer::light_set_shadow(const RID &light, bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("light_set_shadow")._native_ptr(), 1265174801);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &light, &enabled_encoded);
}

void RenderingServer::light_set_projector(const RID &light, const RID &texture) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("light_set_projector")._native_ptr(), 395945892);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &light, &texture);
}

void RenderingServer::light_set_negative(const RID &light, bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("light_set_negative")._native_ptr(), 1265174801);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &light, &enable_encoded);
}

void RenderingServer::light_set_cull_mask(const RID &light, uint32_t mask) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("light_set_cull_mask")._native_ptr(), 3411492887);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t mask_encoded;
	PtrToArg<int64_t>::encode(mask, &mask_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &light, &mask_encoded);
}

void RenderingServer::light_set_distance_fade(const RID &decal, bool enabled, double begin, double shadow, double length) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("light_set_distance_fade")._native_ptr(), 1622292572);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	double begin_encoded;
	PtrToArg<double>::encode(begin, &begin_encoded);
	double shadow_encoded;
	PtrToArg<double>::encode(shadow, &shadow_encoded);
	double length_encoded;
	PtrToArg<double>::encode(length, &length_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &decal, &enabled_encoded, &begin_encoded, &shadow_encoded, &length_encoded);
}

void RenderingServer::light_set_reverse_cull_face_mode(const RID &light, bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("light_set_reverse_cull_face_mode")._native_ptr(), 1265174801);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &light, &enabled_encoded);
}

void RenderingServer::light_set_bake_mode(const RID &light, RenderingServer::LightBakeMode bake_mode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("light_set_bake_mode")._native_ptr(), 1048525260);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &light, &bake_mode);
}

void RenderingServer::light_set_max_sdfgi_cascade(const RID &light, uint32_t cascade) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("light_set_max_sdfgi_cascade")._native_ptr(), 3411492887);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t cascade_encoded;
	PtrToArg<int64_t>::encode(cascade, &cascade_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &light, &cascade_encoded);
}

void RenderingServer::light_omni_set_shadow_mode(const RID &light, RenderingServer::LightOmniShadowMode mode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("light_omni_set_shadow_mode")._native_ptr(), 2552677200);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &light, &mode);
}

void RenderingServer::light_directional_set_shadow_mode(const RID &light, RenderingServer::LightDirectionalShadowMode mode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("light_directional_set_shadow_mode")._native_ptr(), 380462970);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &light, &mode);
}

void RenderingServer::light_directional_set_blend_splits(const RID &light, bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("light_directional_set_blend_splits")._native_ptr(), 1265174801);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &light, &enable_encoded);
}

void RenderingServer::light_directional_set_sky_mode(const RID &light, RenderingServer::LightDirectionalSkyMode mode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("light_directional_set_sky_mode")._native_ptr(), 2559740754);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &light, &mode);
}

void RenderingServer::light_projectors_set_filter(RenderingServer::LightProjectorFilter filter) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("light_projectors_set_filter")._native_ptr(), 43944325);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &filter);
}

void RenderingServer::positional_soft_shadow_filter_set_quality(RenderingServer::ShadowQuality quality) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("positional_soft_shadow_filter_set_quality")._native_ptr(), 3613045266);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &quality);
}

void RenderingServer::directional_soft_shadow_filter_set_quality(RenderingServer::ShadowQuality quality) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("directional_soft_shadow_filter_set_quality")._native_ptr(), 3613045266);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &quality);
}

void RenderingServer::directional_shadow_atlas_set_size(int32_t size, bool is_16bits) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("directional_shadow_atlas_set_size")._native_ptr(), 300928843);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t size_encoded;
	PtrToArg<int64_t>::encode(size, &size_encoded);
	int8_t is_16bits_encoded;
	PtrToArg<bool>::encode(is_16bits, &is_16bits_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &size_encoded, &is_16bits_encoded);
}

RID RenderingServer::reflection_probe_create() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("reflection_probe_create")._native_ptr(), 529393457);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner);
}

void RenderingServer::reflection_probe_set_update_mode(const RID &probe, RenderingServer::ReflectionProbeUpdateMode mode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("reflection_probe_set_update_mode")._native_ptr(), 3853670147);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &probe, &mode);
}

void RenderingServer::reflection_probe_set_intensity(const RID &probe, double intensity) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("reflection_probe_set_intensity")._native_ptr(), 1794382983);
	CHECK_METHOD_BIND(_gde_method_bind);
	double intensity_encoded;
	PtrToArg<double>::encode(intensity, &intensity_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &probe, &intensity_encoded);
}

void RenderingServer::reflection_probe_set_ambient_mode(const RID &probe, RenderingServer::ReflectionProbeAmbientMode mode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("reflection_probe_set_ambient_mode")._native_ptr(), 184163074);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &probe, &mode);
}

void RenderingServer::reflection_probe_set_ambient_color(const RID &probe, const Color &color) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("reflection_probe_set_ambient_color")._native_ptr(), 2948539648);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &probe, &color);
}

void RenderingServer::reflection_probe_set_ambient_energy(const RID &probe, double energy) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("reflection_probe_set_ambient_energy")._native_ptr(), 1794382983);
	CHECK_METHOD_BIND(_gde_method_bind);
	double energy_encoded;
	PtrToArg<double>::encode(energy, &energy_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &probe, &energy_encoded);
}

void RenderingServer::reflection_probe_set_max_distance(const RID &probe, double distance) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("reflection_probe_set_max_distance")._native_ptr(), 1794382983);
	CHECK_METHOD_BIND(_gde_method_bind);
	double distance_encoded;
	PtrToArg<double>::encode(distance, &distance_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &probe, &distance_encoded);
}

void RenderingServer::reflection_probe_set_size(const RID &probe, const Vector3 &size) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("reflection_probe_set_size")._native_ptr(), 3227306858);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &probe, &size);
}

void RenderingServer::reflection_probe_set_origin_offset(const RID &probe, const Vector3 &offset) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("reflection_probe_set_origin_offset")._native_ptr(), 3227306858);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &probe, &offset);
}

void RenderingServer::reflection_probe_set_as_interior(const RID &probe, bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("reflection_probe_set_as_interior")._native_ptr(), 1265174801);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &probe, &enable_encoded);
}

void RenderingServer::reflection_probe_set_enable_box_projection(const RID &probe, bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("reflection_probe_set_enable_box_projection")._native_ptr(), 1265174801);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &probe, &enable_encoded);
}

void RenderingServer::reflection_probe_set_enable_shadows(const RID &probe, bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("reflection_probe_set_enable_shadows")._native_ptr(), 1265174801);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &probe, &enable_encoded);
}

void RenderingServer::reflection_probe_set_cull_mask(const RID &probe, uint32_t layers) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("reflection_probe_set_cull_mask")._native_ptr(), 3411492887);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t layers_encoded;
	PtrToArg<int64_t>::encode(layers, &layers_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &probe, &layers_encoded);
}

void RenderingServer::reflection_probe_set_reflection_mask(const RID &probe, uint32_t layers) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("reflection_probe_set_reflection_mask")._native_ptr(), 3411492887);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t layers_encoded;
	PtrToArg<int64_t>::encode(layers, &layers_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &probe, &layers_encoded);
}

void RenderingServer::reflection_probe_set_resolution(const RID &probe, int32_t resolution) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("reflection_probe_set_resolution")._native_ptr(), 3411492887);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t resolution_encoded;
	PtrToArg<int64_t>::encode(resolution, &resolution_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &probe, &resolution_encoded);
}

void RenderingServer::reflection_probe_set_mesh_lod_threshold(const RID &probe, double pixels) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("reflection_probe_set_mesh_lod_threshold")._native_ptr(), 1794382983);
	CHECK_METHOD_BIND(_gde_method_bind);
	double pixels_encoded;
	PtrToArg<double>::encode(pixels, &pixels_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &probe, &pixels_encoded);
}

RID RenderingServer::decal_create() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("decal_create")._native_ptr(), 529393457);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner);
}

void RenderingServer::decal_set_size(const RID &decal, const Vector3 &size) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("decal_set_size")._native_ptr(), 3227306858);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &decal, &size);
}

void RenderingServer::decal_set_texture(const RID &decal, RenderingServer::DecalTexture type, const RID &texture) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("decal_set_texture")._native_ptr(), 3953344054);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &decal, &type, &texture);
}

void RenderingServer::decal_set_emission_energy(const RID &decal, double energy) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("decal_set_emission_energy")._native_ptr(), 1794382983);
	CHECK_METHOD_BIND(_gde_method_bind);
	double energy_encoded;
	PtrToArg<double>::encode(energy, &energy_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &decal, &energy_encoded);
}

void RenderingServer::decal_set_albedo_mix(const RID &decal, double albedo_mix) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("decal_set_albedo_mix")._native_ptr(), 1794382983);
	CHECK_METHOD_BIND(_gde_method_bind);
	double albedo_mix_encoded;
	PtrToArg<double>::encode(albedo_mix, &albedo_mix_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &decal, &albedo_mix_encoded);
}

void RenderingServer::decal_set_modulate(const RID &decal, const Color &color) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("decal_set_modulate")._native_ptr(), 2948539648);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &decal, &color);
}

void RenderingServer::decal_set_cull_mask(const RID &decal, uint32_t mask) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("decal_set_cull_mask")._native_ptr(), 3411492887);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t mask_encoded;
	PtrToArg<int64_t>::encode(mask, &mask_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &decal, &mask_encoded);
}

void RenderingServer::decal_set_distance_fade(const RID &decal, bool enabled, double begin, double length) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("decal_set_distance_fade")._native_ptr(), 2972769666);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	double begin_encoded;
	PtrToArg<double>::encode(begin, &begin_encoded);
	double length_encoded;
	PtrToArg<double>::encode(length, &length_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &decal, &enabled_encoded, &begin_encoded, &length_encoded);
}

void RenderingServer::decal_set_fade(const RID &decal, double above, double below) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("decal_set_fade")._native_ptr(), 2513314492);
	CHECK_METHOD_BIND(_gde_method_bind);
	double above_encoded;
	PtrToArg<double>::encode(above, &above_encoded);
	double below_encoded;
	PtrToArg<double>::encode(below, &below_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &decal, &above_encoded, &below_encoded);
}

void RenderingServer::decal_set_normal_fade(const RID &decal, double fade) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("decal_set_normal_fade")._native_ptr(), 1794382983);
	CHECK_METHOD_BIND(_gde_method_bind);
	double fade_encoded;
	PtrToArg<double>::encode(fade, &fade_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &decal, &fade_encoded);
}

void RenderingServer::decals_set_filter(RenderingServer::DecalFilter filter) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("decals_set_filter")._native_ptr(), 3519875702);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &filter);
}

void RenderingServer::gi_set_use_half_resolution(bool half_resolution) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("gi_set_use_half_resolution")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t half_resolution_encoded;
	PtrToArg<bool>::encode(half_resolution, &half_resolution_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &half_resolution_encoded);
}

RID RenderingServer::voxel_gi_create() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("voxel_gi_create")._native_ptr(), 529393457);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner);
}

void RenderingServer::voxel_gi_allocate_data(const RID &voxel_gi, const Transform3D &to_cell_xform, const AABB &aabb, const Vector3i &octree_size, const PackedByteArray &octree_cells, const PackedByteArray &data_cells, const PackedByteArray &distance_field, const PackedInt32Array &level_counts) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("voxel_gi_allocate_data")._native_ptr(), 4108223027);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &voxel_gi, &to_cell_xform, &aabb, &octree_size, &octree_cells, &data_cells, &distance_field, &level_counts);
}

Vector3i RenderingServer::voxel_gi_get_octree_size(const RID &voxel_gi) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("voxel_gi_get_octree_size")._native_ptr(), 2607699645);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector3i());
	return internal::_call_native_mb_ret<Vector3i>(_gde_method_bind, _owner, &voxel_gi);
}

PackedByteArray RenderingServer::voxel_gi_get_octree_cells(const RID &voxel_gi) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("voxel_gi_get_octree_cells")._native_ptr(), 3348040486);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedByteArray());
	return internal::_call_native_mb_ret<PackedByteArray>(_gde_method_bind, _owner, &voxel_gi);
}

PackedByteArray RenderingServer::voxel_gi_get_data_cells(const RID &voxel_gi) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("voxel_gi_get_data_cells")._native_ptr(), 3348040486);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedByteArray());
	return internal::_call_native_mb_ret<PackedByteArray>(_gde_method_bind, _owner, &voxel_gi);
}

PackedByteArray RenderingServer::voxel_gi_get_distance_field(const RID &voxel_gi) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("voxel_gi_get_distance_field")._native_ptr(), 3348040486);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedByteArray());
	return internal::_call_native_mb_ret<PackedByteArray>(_gde_method_bind, _owner, &voxel_gi);
}

PackedInt32Array RenderingServer::voxel_gi_get_level_counts(const RID &voxel_gi) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("voxel_gi_get_level_counts")._native_ptr(), 788230395);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedInt32Array());
	return internal::_call_native_mb_ret<PackedInt32Array>(_gde_method_bind, _owner, &voxel_gi);
}

Transform3D RenderingServer::voxel_gi_get_to_cell_xform(const RID &voxel_gi) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("voxel_gi_get_to_cell_xform")._native_ptr(), 1128465797);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Transform3D());
	return internal::_call_native_mb_ret<Transform3D>(_gde_method_bind, _owner, &voxel_gi);
}

void RenderingServer::voxel_gi_set_dynamic_range(const RID &voxel_gi, double range) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("voxel_gi_set_dynamic_range")._native_ptr(), 1794382983);
	CHECK_METHOD_BIND(_gde_method_bind);
	double range_encoded;
	PtrToArg<double>::encode(range, &range_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &voxel_gi, &range_encoded);
}

void RenderingServer::voxel_gi_set_propagation(const RID &voxel_gi, double amount) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("voxel_gi_set_propagation")._native_ptr(), 1794382983);
	CHECK_METHOD_BIND(_gde_method_bind);
	double amount_encoded;
	PtrToArg<double>::encode(amount, &amount_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &voxel_gi, &amount_encoded);
}

void RenderingServer::voxel_gi_set_energy(const RID &voxel_gi, double energy) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("voxel_gi_set_energy")._native_ptr(), 1794382983);
	CHECK_METHOD_BIND(_gde_method_bind);
	double energy_encoded;
	PtrToArg<double>::encode(energy, &energy_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &voxel_gi, &energy_encoded);
}

void RenderingServer::voxel_gi_set_baked_exposure_normalization(const RID &voxel_gi, double baked_exposure) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("voxel_gi_set_baked_exposure_normalization")._native_ptr(), 1794382983);
	CHECK_METHOD_BIND(_gde_method_bind);
	double baked_exposure_encoded;
	PtrToArg<double>::encode(baked_exposure, &baked_exposure_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &voxel_gi, &baked_exposure_encoded);
}

void RenderingServer::voxel_gi_set_bias(const RID &voxel_gi, double bias) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("voxel_gi_set_bias")._native_ptr(), 1794382983);
	CHECK_METHOD_BIND(_gde_method_bind);
	double bias_encoded;
	PtrToArg<double>::encode(bias, &bias_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &voxel_gi, &bias_encoded);
}

void RenderingServer::voxel_gi_set_normal_bias(const RID &voxel_gi, double bias) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("voxel_gi_set_normal_bias")._native_ptr(), 1794382983);
	CHECK_METHOD_BIND(_gde_method_bind);
	double bias_encoded;
	PtrToArg<double>::encode(bias, &bias_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &voxel_gi, &bias_encoded);
}

void RenderingServer::voxel_gi_set_interior(const RID &voxel_gi, bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("voxel_gi_set_interior")._native_ptr(), 1265174801);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &voxel_gi, &enable_encoded);
}

void RenderingServer::voxel_gi_set_use_two_bounces(const RID &voxel_gi, bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("voxel_gi_set_use_two_bounces")._native_ptr(), 1265174801);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &voxel_gi, &enable_encoded);
}

void RenderingServer::voxel_gi_set_quality(RenderingServer::VoxelGIQuality quality) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("voxel_gi_set_quality")._native_ptr(), 1538689978);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &quality);
}

RID RenderingServer::lightmap_create() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("lightmap_create")._native_ptr(), 529393457);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner);
}

void RenderingServer::lightmap_set_textures(const RID &lightmap, const RID &light, bool uses_sh) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("lightmap_set_textures")._native_ptr(), 2646464759);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t uses_sh_encoded;
	PtrToArg<bool>::encode(uses_sh, &uses_sh_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &lightmap, &light, &uses_sh_encoded);
}

void RenderingServer::lightmap_set_probe_bounds(const RID &lightmap, const AABB &bounds) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("lightmap_set_probe_bounds")._native_ptr(), 3696536120);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &lightmap, &bounds);
}

void RenderingServer::lightmap_set_probe_interior(const RID &lightmap, bool interior) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("lightmap_set_probe_interior")._native_ptr(), 1265174801);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t interior_encoded;
	PtrToArg<bool>::encode(interior, &interior_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &lightmap, &interior_encoded);
}

void RenderingServer::lightmap_set_probe_capture_data(const RID &lightmap, const PackedVector3Array &points, const PackedColorArray &point_sh, const PackedInt32Array &tetrahedra, const PackedInt32Array &bsp_tree) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("lightmap_set_probe_capture_data")._native_ptr(), 3217845880);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &lightmap, &points, &point_sh, &tetrahedra, &bsp_tree);
}

PackedVector3Array RenderingServer::lightmap_get_probe_capture_points(const RID &lightmap) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("lightmap_get_probe_capture_points")._native_ptr(), 808965560);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedVector3Array());
	return internal::_call_native_mb_ret<PackedVector3Array>(_gde_method_bind, _owner, &lightmap);
}

PackedColorArray RenderingServer::lightmap_get_probe_capture_sh(const RID &lightmap) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("lightmap_get_probe_capture_sh")._native_ptr(), 1569415609);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedColorArray());
	return internal::_call_native_mb_ret<PackedColorArray>(_gde_method_bind, _owner, &lightmap);
}

PackedInt32Array RenderingServer::lightmap_get_probe_capture_tetrahedra(const RID &lightmap) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("lightmap_get_probe_capture_tetrahedra")._native_ptr(), 788230395);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedInt32Array());
	return internal::_call_native_mb_ret<PackedInt32Array>(_gde_method_bind, _owner, &lightmap);
}

PackedInt32Array RenderingServer::lightmap_get_probe_capture_bsp_tree(const RID &lightmap) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("lightmap_get_probe_capture_bsp_tree")._native_ptr(), 788230395);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedInt32Array());
	return internal::_call_native_mb_ret<PackedInt32Array>(_gde_method_bind, _owner, &lightmap);
}

void RenderingServer::lightmap_set_baked_exposure_normalization(const RID &lightmap, double baked_exposure) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("lightmap_set_baked_exposure_normalization")._native_ptr(), 1794382983);
	CHECK_METHOD_BIND(_gde_method_bind);
	double baked_exposure_encoded;
	PtrToArg<double>::encode(baked_exposure, &baked_exposure_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &lightmap, &baked_exposure_encoded);
}

void RenderingServer::lightmap_set_probe_capture_update_speed(double speed) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("lightmap_set_probe_capture_update_speed")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double speed_encoded;
	PtrToArg<double>::encode(speed, &speed_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &speed_encoded);
}

RID RenderingServer::particles_create() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("particles_create")._native_ptr(), 529393457);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner);
}

void RenderingServer::particles_set_mode(const RID &particles, RenderingServer::ParticlesMode mode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("particles_set_mode")._native_ptr(), 3492270028);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &particles, &mode);
}

void RenderingServer::particles_set_emitting(const RID &particles, bool emitting) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("particles_set_emitting")._native_ptr(), 1265174801);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t emitting_encoded;
	PtrToArg<bool>::encode(emitting, &emitting_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &particles, &emitting_encoded);
}

bool RenderingServer::particles_get_emitting(const RID &particles) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("particles_get_emitting")._native_ptr(), 3521089500);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &particles);
}

void RenderingServer::particles_set_amount(const RID &particles, int32_t amount) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("particles_set_amount")._native_ptr(), 3411492887);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t amount_encoded;
	PtrToArg<int64_t>::encode(amount, &amount_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &particles, &amount_encoded);
}

void RenderingServer::particles_set_amount_ratio(const RID &particles, double ratio) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("particles_set_amount_ratio")._native_ptr(), 1794382983);
	CHECK_METHOD_BIND(_gde_method_bind);
	double ratio_encoded;
	PtrToArg<double>::encode(ratio, &ratio_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &particles, &ratio_encoded);
}

void RenderingServer::particles_set_lifetime(const RID &particles, double lifetime) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("particles_set_lifetime")._native_ptr(), 1794382983);
	CHECK_METHOD_BIND(_gde_method_bind);
	double lifetime_encoded;
	PtrToArg<double>::encode(lifetime, &lifetime_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &particles, &lifetime_encoded);
}

void RenderingServer::particles_set_one_shot(const RID &particles, bool one_shot) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("particles_set_one_shot")._native_ptr(), 1265174801);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t one_shot_encoded;
	PtrToArg<bool>::encode(one_shot, &one_shot_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &particles, &one_shot_encoded);
}

void RenderingServer::particles_set_pre_process_time(const RID &particles, double time) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("particles_set_pre_process_time")._native_ptr(), 1794382983);
	CHECK_METHOD_BIND(_gde_method_bind);
	double time_encoded;
	PtrToArg<double>::encode(time, &time_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &particles, &time_encoded);
}

void RenderingServer::particles_set_explosiveness_ratio(const RID &particles, double ratio) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("particles_set_explosiveness_ratio")._native_ptr(), 1794382983);
	CHECK_METHOD_BIND(_gde_method_bind);
	double ratio_encoded;
	PtrToArg<double>::encode(ratio, &ratio_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &particles, &ratio_encoded);
}

void RenderingServer::particles_set_randomness_ratio(const RID &particles, double ratio) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("particles_set_randomness_ratio")._native_ptr(), 1794382983);
	CHECK_METHOD_BIND(_gde_method_bind);
	double ratio_encoded;
	PtrToArg<double>::encode(ratio, &ratio_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &particles, &ratio_encoded);
}

void RenderingServer::particles_set_interp_to_end(const RID &particles, double factor) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("particles_set_interp_to_end")._native_ptr(), 1794382983);
	CHECK_METHOD_BIND(_gde_method_bind);
	double factor_encoded;
	PtrToArg<double>::encode(factor, &factor_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &particles, &factor_encoded);
}

void RenderingServer::particles_set_emitter_velocity(const RID &particles, const Vector3 &velocity) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("particles_set_emitter_velocity")._native_ptr(), 3227306858);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &particles, &velocity);
}

void RenderingServer::particles_set_custom_aabb(const RID &particles, const AABB &aabb) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("particles_set_custom_aabb")._native_ptr(), 3696536120);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &particles, &aabb);
}

void RenderingServer::particles_set_speed_scale(const RID &particles, double scale) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("particles_set_speed_scale")._native_ptr(), 1794382983);
	CHECK_METHOD_BIND(_gde_method_bind);
	double scale_encoded;
	PtrToArg<double>::encode(scale, &scale_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &particles, &scale_encoded);
}

void RenderingServer::particles_set_use_local_coordinates(const RID &particles, bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("particles_set_use_local_coordinates")._native_ptr(), 1265174801);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &particles, &enable_encoded);
}

void RenderingServer::particles_set_process_material(const RID &particles, const RID &material) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("particles_set_process_material")._native_ptr(), 395945892);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &particles, &material);
}

void RenderingServer::particles_set_fixed_fps(const RID &particles, int32_t fps) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("particles_set_fixed_fps")._native_ptr(), 3411492887);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t fps_encoded;
	PtrToArg<int64_t>::encode(fps, &fps_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &particles, &fps_encoded);
}

void RenderingServer::particles_set_interpolate(const RID &particles, bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("particles_set_interpolate")._native_ptr(), 1265174801);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &particles, &enable_encoded);
}

void RenderingServer::particles_set_fractional_delta(const RID &particles, bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("particles_set_fractional_delta")._native_ptr(), 1265174801);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &particles, &enable_encoded);
}

void RenderingServer::particles_set_collision_base_size(const RID &particles, double size) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("particles_set_collision_base_size")._native_ptr(), 1794382983);
	CHECK_METHOD_BIND(_gde_method_bind);
	double size_encoded;
	PtrToArg<double>::encode(size, &size_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &particles, &size_encoded);
}

void RenderingServer::particles_set_transform_align(const RID &particles, RenderingServer::ParticlesTransformAlign align) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("particles_set_transform_align")._native_ptr(), 3264971368);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &particles, &align);
}

void RenderingServer::particles_set_trails(const RID &particles, bool enable, double length_sec) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("particles_set_trails")._native_ptr(), 2010054925);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	double length_sec_encoded;
	PtrToArg<double>::encode(length_sec, &length_sec_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &particles, &enable_encoded, &length_sec_encoded);
}

void RenderingServer::particles_set_trail_bind_poses(const RID &particles, const TypedArray<Transform3D> &bind_poses) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("particles_set_trail_bind_poses")._native_ptr(), 684822712);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &particles, &bind_poses);
}

bool RenderingServer::particles_is_inactive(const RID &particles) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("particles_is_inactive")._native_ptr(), 3521089500);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &particles);
}

void RenderingServer::particles_request_process(const RID &particles) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("particles_request_process")._native_ptr(), 2722037293);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &particles);
}

void RenderingServer::particles_restart(const RID &particles) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("particles_restart")._native_ptr(), 2722037293);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &particles);
}

void RenderingServer::particles_set_subemitter(const RID &particles, const RID &subemitter_particles) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("particles_set_subemitter")._native_ptr(), 395945892);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &particles, &subemitter_particles);
}

void RenderingServer::particles_emit(const RID &particles, const Transform3D &transform, const Vector3 &velocity, const Color &color, const Color &custom, uint32_t emit_flags) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("particles_emit")._native_ptr(), 4043136117);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t emit_flags_encoded;
	PtrToArg<int64_t>::encode(emit_flags, &emit_flags_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &particles, &transform, &velocity, &color, &custom, &emit_flags_encoded);
}

void RenderingServer::particles_set_draw_order(const RID &particles, RenderingServer::ParticlesDrawOrder order) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("particles_set_draw_order")._native_ptr(), 935028487);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &particles, &order);
}

void RenderingServer::particles_set_draw_passes(const RID &particles, int32_t count) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("particles_set_draw_passes")._native_ptr(), 3411492887);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t count_encoded;
	PtrToArg<int64_t>::encode(count, &count_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &particles, &count_encoded);
}

void RenderingServer::particles_set_draw_pass_mesh(const RID &particles, int32_t pass, const RID &mesh) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("particles_set_draw_pass_mesh")._native_ptr(), 2310537182);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t pass_encoded;
	PtrToArg<int64_t>::encode(pass, &pass_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &particles, &pass_encoded, &mesh);
}

AABB RenderingServer::particles_get_current_aabb(const RID &particles) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("particles_get_current_aabb")._native_ptr(), 3952830260);
	CHECK_METHOD_BIND_RET(_gde_method_bind, AABB());
	return internal::_call_native_mb_ret<AABB>(_gde_method_bind, _owner, &particles);
}

void RenderingServer::particles_set_emission_transform(const RID &particles, const Transform3D &transform) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("particles_set_emission_transform")._native_ptr(), 3935195649);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &particles, &transform);
}

RID RenderingServer::particles_collision_create() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("particles_collision_create")._native_ptr(), 529393457);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner);
}

void RenderingServer::particles_collision_set_collision_type(const RID &particles_collision, RenderingServer::ParticlesCollisionType type) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("particles_collision_set_collision_type")._native_ptr(), 1497044930);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &particles_collision, &type);
}

void RenderingServer::particles_collision_set_cull_mask(const RID &particles_collision, uint32_t mask) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("particles_collision_set_cull_mask")._native_ptr(), 3411492887);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t mask_encoded;
	PtrToArg<int64_t>::encode(mask, &mask_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &particles_collision, &mask_encoded);
}

void RenderingServer::particles_collision_set_sphere_radius(const RID &particles_collision, double radius) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("particles_collision_set_sphere_radius")._native_ptr(), 1794382983);
	CHECK_METHOD_BIND(_gde_method_bind);
	double radius_encoded;
	PtrToArg<double>::encode(radius, &radius_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &particles_collision, &radius_encoded);
}

void RenderingServer::particles_collision_set_box_extents(const RID &particles_collision, const Vector3 &extents) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("particles_collision_set_box_extents")._native_ptr(), 3227306858);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &particles_collision, &extents);
}

void RenderingServer::particles_collision_set_attractor_strength(const RID &particles_collision, double strength) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("particles_collision_set_attractor_strength")._native_ptr(), 1794382983);
	CHECK_METHOD_BIND(_gde_method_bind);
	double strength_encoded;
	PtrToArg<double>::encode(strength, &strength_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &particles_collision, &strength_encoded);
}

void RenderingServer::particles_collision_set_attractor_directionality(const RID &particles_collision, double amount) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("particles_collision_set_attractor_directionality")._native_ptr(), 1794382983);
	CHECK_METHOD_BIND(_gde_method_bind);
	double amount_encoded;
	PtrToArg<double>::encode(amount, &amount_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &particles_collision, &amount_encoded);
}

void RenderingServer::particles_collision_set_attractor_attenuation(const RID &particles_collision, double curve) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("particles_collision_set_attractor_attenuation")._native_ptr(), 1794382983);
	CHECK_METHOD_BIND(_gde_method_bind);
	double curve_encoded;
	PtrToArg<double>::encode(curve, &curve_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &particles_collision, &curve_encoded);
}

void RenderingServer::particles_collision_set_field_texture(const RID &particles_collision, const RID &texture) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("particles_collision_set_field_texture")._native_ptr(), 395945892);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &particles_collision, &texture);
}

void RenderingServer::particles_collision_height_field_update(const RID &particles_collision) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("particles_collision_height_field_update")._native_ptr(), 2722037293);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &particles_collision);
}

void RenderingServer::particles_collision_set_height_field_resolution(const RID &particles_collision, RenderingServer::ParticlesCollisionHeightfieldResolution resolution) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("particles_collision_set_height_field_resolution")._native_ptr(), 962977297);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &particles_collision, &resolution);
}

RID RenderingServer::fog_volume_create() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("fog_volume_create")._native_ptr(), 529393457);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner);
}

void RenderingServer::fog_volume_set_shape(const RID &fog_volume, RenderingServer::FogVolumeShape shape) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("fog_volume_set_shape")._native_ptr(), 3818703106);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &fog_volume, &shape);
}

void RenderingServer::fog_volume_set_size(const RID &fog_volume, const Vector3 &size) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("fog_volume_set_size")._native_ptr(), 3227306858);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &fog_volume, &size);
}

void RenderingServer::fog_volume_set_material(const RID &fog_volume, const RID &material) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("fog_volume_set_material")._native_ptr(), 395945892);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &fog_volume, &material);
}

RID RenderingServer::visibility_notifier_create() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("visibility_notifier_create")._native_ptr(), 529393457);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner);
}

void RenderingServer::visibility_notifier_set_aabb(const RID &notifier, const AABB &aabb) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("visibility_notifier_set_aabb")._native_ptr(), 3696536120);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &notifier, &aabb);
}

void RenderingServer::visibility_notifier_set_callbacks(const RID &notifier, const Callable &enter_callable, const Callable &exit_callable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("visibility_notifier_set_callbacks")._native_ptr(), 2689735388);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &notifier, &enter_callable, &exit_callable);
}

RID RenderingServer::occluder_create() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("occluder_create")._native_ptr(), 529393457);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner);
}

void RenderingServer::occluder_set_mesh(const RID &occluder, const PackedVector3Array &vertices, const PackedInt32Array &indices) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("occluder_set_mesh")._native_ptr(), 3854404263);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &occluder, &vertices, &indices);
}

RID RenderingServer::camera_create() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("camera_create")._native_ptr(), 529393457);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner);
}

void RenderingServer::camera_set_perspective(const RID &camera, double fovy_degrees, double z_near, double z_far) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("camera_set_perspective")._native_ptr(), 157498339);
	CHECK_METHOD_BIND(_gde_method_bind);
	double fovy_degrees_encoded;
	PtrToArg<double>::encode(fovy_degrees, &fovy_degrees_encoded);
	double z_near_encoded;
	PtrToArg<double>::encode(z_near, &z_near_encoded);
	double z_far_encoded;
	PtrToArg<double>::encode(z_far, &z_far_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &camera, &fovy_degrees_encoded, &z_near_encoded, &z_far_encoded);
}

void RenderingServer::camera_set_orthogonal(const RID &camera, double size, double z_near, double z_far) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("camera_set_orthogonal")._native_ptr(), 157498339);
	CHECK_METHOD_BIND(_gde_method_bind);
	double size_encoded;
	PtrToArg<double>::encode(size, &size_encoded);
	double z_near_encoded;
	PtrToArg<double>::encode(z_near, &z_near_encoded);
	double z_far_encoded;
	PtrToArg<double>::encode(z_far, &z_far_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &camera, &size_encoded, &z_near_encoded, &z_far_encoded);
}

void RenderingServer::camera_set_frustum(const RID &camera, double size, const Vector2 &offset, double z_near, double z_far) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("camera_set_frustum")._native_ptr(), 1889878953);
	CHECK_METHOD_BIND(_gde_method_bind);
	double size_encoded;
	PtrToArg<double>::encode(size, &size_encoded);
	double z_near_encoded;
	PtrToArg<double>::encode(z_near, &z_near_encoded);
	double z_far_encoded;
	PtrToArg<double>::encode(z_far, &z_far_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &camera, &size_encoded, &offset, &z_near_encoded, &z_far_encoded);
}

void RenderingServer::camera_set_transform(const RID &camera, const Transform3D &transform) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("camera_set_transform")._native_ptr(), 3935195649);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &camera, &transform);
}

void RenderingServer::camera_set_cull_mask(const RID &camera, uint32_t layers) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("camera_set_cull_mask")._native_ptr(), 3411492887);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t layers_encoded;
	PtrToArg<int64_t>::encode(layers, &layers_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &camera, &layers_encoded);
}

void RenderingServer::camera_set_environment(const RID &camera, const RID &env) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("camera_set_environment")._native_ptr(), 395945892);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &camera, &env);
}

void RenderingServer::camera_set_camera_attributes(const RID &camera, const RID &effects) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("camera_set_camera_attributes")._native_ptr(), 395945892);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &camera, &effects);
}

void RenderingServer::camera_set_compositor(const RID &camera, const RID &compositor) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("camera_set_compositor")._native_ptr(), 395945892);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &camera, &compositor);
}

void RenderingServer::camera_set_use_vertical_aspect(const RID &camera, bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("camera_set_use_vertical_aspect")._native_ptr(), 1265174801);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &camera, &enable_encoded);
}

RID RenderingServer::viewport_create() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("viewport_create")._native_ptr(), 529393457);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner);
}

void RenderingServer::viewport_set_use_xr(const RID &viewport, bool use_xr) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("viewport_set_use_xr")._native_ptr(), 1265174801);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t use_xr_encoded;
	PtrToArg<bool>::encode(use_xr, &use_xr_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &viewport, &use_xr_encoded);
}

void RenderingServer::viewport_set_size(const RID &viewport, int32_t width, int32_t height) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("viewport_set_size")._native_ptr(), 4288446313);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t width_encoded;
	PtrToArg<int64_t>::encode(width, &width_encoded);
	int64_t height_encoded;
	PtrToArg<int64_t>::encode(height, &height_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &viewport, &width_encoded, &height_encoded);
}

void RenderingServer::viewport_set_active(const RID &viewport, bool active) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("viewport_set_active")._native_ptr(), 1265174801);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t active_encoded;
	PtrToArg<bool>::encode(active, &active_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &viewport, &active_encoded);
}

void RenderingServer::viewport_set_parent_viewport(const RID &viewport, const RID &parent_viewport) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("viewport_set_parent_viewport")._native_ptr(), 395945892);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &viewport, &parent_viewport);
}

void RenderingServer::viewport_attach_to_screen(const RID &viewport, const Rect2 &rect, int32_t screen) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("viewport_attach_to_screen")._native_ptr(), 1062245816);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t screen_encoded;
	PtrToArg<int64_t>::encode(screen, &screen_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &viewport, &rect, &screen_encoded);
}

void RenderingServer::viewport_set_render_direct_to_screen(const RID &viewport, bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("viewport_set_render_direct_to_screen")._native_ptr(), 1265174801);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &viewport, &enabled_encoded);
}

void RenderingServer::viewport_set_canvas_cull_mask(const RID &viewport, uint32_t canvas_cull_mask) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("viewport_set_canvas_cull_mask")._native_ptr(), 3411492887);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t canvas_cull_mask_encoded;
	PtrToArg<int64_t>::encode(canvas_cull_mask, &canvas_cull_mask_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &viewport, &canvas_cull_mask_encoded);
}

void RenderingServer::viewport_set_scaling_3d_mode(const RID &viewport, RenderingServer::ViewportScaling3DMode scaling_3d_mode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("viewport_set_scaling_3d_mode")._native_ptr(), 2386524376);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &viewport, &scaling_3d_mode);
}

void RenderingServer::viewport_set_scaling_3d_scale(const RID &viewport, double scale) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("viewport_set_scaling_3d_scale")._native_ptr(), 1794382983);
	CHECK_METHOD_BIND(_gde_method_bind);
	double scale_encoded;
	PtrToArg<double>::encode(scale, &scale_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &viewport, &scale_encoded);
}

void RenderingServer::viewport_set_fsr_sharpness(const RID &viewport, double sharpness) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("viewport_set_fsr_sharpness")._native_ptr(), 1794382983);
	CHECK_METHOD_BIND(_gde_method_bind);
	double sharpness_encoded;
	PtrToArg<double>::encode(sharpness, &sharpness_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &viewport, &sharpness_encoded);
}

void RenderingServer::viewport_set_texture_mipmap_bias(const RID &viewport, double mipmap_bias) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("viewport_set_texture_mipmap_bias")._native_ptr(), 1794382983);
	CHECK_METHOD_BIND(_gde_method_bind);
	double mipmap_bias_encoded;
	PtrToArg<double>::encode(mipmap_bias, &mipmap_bias_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &viewport, &mipmap_bias_encoded);
}

void RenderingServer::viewport_set_update_mode(const RID &viewport, RenderingServer::ViewportUpdateMode update_mode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("viewport_set_update_mode")._native_ptr(), 3161116010);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &viewport, &update_mode);
}

RenderingServer::ViewportUpdateMode RenderingServer::viewport_get_update_mode(const RID &viewport) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("viewport_get_update_mode")._native_ptr(), 3803901472);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RenderingServer::ViewportUpdateMode(0));
	return (RenderingServer::ViewportUpdateMode)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &viewport);
}

void RenderingServer::viewport_set_clear_mode(const RID &viewport, RenderingServer::ViewportClearMode clear_mode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("viewport_set_clear_mode")._native_ptr(), 3628367896);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &viewport, &clear_mode);
}

RID RenderingServer::viewport_get_render_target(const RID &viewport) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("viewport_get_render_target")._native_ptr(), 3814569979);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner, &viewport);
}

RID RenderingServer::viewport_get_texture(const RID &viewport) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("viewport_get_texture")._native_ptr(), 3814569979);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner, &viewport);
}

void RenderingServer::viewport_set_disable_3d(const RID &viewport, bool disable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("viewport_set_disable_3d")._native_ptr(), 1265174801);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t disable_encoded;
	PtrToArg<bool>::encode(disable, &disable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &viewport, &disable_encoded);
}

void RenderingServer::viewport_set_disable_2d(const RID &viewport, bool disable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("viewport_set_disable_2d")._native_ptr(), 1265174801);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t disable_encoded;
	PtrToArg<bool>::encode(disable, &disable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &viewport, &disable_encoded);
}

void RenderingServer::viewport_set_environment_mode(const RID &viewport, RenderingServer::ViewportEnvironmentMode mode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("viewport_set_environment_mode")._native_ptr(), 2196892182);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &viewport, &mode);
}

void RenderingServer::viewport_attach_camera(const RID &viewport, const RID &camera) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("viewport_attach_camera")._native_ptr(), 395945892);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &viewport, &camera);
}

void RenderingServer::viewport_set_scenario(const RID &viewport, const RID &scenario) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("viewport_set_scenario")._native_ptr(), 395945892);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &viewport, &scenario);
}

void RenderingServer::viewport_attach_canvas(const RID &viewport, const RID &canvas) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("viewport_attach_canvas")._native_ptr(), 395945892);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &viewport, &canvas);
}

void RenderingServer::viewport_remove_canvas(const RID &viewport, const RID &canvas) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("viewport_remove_canvas")._native_ptr(), 395945892);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &viewport, &canvas);
}

void RenderingServer::viewport_set_snap_2d_transforms_to_pixel(const RID &viewport, bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("viewport_set_snap_2d_transforms_to_pixel")._native_ptr(), 1265174801);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &viewport, &enabled_encoded);
}

void RenderingServer::viewport_set_snap_2d_vertices_to_pixel(const RID &viewport, bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("viewport_set_snap_2d_vertices_to_pixel")._native_ptr(), 1265174801);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &viewport, &enabled_encoded);
}

void RenderingServer::viewport_set_default_canvas_item_texture_filter(const RID &viewport, RenderingServer::CanvasItemTextureFilter filter) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("viewport_set_default_canvas_item_texture_filter")._native_ptr(), 1155129294);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &viewport, &filter);
}

void RenderingServer::viewport_set_default_canvas_item_texture_repeat(const RID &viewport, RenderingServer::CanvasItemTextureRepeat repeat) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("viewport_set_default_canvas_item_texture_repeat")._native_ptr(), 1652956681);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &viewport, &repeat);
}

void RenderingServer::viewport_set_canvas_transform(const RID &viewport, const RID &canvas, const Transform2D &offset) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("viewport_set_canvas_transform")._native_ptr(), 3608606053);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &viewport, &canvas, &offset);
}

void RenderingServer::viewport_set_canvas_stacking(const RID &viewport, const RID &canvas, int32_t layer, int32_t sublayer) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("viewport_set_canvas_stacking")._native_ptr(), 3713930247);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t layer_encoded;
	PtrToArg<int64_t>::encode(layer, &layer_encoded);
	int64_t sublayer_encoded;
	PtrToArg<int64_t>::encode(sublayer, &sublayer_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &viewport, &canvas, &layer_encoded, &sublayer_encoded);
}

void RenderingServer::viewport_set_transparent_background(const RID &viewport, bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("viewport_set_transparent_background")._native_ptr(), 1265174801);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &viewport, &enabled_encoded);
}

void RenderingServer::viewport_set_global_canvas_transform(const RID &viewport, const Transform2D &transform) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("viewport_set_global_canvas_transform")._native_ptr(), 1246044741);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &viewport, &transform);
}

void RenderingServer::viewport_set_sdf_oversize_and_scale(const RID &viewport, RenderingServer::ViewportSDFOversize oversize, RenderingServer::ViewportSDFScale scale) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("viewport_set_sdf_oversize_and_scale")._native_ptr(), 1329198632);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &viewport, &oversize, &scale);
}

void RenderingServer::viewport_set_positional_shadow_atlas_size(const RID &viewport, int32_t size, bool use_16_bits) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("viewport_set_positional_shadow_atlas_size")._native_ptr(), 1904426712);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t size_encoded;
	PtrToArg<int64_t>::encode(size, &size_encoded);
	int8_t use_16_bits_encoded;
	PtrToArg<bool>::encode(use_16_bits, &use_16_bits_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &viewport, &size_encoded, &use_16_bits_encoded);
}

void RenderingServer::viewport_set_positional_shadow_atlas_quadrant_subdivision(const RID &viewport, int32_t quadrant, int32_t subdivision) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("viewport_set_positional_shadow_atlas_quadrant_subdivision")._native_ptr(), 4288446313);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t quadrant_encoded;
	PtrToArg<int64_t>::encode(quadrant, &quadrant_encoded);
	int64_t subdivision_encoded;
	PtrToArg<int64_t>::encode(subdivision, &subdivision_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &viewport, &quadrant_encoded, &subdivision_encoded);
}

void RenderingServer::viewport_set_msaa_3d(const RID &viewport, RenderingServer::ViewportMSAA msaa) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("viewport_set_msaa_3d")._native_ptr(), 3764433340);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &viewport, &msaa);
}

void RenderingServer::viewport_set_msaa_2d(const RID &viewport, RenderingServer::ViewportMSAA msaa) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("viewport_set_msaa_2d")._native_ptr(), 3764433340);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &viewport, &msaa);
}

void RenderingServer::viewport_set_use_hdr_2d(const RID &viewport, bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("viewport_set_use_hdr_2d")._native_ptr(), 1265174801);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &viewport, &enabled_encoded);
}

void RenderingServer::viewport_set_screen_space_aa(const RID &viewport, RenderingServer::ViewportScreenSpaceAA mode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("viewport_set_screen_space_aa")._native_ptr(), 1447279591);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &viewport, &mode);
}

void RenderingServer::viewport_set_use_taa(const RID &viewport, bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("viewport_set_use_taa")._native_ptr(), 1265174801);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &viewport, &enable_encoded);
}

void RenderingServer::viewport_set_use_debanding(const RID &viewport, bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("viewport_set_use_debanding")._native_ptr(), 1265174801);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &viewport, &enable_encoded);
}

void RenderingServer::viewport_set_use_occlusion_culling(const RID &viewport, bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("viewport_set_use_occlusion_culling")._native_ptr(), 1265174801);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &viewport, &enable_encoded);
}

void RenderingServer::viewport_set_occlusion_rays_per_thread(int32_t rays_per_thread) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("viewport_set_occlusion_rays_per_thread")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t rays_per_thread_encoded;
	PtrToArg<int64_t>::encode(rays_per_thread, &rays_per_thread_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &rays_per_thread_encoded);
}

void RenderingServer::viewport_set_occlusion_culling_build_quality(RenderingServer::ViewportOcclusionCullingBuildQuality quality) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("viewport_set_occlusion_culling_build_quality")._native_ptr(), 2069725696);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &quality);
}

int32_t RenderingServer::viewport_get_render_info(const RID &viewport, RenderingServer::ViewportRenderInfoType type, RenderingServer::ViewportRenderInfo info) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("viewport_get_render_info")._native_ptr(), 2041262392);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &viewport, &type, &info);
}

void RenderingServer::viewport_set_debug_draw(const RID &viewport, RenderingServer::ViewportDebugDraw draw) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("viewport_set_debug_draw")._native_ptr(), 2089420930);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &viewport, &draw);
}

void RenderingServer::viewport_set_measure_render_time(const RID &viewport, bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("viewport_set_measure_render_time")._native_ptr(), 1265174801);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &viewport, &enable_encoded);
}

double RenderingServer::viewport_get_measured_render_time_cpu(const RID &viewport) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("viewport_get_measured_render_time_cpu")._native_ptr(), 866169185);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &viewport);
}

double RenderingServer::viewport_get_measured_render_time_gpu(const RID &viewport) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("viewport_get_measured_render_time_gpu")._native_ptr(), 866169185);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &viewport);
}

void RenderingServer::viewport_set_vrs_mode(const RID &viewport, RenderingServer::ViewportVRSMode mode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("viewport_set_vrs_mode")._native_ptr(), 398809874);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &viewport, &mode);
}

void RenderingServer::viewport_set_vrs_update_mode(const RID &viewport, RenderingServer::ViewportVRSUpdateMode mode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("viewport_set_vrs_update_mode")._native_ptr(), 2696154815);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &viewport, &mode);
}

void RenderingServer::viewport_set_vrs_texture(const RID &viewport, const RID &texture) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("viewport_set_vrs_texture")._native_ptr(), 395945892);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &viewport, &texture);
}

RID RenderingServer::sky_create() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("sky_create")._native_ptr(), 529393457);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner);
}

void RenderingServer::sky_set_radiance_size(const RID &sky, int32_t radiance_size) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("sky_set_radiance_size")._native_ptr(), 3411492887);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t radiance_size_encoded;
	PtrToArg<int64_t>::encode(radiance_size, &radiance_size_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &sky, &radiance_size_encoded);
}

void RenderingServer::sky_set_mode(const RID &sky, RenderingServer::SkyMode mode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("sky_set_mode")._native_ptr(), 3279019937);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &sky, &mode);
}

void RenderingServer::sky_set_material(const RID &sky, const RID &material) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("sky_set_material")._native_ptr(), 395945892);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &sky, &material);
}

Ref<Image> RenderingServer::sky_bake_panorama(const RID &sky, double energy, bool bake_irradiance, const Vector2i &size) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("sky_bake_panorama")._native_ptr(), 3875285818);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<Image>());
	double energy_encoded;
	PtrToArg<double>::encode(energy, &energy_encoded);
	int8_t bake_irradiance_encoded;
	PtrToArg<bool>::encode(bake_irradiance, &bake_irradiance_encoded);
	return Ref<Image>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<Image>(_gde_method_bind, _owner, &sky, &energy_encoded, &bake_irradiance_encoded, &size));
}

RID RenderingServer::compositor_effect_create() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("compositor_effect_create")._native_ptr(), 529393457);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner);
}

void RenderingServer::compositor_effect_set_enabled(const RID &effect, bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("compositor_effect_set_enabled")._native_ptr(), 1265174801);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &effect, &enabled_encoded);
}

void RenderingServer::compositor_effect_set_callback(const RID &effect, RenderingServer::CompositorEffectCallbackType callback_type, const Callable &callback) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("compositor_effect_set_callback")._native_ptr(), 487412485);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &effect, &callback_type, &callback);
}

void RenderingServer::compositor_effect_set_flag(const RID &effect, RenderingServer::CompositorEffectFlags flag, bool set) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("compositor_effect_set_flag")._native_ptr(), 3659527075);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t set_encoded;
	PtrToArg<bool>::encode(set, &set_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &effect, &flag, &set_encoded);
}

RID RenderingServer::compositor_create() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("compositor_create")._native_ptr(), 529393457);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner);
}

void RenderingServer::compositor_set_compositor_effects(const RID &compositor, const TypedArray<RID> &effects) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("compositor_set_compositor_effects")._native_ptr(), 684822712);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &compositor, &effects);
}

RID RenderingServer::environment_create() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("environment_create")._native_ptr(), 529393457);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner);
}

void RenderingServer::environment_set_background(const RID &env, RenderingServer::EnvironmentBG bg) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("environment_set_background")._native_ptr(), 3937328877);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &env, &bg);
}

void RenderingServer::environment_set_sky(const RID &env, const RID &sky) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("environment_set_sky")._native_ptr(), 395945892);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &env, &sky);
}

void RenderingServer::environment_set_sky_custom_fov(const RID &env, double scale) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("environment_set_sky_custom_fov")._native_ptr(), 1794382983);
	CHECK_METHOD_BIND(_gde_method_bind);
	double scale_encoded;
	PtrToArg<double>::encode(scale, &scale_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &env, &scale_encoded);
}

void RenderingServer::environment_set_sky_orientation(const RID &env, const Basis &orientation) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("environment_set_sky_orientation")._native_ptr(), 1735850857);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &env, &orientation);
}

void RenderingServer::environment_set_bg_color(const RID &env, const Color &color) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("environment_set_bg_color")._native_ptr(), 2948539648);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &env, &color);
}

void RenderingServer::environment_set_bg_energy(const RID &env, double multiplier, double exposure_value) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("environment_set_bg_energy")._native_ptr(), 2513314492);
	CHECK_METHOD_BIND(_gde_method_bind);
	double multiplier_encoded;
	PtrToArg<double>::encode(multiplier, &multiplier_encoded);
	double exposure_value_encoded;
	PtrToArg<double>::encode(exposure_value, &exposure_value_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &env, &multiplier_encoded, &exposure_value_encoded);
}

void RenderingServer::environment_set_canvas_max_layer(const RID &env, int32_t max_layer) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("environment_set_canvas_max_layer")._native_ptr(), 3411492887);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t max_layer_encoded;
	PtrToArg<int64_t>::encode(max_layer, &max_layer_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &env, &max_layer_encoded);
}

void RenderingServer::environment_set_ambient_light(const RID &env, const Color &color, RenderingServer::EnvironmentAmbientSource ambient, double energy, double sky_contibution, RenderingServer::EnvironmentReflectionSource reflection_source) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("environment_set_ambient_light")._native_ptr(), 1214961493);
	CHECK_METHOD_BIND(_gde_method_bind);
	double energy_encoded;
	PtrToArg<double>::encode(energy, &energy_encoded);
	double sky_contibution_encoded;
	PtrToArg<double>::encode(sky_contibution, &sky_contibution_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &env, &color, &ambient, &energy_encoded, &sky_contibution_encoded, &reflection_source);
}

void RenderingServer::environment_set_glow(const RID &env, bool enable, const PackedFloat32Array &levels, double intensity, double strength, double mix, double bloom_threshold, RenderingServer::EnvironmentGlowBlendMode blend_mode, double hdr_bleed_threshold, double hdr_bleed_scale, double hdr_luminance_cap, double glow_map_strength, const RID &glow_map) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("environment_set_glow")._native_ptr(), 2421724940);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	double intensity_encoded;
	PtrToArg<double>::encode(intensity, &intensity_encoded);
	double strength_encoded;
	PtrToArg<double>::encode(strength, &strength_encoded);
	double mix_encoded;
	PtrToArg<double>::encode(mix, &mix_encoded);
	double bloom_threshold_encoded;
	PtrToArg<double>::encode(bloom_threshold, &bloom_threshold_encoded);
	double hdr_bleed_threshold_encoded;
	PtrToArg<double>::encode(hdr_bleed_threshold, &hdr_bleed_threshold_encoded);
	double hdr_bleed_scale_encoded;
	PtrToArg<double>::encode(hdr_bleed_scale, &hdr_bleed_scale_encoded);
	double hdr_luminance_cap_encoded;
	PtrToArg<double>::encode(hdr_luminance_cap, &hdr_luminance_cap_encoded);
	double glow_map_strength_encoded;
	PtrToArg<double>::encode(glow_map_strength, &glow_map_strength_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &env, &enable_encoded, &levels, &intensity_encoded, &strength_encoded, &mix_encoded, &bloom_threshold_encoded, &blend_mode, &hdr_bleed_threshold_encoded, &hdr_bleed_scale_encoded, &hdr_luminance_cap_encoded, &glow_map_strength_encoded, &glow_map);
}

void RenderingServer::environment_set_tonemap(const RID &env, RenderingServer::EnvironmentToneMapper tone_mapper, double exposure, double white) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("environment_set_tonemap")._native_ptr(), 2914312638);
	CHECK_METHOD_BIND(_gde_method_bind);
	double exposure_encoded;
	PtrToArg<double>::encode(exposure, &exposure_encoded);
	double white_encoded;
	PtrToArg<double>::encode(white, &white_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &env, &tone_mapper, &exposure_encoded, &white_encoded);
}

void RenderingServer::environment_set_adjustment(const RID &env, bool enable, double brightness, double contrast, double saturation, bool use_1d_color_correction, const RID &color_correction) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("environment_set_adjustment")._native_ptr(), 876799838);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	double brightness_encoded;
	PtrToArg<double>::encode(brightness, &brightness_encoded);
	double contrast_encoded;
	PtrToArg<double>::encode(contrast, &contrast_encoded);
	double saturation_encoded;
	PtrToArg<double>::encode(saturation, &saturation_encoded);
	int8_t use_1d_color_correction_encoded;
	PtrToArg<bool>::encode(use_1d_color_correction, &use_1d_color_correction_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &env, &enable_encoded, &brightness_encoded, &contrast_encoded, &saturation_encoded, &use_1d_color_correction_encoded, &color_correction);
}

void RenderingServer::environment_set_ssr(const RID &env, bool enable, int32_t max_steps, double fade_in, double fade_out, double depth_tolerance) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("environment_set_ssr")._native_ptr(), 3607294374);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	int64_t max_steps_encoded;
	PtrToArg<int64_t>::encode(max_steps, &max_steps_encoded);
	double fade_in_encoded;
	PtrToArg<double>::encode(fade_in, &fade_in_encoded);
	double fade_out_encoded;
	PtrToArg<double>::encode(fade_out, &fade_out_encoded);
	double depth_tolerance_encoded;
	PtrToArg<double>::encode(depth_tolerance, &depth_tolerance_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &env, &enable_encoded, &max_steps_encoded, &fade_in_encoded, &fade_out_encoded, &depth_tolerance_encoded);
}

void RenderingServer::environment_set_ssao(const RID &env, bool enable, double radius, double intensity, double power, double detail, double horizon, double sharpness, double light_affect, double ao_channel_affect) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("environment_set_ssao")._native_ptr(), 3994732740);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	double radius_encoded;
	PtrToArg<double>::encode(radius, &radius_encoded);
	double intensity_encoded;
	PtrToArg<double>::encode(intensity, &intensity_encoded);
	double power_encoded;
	PtrToArg<double>::encode(power, &power_encoded);
	double detail_encoded;
	PtrToArg<double>::encode(detail, &detail_encoded);
	double horizon_encoded;
	PtrToArg<double>::encode(horizon, &horizon_encoded);
	double sharpness_encoded;
	PtrToArg<double>::encode(sharpness, &sharpness_encoded);
	double light_affect_encoded;
	PtrToArg<double>::encode(light_affect, &light_affect_encoded);
	double ao_channel_affect_encoded;
	PtrToArg<double>::encode(ao_channel_affect, &ao_channel_affect_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &env, &enable_encoded, &radius_encoded, &intensity_encoded, &power_encoded, &detail_encoded, &horizon_encoded, &sharpness_encoded, &light_affect_encoded, &ao_channel_affect_encoded);
}

void RenderingServer::environment_set_fog(const RID &env, bool enable, const Color &light_color, double light_energy, double sun_scatter, double density, double height, double height_density, double aerial_perspective, double sky_affect, RenderingServer::EnvironmentFogMode fog_mode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("environment_set_fog")._native_ptr(), 105051629);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	double light_energy_encoded;
	PtrToArg<double>::encode(light_energy, &light_energy_encoded);
	double sun_scatter_encoded;
	PtrToArg<double>::encode(sun_scatter, &sun_scatter_encoded);
	double density_encoded;
	PtrToArg<double>::encode(density, &density_encoded);
	double height_encoded;
	PtrToArg<double>::encode(height, &height_encoded);
	double height_density_encoded;
	PtrToArg<double>::encode(height_density, &height_density_encoded);
	double aerial_perspective_encoded;
	PtrToArg<double>::encode(aerial_perspective, &aerial_perspective_encoded);
	double sky_affect_encoded;
	PtrToArg<double>::encode(sky_affect, &sky_affect_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &env, &enable_encoded, &light_color, &light_energy_encoded, &sun_scatter_encoded, &density_encoded, &height_encoded, &height_density_encoded, &aerial_perspective_encoded, &sky_affect_encoded, &fog_mode);
}

void RenderingServer::environment_set_sdfgi(const RID &env, bool enable, int32_t cascades, double min_cell_size, RenderingServer::EnvironmentSDFGIYScale y_scale, bool use_occlusion, double bounce_feedback, bool read_sky, double energy, double normal_bias, double probe_bias) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("environment_set_sdfgi")._native_ptr(), 3519144388);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	int64_t cascades_encoded;
	PtrToArg<int64_t>::encode(cascades, &cascades_encoded);
	double min_cell_size_encoded;
	PtrToArg<double>::encode(min_cell_size, &min_cell_size_encoded);
	int8_t use_occlusion_encoded;
	PtrToArg<bool>::encode(use_occlusion, &use_occlusion_encoded);
	double bounce_feedback_encoded;
	PtrToArg<double>::encode(bounce_feedback, &bounce_feedback_encoded);
	int8_t read_sky_encoded;
	PtrToArg<bool>::encode(read_sky, &read_sky_encoded);
	double energy_encoded;
	PtrToArg<double>::encode(energy, &energy_encoded);
	double normal_bias_encoded;
	PtrToArg<double>::encode(normal_bias, &normal_bias_encoded);
	double probe_bias_encoded;
	PtrToArg<double>::encode(probe_bias, &probe_bias_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &env, &enable_encoded, &cascades_encoded, &min_cell_size_encoded, &y_scale, &use_occlusion_encoded, &bounce_feedback_encoded, &read_sky_encoded, &energy_encoded, &normal_bias_encoded, &probe_bias_encoded);
}

void RenderingServer::environment_set_volumetric_fog(const RID &env, bool enable, double density, const Color &albedo, const Color &emission, double emission_energy, double anisotropy, double length, double p_detail_spread, double gi_inject, bool temporal_reprojection, double temporal_reprojection_amount, double ambient_inject, double sky_affect) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("environment_set_volumetric_fog")._native_ptr(), 1553633833);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	double density_encoded;
	PtrToArg<double>::encode(density, &density_encoded);
	double emission_energy_encoded;
	PtrToArg<double>::encode(emission_energy, &emission_energy_encoded);
	double anisotropy_encoded;
	PtrToArg<double>::encode(anisotropy, &anisotropy_encoded);
	double length_encoded;
	PtrToArg<double>::encode(length, &length_encoded);
	double p_detail_spread_encoded;
	PtrToArg<double>::encode(p_detail_spread, &p_detail_spread_encoded);
	double gi_inject_encoded;
	PtrToArg<double>::encode(gi_inject, &gi_inject_encoded);
	int8_t temporal_reprojection_encoded;
	PtrToArg<bool>::encode(temporal_reprojection, &temporal_reprojection_encoded);
	double temporal_reprojection_amount_encoded;
	PtrToArg<double>::encode(temporal_reprojection_amount, &temporal_reprojection_amount_encoded);
	double ambient_inject_encoded;
	PtrToArg<double>::encode(ambient_inject, &ambient_inject_encoded);
	double sky_affect_encoded;
	PtrToArg<double>::encode(sky_affect, &sky_affect_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &env, &enable_encoded, &density_encoded, &albedo, &emission, &emission_energy_encoded, &anisotropy_encoded, &length_encoded, &p_detail_spread_encoded, &gi_inject_encoded, &temporal_reprojection_encoded, &temporal_reprojection_amount_encoded, &ambient_inject_encoded, &sky_affect_encoded);
}

void RenderingServer::environment_glow_set_use_bicubic_upscale(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("environment_glow_set_use_bicubic_upscale")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

void RenderingServer::environment_set_ssr_roughness_quality(RenderingServer::EnvironmentSSRRoughnessQuality quality) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("environment_set_ssr_roughness_quality")._native_ptr(), 1190026788);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &quality);
}

void RenderingServer::environment_set_ssao_quality(RenderingServer::EnvironmentSSAOQuality quality, bool half_size, double adaptive_target, int32_t blur_passes, double fadeout_from, double fadeout_to) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("environment_set_ssao_quality")._native_ptr(), 189753569);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t half_size_encoded;
	PtrToArg<bool>::encode(half_size, &half_size_encoded);
	double adaptive_target_encoded;
	PtrToArg<double>::encode(adaptive_target, &adaptive_target_encoded);
	int64_t blur_passes_encoded;
	PtrToArg<int64_t>::encode(blur_passes, &blur_passes_encoded);
	double fadeout_from_encoded;
	PtrToArg<double>::encode(fadeout_from, &fadeout_from_encoded);
	double fadeout_to_encoded;
	PtrToArg<double>::encode(fadeout_to, &fadeout_to_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &quality, &half_size_encoded, &adaptive_target_encoded, &blur_passes_encoded, &fadeout_from_encoded, &fadeout_to_encoded);
}

void RenderingServer::environment_set_ssil_quality(RenderingServer::EnvironmentSSILQuality quality, bool half_size, double adaptive_target, int32_t blur_passes, double fadeout_from, double fadeout_to) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("environment_set_ssil_quality")._native_ptr(), 1713836683);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t half_size_encoded;
	PtrToArg<bool>::encode(half_size, &half_size_encoded);
	double adaptive_target_encoded;
	PtrToArg<double>::encode(adaptive_target, &adaptive_target_encoded);
	int64_t blur_passes_encoded;
	PtrToArg<int64_t>::encode(blur_passes, &blur_passes_encoded);
	double fadeout_from_encoded;
	PtrToArg<double>::encode(fadeout_from, &fadeout_from_encoded);
	double fadeout_to_encoded;
	PtrToArg<double>::encode(fadeout_to, &fadeout_to_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &quality, &half_size_encoded, &adaptive_target_encoded, &blur_passes_encoded, &fadeout_from_encoded, &fadeout_to_encoded);
}

void RenderingServer::environment_set_sdfgi_ray_count(RenderingServer::EnvironmentSDFGIRayCount ray_count) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("environment_set_sdfgi_ray_count")._native_ptr(), 340137951);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &ray_count);
}

void RenderingServer::environment_set_sdfgi_frames_to_converge(RenderingServer::EnvironmentSDFGIFramesToConverge frames) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("environment_set_sdfgi_frames_to_converge")._native_ptr(), 2182444374);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &frames);
}

void RenderingServer::environment_set_sdfgi_frames_to_update_light(RenderingServer::EnvironmentSDFGIFramesToUpdateLight frames) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("environment_set_sdfgi_frames_to_update_light")._native_ptr(), 1251144068);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &frames);
}

void RenderingServer::environment_set_volumetric_fog_volume_size(int32_t size, int32_t depth) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("environment_set_volumetric_fog_volume_size")._native_ptr(), 3937882851);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t size_encoded;
	PtrToArg<int64_t>::encode(size, &size_encoded);
	int64_t depth_encoded;
	PtrToArg<int64_t>::encode(depth, &depth_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &size_encoded, &depth_encoded);
}

void RenderingServer::environment_set_volumetric_fog_filter_active(bool active) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("environment_set_volumetric_fog_filter_active")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t active_encoded;
	PtrToArg<bool>::encode(active, &active_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &active_encoded);
}

Ref<Image> RenderingServer::environment_bake_panorama(const RID &environment, bool bake_irradiance, const Vector2i &size) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("environment_bake_panorama")._native_ptr(), 2452908646);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<Image>());
	int8_t bake_irradiance_encoded;
	PtrToArg<bool>::encode(bake_irradiance, &bake_irradiance_encoded);
	return Ref<Image>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<Image>(_gde_method_bind, _owner, &environment, &bake_irradiance_encoded, &size));
}

void RenderingServer::screen_space_roughness_limiter_set_active(bool enable, double amount, double limit) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("screen_space_roughness_limiter_set_active")._native_ptr(), 916716790);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	double amount_encoded;
	PtrToArg<double>::encode(amount, &amount_encoded);
	double limit_encoded;
	PtrToArg<double>::encode(limit, &limit_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded, &amount_encoded, &limit_encoded);
}

void RenderingServer::sub_surface_scattering_set_quality(RenderingServer::SubSurfaceScatteringQuality quality) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("sub_surface_scattering_set_quality")._native_ptr(), 64571803);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &quality);
}

void RenderingServer::sub_surface_scattering_set_scale(double scale, double depth_scale) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("sub_surface_scattering_set_scale")._native_ptr(), 1017552074);
	CHECK_METHOD_BIND(_gde_method_bind);
	double scale_encoded;
	PtrToArg<double>::encode(scale, &scale_encoded);
	double depth_scale_encoded;
	PtrToArg<double>::encode(depth_scale, &depth_scale_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &scale_encoded, &depth_scale_encoded);
}

RID RenderingServer::camera_attributes_create() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("camera_attributes_create")._native_ptr(), 529393457);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner);
}

void RenderingServer::camera_attributes_set_dof_blur_quality(RenderingServer::DOFBlurQuality quality, bool use_jitter) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("camera_attributes_set_dof_blur_quality")._native_ptr(), 2220136795);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t use_jitter_encoded;
	PtrToArg<bool>::encode(use_jitter, &use_jitter_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &quality, &use_jitter_encoded);
}

void RenderingServer::camera_attributes_set_dof_blur_bokeh_shape(RenderingServer::DOFBokehShape shape) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("camera_attributes_set_dof_blur_bokeh_shape")._native_ptr(), 1205058394);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &shape);
}

void RenderingServer::camera_attributes_set_dof_blur(const RID &camera_attributes, bool far_enable, double far_distance, double far_transition, bool near_enable, double near_distance, double near_transition, double amount) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("camera_attributes_set_dof_blur")._native_ptr(), 316272616);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t far_enable_encoded;
	PtrToArg<bool>::encode(far_enable, &far_enable_encoded);
	double far_distance_encoded;
	PtrToArg<double>::encode(far_distance, &far_distance_encoded);
	double far_transition_encoded;
	PtrToArg<double>::encode(far_transition, &far_transition_encoded);
	int8_t near_enable_encoded;
	PtrToArg<bool>::encode(near_enable, &near_enable_encoded);
	double near_distance_encoded;
	PtrToArg<double>::encode(near_distance, &near_distance_encoded);
	double near_transition_encoded;
	PtrToArg<double>::encode(near_transition, &near_transition_encoded);
	double amount_encoded;
	PtrToArg<double>::encode(amount, &amount_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &camera_attributes, &far_enable_encoded, &far_distance_encoded, &far_transition_encoded, &near_enable_encoded, &near_distance_encoded, &near_transition_encoded, &amount_encoded);
}

void RenderingServer::camera_attributes_set_exposure(const RID &camera_attributes, double multiplier, double normalization) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("camera_attributes_set_exposure")._native_ptr(), 2513314492);
	CHECK_METHOD_BIND(_gde_method_bind);
	double multiplier_encoded;
	PtrToArg<double>::encode(multiplier, &multiplier_encoded);
	double normalization_encoded;
	PtrToArg<double>::encode(normalization, &normalization_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &camera_attributes, &multiplier_encoded, &normalization_encoded);
}

void RenderingServer::camera_attributes_set_auto_exposure(const RID &camera_attributes, bool enable, double min_sensitivity, double max_sensitivity, double speed, double scale) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("camera_attributes_set_auto_exposure")._native_ptr(), 4266986332);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	double min_sensitivity_encoded;
	PtrToArg<double>::encode(min_sensitivity, &min_sensitivity_encoded);
	double max_sensitivity_encoded;
	PtrToArg<double>::encode(max_sensitivity, &max_sensitivity_encoded);
	double speed_encoded;
	PtrToArg<double>::encode(speed, &speed_encoded);
	double scale_encoded;
	PtrToArg<double>::encode(scale, &scale_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &camera_attributes, &enable_encoded, &min_sensitivity_encoded, &max_sensitivity_encoded, &speed_encoded, &scale_encoded);
}

RID RenderingServer::scenario_create() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("scenario_create")._native_ptr(), 529393457);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner);
}

void RenderingServer::scenario_set_environment(const RID &scenario, const RID &environment) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("scenario_set_environment")._native_ptr(), 395945892);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &scenario, &environment);
}

void RenderingServer::scenario_set_fallback_environment(const RID &scenario, const RID &environment) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("scenario_set_fallback_environment")._native_ptr(), 395945892);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &scenario, &environment);
}

void RenderingServer::scenario_set_camera_attributes(const RID &scenario, const RID &effects) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("scenario_set_camera_attributes")._native_ptr(), 395945892);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &scenario, &effects);
}

void RenderingServer::scenario_set_compositor(const RID &scenario, const RID &compositor) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("scenario_set_compositor")._native_ptr(), 395945892);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &scenario, &compositor);
}

RID RenderingServer::instance_create2(const RID &base, const RID &scenario) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("instance_create2")._native_ptr(), 746547085);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner, &base, &scenario);
}

RID RenderingServer::instance_create() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("instance_create")._native_ptr(), 529393457);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner);
}

void RenderingServer::instance_set_base(const RID &instance, const RID &base) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("instance_set_base")._native_ptr(), 395945892);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &instance, &base);
}

void RenderingServer::instance_set_scenario(const RID &instance, const RID &scenario) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("instance_set_scenario")._native_ptr(), 395945892);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &instance, &scenario);
}

void RenderingServer::instance_set_layer_mask(const RID &instance, uint32_t mask) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("instance_set_layer_mask")._native_ptr(), 3411492887);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t mask_encoded;
	PtrToArg<int64_t>::encode(mask, &mask_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &instance, &mask_encoded);
}

void RenderingServer::instance_set_pivot_data(const RID &instance, double sorting_offset, bool use_aabb_center) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("instance_set_pivot_data")._native_ptr(), 1280615259);
	CHECK_METHOD_BIND(_gde_method_bind);
	double sorting_offset_encoded;
	PtrToArg<double>::encode(sorting_offset, &sorting_offset_encoded);
	int8_t use_aabb_center_encoded;
	PtrToArg<bool>::encode(use_aabb_center, &use_aabb_center_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &instance, &sorting_offset_encoded, &use_aabb_center_encoded);
}

void RenderingServer::instance_set_transform(const RID &instance, const Transform3D &transform) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("instance_set_transform")._native_ptr(), 3935195649);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &instance, &transform);
}

void RenderingServer::instance_attach_object_instance_id(const RID &instance, uint64_t id) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("instance_attach_object_instance_id")._native_ptr(), 3411492887);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t id_encoded;
	PtrToArg<int64_t>::encode(id, &id_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &instance, &id_encoded);
}

void RenderingServer::instance_set_blend_shape_weight(const RID &instance, int32_t shape, double weight) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("instance_set_blend_shape_weight")._native_ptr(), 1892459533);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t shape_encoded;
	PtrToArg<int64_t>::encode(shape, &shape_encoded);
	double weight_encoded;
	PtrToArg<double>::encode(weight, &weight_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &instance, &shape_encoded, &weight_encoded);
}

void RenderingServer::instance_set_surface_override_material(const RID &instance, int32_t surface, const RID &material) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("instance_set_surface_override_material")._native_ptr(), 2310537182);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t surface_encoded;
	PtrToArg<int64_t>::encode(surface, &surface_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &instance, &surface_encoded, &material);
}

void RenderingServer::instance_set_visible(const RID &instance, bool visible) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("instance_set_visible")._native_ptr(), 1265174801);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t visible_encoded;
	PtrToArg<bool>::encode(visible, &visible_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &instance, &visible_encoded);
}

void RenderingServer::instance_geometry_set_transparency(const RID &instance, double transparency) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("instance_geometry_set_transparency")._native_ptr(), 1794382983);
	CHECK_METHOD_BIND(_gde_method_bind);
	double transparency_encoded;
	PtrToArg<double>::encode(transparency, &transparency_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &instance, &transparency_encoded);
}

void RenderingServer::instance_set_custom_aabb(const RID &instance, const AABB &aabb) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("instance_set_custom_aabb")._native_ptr(), 3696536120);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &instance, &aabb);
}

void RenderingServer::instance_attach_skeleton(const RID &instance, const RID &skeleton) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("instance_attach_skeleton")._native_ptr(), 395945892);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &instance, &skeleton);
}

void RenderingServer::instance_set_extra_visibility_margin(const RID &instance, double margin) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("instance_set_extra_visibility_margin")._native_ptr(), 1794382983);
	CHECK_METHOD_BIND(_gde_method_bind);
	double margin_encoded;
	PtrToArg<double>::encode(margin, &margin_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &instance, &margin_encoded);
}

void RenderingServer::instance_set_visibility_parent(const RID &instance, const RID &parent) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("instance_set_visibility_parent")._native_ptr(), 395945892);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &instance, &parent);
}

void RenderingServer::instance_set_ignore_culling(const RID &instance, bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("instance_set_ignore_culling")._native_ptr(), 1265174801);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &instance, &enabled_encoded);
}

void RenderingServer::instance_geometry_set_flag(const RID &instance, RenderingServer::InstanceFlags flag, bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("instance_geometry_set_flag")._native_ptr(), 1014989537);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &instance, &flag, &enabled_encoded);
}

void RenderingServer::instance_geometry_set_cast_shadows_setting(const RID &instance, RenderingServer::ShadowCastingSetting shadow_casting_setting) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("instance_geometry_set_cast_shadows_setting")._native_ptr(), 3768836020);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &instance, &shadow_casting_setting);
}

void RenderingServer::instance_geometry_set_material_override(const RID &instance, const RID &material) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("instance_geometry_set_material_override")._native_ptr(), 395945892);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &instance, &material);
}

void RenderingServer::instance_geometry_set_material_overlay(const RID &instance, const RID &material) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("instance_geometry_set_material_overlay")._native_ptr(), 395945892);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &instance, &material);
}

void RenderingServer::instance_geometry_set_visibility_range(const RID &instance, double min, double max, double min_margin, double max_margin, RenderingServer::VisibilityRangeFadeMode fade_mode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("instance_geometry_set_visibility_range")._native_ptr(), 4263925858);
	CHECK_METHOD_BIND(_gde_method_bind);
	double min_encoded;
	PtrToArg<double>::encode(min, &min_encoded);
	double max_encoded;
	PtrToArg<double>::encode(max, &max_encoded);
	double min_margin_encoded;
	PtrToArg<double>::encode(min_margin, &min_margin_encoded);
	double max_margin_encoded;
	PtrToArg<double>::encode(max_margin, &max_margin_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &instance, &min_encoded, &max_encoded, &min_margin_encoded, &max_margin_encoded, &fade_mode);
}

void RenderingServer::instance_geometry_set_lightmap(const RID &instance, const RID &lightmap, const Rect2 &lightmap_uv_scale, int32_t lightmap_slice) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("instance_geometry_set_lightmap")._native_ptr(), 536974962);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t lightmap_slice_encoded;
	PtrToArg<int64_t>::encode(lightmap_slice, &lightmap_slice_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &instance, &lightmap, &lightmap_uv_scale, &lightmap_slice_encoded);
}

void RenderingServer::instance_geometry_set_lod_bias(const RID &instance, double lod_bias) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("instance_geometry_set_lod_bias")._native_ptr(), 1794382983);
	CHECK_METHOD_BIND(_gde_method_bind);
	double lod_bias_encoded;
	PtrToArg<double>::encode(lod_bias, &lod_bias_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &instance, &lod_bias_encoded);
}

void RenderingServer::instance_geometry_set_shader_parameter(const RID &instance, const StringName &parameter, const Variant &value) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("instance_geometry_set_shader_parameter")._native_ptr(), 3477296213);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &instance, &parameter, &value);
}

Variant RenderingServer::instance_geometry_get_shader_parameter(const RID &instance, const StringName &parameter) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("instance_geometry_get_shader_parameter")._native_ptr(), 2621281810);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Variant());
	return internal::_call_native_mb_ret<Variant>(_gde_method_bind, _owner, &instance, &parameter);
}

Variant RenderingServer::instance_geometry_get_shader_parameter_default_value(const RID &instance, const StringName &parameter) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("instance_geometry_get_shader_parameter_default_value")._native_ptr(), 2621281810);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Variant());
	return internal::_call_native_mb_ret<Variant>(_gde_method_bind, _owner, &instance, &parameter);
}

TypedArray<Dictionary> RenderingServer::instance_geometry_get_shader_parameter_list(const RID &instance) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("instance_geometry_get_shader_parameter_list")._native_ptr(), 2684255073);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TypedArray<Dictionary>());
	return internal::_call_native_mb_ret<TypedArray<Dictionary>>(_gde_method_bind, _owner, &instance);
}

PackedInt64Array RenderingServer::instances_cull_aabb(const AABB &aabb, const RID &scenario) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("instances_cull_aabb")._native_ptr(), 2570105777);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedInt64Array());
	return internal::_call_native_mb_ret<PackedInt64Array>(_gde_method_bind, _owner, &aabb, &scenario);
}

PackedInt64Array RenderingServer::instances_cull_ray(const Vector3 &from, const Vector3 &to, const RID &scenario) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("instances_cull_ray")._native_ptr(), 2208759584);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedInt64Array());
	return internal::_call_native_mb_ret<PackedInt64Array>(_gde_method_bind, _owner, &from, &to, &scenario);
}

PackedInt64Array RenderingServer::instances_cull_convex(const TypedArray<Plane> &convex, const RID &scenario) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("instances_cull_convex")._native_ptr(), 2488539944);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedInt64Array());
	return internal::_call_native_mb_ret<PackedInt64Array>(_gde_method_bind, _owner, &convex, &scenario);
}

TypedArray<Image> RenderingServer::bake_render_uv2(const RID &base, const TypedArray<RID> &material_overrides, const Vector2i &image_size) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("bake_render_uv2")._native_ptr(), 1904608558);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TypedArray<Image>());
	return internal::_call_native_mb_ret<TypedArray<Image>>(_gde_method_bind, _owner, &base, &material_overrides, &image_size);
}

RID RenderingServer::canvas_create() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("canvas_create")._native_ptr(), 529393457);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner);
}

void RenderingServer::canvas_set_item_mirroring(const RID &canvas, const RID &item, const Vector2 &mirroring) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("canvas_set_item_mirroring")._native_ptr(), 2343975398);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &canvas, &item, &mirroring);
}

void RenderingServer::canvas_set_item_repeat(const RID &item, const Vector2 &repeat_size, int32_t repeat_times) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("canvas_set_item_repeat")._native_ptr(), 1739512717);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t repeat_times_encoded;
	PtrToArg<int64_t>::encode(repeat_times, &repeat_times_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &item, &repeat_size, &repeat_times_encoded);
}

void RenderingServer::canvas_set_modulate(const RID &canvas, const Color &color) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("canvas_set_modulate")._native_ptr(), 2948539648);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &canvas, &color);
}

void RenderingServer::canvas_set_disable_scale(bool disable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("canvas_set_disable_scale")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t disable_encoded;
	PtrToArg<bool>::encode(disable, &disable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &disable_encoded);
}

RID RenderingServer::canvas_texture_create() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("canvas_texture_create")._native_ptr(), 529393457);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner);
}

void RenderingServer::canvas_texture_set_channel(const RID &canvas_texture, RenderingServer::CanvasTextureChannel channel, const RID &texture) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("canvas_texture_set_channel")._native_ptr(), 3822119138);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &canvas_texture, &channel, &texture);
}

void RenderingServer::canvas_texture_set_shading_parameters(const RID &canvas_texture, const Color &base_color, double shininess) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("canvas_texture_set_shading_parameters")._native_ptr(), 2124967469);
	CHECK_METHOD_BIND(_gde_method_bind);
	double shininess_encoded;
	PtrToArg<double>::encode(shininess, &shininess_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &canvas_texture, &base_color, &shininess_encoded);
}

void RenderingServer::canvas_texture_set_texture_filter(const RID &canvas_texture, RenderingServer::CanvasItemTextureFilter filter) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("canvas_texture_set_texture_filter")._native_ptr(), 1155129294);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &canvas_texture, &filter);
}

void RenderingServer::canvas_texture_set_texture_repeat(const RID &canvas_texture, RenderingServer::CanvasItemTextureRepeat repeat) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("canvas_texture_set_texture_repeat")._native_ptr(), 1652956681);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &canvas_texture, &repeat);
}

RID RenderingServer::canvas_item_create() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("canvas_item_create")._native_ptr(), 529393457);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner);
}

void RenderingServer::canvas_item_set_parent(const RID &item, const RID &parent) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("canvas_item_set_parent")._native_ptr(), 395945892);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &item, &parent);
}

void RenderingServer::canvas_item_set_default_texture_filter(const RID &item, RenderingServer::CanvasItemTextureFilter filter) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("canvas_item_set_default_texture_filter")._native_ptr(), 1155129294);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &item, &filter);
}

void RenderingServer::canvas_item_set_default_texture_repeat(const RID &item, RenderingServer::CanvasItemTextureRepeat repeat) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("canvas_item_set_default_texture_repeat")._native_ptr(), 1652956681);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &item, &repeat);
}

void RenderingServer::canvas_item_set_visible(const RID &item, bool visible) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("canvas_item_set_visible")._native_ptr(), 1265174801);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t visible_encoded;
	PtrToArg<bool>::encode(visible, &visible_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &item, &visible_encoded);
}

void RenderingServer::canvas_item_set_light_mask(const RID &item, int32_t mask) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("canvas_item_set_light_mask")._native_ptr(), 3411492887);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t mask_encoded;
	PtrToArg<int64_t>::encode(mask, &mask_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &item, &mask_encoded);
}

void RenderingServer::canvas_item_set_visibility_layer(const RID &item, uint32_t visibility_layer) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("canvas_item_set_visibility_layer")._native_ptr(), 3411492887);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t visibility_layer_encoded;
	PtrToArg<int64_t>::encode(visibility_layer, &visibility_layer_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &item, &visibility_layer_encoded);
}

void RenderingServer::canvas_item_set_transform(const RID &item, const Transform2D &transform) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("canvas_item_set_transform")._native_ptr(), 1246044741);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &item, &transform);
}

void RenderingServer::canvas_item_set_clip(const RID &item, bool clip) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("canvas_item_set_clip")._native_ptr(), 1265174801);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t clip_encoded;
	PtrToArg<bool>::encode(clip, &clip_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &item, &clip_encoded);
}

void RenderingServer::canvas_item_set_distance_field_mode(const RID &item, bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("canvas_item_set_distance_field_mode")._native_ptr(), 1265174801);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &item, &enabled_encoded);
}

void RenderingServer::canvas_item_set_custom_rect(const RID &item, bool use_custom_rect, const Rect2 &rect) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("canvas_item_set_custom_rect")._native_ptr(), 1333997032);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t use_custom_rect_encoded;
	PtrToArg<bool>::encode(use_custom_rect, &use_custom_rect_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &item, &use_custom_rect_encoded, &rect);
}

void RenderingServer::canvas_item_set_modulate(const RID &item, const Color &color) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("canvas_item_set_modulate")._native_ptr(), 2948539648);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &item, &color);
}

void RenderingServer::canvas_item_set_self_modulate(const RID &item, const Color &color) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("canvas_item_set_self_modulate")._native_ptr(), 2948539648);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &item, &color);
}

void RenderingServer::canvas_item_set_draw_behind_parent(const RID &item, bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("canvas_item_set_draw_behind_parent")._native_ptr(), 1265174801);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &item, &enabled_encoded);
}

void RenderingServer::canvas_item_set_interpolated(const RID &item, bool interpolated) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("canvas_item_set_interpolated")._native_ptr(), 1265174801);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t interpolated_encoded;
	PtrToArg<bool>::encode(interpolated, &interpolated_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &item, &interpolated_encoded);
}

void RenderingServer::canvas_item_reset_physics_interpolation(const RID &item) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("canvas_item_reset_physics_interpolation")._native_ptr(), 2722037293);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &item);
}

void RenderingServer::canvas_item_transform_physics_interpolation(const RID &item, const Transform2D &transform) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("canvas_item_transform_physics_interpolation")._native_ptr(), 1246044741);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &item, &transform);
}

void RenderingServer::canvas_item_add_line(const RID &item, const Vector2 &from, const Vector2 &to, const Color &color, double width, bool antialiased) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("canvas_item_add_line")._native_ptr(), 1819681853);
	CHECK_METHOD_BIND(_gde_method_bind);
	double width_encoded;
	PtrToArg<double>::encode(width, &width_encoded);
	int8_t antialiased_encoded;
	PtrToArg<bool>::encode(antialiased, &antialiased_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &item, &from, &to, &color, &width_encoded, &antialiased_encoded);
}

void RenderingServer::canvas_item_add_polyline(const RID &item, const PackedVector2Array &points, const PackedColorArray &colors, double width, bool antialiased) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("canvas_item_add_polyline")._native_ptr(), 3098767073);
	CHECK_METHOD_BIND(_gde_method_bind);
	double width_encoded;
	PtrToArg<double>::encode(width, &width_encoded);
	int8_t antialiased_encoded;
	PtrToArg<bool>::encode(antialiased, &antialiased_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &item, &points, &colors, &width_encoded, &antialiased_encoded);
}

void RenderingServer::canvas_item_add_multiline(const RID &item, const PackedVector2Array &points, const PackedColorArray &colors, double width, bool antialiased) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("canvas_item_add_multiline")._native_ptr(), 3098767073);
	CHECK_METHOD_BIND(_gde_method_bind);
	double width_encoded;
	PtrToArg<double>::encode(width, &width_encoded);
	int8_t antialiased_encoded;
	PtrToArg<bool>::encode(antialiased, &antialiased_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &item, &points, &colors, &width_encoded, &antialiased_encoded);
}

void RenderingServer::canvas_item_add_rect(const RID &item, const Rect2 &rect, const Color &color, bool antialiased) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("canvas_item_add_rect")._native_ptr(), 3523446176);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t antialiased_encoded;
	PtrToArg<bool>::encode(antialiased, &antialiased_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &item, &rect, &color, &antialiased_encoded);
}

void RenderingServer::canvas_item_add_circle(const RID &item, const Vector2 &pos, double radius, const Color &color, bool antialiased) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("canvas_item_add_circle")._native_ptr(), 333077949);
	CHECK_METHOD_BIND(_gde_method_bind);
	double radius_encoded;
	PtrToArg<double>::encode(radius, &radius_encoded);
	int8_t antialiased_encoded;
	PtrToArg<bool>::encode(antialiased, &antialiased_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &item, &pos, &radius_encoded, &color, &antialiased_encoded);
}

void RenderingServer::canvas_item_add_texture_rect(const RID &item, const Rect2 &rect, const RID &texture, bool tile, const Color &modulate, bool transpose) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("canvas_item_add_texture_rect")._native_ptr(), 324864032);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t tile_encoded;
	PtrToArg<bool>::encode(tile, &tile_encoded);
	int8_t transpose_encoded;
	PtrToArg<bool>::encode(transpose, &transpose_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &item, &rect, &texture, &tile_encoded, &modulate, &transpose_encoded);
}

void RenderingServer::canvas_item_add_msdf_texture_rect_region(const RID &item, const Rect2 &rect, const RID &texture, const Rect2 &src_rect, const Color &modulate, int32_t outline_size, double px_range, double scale) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("canvas_item_add_msdf_texture_rect_region")._native_ptr(), 97408773);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t outline_size_encoded;
	PtrToArg<int64_t>::encode(outline_size, &outline_size_encoded);
	double px_range_encoded;
	PtrToArg<double>::encode(px_range, &px_range_encoded);
	double scale_encoded;
	PtrToArg<double>::encode(scale, &scale_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &item, &rect, &texture, &src_rect, &modulate, &outline_size_encoded, &px_range_encoded, &scale_encoded);
}

void RenderingServer::canvas_item_add_lcd_texture_rect_region(const RID &item, const Rect2 &rect, const RID &texture, const Rect2 &src_rect, const Color &modulate) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("canvas_item_add_lcd_texture_rect_region")._native_ptr(), 359793297);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &item, &rect, &texture, &src_rect, &modulate);
}

void RenderingServer::canvas_item_add_texture_rect_region(const RID &item, const Rect2 &rect, const RID &texture, const Rect2 &src_rect, const Color &modulate, bool transpose, bool clip_uv) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("canvas_item_add_texture_rect_region")._native_ptr(), 485157892);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t transpose_encoded;
	PtrToArg<bool>::encode(transpose, &transpose_encoded);
	int8_t clip_uv_encoded;
	PtrToArg<bool>::encode(clip_uv, &clip_uv_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &item, &rect, &texture, &src_rect, &modulate, &transpose_encoded, &clip_uv_encoded);
}

void RenderingServer::canvas_item_add_nine_patch(const RID &item, const Rect2 &rect, const Rect2 &source, const RID &texture, const Vector2 &topleft, const Vector2 &bottomright, RenderingServer::NinePatchAxisMode x_axis_mode, RenderingServer::NinePatchAxisMode y_axis_mode, bool draw_center, const Color &modulate) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("canvas_item_add_nine_patch")._native_ptr(), 389957886);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t draw_center_encoded;
	PtrToArg<bool>::encode(draw_center, &draw_center_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &item, &rect, &source, &texture, &topleft, &bottomright, &x_axis_mode, &y_axis_mode, &draw_center_encoded, &modulate);
}

void RenderingServer::canvas_item_add_primitive(const RID &item, const PackedVector2Array &points, const PackedColorArray &colors, const PackedVector2Array &uvs, const RID &texture) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("canvas_item_add_primitive")._native_ptr(), 3731601077);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &item, &points, &colors, &uvs, &texture);
}

void RenderingServer::canvas_item_add_polygon(const RID &item, const PackedVector2Array &points, const PackedColorArray &colors, const PackedVector2Array &uvs, const RID &texture) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("canvas_item_add_polygon")._native_ptr(), 3580000528);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &item, &points, &colors, &uvs, &texture);
}

void RenderingServer::canvas_item_add_triangle_array(const RID &item, const PackedInt32Array &indices, const PackedVector2Array &points, const PackedColorArray &colors, const PackedVector2Array &uvs, const PackedInt32Array &bones, const PackedFloat32Array &weights, const RID &texture, int32_t count) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("canvas_item_add_triangle_array")._native_ptr(), 660261329);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t count_encoded;
	PtrToArg<int64_t>::encode(count, &count_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &item, &indices, &points, &colors, &uvs, &bones, &weights, &texture, &count_encoded);
}

void RenderingServer::canvas_item_add_mesh(const RID &item, const RID &mesh, const Transform2D &transform, const Color &modulate, const RID &texture) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("canvas_item_add_mesh")._native_ptr(), 316450961);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &item, &mesh, &transform, &modulate, &texture);
}

void RenderingServer::canvas_item_add_multimesh(const RID &item, const RID &mesh, const RID &texture) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("canvas_item_add_multimesh")._native_ptr(), 2131855138);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &item, &mesh, &texture);
}

void RenderingServer::canvas_item_add_particles(const RID &item, const RID &particles, const RID &texture) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("canvas_item_add_particles")._native_ptr(), 2575754278);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &item, &particles, &texture);
}

void RenderingServer::canvas_item_add_set_transform(const RID &item, const Transform2D &transform) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("canvas_item_add_set_transform")._native_ptr(), 1246044741);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &item, &transform);
}

void RenderingServer::canvas_item_add_clip_ignore(const RID &item, bool ignore) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("canvas_item_add_clip_ignore")._native_ptr(), 1265174801);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t ignore_encoded;
	PtrToArg<bool>::encode(ignore, &ignore_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &item, &ignore_encoded);
}

void RenderingServer::canvas_item_add_animation_slice(const RID &item, double animation_length, double slice_begin, double slice_end, double offset) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("canvas_item_add_animation_slice")._native_ptr(), 2646834499);
	CHECK_METHOD_BIND(_gde_method_bind);
	double animation_length_encoded;
	PtrToArg<double>::encode(animation_length, &animation_length_encoded);
	double slice_begin_encoded;
	PtrToArg<double>::encode(slice_begin, &slice_begin_encoded);
	double slice_end_encoded;
	PtrToArg<double>::encode(slice_end, &slice_end_encoded);
	double offset_encoded;
	PtrToArg<double>::encode(offset, &offset_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &item, &animation_length_encoded, &slice_begin_encoded, &slice_end_encoded, &offset_encoded);
}

void RenderingServer::canvas_item_set_sort_children_by_y(const RID &item, bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("canvas_item_set_sort_children_by_y")._native_ptr(), 1265174801);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &item, &enabled_encoded);
}

void RenderingServer::canvas_item_set_z_index(const RID &item, int32_t z_index) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("canvas_item_set_z_index")._native_ptr(), 3411492887);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t z_index_encoded;
	PtrToArg<int64_t>::encode(z_index, &z_index_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &item, &z_index_encoded);
}

void RenderingServer::canvas_item_set_z_as_relative_to_parent(const RID &item, bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("canvas_item_set_z_as_relative_to_parent")._native_ptr(), 1265174801);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &item, &enabled_encoded);
}

void RenderingServer::canvas_item_set_copy_to_backbuffer(const RID &item, bool enabled, const Rect2 &rect) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("canvas_item_set_copy_to_backbuffer")._native_ptr(), 2429202503);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &item, &enabled_encoded, &rect);
}

void RenderingServer::canvas_item_clear(const RID &item) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("canvas_item_clear")._native_ptr(), 2722037293);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &item);
}

void RenderingServer::canvas_item_set_draw_index(const RID &item, int32_t index) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("canvas_item_set_draw_index")._native_ptr(), 3411492887);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &item, &index_encoded);
}

void RenderingServer::canvas_item_set_material(const RID &item, const RID &material) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("canvas_item_set_material")._native_ptr(), 395945892);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &item, &material);
}

void RenderingServer::canvas_item_set_use_parent_material(const RID &item, bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("canvas_item_set_use_parent_material")._native_ptr(), 1265174801);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &item, &enabled_encoded);
}

void RenderingServer::canvas_item_set_visibility_notifier(const RID &item, bool enable, const Rect2 &area, const Callable &enter_callable, const Callable &exit_callable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("canvas_item_set_visibility_notifier")._native_ptr(), 3568945579);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &item, &enable_encoded, &area, &enter_callable, &exit_callable);
}

void RenderingServer::canvas_item_set_canvas_group_mode(const RID &item, RenderingServer::CanvasGroupMode mode, double clear_margin, bool fit_empty, double fit_margin, bool blur_mipmaps) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("canvas_item_set_canvas_group_mode")._native_ptr(), 3973586316);
	CHECK_METHOD_BIND(_gde_method_bind);
	double clear_margin_encoded;
	PtrToArg<double>::encode(clear_margin, &clear_margin_encoded);
	int8_t fit_empty_encoded;
	PtrToArg<bool>::encode(fit_empty, &fit_empty_encoded);
	double fit_margin_encoded;
	PtrToArg<double>::encode(fit_margin, &fit_margin_encoded);
	int8_t blur_mipmaps_encoded;
	PtrToArg<bool>::encode(blur_mipmaps, &blur_mipmaps_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &item, &mode, &clear_margin_encoded, &fit_empty_encoded, &fit_margin_encoded, &blur_mipmaps_encoded);
}

Rect2 RenderingServer::debug_canvas_item_get_rect(const RID &item) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("debug_canvas_item_get_rect")._native_ptr(), 624227424);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Rect2());
	return internal::_call_native_mb_ret<Rect2>(_gde_method_bind, _owner, &item);
}

RID RenderingServer::canvas_light_create() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("canvas_light_create")._native_ptr(), 529393457);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner);
}

void RenderingServer::canvas_light_attach_to_canvas(const RID &light, const RID &canvas) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("canvas_light_attach_to_canvas")._native_ptr(), 395945892);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &light, &canvas);
}

void RenderingServer::canvas_light_set_enabled(const RID &light, bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("canvas_light_set_enabled")._native_ptr(), 1265174801);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &light, &enabled_encoded);
}

void RenderingServer::canvas_light_set_texture_scale(const RID &light, double scale) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("canvas_light_set_texture_scale")._native_ptr(), 1794382983);
	CHECK_METHOD_BIND(_gde_method_bind);
	double scale_encoded;
	PtrToArg<double>::encode(scale, &scale_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &light, &scale_encoded);
}

void RenderingServer::canvas_light_set_transform(const RID &light, const Transform2D &transform) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("canvas_light_set_transform")._native_ptr(), 1246044741);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &light, &transform);
}

void RenderingServer::canvas_light_set_texture(const RID &light, const RID &texture) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("canvas_light_set_texture")._native_ptr(), 395945892);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &light, &texture);
}

void RenderingServer::canvas_light_set_texture_offset(const RID &light, const Vector2 &offset) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("canvas_light_set_texture_offset")._native_ptr(), 3201125042);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &light, &offset);
}

void RenderingServer::canvas_light_set_color(const RID &light, const Color &color) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("canvas_light_set_color")._native_ptr(), 2948539648);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &light, &color);
}

void RenderingServer::canvas_light_set_height(const RID &light, double height) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("canvas_light_set_height")._native_ptr(), 1794382983);
	CHECK_METHOD_BIND(_gde_method_bind);
	double height_encoded;
	PtrToArg<double>::encode(height, &height_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &light, &height_encoded);
}

void RenderingServer::canvas_light_set_energy(const RID &light, double energy) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("canvas_light_set_energy")._native_ptr(), 1794382983);
	CHECK_METHOD_BIND(_gde_method_bind);
	double energy_encoded;
	PtrToArg<double>::encode(energy, &energy_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &light, &energy_encoded);
}

void RenderingServer::canvas_light_set_z_range(const RID &light, int32_t min_z, int32_t max_z) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("canvas_light_set_z_range")._native_ptr(), 4288446313);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t min_z_encoded;
	PtrToArg<int64_t>::encode(min_z, &min_z_encoded);
	int64_t max_z_encoded;
	PtrToArg<int64_t>::encode(max_z, &max_z_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &light, &min_z_encoded, &max_z_encoded);
}

void RenderingServer::canvas_light_set_layer_range(const RID &light, int32_t min_layer, int32_t max_layer) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("canvas_light_set_layer_range")._native_ptr(), 4288446313);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t min_layer_encoded;
	PtrToArg<int64_t>::encode(min_layer, &min_layer_encoded);
	int64_t max_layer_encoded;
	PtrToArg<int64_t>::encode(max_layer, &max_layer_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &light, &min_layer_encoded, &max_layer_encoded);
}

void RenderingServer::canvas_light_set_item_cull_mask(const RID &light, int32_t mask) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("canvas_light_set_item_cull_mask")._native_ptr(), 3411492887);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t mask_encoded;
	PtrToArg<int64_t>::encode(mask, &mask_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &light, &mask_encoded);
}

void RenderingServer::canvas_light_set_item_shadow_cull_mask(const RID &light, int32_t mask) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("canvas_light_set_item_shadow_cull_mask")._native_ptr(), 3411492887);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t mask_encoded;
	PtrToArg<int64_t>::encode(mask, &mask_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &light, &mask_encoded);
}

void RenderingServer::canvas_light_set_mode(const RID &light, RenderingServer::CanvasLightMode mode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("canvas_light_set_mode")._native_ptr(), 2957564891);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &light, &mode);
}

void RenderingServer::canvas_light_set_shadow_enabled(const RID &light, bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("canvas_light_set_shadow_enabled")._native_ptr(), 1265174801);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &light, &enabled_encoded);
}

void RenderingServer::canvas_light_set_shadow_filter(const RID &light, RenderingServer::CanvasLightShadowFilter filter) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("canvas_light_set_shadow_filter")._native_ptr(), 393119659);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &light, &filter);
}

void RenderingServer::canvas_light_set_shadow_color(const RID &light, const Color &color) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("canvas_light_set_shadow_color")._native_ptr(), 2948539648);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &light, &color);
}

void RenderingServer::canvas_light_set_shadow_smooth(const RID &light, double smooth) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("canvas_light_set_shadow_smooth")._native_ptr(), 1794382983);
	CHECK_METHOD_BIND(_gde_method_bind);
	double smooth_encoded;
	PtrToArg<double>::encode(smooth, &smooth_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &light, &smooth_encoded);
}

void RenderingServer::canvas_light_set_blend_mode(const RID &light, RenderingServer::CanvasLightBlendMode mode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("canvas_light_set_blend_mode")._native_ptr(), 804895945);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &light, &mode);
}

void RenderingServer::canvas_light_set_interpolated(const RID &light, bool interpolated) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("canvas_light_set_interpolated")._native_ptr(), 1265174801);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t interpolated_encoded;
	PtrToArg<bool>::encode(interpolated, &interpolated_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &light, &interpolated_encoded);
}

void RenderingServer::canvas_light_reset_physics_interpolation(const RID &light) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("canvas_light_reset_physics_interpolation")._native_ptr(), 2722037293);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &light);
}

void RenderingServer::canvas_light_transform_physics_interpolation(const RID &light, const Transform2D &transform) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("canvas_light_transform_physics_interpolation")._native_ptr(), 1246044741);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &light, &transform);
}

RID RenderingServer::canvas_light_occluder_create() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("canvas_light_occluder_create")._native_ptr(), 529393457);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner);
}

void RenderingServer::canvas_light_occluder_attach_to_canvas(const RID &occluder, const RID &canvas) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("canvas_light_occluder_attach_to_canvas")._native_ptr(), 395945892);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &occluder, &canvas);
}

void RenderingServer::canvas_light_occluder_set_enabled(const RID &occluder, bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("canvas_light_occluder_set_enabled")._native_ptr(), 1265174801);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &occluder, &enabled_encoded);
}

void RenderingServer::canvas_light_occluder_set_polygon(const RID &occluder, const RID &polygon) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("canvas_light_occluder_set_polygon")._native_ptr(), 395945892);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &occluder, &polygon);
}

void RenderingServer::canvas_light_occluder_set_as_sdf_collision(const RID &occluder, bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("canvas_light_occluder_set_as_sdf_collision")._native_ptr(), 1265174801);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &occluder, &enable_encoded);
}

void RenderingServer::canvas_light_occluder_set_transform(const RID &occluder, const Transform2D &transform) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("canvas_light_occluder_set_transform")._native_ptr(), 1246044741);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &occluder, &transform);
}

void RenderingServer::canvas_light_occluder_set_light_mask(const RID &occluder, int32_t mask) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("canvas_light_occluder_set_light_mask")._native_ptr(), 3411492887);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t mask_encoded;
	PtrToArg<int64_t>::encode(mask, &mask_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &occluder, &mask_encoded);
}

void RenderingServer::canvas_light_occluder_set_interpolated(const RID &occluder, bool interpolated) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("canvas_light_occluder_set_interpolated")._native_ptr(), 1265174801);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t interpolated_encoded;
	PtrToArg<bool>::encode(interpolated, &interpolated_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &occluder, &interpolated_encoded);
}

void RenderingServer::canvas_light_occluder_reset_physics_interpolation(const RID &occluder) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("canvas_light_occluder_reset_physics_interpolation")._native_ptr(), 2722037293);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &occluder);
}

void RenderingServer::canvas_light_occluder_transform_physics_interpolation(const RID &occluder, const Transform2D &transform) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("canvas_light_occluder_transform_physics_interpolation")._native_ptr(), 1246044741);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &occluder, &transform);
}

RID RenderingServer::canvas_occluder_polygon_create() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("canvas_occluder_polygon_create")._native_ptr(), 529393457);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner);
}

void RenderingServer::canvas_occluder_polygon_set_shape(const RID &occluder_polygon, const PackedVector2Array &shape, bool closed) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("canvas_occluder_polygon_set_shape")._native_ptr(), 2103882027);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t closed_encoded;
	PtrToArg<bool>::encode(closed, &closed_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &occluder_polygon, &shape, &closed_encoded);
}

void RenderingServer::canvas_occluder_polygon_set_cull_mode(const RID &occluder_polygon, RenderingServer::CanvasOccluderPolygonCullMode mode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("canvas_occluder_polygon_set_cull_mode")._native_ptr(), 1839404663);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &occluder_polygon, &mode);
}

void RenderingServer::canvas_set_shadow_texture_size(int32_t size) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("canvas_set_shadow_texture_size")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t size_encoded;
	PtrToArg<int64_t>::encode(size, &size_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &size_encoded);
}

void RenderingServer::global_shader_parameter_add(const StringName &name, RenderingServer::GlobalShaderParameterType type, const Variant &default_value) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("global_shader_parameter_add")._native_ptr(), 463390080);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &name, &type, &default_value);
}

void RenderingServer::global_shader_parameter_remove(const StringName &name) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("global_shader_parameter_remove")._native_ptr(), 3304788590);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &name);
}

TypedArray<StringName> RenderingServer::global_shader_parameter_get_list() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("global_shader_parameter_get_list")._native_ptr(), 3995934104);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TypedArray<StringName>());
	return internal::_call_native_mb_ret<TypedArray<StringName>>(_gde_method_bind, _owner);
}

void RenderingServer::global_shader_parameter_set(const StringName &name, const Variant &value) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("global_shader_parameter_set")._native_ptr(), 3776071444);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &name, &value);
}

void RenderingServer::global_shader_parameter_set_override(const StringName &name, const Variant &value) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("global_shader_parameter_set_override")._native_ptr(), 3776071444);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &name, &value);
}

Variant RenderingServer::global_shader_parameter_get(const StringName &name) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("global_shader_parameter_get")._native_ptr(), 2760726917);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Variant());
	return internal::_call_native_mb_ret<Variant>(_gde_method_bind, _owner, &name);
}

RenderingServer::GlobalShaderParameterType RenderingServer::global_shader_parameter_get_type(const StringName &name) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("global_shader_parameter_get_type")._native_ptr(), 1601414142);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RenderingServer::GlobalShaderParameterType(0));
	return (RenderingServer::GlobalShaderParameterType)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &name);
}

void RenderingServer::free_rid(const RID &rid) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("free_rid")._native_ptr(), 2722037293);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &rid);
}

void RenderingServer::request_frame_drawn_callback(const Callable &callable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("request_frame_drawn_callback")._native_ptr(), 1611583062);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &callable);
}

bool RenderingServer::has_changed() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("has_changed")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

uint64_t RenderingServer::get_rendering_info(RenderingServer::RenderingInfo info) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("get_rendering_info")._native_ptr(), 3763192241);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<uint64_t>(_gde_method_bind, _owner, &info);
}

String RenderingServer::get_video_adapter_name() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("get_video_adapter_name")._native_ptr(), 201670096);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner);
}

String RenderingServer::get_video_adapter_vendor() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("get_video_adapter_vendor")._native_ptr(), 201670096);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner);
}

RenderingDevice::DeviceType RenderingServer::get_video_adapter_type() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("get_video_adapter_type")._native_ptr(), 3099547011);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RenderingDevice::DeviceType(0));
	return (RenderingDevice::DeviceType)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

String RenderingServer::get_video_adapter_api_version() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("get_video_adapter_api_version")._native_ptr(), 201670096);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner);
}

RID RenderingServer::make_sphere_mesh(int32_t latitudes, int32_t longitudes, double radius) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("make_sphere_mesh")._native_ptr(), 2251015897);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	int64_t latitudes_encoded;
	PtrToArg<int64_t>::encode(latitudes, &latitudes_encoded);
	int64_t longitudes_encoded;
	PtrToArg<int64_t>::encode(longitudes, &longitudes_encoded);
	double radius_encoded;
	PtrToArg<double>::encode(radius, &radius_encoded);
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner, &latitudes_encoded, &longitudes_encoded, &radius_encoded);
}

RID RenderingServer::get_test_cube() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("get_test_cube")._native_ptr(), 529393457);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner);
}

RID RenderingServer::get_test_texture() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("get_test_texture")._native_ptr(), 529393457);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner);
}

RID RenderingServer::get_white_texture() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("get_white_texture")._native_ptr(), 529393457);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner);
}

void RenderingServer::set_boot_image(const Ref<Image> &image, const Color &color, bool scale, bool use_filter) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("set_boot_image")._native_ptr(), 3759744527);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t scale_encoded;
	PtrToArg<bool>::encode(scale, &scale_encoded);
	int8_t use_filter_encoded;
	PtrToArg<bool>::encode(use_filter, &use_filter_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (image != nullptr ? &image->_owner : nullptr), &color, &scale_encoded, &use_filter_encoded);
}

Color RenderingServer::get_default_clear_color() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("get_default_clear_color")._native_ptr(), 3200896285);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Color());
	return internal::_call_native_mb_ret<Color>(_gde_method_bind, _owner);
}

void RenderingServer::set_default_clear_color(const Color &color) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("set_default_clear_color")._native_ptr(), 2920490490);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &color);
}

bool RenderingServer::has_os_feature(const String &feature) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("has_os_feature")._native_ptr(), 3927539163);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &feature);
}

void RenderingServer::set_debug_generate_wireframes(bool generate) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("set_debug_generate_wireframes")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t generate_encoded;
	PtrToArg<bool>::encode(generate, &generate_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &generate_encoded);
}

bool RenderingServer::is_render_loop_enabled() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("is_render_loop_enabled")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void RenderingServer::set_render_loop_enabled(bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("set_render_loop_enabled")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enabled_encoded);
}

double RenderingServer::get_frame_setup_time_cpu() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("get_frame_setup_time_cpu")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void RenderingServer::force_sync() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("force_sync")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void RenderingServer::force_draw(bool swap_buffers, double frame_step) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("force_draw")._native_ptr(), 1076185472);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t swap_buffers_encoded;
	PtrToArg<bool>::encode(swap_buffers, &swap_buffers_encoded);
	double frame_step_encoded;
	PtrToArg<double>::encode(frame_step, &frame_step_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &swap_buffers_encoded, &frame_step_encoded);
}

RenderingDevice *RenderingServer::get_rendering_device() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("get_rendering_device")._native_ptr(), 1405107940);
	CHECK_METHOD_BIND_RET(_gde_method_bind, nullptr);
	return internal::_call_native_mb_ret_obj<RenderingDevice>(_gde_method_bind, _owner);
}

RenderingDevice *RenderingServer::create_local_rendering_device() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("create_local_rendering_device")._native_ptr(), 1405107940);
	CHECK_METHOD_BIND_RET(_gde_method_bind, nullptr);
	return internal::_call_native_mb_ret_obj<RenderingDevice>(_gde_method_bind, _owner);
}

bool RenderingServer::is_on_render_thread() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("is_on_render_thread")._native_ptr(), 2240911060);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void RenderingServer::call_on_render_thread(const Callable &callable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("call_on_render_thread")._native_ptr(), 1611583062);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &callable);
}

bool RenderingServer::has_feature(RenderingServer::Features feature) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(RenderingServer::get_class_static()._native_ptr(), StringName("has_feature")._native_ptr(), 598462696);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &feature);
}


} // namespace godot 