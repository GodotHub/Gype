/**************************************************************************/
/*  text_server.cpp                                                       */
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

#include <godot_cpp/classes/text_server.hpp>

#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/classes/image.hpp>
#include <godot_cpp/variant/packed_byte_array.hpp>
#include <godot_cpp/variant/packed_float32_array.hpp>

namespace godot {


bool TextServer::has_feature(TextServer::Feature feature) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("has_feature")._native_ptr(), 3967367083);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &feature);
}

String TextServer::get_name() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("get_name")._native_ptr(), 201670096);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner);
}

int64_t TextServer::get_features() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("get_features")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

bool TextServer::load_support_data(const String &filename) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("load_support_data")._native_ptr(), 2323990056);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &filename);
}

String TextServer::get_support_data_filename() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("get_support_data_filename")._native_ptr(), 201670096);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner);
}

String TextServer::get_support_data_info() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("get_support_data_info")._native_ptr(), 201670096);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner);
}

bool TextServer::save_support_data(const String &filename) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("save_support_data")._native_ptr(), 3927539163);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &filename);
}

bool TextServer::is_locale_right_to_left(const String &locale) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("is_locale_right_to_left")._native_ptr(), 3927539163);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &locale);
}

int64_t TextServer::name_to_tag(const String &name) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("name_to_tag")._native_ptr(), 1321353865);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &name);
}

String TextServer::tag_to_name(int64_t tag) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("tag_to_name")._native_ptr(), 844755477);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	int64_t tag_encoded;
	PtrToArg<int64_t>::encode(tag, &tag_encoded);
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner, &tag_encoded);
}

bool TextServer::has(const RID &rid) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("has")._native_ptr(), 3521089500);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &rid);
}

void TextServer::free_rid(const RID &rid) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("free_rid")._native_ptr(), 2722037293);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &rid);
}

RID TextServer::create_font() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("create_font")._native_ptr(), 529393457);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner);
}

RID TextServer::create_font_linked_variation(const RID &font_rid) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("create_font_linked_variation")._native_ptr(), 41030802);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner, &font_rid);
}

void TextServer::font_set_data(const RID &font_rid, const PackedByteArray &data) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("font_set_data")._native_ptr(), 1355495400);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &font_rid, &data);
}

void TextServer::font_set_face_index(const RID &font_rid, int64_t face_index) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("font_set_face_index")._native_ptr(), 3411492887);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t face_index_encoded;
	PtrToArg<int64_t>::encode(face_index, &face_index_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &font_rid, &face_index_encoded);
}

int64_t TextServer::font_get_face_index(const RID &font_rid) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("font_get_face_index")._native_ptr(), 2198884583);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &font_rid);
}

int64_t TextServer::font_get_face_count(const RID &font_rid) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("font_get_face_count")._native_ptr(), 2198884583);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &font_rid);
}

void TextServer::font_set_style(const RID &font_rid, BitField<TextServer::FontStyle> style) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("font_set_style")._native_ptr(), 898466325);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &font_rid, &style);
}

BitField<TextServer::FontStyle> TextServer::font_get_style(const RID &font_rid) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("font_get_style")._native_ptr(), 3082502592);
	CHECK_METHOD_BIND_RET(_gde_method_bind, BitField<TextServer::FontStyle>(0));
	return (int64_t)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &font_rid);
}

void TextServer::font_set_name(const RID &font_rid, const String &name) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("font_set_name")._native_ptr(), 2726140452);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &font_rid, &name);
}

String TextServer::font_get_name(const RID &font_rid) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("font_get_name")._native_ptr(), 642473191);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner, &font_rid);
}

Dictionary TextServer::font_get_ot_name_strings(const RID &font_rid) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("font_get_ot_name_strings")._native_ptr(), 1882737106);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Dictionary());
	return internal::_call_native_mb_ret<Dictionary>(_gde_method_bind, _owner, &font_rid);
}

void TextServer::font_set_style_name(const RID &font_rid, const String &name) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("font_set_style_name")._native_ptr(), 2726140452);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &font_rid, &name);
}

String TextServer::font_get_style_name(const RID &font_rid) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("font_get_style_name")._native_ptr(), 642473191);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner, &font_rid);
}

void TextServer::font_set_weight(const RID &font_rid, int64_t weight) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("font_set_weight")._native_ptr(), 3411492887);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t weight_encoded;
	PtrToArg<int64_t>::encode(weight, &weight_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &font_rid, &weight_encoded);
}

int64_t TextServer::font_get_weight(const RID &font_rid) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("font_get_weight")._native_ptr(), 2198884583);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &font_rid);
}

void TextServer::font_set_stretch(const RID &font_rid, int64_t weight) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("font_set_stretch")._native_ptr(), 3411492887);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t weight_encoded;
	PtrToArg<int64_t>::encode(weight, &weight_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &font_rid, &weight_encoded);
}

int64_t TextServer::font_get_stretch(const RID &font_rid) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("font_get_stretch")._native_ptr(), 2198884583);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &font_rid);
}

void TextServer::font_set_antialiasing(const RID &font_rid, TextServer::FontAntialiasing antialiasing) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("font_set_antialiasing")._native_ptr(), 958337235);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &font_rid, &antialiasing);
}

TextServer::FontAntialiasing TextServer::font_get_antialiasing(const RID &font_rid) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("font_get_antialiasing")._native_ptr(), 3389420495);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TextServer::FontAntialiasing(0));
	return (TextServer::FontAntialiasing)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &font_rid);
}

void TextServer::font_set_disable_embedded_bitmaps(const RID &font_rid, bool disable_embedded_bitmaps) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("font_set_disable_embedded_bitmaps")._native_ptr(), 1265174801);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t disable_embedded_bitmaps_encoded;
	PtrToArg<bool>::encode(disable_embedded_bitmaps, &disable_embedded_bitmaps_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &font_rid, &disable_embedded_bitmaps_encoded);
}

bool TextServer::font_get_disable_embedded_bitmaps(const RID &font_rid) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("font_get_disable_embedded_bitmaps")._native_ptr(), 4155700596);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &font_rid);
}

void TextServer::font_set_generate_mipmaps(const RID &font_rid, bool generate_mipmaps) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("font_set_generate_mipmaps")._native_ptr(), 1265174801);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t generate_mipmaps_encoded;
	PtrToArg<bool>::encode(generate_mipmaps, &generate_mipmaps_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &font_rid, &generate_mipmaps_encoded);
}

bool TextServer::font_get_generate_mipmaps(const RID &font_rid) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("font_get_generate_mipmaps")._native_ptr(), 4155700596);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &font_rid);
}

void TextServer::font_set_multichannel_signed_distance_field(const RID &font_rid, bool msdf) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("font_set_multichannel_signed_distance_field")._native_ptr(), 1265174801);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t msdf_encoded;
	PtrToArg<bool>::encode(msdf, &msdf_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &font_rid, &msdf_encoded);
}

bool TextServer::font_is_multichannel_signed_distance_field(const RID &font_rid) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("font_is_multichannel_signed_distance_field")._native_ptr(), 4155700596);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &font_rid);
}

void TextServer::font_set_msdf_pixel_range(const RID &font_rid, int64_t msdf_pixel_range) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("font_set_msdf_pixel_range")._native_ptr(), 3411492887);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t msdf_pixel_range_encoded;
	PtrToArg<int64_t>::encode(msdf_pixel_range, &msdf_pixel_range_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &font_rid, &msdf_pixel_range_encoded);
}

int64_t TextServer::font_get_msdf_pixel_range(const RID &font_rid) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("font_get_msdf_pixel_range")._native_ptr(), 2198884583);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &font_rid);
}

void TextServer::font_set_msdf_size(const RID &font_rid, int64_t msdf_size) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("font_set_msdf_size")._native_ptr(), 3411492887);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t msdf_size_encoded;
	PtrToArg<int64_t>::encode(msdf_size, &msdf_size_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &font_rid, &msdf_size_encoded);
}

int64_t TextServer::font_get_msdf_size(const RID &font_rid) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("font_get_msdf_size")._native_ptr(), 2198884583);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &font_rid);
}

void TextServer::font_set_fixed_size(const RID &font_rid, int64_t fixed_size) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("font_set_fixed_size")._native_ptr(), 3411492887);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t fixed_size_encoded;
	PtrToArg<int64_t>::encode(fixed_size, &fixed_size_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &font_rid, &fixed_size_encoded);
}

int64_t TextServer::font_get_fixed_size(const RID &font_rid) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("font_get_fixed_size")._native_ptr(), 2198884583);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &font_rid);
}

void TextServer::font_set_fixed_size_scale_mode(const RID &font_rid, TextServer::FixedSizeScaleMode fixed_size_scale_mode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("font_set_fixed_size_scale_mode")._native_ptr(), 1029390307);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &font_rid, &fixed_size_scale_mode);
}

TextServer::FixedSizeScaleMode TextServer::font_get_fixed_size_scale_mode(const RID &font_rid) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("font_get_fixed_size_scale_mode")._native_ptr(), 4113120379);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TextServer::FixedSizeScaleMode(0));
	return (TextServer::FixedSizeScaleMode)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &font_rid);
}

void TextServer::font_set_allow_system_fallback(const RID &font_rid, bool allow_system_fallback) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("font_set_allow_system_fallback")._native_ptr(), 1265174801);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t allow_system_fallback_encoded;
	PtrToArg<bool>::encode(allow_system_fallback, &allow_system_fallback_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &font_rid, &allow_system_fallback_encoded);
}

bool TextServer::font_is_allow_system_fallback(const RID &font_rid) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("font_is_allow_system_fallback")._native_ptr(), 4155700596);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &font_rid);
}

void TextServer::font_set_force_autohinter(const RID &font_rid, bool force_autohinter) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("font_set_force_autohinter")._native_ptr(), 1265174801);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t force_autohinter_encoded;
	PtrToArg<bool>::encode(force_autohinter, &force_autohinter_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &font_rid, &force_autohinter_encoded);
}

bool TextServer::font_is_force_autohinter(const RID &font_rid) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("font_is_force_autohinter")._native_ptr(), 4155700596);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &font_rid);
}

void TextServer::font_set_hinting(const RID &font_rid, TextServer::Hinting hinting) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("font_set_hinting")._native_ptr(), 1520010864);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &font_rid, &hinting);
}

TextServer::Hinting TextServer::font_get_hinting(const RID &font_rid) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("font_get_hinting")._native_ptr(), 3971592737);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TextServer::Hinting(0));
	return (TextServer::Hinting)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &font_rid);
}

void TextServer::font_set_subpixel_positioning(const RID &font_rid, TextServer::SubpixelPositioning subpixel_positioning) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("font_set_subpixel_positioning")._native_ptr(), 3830459669);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &font_rid, &subpixel_positioning);
}

TextServer::SubpixelPositioning TextServer::font_get_subpixel_positioning(const RID &font_rid) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("font_get_subpixel_positioning")._native_ptr(), 2752233671);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TextServer::SubpixelPositioning(0));
	return (TextServer::SubpixelPositioning)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &font_rid);
}

void TextServer::font_set_embolden(const RID &font_rid, double strength) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("font_set_embolden")._native_ptr(), 1794382983);
	CHECK_METHOD_BIND(_gde_method_bind);
	double strength_encoded;
	PtrToArg<double>::encode(strength, &strength_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &font_rid, &strength_encoded);
}

double TextServer::font_get_embolden(const RID &font_rid) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("font_get_embolden")._native_ptr(), 866169185);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &font_rid);
}

void TextServer::font_set_spacing(const RID &font_rid, TextServer::SpacingType spacing, int64_t value) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("font_set_spacing")._native_ptr(), 1307259930);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t value_encoded;
	PtrToArg<int64_t>::encode(value, &value_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &font_rid, &spacing, &value_encoded);
}

int64_t TextServer::font_get_spacing(const RID &font_rid, TextServer::SpacingType spacing) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("font_get_spacing")._native_ptr(), 1213653558);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &font_rid, &spacing);
}

void TextServer::font_set_baseline_offset(const RID &font_rid, double baseline_offset) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("font_set_baseline_offset")._native_ptr(), 1794382983);
	CHECK_METHOD_BIND(_gde_method_bind);
	double baseline_offset_encoded;
	PtrToArg<double>::encode(baseline_offset, &baseline_offset_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &font_rid, &baseline_offset_encoded);
}

double TextServer::font_get_baseline_offset(const RID &font_rid) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("font_get_baseline_offset")._native_ptr(), 866169185);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &font_rid);
}

void TextServer::font_set_transform(const RID &font_rid, const Transform2D &transform) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("font_set_transform")._native_ptr(), 1246044741);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &font_rid, &transform);
}

Transform2D TextServer::font_get_transform(const RID &font_rid) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("font_get_transform")._native_ptr(), 213527486);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Transform2D());
	return internal::_call_native_mb_ret<Transform2D>(_gde_method_bind, _owner, &font_rid);
}

void TextServer::font_set_variation_coordinates(const RID &font_rid, const Dictionary &variation_coordinates) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("font_set_variation_coordinates")._native_ptr(), 1217542888);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &font_rid, &variation_coordinates);
}

Dictionary TextServer::font_get_variation_coordinates(const RID &font_rid) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("font_get_variation_coordinates")._native_ptr(), 1882737106);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Dictionary());
	return internal::_call_native_mb_ret<Dictionary>(_gde_method_bind, _owner, &font_rid);
}

void TextServer::font_set_oversampling(const RID &font_rid, double oversampling) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("font_set_oversampling")._native_ptr(), 1794382983);
	CHECK_METHOD_BIND(_gde_method_bind);
	double oversampling_encoded;
	PtrToArg<double>::encode(oversampling, &oversampling_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &font_rid, &oversampling_encoded);
}

double TextServer::font_get_oversampling(const RID &font_rid) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("font_get_oversampling")._native_ptr(), 866169185);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &font_rid);
}

TypedArray<Vector2i> TextServer::font_get_size_cache_list(const RID &font_rid) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("font_get_size_cache_list")._native_ptr(), 2684255073);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TypedArray<Vector2i>());
	return internal::_call_native_mb_ret<TypedArray<Vector2i>>(_gde_method_bind, _owner, &font_rid);
}

void TextServer::font_clear_size_cache(const RID &font_rid) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("font_clear_size_cache")._native_ptr(), 2722037293);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &font_rid);
}

void TextServer::font_remove_size_cache(const RID &font_rid, const Vector2i &size) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("font_remove_size_cache")._native_ptr(), 2450610377);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &font_rid, &size);
}

void TextServer::font_set_ascent(const RID &font_rid, int64_t size, double ascent) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("font_set_ascent")._native_ptr(), 1892459533);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t size_encoded;
	PtrToArg<int64_t>::encode(size, &size_encoded);
	double ascent_encoded;
	PtrToArg<double>::encode(ascent, &ascent_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &font_rid, &size_encoded, &ascent_encoded);
}

double TextServer::font_get_ascent(const RID &font_rid, int64_t size) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("font_get_ascent")._native_ptr(), 755457166);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	int64_t size_encoded;
	PtrToArg<int64_t>::encode(size, &size_encoded);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &font_rid, &size_encoded);
}

void TextServer::font_set_descent(const RID &font_rid, int64_t size, double descent) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("font_set_descent")._native_ptr(), 1892459533);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t size_encoded;
	PtrToArg<int64_t>::encode(size, &size_encoded);
	double descent_encoded;
	PtrToArg<double>::encode(descent, &descent_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &font_rid, &size_encoded, &descent_encoded);
}

double TextServer::font_get_descent(const RID &font_rid, int64_t size) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("font_get_descent")._native_ptr(), 755457166);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	int64_t size_encoded;
	PtrToArg<int64_t>::encode(size, &size_encoded);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &font_rid, &size_encoded);
}

void TextServer::font_set_underline_position(const RID &font_rid, int64_t size, double underline_position) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("font_set_underline_position")._native_ptr(), 1892459533);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t size_encoded;
	PtrToArg<int64_t>::encode(size, &size_encoded);
	double underline_position_encoded;
	PtrToArg<double>::encode(underline_position, &underline_position_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &font_rid, &size_encoded, &underline_position_encoded);
}

double TextServer::font_get_underline_position(const RID &font_rid, int64_t size) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("font_get_underline_position")._native_ptr(), 755457166);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	int64_t size_encoded;
	PtrToArg<int64_t>::encode(size, &size_encoded);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &font_rid, &size_encoded);
}

void TextServer::font_set_underline_thickness(const RID &font_rid, int64_t size, double underline_thickness) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("font_set_underline_thickness")._native_ptr(), 1892459533);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t size_encoded;
	PtrToArg<int64_t>::encode(size, &size_encoded);
	double underline_thickness_encoded;
	PtrToArg<double>::encode(underline_thickness, &underline_thickness_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &font_rid, &size_encoded, &underline_thickness_encoded);
}

double TextServer::font_get_underline_thickness(const RID &font_rid, int64_t size) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("font_get_underline_thickness")._native_ptr(), 755457166);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	int64_t size_encoded;
	PtrToArg<int64_t>::encode(size, &size_encoded);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &font_rid, &size_encoded);
}

void TextServer::font_set_scale(const RID &font_rid, int64_t size, double scale) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("font_set_scale")._native_ptr(), 1892459533);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t size_encoded;
	PtrToArg<int64_t>::encode(size, &size_encoded);
	double scale_encoded;
	PtrToArg<double>::encode(scale, &scale_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &font_rid, &size_encoded, &scale_encoded);
}

double TextServer::font_get_scale(const RID &font_rid, int64_t size) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("font_get_scale")._native_ptr(), 755457166);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	int64_t size_encoded;
	PtrToArg<int64_t>::encode(size, &size_encoded);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &font_rid, &size_encoded);
}

int64_t TextServer::font_get_texture_count(const RID &font_rid, const Vector2i &size) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("font_get_texture_count")._native_ptr(), 1311001310);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &font_rid, &size);
}

void TextServer::font_clear_textures(const RID &font_rid, const Vector2i &size) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("font_clear_textures")._native_ptr(), 2450610377);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &font_rid, &size);
}

void TextServer::font_remove_texture(const RID &font_rid, const Vector2i &size, int64_t texture_index) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("font_remove_texture")._native_ptr(), 3810512262);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t texture_index_encoded;
	PtrToArg<int64_t>::encode(texture_index, &texture_index_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &font_rid, &size, &texture_index_encoded);
}

void TextServer::font_set_texture_image(const RID &font_rid, const Vector2i &size, int64_t texture_index, const Ref<Image> &image) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("font_set_texture_image")._native_ptr(), 2354485091);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t texture_index_encoded;
	PtrToArg<int64_t>::encode(texture_index, &texture_index_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &font_rid, &size, &texture_index_encoded, (image != nullptr ? &image->_owner : nullptr));
}

Ref<Image> TextServer::font_get_texture_image(const RID &font_rid, const Vector2i &size, int64_t texture_index) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("font_get_texture_image")._native_ptr(), 2451761155);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<Image>());
	int64_t texture_index_encoded;
	PtrToArg<int64_t>::encode(texture_index, &texture_index_encoded);
	return Ref<Image>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<Image>(_gde_method_bind, _owner, &font_rid, &size, &texture_index_encoded));
}

void TextServer::font_set_texture_offsets(const RID &font_rid, const Vector2i &size, int64_t texture_index, const PackedInt32Array &offset) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("font_set_texture_offsets")._native_ptr(), 3005398047);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t texture_index_encoded;
	PtrToArg<int64_t>::encode(texture_index, &texture_index_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &font_rid, &size, &texture_index_encoded, &offset);
}

PackedInt32Array TextServer::font_get_texture_offsets(const RID &font_rid, const Vector2i &size, int64_t texture_index) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("font_get_texture_offsets")._native_ptr(), 3420028887);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedInt32Array());
	int64_t texture_index_encoded;
	PtrToArg<int64_t>::encode(texture_index, &texture_index_encoded);
	return internal::_call_native_mb_ret<PackedInt32Array>(_gde_method_bind, _owner, &font_rid, &size, &texture_index_encoded);
}

PackedInt32Array TextServer::font_get_glyph_list(const RID &font_rid, const Vector2i &size) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("font_get_glyph_list")._native_ptr(), 46086620);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedInt32Array());
	return internal::_call_native_mb_ret<PackedInt32Array>(_gde_method_bind, _owner, &font_rid, &size);
}

void TextServer::font_clear_glyphs(const RID &font_rid, const Vector2i &size) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("font_clear_glyphs")._native_ptr(), 2450610377);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &font_rid, &size);
}

void TextServer::font_remove_glyph(const RID &font_rid, const Vector2i &size, int64_t glyph) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("font_remove_glyph")._native_ptr(), 3810512262);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t glyph_encoded;
	PtrToArg<int64_t>::encode(glyph, &glyph_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &font_rid, &size, &glyph_encoded);
}

Vector2 TextServer::font_get_glyph_advance(const RID &font_rid, int64_t size, int64_t glyph) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("font_get_glyph_advance")._native_ptr(), 2555689501);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector2());
	int64_t size_encoded;
	PtrToArg<int64_t>::encode(size, &size_encoded);
	int64_t glyph_encoded;
	PtrToArg<int64_t>::encode(glyph, &glyph_encoded);
	return internal::_call_native_mb_ret<Vector2>(_gde_method_bind, _owner, &font_rid, &size_encoded, &glyph_encoded);
}

void TextServer::font_set_glyph_advance(const RID &font_rid, int64_t size, int64_t glyph, const Vector2 &advance) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("font_set_glyph_advance")._native_ptr(), 3219397315);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t size_encoded;
	PtrToArg<int64_t>::encode(size, &size_encoded);
	int64_t glyph_encoded;
	PtrToArg<int64_t>::encode(glyph, &glyph_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &font_rid, &size_encoded, &glyph_encoded, &advance);
}

Vector2 TextServer::font_get_glyph_offset(const RID &font_rid, const Vector2i &size, int64_t glyph) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("font_get_glyph_offset")._native_ptr(), 513728628);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector2());
	int64_t glyph_encoded;
	PtrToArg<int64_t>::encode(glyph, &glyph_encoded);
	return internal::_call_native_mb_ret<Vector2>(_gde_method_bind, _owner, &font_rid, &size, &glyph_encoded);
}

void TextServer::font_set_glyph_offset(const RID &font_rid, const Vector2i &size, int64_t glyph, const Vector2 &offset) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("font_set_glyph_offset")._native_ptr(), 1812632090);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t glyph_encoded;
	PtrToArg<int64_t>::encode(glyph, &glyph_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &font_rid, &size, &glyph_encoded, &offset);
}

Vector2 TextServer::font_get_glyph_size(const RID &font_rid, const Vector2i &size, int64_t glyph) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("font_get_glyph_size")._native_ptr(), 513728628);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector2());
	int64_t glyph_encoded;
	PtrToArg<int64_t>::encode(glyph, &glyph_encoded);
	return internal::_call_native_mb_ret<Vector2>(_gde_method_bind, _owner, &font_rid, &size, &glyph_encoded);
}

void TextServer::font_set_glyph_size(const RID &font_rid, const Vector2i &size, int64_t glyph, const Vector2 &gl_size) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("font_set_glyph_size")._native_ptr(), 1812632090);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t glyph_encoded;
	PtrToArg<int64_t>::encode(glyph, &glyph_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &font_rid, &size, &glyph_encoded, &gl_size);
}

Rect2 TextServer::font_get_glyph_uv_rect(const RID &font_rid, const Vector2i &size, int64_t glyph) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("font_get_glyph_uv_rect")._native_ptr(), 2274268786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Rect2());
	int64_t glyph_encoded;
	PtrToArg<int64_t>::encode(glyph, &glyph_encoded);
	return internal::_call_native_mb_ret<Rect2>(_gde_method_bind, _owner, &font_rid, &size, &glyph_encoded);
}

void TextServer::font_set_glyph_uv_rect(const RID &font_rid, const Vector2i &size, int64_t glyph, const Rect2 &uv_rect) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("font_set_glyph_uv_rect")._native_ptr(), 1973324081);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t glyph_encoded;
	PtrToArg<int64_t>::encode(glyph, &glyph_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &font_rid, &size, &glyph_encoded, &uv_rect);
}

int64_t TextServer::font_get_glyph_texture_idx(const RID &font_rid, const Vector2i &size, int64_t glyph) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("font_get_glyph_texture_idx")._native_ptr(), 4292800474);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t glyph_encoded;
	PtrToArg<int64_t>::encode(glyph, &glyph_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &font_rid, &size, &glyph_encoded);
}

void TextServer::font_set_glyph_texture_idx(const RID &font_rid, const Vector2i &size, int64_t glyph, int64_t texture_idx) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("font_set_glyph_texture_idx")._native_ptr(), 4254580980);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t glyph_encoded;
	PtrToArg<int64_t>::encode(glyph, &glyph_encoded);
	int64_t texture_idx_encoded;
	PtrToArg<int64_t>::encode(texture_idx, &texture_idx_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &font_rid, &size, &glyph_encoded, &texture_idx_encoded);
}

RID TextServer::font_get_glyph_texture_rid(const RID &font_rid, const Vector2i &size, int64_t glyph) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("font_get_glyph_texture_rid")._native_ptr(), 1451696141);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	int64_t glyph_encoded;
	PtrToArg<int64_t>::encode(glyph, &glyph_encoded);
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner, &font_rid, &size, &glyph_encoded);
}

Vector2 TextServer::font_get_glyph_texture_size(const RID &font_rid, const Vector2i &size, int64_t glyph) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("font_get_glyph_texture_size")._native_ptr(), 513728628);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector2());
	int64_t glyph_encoded;
	PtrToArg<int64_t>::encode(glyph, &glyph_encoded);
	return internal::_call_native_mb_ret<Vector2>(_gde_method_bind, _owner, &font_rid, &size, &glyph_encoded);
}

Dictionary TextServer::font_get_glyph_contours(const RID &font, int64_t size, int64_t index) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("font_get_glyph_contours")._native_ptr(), 2903964473);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Dictionary());
	int64_t size_encoded;
	PtrToArg<int64_t>::encode(size, &size_encoded);
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	return internal::_call_native_mb_ret<Dictionary>(_gde_method_bind, _owner, &font, &size_encoded, &index_encoded);
}

TypedArray<Vector2i> TextServer::font_get_kerning_list(const RID &font_rid, int64_t size) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("font_get_kerning_list")._native_ptr(), 1778388067);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TypedArray<Vector2i>());
	int64_t size_encoded;
	PtrToArg<int64_t>::encode(size, &size_encoded);
	return internal::_call_native_mb_ret<TypedArray<Vector2i>>(_gde_method_bind, _owner, &font_rid, &size_encoded);
}

void TextServer::font_clear_kerning_map(const RID &font_rid, int64_t size) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("font_clear_kerning_map")._native_ptr(), 3411492887);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t size_encoded;
	PtrToArg<int64_t>::encode(size, &size_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &font_rid, &size_encoded);
}

void TextServer::font_remove_kerning(const RID &font_rid, int64_t size, const Vector2i &glyph_pair) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("font_remove_kerning")._native_ptr(), 2141860016);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t size_encoded;
	PtrToArg<int64_t>::encode(size, &size_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &font_rid, &size_encoded, &glyph_pair);
}

void TextServer::font_set_kerning(const RID &font_rid, int64_t size, const Vector2i &glyph_pair, const Vector2 &kerning) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("font_set_kerning")._native_ptr(), 3630965883);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t size_encoded;
	PtrToArg<int64_t>::encode(size, &size_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &font_rid, &size_encoded, &glyph_pair, &kerning);
}

Vector2 TextServer::font_get_kerning(const RID &font_rid, int64_t size, const Vector2i &glyph_pair) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("font_get_kerning")._native_ptr(), 1019980169);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector2());
	int64_t size_encoded;
	PtrToArg<int64_t>::encode(size, &size_encoded);
	return internal::_call_native_mb_ret<Vector2>(_gde_method_bind, _owner, &font_rid, &size_encoded, &glyph_pair);
}

int64_t TextServer::font_get_glyph_index(const RID &font_rid, int64_t size, int64_t _char, int64_t variation_selector) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("font_get_glyph_index")._native_ptr(), 1765635060);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t size_encoded;
	PtrToArg<int64_t>::encode(size, &size_encoded);
	int64_t _char_encoded;
	PtrToArg<int64_t>::encode(_char, &_char_encoded);
	int64_t variation_selector_encoded;
	PtrToArg<int64_t>::encode(variation_selector, &variation_selector_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &font_rid, &size_encoded, &_char_encoded, &variation_selector_encoded);
}

int64_t TextServer::font_get_char_from_glyph_index(const RID &font_rid, int64_t size, int64_t glyph_index) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("font_get_char_from_glyph_index")._native_ptr(), 2156738276);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t size_encoded;
	PtrToArg<int64_t>::encode(size, &size_encoded);
	int64_t glyph_index_encoded;
	PtrToArg<int64_t>::encode(glyph_index, &glyph_index_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &font_rid, &size_encoded, &glyph_index_encoded);
}

bool TextServer::font_has_char(const RID &font_rid, int64_t _char) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("font_has_char")._native_ptr(), 3120086654);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int64_t _char_encoded;
	PtrToArg<int64_t>::encode(_char, &_char_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &font_rid, &_char_encoded);
}

String TextServer::font_get_supported_chars(const RID &font_rid) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("font_get_supported_chars")._native_ptr(), 642473191);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner, &font_rid);
}

void TextServer::font_render_range(const RID &font_rid, const Vector2i &size, int64_t start, int64_t end) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("font_render_range")._native_ptr(), 4254580980);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t start_encoded;
	PtrToArg<int64_t>::encode(start, &start_encoded);
	int64_t end_encoded;
	PtrToArg<int64_t>::encode(end, &end_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &font_rid, &size, &start_encoded, &end_encoded);
}

void TextServer::font_render_glyph(const RID &font_rid, const Vector2i &size, int64_t index) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("font_render_glyph")._native_ptr(), 3810512262);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &font_rid, &size, &index_encoded);
}

void TextServer::font_draw_glyph(const RID &font_rid, const RID &canvas, int64_t size, const Vector2 &pos, int64_t index, const Color &color) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("font_draw_glyph")._native_ptr(), 1339057948);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t size_encoded;
	PtrToArg<int64_t>::encode(size, &size_encoded);
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &font_rid, &canvas, &size_encoded, &pos, &index_encoded, &color);
}

void TextServer::font_draw_glyph_outline(const RID &font_rid, const RID &canvas, int64_t size, int64_t outline_size, const Vector2 &pos, int64_t index, const Color &color) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("font_draw_glyph_outline")._native_ptr(), 2626165733);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t size_encoded;
	PtrToArg<int64_t>::encode(size, &size_encoded);
	int64_t outline_size_encoded;
	PtrToArg<int64_t>::encode(outline_size, &outline_size_encoded);
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &font_rid, &canvas, &size_encoded, &outline_size_encoded, &pos, &index_encoded, &color);
}

bool TextServer::font_is_language_supported(const RID &font_rid, const String &language) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("font_is_language_supported")._native_ptr(), 3199320846);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &font_rid, &language);
}

void TextServer::font_set_language_support_override(const RID &font_rid, const String &language, bool supported) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("font_set_language_support_override")._native_ptr(), 2313957094);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t supported_encoded;
	PtrToArg<bool>::encode(supported, &supported_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &font_rid, &language, &supported_encoded);
}

bool TextServer::font_get_language_support_override(const RID &font_rid, const String &language) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("font_get_language_support_override")._native_ptr(), 2829184646);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &font_rid, &language);
}

void TextServer::font_remove_language_support_override(const RID &font_rid, const String &language) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("font_remove_language_support_override")._native_ptr(), 2726140452);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &font_rid, &language);
}

PackedStringArray TextServer::font_get_language_support_overrides(const RID &font_rid) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("font_get_language_support_overrides")._native_ptr(), 2801473409);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedStringArray());
	return internal::_call_native_mb_ret<PackedStringArray>(_gde_method_bind, _owner, &font_rid);
}

bool TextServer::font_is_script_supported(const RID &font_rid, const String &script) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("font_is_script_supported")._native_ptr(), 3199320846);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &font_rid, &script);
}

void TextServer::font_set_script_support_override(const RID &font_rid, const String &script, bool supported) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("font_set_script_support_override")._native_ptr(), 2313957094);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t supported_encoded;
	PtrToArg<bool>::encode(supported, &supported_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &font_rid, &script, &supported_encoded);
}

bool TextServer::font_get_script_support_override(const RID &font_rid, const String &script) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("font_get_script_support_override")._native_ptr(), 2829184646);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &font_rid, &script);
}

void TextServer::font_remove_script_support_override(const RID &font_rid, const String &script) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("font_remove_script_support_override")._native_ptr(), 2726140452);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &font_rid, &script);
}

PackedStringArray TextServer::font_get_script_support_overrides(const RID &font_rid) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("font_get_script_support_overrides")._native_ptr(), 2801473409);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedStringArray());
	return internal::_call_native_mb_ret<PackedStringArray>(_gde_method_bind, _owner, &font_rid);
}

void TextServer::font_set_opentype_feature_overrides(const RID &font_rid, const Dictionary &overrides) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("font_set_opentype_feature_overrides")._native_ptr(), 1217542888);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &font_rid, &overrides);
}

Dictionary TextServer::font_get_opentype_feature_overrides(const RID &font_rid) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("font_get_opentype_feature_overrides")._native_ptr(), 1882737106);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Dictionary());
	return internal::_call_native_mb_ret<Dictionary>(_gde_method_bind, _owner, &font_rid);
}

Dictionary TextServer::font_supported_feature_list(const RID &font_rid) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("font_supported_feature_list")._native_ptr(), 1882737106);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Dictionary());
	return internal::_call_native_mb_ret<Dictionary>(_gde_method_bind, _owner, &font_rid);
}

Dictionary TextServer::font_supported_variation_list(const RID &font_rid) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("font_supported_variation_list")._native_ptr(), 1882737106);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Dictionary());
	return internal::_call_native_mb_ret<Dictionary>(_gde_method_bind, _owner, &font_rid);
}

double TextServer::font_get_global_oversampling() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("font_get_global_oversampling")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void TextServer::font_set_global_oversampling(double oversampling) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("font_set_global_oversampling")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double oversampling_encoded;
	PtrToArg<double>::encode(oversampling, &oversampling_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &oversampling_encoded);
}

Vector2 TextServer::get_hex_code_box_size(int64_t size, int64_t index) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("get_hex_code_box_size")._native_ptr(), 3016396712);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector2());
	int64_t size_encoded;
	PtrToArg<int64_t>::encode(size, &size_encoded);
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	return internal::_call_native_mb_ret<Vector2>(_gde_method_bind, _owner, &size_encoded, &index_encoded);
}

void TextServer::draw_hex_code_box(const RID &canvas, int64_t size, const Vector2 &pos, int64_t index, const Color &color) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("draw_hex_code_box")._native_ptr(), 1602046441);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t size_encoded;
	PtrToArg<int64_t>::encode(size, &size_encoded);
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &canvas, &size_encoded, &pos, &index_encoded, &color);
}

RID TextServer::create_shaped_text(TextServer::Direction direction, TextServer::Orientation orientation) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("create_shaped_text")._native_ptr(), 1231398698);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner, &direction, &orientation);
}

void TextServer::shaped_text_clear(const RID &rid) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("shaped_text_clear")._native_ptr(), 2722037293);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &rid);
}

void TextServer::shaped_text_set_direction(const RID &shaped, TextServer::Direction direction) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("shaped_text_set_direction")._native_ptr(), 1551430183);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &shaped, &direction);
}

TextServer::Direction TextServer::shaped_text_get_direction(const RID &shaped) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("shaped_text_get_direction")._native_ptr(), 3065904362);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TextServer::Direction(0));
	return (TextServer::Direction)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &shaped);
}

TextServer::Direction TextServer::shaped_text_get_inferred_direction(const RID &shaped) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("shaped_text_get_inferred_direction")._native_ptr(), 3065904362);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TextServer::Direction(0));
	return (TextServer::Direction)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &shaped);
}

void TextServer::shaped_text_set_bidi_override(const RID &shaped, const Array &override) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("shaped_text_set_bidi_override")._native_ptr(), 684822712);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &shaped, &override);
}

void TextServer::shaped_text_set_custom_punctuation(const RID &shaped, const String &punct) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("shaped_text_set_custom_punctuation")._native_ptr(), 2726140452);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &shaped, &punct);
}

String TextServer::shaped_text_get_custom_punctuation(const RID &shaped) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("shaped_text_get_custom_punctuation")._native_ptr(), 642473191);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner, &shaped);
}

void TextServer::shaped_text_set_custom_ellipsis(const RID &shaped, int64_t _char) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("shaped_text_set_custom_ellipsis")._native_ptr(), 3411492887);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t _char_encoded;
	PtrToArg<int64_t>::encode(_char, &_char_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &shaped, &_char_encoded);
}

int64_t TextServer::shaped_text_get_custom_ellipsis(const RID &shaped) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("shaped_text_get_custom_ellipsis")._native_ptr(), 2198884583);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &shaped);
}

void TextServer::shaped_text_set_orientation(const RID &shaped, TextServer::Orientation orientation) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("shaped_text_set_orientation")._native_ptr(), 3019609126);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &shaped, &orientation);
}

TextServer::Orientation TextServer::shaped_text_get_orientation(const RID &shaped) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("shaped_text_get_orientation")._native_ptr(), 3142708106);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TextServer::Orientation(0));
	return (TextServer::Orientation)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &shaped);
}

void TextServer::shaped_text_set_preserve_invalid(const RID &shaped, bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("shaped_text_set_preserve_invalid")._native_ptr(), 1265174801);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &shaped, &enabled_encoded);
}

bool TextServer::shaped_text_get_preserve_invalid(const RID &shaped) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("shaped_text_get_preserve_invalid")._native_ptr(), 4155700596);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &shaped);
}

void TextServer::shaped_text_set_preserve_control(const RID &shaped, bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("shaped_text_set_preserve_control")._native_ptr(), 1265174801);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &shaped, &enabled_encoded);
}

bool TextServer::shaped_text_get_preserve_control(const RID &shaped) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("shaped_text_get_preserve_control")._native_ptr(), 4155700596);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &shaped);
}

void TextServer::shaped_text_set_spacing(const RID &shaped, TextServer::SpacingType spacing, int64_t value) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("shaped_text_set_spacing")._native_ptr(), 1307259930);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t value_encoded;
	PtrToArg<int64_t>::encode(value, &value_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &shaped, &spacing, &value_encoded);
}

int64_t TextServer::shaped_text_get_spacing(const RID &shaped, TextServer::SpacingType spacing) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("shaped_text_get_spacing")._native_ptr(), 1213653558);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &shaped, &spacing);
}

bool TextServer::shaped_text_add_string(const RID &shaped, const String &text, const TypedArray<RID> &fonts, int64_t size, const Dictionary &opentype_features, const String &language, const Variant &meta) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("shaped_text_add_string")._native_ptr(), 623473029);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int64_t size_encoded;
	PtrToArg<int64_t>::encode(size, &size_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &shaped, &text, &fonts, &size_encoded, &opentype_features, &language, &meta);
}

bool TextServer::shaped_text_add_object(const RID &shaped, const Variant &key, const Vector2 &size, InlineAlignment inline_align, int64_t length, double baseline) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("shaped_text_add_object")._native_ptr(), 3664424789);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int64_t length_encoded;
	PtrToArg<int64_t>::encode(length, &length_encoded);
	double baseline_encoded;
	PtrToArg<double>::encode(baseline, &baseline_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &shaped, &key, &size, &inline_align, &length_encoded, &baseline_encoded);
}

bool TextServer::shaped_text_resize_object(const RID &shaped, const Variant &key, const Vector2 &size, InlineAlignment inline_align, double baseline) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("shaped_text_resize_object")._native_ptr(), 790361552);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	double baseline_encoded;
	PtrToArg<double>::encode(baseline, &baseline_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &shaped, &key, &size, &inline_align, &baseline_encoded);
}

int64_t TextServer::shaped_get_span_count(const RID &shaped) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("shaped_get_span_count")._native_ptr(), 2198884583);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &shaped);
}

Variant TextServer::shaped_get_span_meta(const RID &shaped, int64_t index) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("shaped_get_span_meta")._native_ptr(), 4069510997);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Variant());
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	return internal::_call_native_mb_ret<Variant>(_gde_method_bind, _owner, &shaped, &index_encoded);
}

void TextServer::shaped_set_span_update_font(const RID &shaped, int64_t index, const TypedArray<RID> &fonts, int64_t size, const Dictionary &opentype_features) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("shaped_set_span_update_font")._native_ptr(), 2022725822);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	int64_t size_encoded;
	PtrToArg<int64_t>::encode(size, &size_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &shaped, &index_encoded, &fonts, &size_encoded, &opentype_features);
}

RID TextServer::shaped_text_substr(const RID &shaped, int64_t start, int64_t length) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("shaped_text_substr")._native_ptr(), 1937682086);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	int64_t start_encoded;
	PtrToArg<int64_t>::encode(start, &start_encoded);
	int64_t length_encoded;
	PtrToArg<int64_t>::encode(length, &length_encoded);
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner, &shaped, &start_encoded, &length_encoded);
}

RID TextServer::shaped_text_get_parent(const RID &shaped) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("shaped_text_get_parent")._native_ptr(), 3814569979);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner, &shaped);
}

double TextServer::shaped_text_fit_to_width(const RID &shaped, double width, BitField<TextServer::JustificationFlag> justification_flags) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("shaped_text_fit_to_width")._native_ptr(), 530670926);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	double width_encoded;
	PtrToArg<double>::encode(width, &width_encoded);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &shaped, &width_encoded, &justification_flags);
}

double TextServer::shaped_text_tab_align(const RID &shaped, const PackedFloat32Array &tab_stops) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("shaped_text_tab_align")._native_ptr(), 1283669550);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &shaped, &tab_stops);
}

bool TextServer::shaped_text_shape(const RID &shaped) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("shaped_text_shape")._native_ptr(), 3521089500);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &shaped);
}

bool TextServer::shaped_text_is_ready(const RID &shaped) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("shaped_text_is_ready")._native_ptr(), 4155700596);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &shaped);
}

bool TextServer::shaped_text_has_visible_chars(const RID &shaped) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("shaped_text_has_visible_chars")._native_ptr(), 4155700596);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &shaped);
}

TypedArray<Dictionary> TextServer::shaped_text_get_glyphs(const RID &shaped) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("shaped_text_get_glyphs")._native_ptr(), 2684255073);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TypedArray<Dictionary>());
	return internal::_call_native_mb_ret<TypedArray<Dictionary>>(_gde_method_bind, _owner, &shaped);
}

TypedArray<Dictionary> TextServer::shaped_text_sort_logical(const RID &shaped) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("shaped_text_sort_logical")._native_ptr(), 2670461153);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TypedArray<Dictionary>());
	return internal::_call_native_mb_ret<TypedArray<Dictionary>>(_gde_method_bind, _owner, &shaped);
}

int64_t TextServer::shaped_text_get_glyph_count(const RID &shaped) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("shaped_text_get_glyph_count")._native_ptr(), 2198884583);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &shaped);
}

Vector2i TextServer::shaped_text_get_range(const RID &shaped) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("shaped_text_get_range")._native_ptr(), 733700038);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector2i());
	return internal::_call_native_mb_ret<Vector2i>(_gde_method_bind, _owner, &shaped);
}

PackedInt32Array TextServer::shaped_text_get_line_breaks_adv(const RID &shaped, const PackedFloat32Array &width, int64_t start, bool once, BitField<TextServer::LineBreakFlag> break_flags) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("shaped_text_get_line_breaks_adv")._native_ptr(), 2376991424);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedInt32Array());
	int64_t start_encoded;
	PtrToArg<int64_t>::encode(start, &start_encoded);
	int8_t once_encoded;
	PtrToArg<bool>::encode(once, &once_encoded);
	return internal::_call_native_mb_ret<PackedInt32Array>(_gde_method_bind, _owner, &shaped, &width, &start_encoded, &once_encoded, &break_flags);
}

PackedInt32Array TextServer::shaped_text_get_line_breaks(const RID &shaped, double width, int64_t start, BitField<TextServer::LineBreakFlag> break_flags) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("shaped_text_get_line_breaks")._native_ptr(), 2651359741);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedInt32Array());
	double width_encoded;
	PtrToArg<double>::encode(width, &width_encoded);
	int64_t start_encoded;
	PtrToArg<int64_t>::encode(start, &start_encoded);
	return internal::_call_native_mb_ret<PackedInt32Array>(_gde_method_bind, _owner, &shaped, &width_encoded, &start_encoded, &break_flags);
}

PackedInt32Array TextServer::shaped_text_get_word_breaks(const RID &shaped, BitField<TextServer::GraphemeFlag> grapheme_flags, BitField<TextServer::GraphemeFlag> skip_grapheme_flags) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("shaped_text_get_word_breaks")._native_ptr(), 4099476853);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedInt32Array());
	return internal::_call_native_mb_ret<PackedInt32Array>(_gde_method_bind, _owner, &shaped, &grapheme_flags, &skip_grapheme_flags);
}

int64_t TextServer::shaped_text_get_trim_pos(const RID &shaped) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("shaped_text_get_trim_pos")._native_ptr(), 2198884583);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &shaped);
}

int64_t TextServer::shaped_text_get_ellipsis_pos(const RID &shaped) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("shaped_text_get_ellipsis_pos")._native_ptr(), 2198884583);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &shaped);
}

TypedArray<Dictionary> TextServer::shaped_text_get_ellipsis_glyphs(const RID &shaped) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("shaped_text_get_ellipsis_glyphs")._native_ptr(), 2684255073);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TypedArray<Dictionary>());
	return internal::_call_native_mb_ret<TypedArray<Dictionary>>(_gde_method_bind, _owner, &shaped);
}

int64_t TextServer::shaped_text_get_ellipsis_glyph_count(const RID &shaped) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("shaped_text_get_ellipsis_glyph_count")._native_ptr(), 2198884583);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &shaped);
}

void TextServer::shaped_text_overrun_trim_to_width(const RID &shaped, double width, BitField<TextServer::TextOverrunFlag> overrun_trim_flags) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("shaped_text_overrun_trim_to_width")._native_ptr(), 2723146520);
	CHECK_METHOD_BIND(_gde_method_bind);
	double width_encoded;
	PtrToArg<double>::encode(width, &width_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &shaped, &width_encoded, &overrun_trim_flags);
}

Array TextServer::shaped_text_get_objects(const RID &shaped) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("shaped_text_get_objects")._native_ptr(), 2684255073);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Array());
	return internal::_call_native_mb_ret<Array>(_gde_method_bind, _owner, &shaped);
}

Rect2 TextServer::shaped_text_get_object_rect(const RID &shaped, const Variant &key) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("shaped_text_get_object_rect")._native_ptr(), 447978354);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Rect2());
	return internal::_call_native_mb_ret<Rect2>(_gde_method_bind, _owner, &shaped, &key);
}

Vector2i TextServer::shaped_text_get_object_range(const RID &shaped, const Variant &key) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("shaped_text_get_object_range")._native_ptr(), 2524675647);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector2i());
	return internal::_call_native_mb_ret<Vector2i>(_gde_method_bind, _owner, &shaped, &key);
}

int64_t TextServer::shaped_text_get_object_glyph(const RID &shaped, const Variant &key) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("shaped_text_get_object_glyph")._native_ptr(), 1260085030);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &shaped, &key);
}

Vector2 TextServer::shaped_text_get_size(const RID &shaped) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("shaped_text_get_size")._native_ptr(), 2440833711);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector2());
	return internal::_call_native_mb_ret<Vector2>(_gde_method_bind, _owner, &shaped);
}

double TextServer::shaped_text_get_ascent(const RID &shaped) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("shaped_text_get_ascent")._native_ptr(), 866169185);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &shaped);
}

double TextServer::shaped_text_get_descent(const RID &shaped) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("shaped_text_get_descent")._native_ptr(), 866169185);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &shaped);
}

double TextServer::shaped_text_get_width(const RID &shaped) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("shaped_text_get_width")._native_ptr(), 866169185);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &shaped);
}

double TextServer::shaped_text_get_underline_position(const RID &shaped) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("shaped_text_get_underline_position")._native_ptr(), 866169185);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &shaped);
}

double TextServer::shaped_text_get_underline_thickness(const RID &shaped) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("shaped_text_get_underline_thickness")._native_ptr(), 866169185);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &shaped);
}

Dictionary TextServer::shaped_text_get_carets(const RID &shaped, int64_t position) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("shaped_text_get_carets")._native_ptr(), 1574219346);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Dictionary());
	int64_t position_encoded;
	PtrToArg<int64_t>::encode(position, &position_encoded);
	return internal::_call_native_mb_ret<Dictionary>(_gde_method_bind, _owner, &shaped, &position_encoded);
}

PackedVector2Array TextServer::shaped_text_get_selection(const RID &shaped, int64_t start, int64_t end) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("shaped_text_get_selection")._native_ptr(), 3714187733);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedVector2Array());
	int64_t start_encoded;
	PtrToArg<int64_t>::encode(start, &start_encoded);
	int64_t end_encoded;
	PtrToArg<int64_t>::encode(end, &end_encoded);
	return internal::_call_native_mb_ret<PackedVector2Array>(_gde_method_bind, _owner, &shaped, &start_encoded, &end_encoded);
}

int64_t TextServer::shaped_text_hit_test_grapheme(const RID &shaped, double coords) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("shaped_text_hit_test_grapheme")._native_ptr(), 3149310417);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	double coords_encoded;
	PtrToArg<double>::encode(coords, &coords_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &shaped, &coords_encoded);
}

int64_t TextServer::shaped_text_hit_test_position(const RID &shaped, double coords) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("shaped_text_hit_test_position")._native_ptr(), 3149310417);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	double coords_encoded;
	PtrToArg<double>::encode(coords, &coords_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &shaped, &coords_encoded);
}

Vector2 TextServer::shaped_text_get_grapheme_bounds(const RID &shaped, int64_t pos) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("shaped_text_get_grapheme_bounds")._native_ptr(), 2546185844);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector2());
	int64_t pos_encoded;
	PtrToArg<int64_t>::encode(pos, &pos_encoded);
	return internal::_call_native_mb_ret<Vector2>(_gde_method_bind, _owner, &shaped, &pos_encoded);
}

int64_t TextServer::shaped_text_next_grapheme_pos(const RID &shaped, int64_t pos) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("shaped_text_next_grapheme_pos")._native_ptr(), 1120910005);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t pos_encoded;
	PtrToArg<int64_t>::encode(pos, &pos_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &shaped, &pos_encoded);
}

int64_t TextServer::shaped_text_prev_grapheme_pos(const RID &shaped, int64_t pos) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("shaped_text_prev_grapheme_pos")._native_ptr(), 1120910005);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t pos_encoded;
	PtrToArg<int64_t>::encode(pos, &pos_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &shaped, &pos_encoded);
}

PackedInt32Array TextServer::shaped_text_get_character_breaks(const RID &shaped) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("shaped_text_get_character_breaks")._native_ptr(), 788230395);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedInt32Array());
	return internal::_call_native_mb_ret<PackedInt32Array>(_gde_method_bind, _owner, &shaped);
}

int64_t TextServer::shaped_text_next_character_pos(const RID &shaped, int64_t pos) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("shaped_text_next_character_pos")._native_ptr(), 1120910005);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t pos_encoded;
	PtrToArg<int64_t>::encode(pos, &pos_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &shaped, &pos_encoded);
}

int64_t TextServer::shaped_text_prev_character_pos(const RID &shaped, int64_t pos) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("shaped_text_prev_character_pos")._native_ptr(), 1120910005);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t pos_encoded;
	PtrToArg<int64_t>::encode(pos, &pos_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &shaped, &pos_encoded);
}

int64_t TextServer::shaped_text_closest_character_pos(const RID &shaped, int64_t pos) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("shaped_text_closest_character_pos")._native_ptr(), 1120910005);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t pos_encoded;
	PtrToArg<int64_t>::encode(pos, &pos_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &shaped, &pos_encoded);
}

void TextServer::shaped_text_draw(const RID &shaped, const RID &canvas, const Vector2 &pos, double clip_l, double clip_r, const Color &color) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("shaped_text_draw")._native_ptr(), 880389142);
	CHECK_METHOD_BIND(_gde_method_bind);
	double clip_l_encoded;
	PtrToArg<double>::encode(clip_l, &clip_l_encoded);
	double clip_r_encoded;
	PtrToArg<double>::encode(clip_r, &clip_r_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &shaped, &canvas, &pos, &clip_l_encoded, &clip_r_encoded, &color);
}

void TextServer::shaped_text_draw_outline(const RID &shaped, const RID &canvas, const Vector2 &pos, double clip_l, double clip_r, int64_t outline_size, const Color &color) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("shaped_text_draw_outline")._native_ptr(), 2559184194);
	CHECK_METHOD_BIND(_gde_method_bind);
	double clip_l_encoded;
	PtrToArg<double>::encode(clip_l, &clip_l_encoded);
	double clip_r_encoded;
	PtrToArg<double>::encode(clip_r, &clip_r_encoded);
	int64_t outline_size_encoded;
	PtrToArg<int64_t>::encode(outline_size, &outline_size_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &shaped, &canvas, &pos, &clip_l_encoded, &clip_r_encoded, &outline_size_encoded, &color);
}

TextServer::Direction TextServer::shaped_text_get_dominant_direction_in_range(const RID &shaped, int64_t start, int64_t end) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("shaped_text_get_dominant_direction_in_range")._native_ptr(), 3326907668);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TextServer::Direction(0));
	int64_t start_encoded;
	PtrToArg<int64_t>::encode(start, &start_encoded);
	int64_t end_encoded;
	PtrToArg<int64_t>::encode(end, &end_encoded);
	return (TextServer::Direction)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &shaped, &start_encoded, &end_encoded);
}

String TextServer::format_number(const String &number, const String &language) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("format_number")._native_ptr(), 2664628024);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner, &number, &language);
}

String TextServer::parse_number(const String &number, const String &language) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("parse_number")._native_ptr(), 2664628024);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner, &number, &language);
}

String TextServer::percent_sign(const String &language) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("percent_sign")._native_ptr(), 993269549);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner, &language);
}

PackedInt32Array TextServer::string_get_word_breaks(const String &string, const String &language, int64_t chars_per_line) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("string_get_word_breaks")._native_ptr(), 581857818);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedInt32Array());
	int64_t chars_per_line_encoded;
	PtrToArg<int64_t>::encode(chars_per_line, &chars_per_line_encoded);
	return internal::_call_native_mb_ret<PackedInt32Array>(_gde_method_bind, _owner, &string, &language, &chars_per_line_encoded);
}

PackedInt32Array TextServer::string_get_character_breaks(const String &string, const String &language) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("string_get_character_breaks")._native_ptr(), 2333794773);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedInt32Array());
	return internal::_call_native_mb_ret<PackedInt32Array>(_gde_method_bind, _owner, &string, &language);
}

int64_t TextServer::is_confusable(const String &string, const PackedStringArray &dict) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("is_confusable")._native_ptr(), 1433197768);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &string, &dict);
}

bool TextServer::spoof_check(const String &string) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("spoof_check")._native_ptr(), 3927539163);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &string);
}

String TextServer::strip_diacritics(const String &string) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("strip_diacritics")._native_ptr(), 3135753539);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner, &string);
}

bool TextServer::is_valid_identifier(const String &string) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("is_valid_identifier")._native_ptr(), 3927539163);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &string);
}

bool TextServer::is_valid_letter(int64_t unicode) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("is_valid_letter")._native_ptr(), 1116898809);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int64_t unicode_encoded;
	PtrToArg<int64_t>::encode(unicode, &unicode_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &unicode_encoded);
}

String TextServer::string_to_upper(const String &string, const String &language) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("string_to_upper")._native_ptr(), 2664628024);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner, &string, &language);
}

String TextServer::string_to_lower(const String &string, const String &language) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("string_to_lower")._native_ptr(), 2664628024);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner, &string, &language);
}

String TextServer::string_to_title(const String &string, const String &language) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("string_to_title")._native_ptr(), 2664628024);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner, &string, &language);
}

TypedArray<Vector3i> TextServer::parse_structured_text(TextServer::StructuredTextParser parser_type, const Array &args, const String &text) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(TextServer::get_class_static()._native_ptr(), StringName("parse_structured_text")._native_ptr(), 3310685015);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TypedArray<Vector3i>());
	return internal::_call_native_mb_ret<TypedArray<Vector3i>>(_gde_method_bind, _owner, &parser_type, &args, &text);
}


} // namespace godot 