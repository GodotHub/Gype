/**************************************************************************/
/*  font_file.cpp                                                         */
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

#include <godot_cpp/classes/font_file.hpp>

#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/classes/image.hpp>
#include <godot_cpp/variant/string.hpp>

namespace godot {

Error FontFile::load_bitmap_font(const String &path) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FontFile::get_class_static()._native_ptr(), StringName("load_bitmap_font")._native_ptr(), 166001499);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Error(0));
	return (Error)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &path);
}

Error FontFile::load_dynamic_font(const String &path) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FontFile::get_class_static()._native_ptr(), StringName("load_dynamic_font")._native_ptr(), 166001499);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Error(0));
	return (Error)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &path);
}

void FontFile::set_data(const PackedByteArray &data) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FontFile::get_class_static()._native_ptr(), StringName("set_data")._native_ptr(), 2971499966);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &data);
}

PackedByteArray FontFile::get_data() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FontFile::get_class_static()._native_ptr(), StringName("get_data")._native_ptr(), 2362200018);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedByteArray());
	return internal::_call_native_mb_ret<PackedByteArray>(_gde_method_bind, _owner);
}

void FontFile::set_font_name(const String &name) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FontFile::get_class_static()._native_ptr(), StringName("set_font_name")._native_ptr(), 83702148);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &name);
}

void FontFile::set_font_style_name(const String &name) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FontFile::get_class_static()._native_ptr(), StringName("set_font_style_name")._native_ptr(), 83702148);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &name);
}

void FontFile::set_font_style(BitField<TextServer::FontStyle> style) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FontFile::get_class_static()._native_ptr(), StringName("set_font_style")._native_ptr(), 918070724);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &style);
}

void FontFile::set_font_weight(int32_t weight) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FontFile::get_class_static()._native_ptr(), StringName("set_font_weight")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t weight_encoded;
	PtrToArg<int64_t>::encode(weight, &weight_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &weight_encoded);
}

void FontFile::set_font_stretch(int32_t stretch) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FontFile::get_class_static()._native_ptr(), StringName("set_font_stretch")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t stretch_encoded;
	PtrToArg<int64_t>::encode(stretch, &stretch_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &stretch_encoded);
}

void FontFile::set_antialiasing(TextServer::FontAntialiasing antialiasing) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FontFile::get_class_static()._native_ptr(), StringName("set_antialiasing")._native_ptr(), 1669900);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &antialiasing);
}

TextServer::FontAntialiasing FontFile::get_antialiasing() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FontFile::get_class_static()._native_ptr(), StringName("get_antialiasing")._native_ptr(), 4262718649);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TextServer::FontAntialiasing(0));
	return (TextServer::FontAntialiasing)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void FontFile::set_generate_mipmaps(bool generate_mipmaps) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FontFile::get_class_static()._native_ptr(), StringName("set_generate_mipmaps")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t generate_mipmaps_encoded;
	PtrToArg<bool>::encode(generate_mipmaps, &generate_mipmaps_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &generate_mipmaps_encoded);
}

bool FontFile::get_generate_mipmaps() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FontFile::get_class_static()._native_ptr(), StringName("get_generate_mipmaps")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void FontFile::set_multichannel_signed_distance_field(bool msdf) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FontFile::get_class_static()._native_ptr(), StringName("set_multichannel_signed_distance_field")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t msdf_encoded;
	PtrToArg<bool>::encode(msdf, &msdf_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &msdf_encoded);
}

bool FontFile::is_multichannel_signed_distance_field() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FontFile::get_class_static()._native_ptr(), StringName("is_multichannel_signed_distance_field")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void FontFile::set_msdf_pixel_range(int32_t msdf_pixel_range) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FontFile::get_class_static()._native_ptr(), StringName("set_msdf_pixel_range")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t msdf_pixel_range_encoded;
	PtrToArg<int64_t>::encode(msdf_pixel_range, &msdf_pixel_range_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &msdf_pixel_range_encoded);
}

int32_t FontFile::get_msdf_pixel_range() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FontFile::get_class_static()._native_ptr(), StringName("get_msdf_pixel_range")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void FontFile::set_msdf_size(int32_t msdf_size) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FontFile::get_class_static()._native_ptr(), StringName("set_msdf_size")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t msdf_size_encoded;
	PtrToArg<int64_t>::encode(msdf_size, &msdf_size_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &msdf_size_encoded);
}

int32_t FontFile::get_msdf_size() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FontFile::get_class_static()._native_ptr(), StringName("get_msdf_size")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void FontFile::set_fixed_size(int32_t fixed_size) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FontFile::get_class_static()._native_ptr(), StringName("set_fixed_size")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t fixed_size_encoded;
	PtrToArg<int64_t>::encode(fixed_size, &fixed_size_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &fixed_size_encoded);
}

int32_t FontFile::get_fixed_size() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FontFile::get_class_static()._native_ptr(), StringName("get_fixed_size")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void FontFile::set_fixed_size_scale_mode(TextServer::FixedSizeScaleMode fixed_size_scale_mode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FontFile::get_class_static()._native_ptr(), StringName("set_fixed_size_scale_mode")._native_ptr(), 1660989956);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &fixed_size_scale_mode);
}

TextServer::FixedSizeScaleMode FontFile::get_fixed_size_scale_mode() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FontFile::get_class_static()._native_ptr(), StringName("get_fixed_size_scale_mode")._native_ptr(), 753873478);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TextServer::FixedSizeScaleMode(0));
	return (TextServer::FixedSizeScaleMode)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void FontFile::set_allow_system_fallback(bool allow_system_fallback) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FontFile::get_class_static()._native_ptr(), StringName("set_allow_system_fallback")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t allow_system_fallback_encoded;
	PtrToArg<bool>::encode(allow_system_fallback, &allow_system_fallback_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &allow_system_fallback_encoded);
}

bool FontFile::is_allow_system_fallback() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FontFile::get_class_static()._native_ptr(), StringName("is_allow_system_fallback")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void FontFile::set_force_autohinter(bool force_autohinter) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FontFile::get_class_static()._native_ptr(), StringName("set_force_autohinter")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t force_autohinter_encoded;
	PtrToArg<bool>::encode(force_autohinter, &force_autohinter_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &force_autohinter_encoded);
}

bool FontFile::is_force_autohinter() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FontFile::get_class_static()._native_ptr(), StringName("is_force_autohinter")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void FontFile::set_hinting(TextServer::Hinting hinting) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FontFile::get_class_static()._native_ptr(), StringName("set_hinting")._native_ptr(), 1827459492);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &hinting);
}

TextServer::Hinting FontFile::get_hinting() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FontFile::get_class_static()._native_ptr(), StringName("get_hinting")._native_ptr(), 3683214614);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TextServer::Hinting(0));
	return (TextServer::Hinting)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void FontFile::set_subpixel_positioning(TextServer::SubpixelPositioning subpixel_positioning) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FontFile::get_class_static()._native_ptr(), StringName("set_subpixel_positioning")._native_ptr(), 4225742182);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &subpixel_positioning);
}

TextServer::SubpixelPositioning FontFile::get_subpixel_positioning() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FontFile::get_class_static()._native_ptr(), StringName("get_subpixel_positioning")._native_ptr(), 1069238588);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TextServer::SubpixelPositioning(0));
	return (TextServer::SubpixelPositioning)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void FontFile::set_oversampling(double oversampling) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FontFile::get_class_static()._native_ptr(), StringName("set_oversampling")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double oversampling_encoded;
	PtrToArg<double>::encode(oversampling, &oversampling_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &oversampling_encoded);
}

double FontFile::get_oversampling() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FontFile::get_class_static()._native_ptr(), StringName("get_oversampling")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

int32_t FontFile::get_cache_count() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FontFile::get_class_static()._native_ptr(), StringName("get_cache_count")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void FontFile::clear_cache() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FontFile::get_class_static()._native_ptr(), StringName("clear_cache")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void FontFile::remove_cache(int32_t cache_index) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FontFile::get_class_static()._native_ptr(), StringName("remove_cache")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t cache_index_encoded;
	PtrToArg<int64_t>::encode(cache_index, &cache_index_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &cache_index_encoded);
}

TypedArray<Vector2i> FontFile::get_size_cache_list(int32_t cache_index) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FontFile::get_class_static()._native_ptr(), StringName("get_size_cache_list")._native_ptr(), 663333327);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TypedArray<Vector2i>());
	int64_t cache_index_encoded;
	PtrToArg<int64_t>::encode(cache_index, &cache_index_encoded);
	return internal::_call_native_mb_ret<TypedArray<Vector2i>>(_gde_method_bind, _owner, &cache_index_encoded);
}

void FontFile::clear_size_cache(int32_t cache_index) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FontFile::get_class_static()._native_ptr(), StringName("clear_size_cache")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t cache_index_encoded;
	PtrToArg<int64_t>::encode(cache_index, &cache_index_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &cache_index_encoded);
}

void FontFile::remove_size_cache(int32_t cache_index, const Vector2i &size) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FontFile::get_class_static()._native_ptr(), StringName("remove_size_cache")._native_ptr(), 2311374912);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t cache_index_encoded;
	PtrToArg<int64_t>::encode(cache_index, &cache_index_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &cache_index_encoded, &size);
}

void FontFile::set_variation_coordinates(int32_t cache_index, const Dictionary &variation_coordinates) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FontFile::get_class_static()._native_ptr(), StringName("set_variation_coordinates")._native_ptr(), 64545446);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t cache_index_encoded;
	PtrToArg<int64_t>::encode(cache_index, &cache_index_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &cache_index_encoded, &variation_coordinates);
}

Dictionary FontFile::get_variation_coordinates(int32_t cache_index) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FontFile::get_class_static()._native_ptr(), StringName("get_variation_coordinates")._native_ptr(), 3485342025);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Dictionary());
	int64_t cache_index_encoded;
	PtrToArg<int64_t>::encode(cache_index, &cache_index_encoded);
	return internal::_call_native_mb_ret<Dictionary>(_gde_method_bind, _owner, &cache_index_encoded);
}

void FontFile::set_embolden(int32_t cache_index, double strength) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FontFile::get_class_static()._native_ptr(), StringName("set_embolden")._native_ptr(), 1602489585);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t cache_index_encoded;
	PtrToArg<int64_t>::encode(cache_index, &cache_index_encoded);
	double strength_encoded;
	PtrToArg<double>::encode(strength, &strength_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &cache_index_encoded, &strength_encoded);
}

double FontFile::get_embolden(int32_t cache_index) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FontFile::get_class_static()._native_ptr(), StringName("get_embolden")._native_ptr(), 2339986948);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	int64_t cache_index_encoded;
	PtrToArg<int64_t>::encode(cache_index, &cache_index_encoded);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &cache_index_encoded);
}

void FontFile::set_transform(int32_t cache_index, const Transform2D &transform) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FontFile::get_class_static()._native_ptr(), StringName("set_transform")._native_ptr(), 30160968);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t cache_index_encoded;
	PtrToArg<int64_t>::encode(cache_index, &cache_index_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &cache_index_encoded, &transform);
}

Transform2D FontFile::get_transform(int32_t cache_index) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FontFile::get_class_static()._native_ptr(), StringName("get_transform")._native_ptr(), 3836996910);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Transform2D());
	int64_t cache_index_encoded;
	PtrToArg<int64_t>::encode(cache_index, &cache_index_encoded);
	return internal::_call_native_mb_ret<Transform2D>(_gde_method_bind, _owner, &cache_index_encoded);
}

void FontFile::set_extra_spacing(int32_t cache_index, TextServer::SpacingType spacing, int64_t value) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FontFile::get_class_static()._native_ptr(), StringName("set_extra_spacing")._native_ptr(), 62942285);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t cache_index_encoded;
	PtrToArg<int64_t>::encode(cache_index, &cache_index_encoded);
	int64_t value_encoded;
	PtrToArg<int64_t>::encode(value, &value_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &cache_index_encoded, &spacing, &value_encoded);
}

int64_t FontFile::get_extra_spacing(int32_t cache_index, TextServer::SpacingType spacing) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FontFile::get_class_static()._native_ptr(), StringName("get_extra_spacing")._native_ptr(), 1924257185);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t cache_index_encoded;
	PtrToArg<int64_t>::encode(cache_index, &cache_index_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &cache_index_encoded, &spacing);
}

void FontFile::set_face_index(int32_t cache_index, int64_t face_index) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FontFile::get_class_static()._native_ptr(), StringName("set_face_index")._native_ptr(), 3937882851);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t cache_index_encoded;
	PtrToArg<int64_t>::encode(cache_index, &cache_index_encoded);
	int64_t face_index_encoded;
	PtrToArg<int64_t>::encode(face_index, &face_index_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &cache_index_encoded, &face_index_encoded);
}

int64_t FontFile::get_face_index(int32_t cache_index) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FontFile::get_class_static()._native_ptr(), StringName("get_face_index")._native_ptr(), 923996154);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t cache_index_encoded;
	PtrToArg<int64_t>::encode(cache_index, &cache_index_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &cache_index_encoded);
}

void FontFile::set_cache_ascent(int32_t cache_index, int32_t size, double ascent) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FontFile::get_class_static()._native_ptr(), StringName("set_cache_ascent")._native_ptr(), 3506521499);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t cache_index_encoded;
	PtrToArg<int64_t>::encode(cache_index, &cache_index_encoded);
	int64_t size_encoded;
	PtrToArg<int64_t>::encode(size, &size_encoded);
	double ascent_encoded;
	PtrToArg<double>::encode(ascent, &ascent_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &cache_index_encoded, &size_encoded, &ascent_encoded);
}

double FontFile::get_cache_ascent(int32_t cache_index, int32_t size) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FontFile::get_class_static()._native_ptr(), StringName("get_cache_ascent")._native_ptr(), 3085491603);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	int64_t cache_index_encoded;
	PtrToArg<int64_t>::encode(cache_index, &cache_index_encoded);
	int64_t size_encoded;
	PtrToArg<int64_t>::encode(size, &size_encoded);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &cache_index_encoded, &size_encoded);
}

void FontFile::set_cache_descent(int32_t cache_index, int32_t size, double descent) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FontFile::get_class_static()._native_ptr(), StringName("set_cache_descent")._native_ptr(), 3506521499);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t cache_index_encoded;
	PtrToArg<int64_t>::encode(cache_index, &cache_index_encoded);
	int64_t size_encoded;
	PtrToArg<int64_t>::encode(size, &size_encoded);
	double descent_encoded;
	PtrToArg<double>::encode(descent, &descent_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &cache_index_encoded, &size_encoded, &descent_encoded);
}

double FontFile::get_cache_descent(int32_t cache_index, int32_t size) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FontFile::get_class_static()._native_ptr(), StringName("get_cache_descent")._native_ptr(), 3085491603);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	int64_t cache_index_encoded;
	PtrToArg<int64_t>::encode(cache_index, &cache_index_encoded);
	int64_t size_encoded;
	PtrToArg<int64_t>::encode(size, &size_encoded);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &cache_index_encoded, &size_encoded);
}

void FontFile::set_cache_underline_position(int32_t cache_index, int32_t size, double underline_position) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FontFile::get_class_static()._native_ptr(), StringName("set_cache_underline_position")._native_ptr(), 3506521499);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t cache_index_encoded;
	PtrToArg<int64_t>::encode(cache_index, &cache_index_encoded);
	int64_t size_encoded;
	PtrToArg<int64_t>::encode(size, &size_encoded);
	double underline_position_encoded;
	PtrToArg<double>::encode(underline_position, &underline_position_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &cache_index_encoded, &size_encoded, &underline_position_encoded);
}

double FontFile::get_cache_underline_position(int32_t cache_index, int32_t size) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FontFile::get_class_static()._native_ptr(), StringName("get_cache_underline_position")._native_ptr(), 3085491603);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	int64_t cache_index_encoded;
	PtrToArg<int64_t>::encode(cache_index, &cache_index_encoded);
	int64_t size_encoded;
	PtrToArg<int64_t>::encode(size, &size_encoded);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &cache_index_encoded, &size_encoded);
}

void FontFile::set_cache_underline_thickness(int32_t cache_index, int32_t size, double underline_thickness) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FontFile::get_class_static()._native_ptr(), StringName("set_cache_underline_thickness")._native_ptr(), 3506521499);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t cache_index_encoded;
	PtrToArg<int64_t>::encode(cache_index, &cache_index_encoded);
	int64_t size_encoded;
	PtrToArg<int64_t>::encode(size, &size_encoded);
	double underline_thickness_encoded;
	PtrToArg<double>::encode(underline_thickness, &underline_thickness_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &cache_index_encoded, &size_encoded, &underline_thickness_encoded);
}

double FontFile::get_cache_underline_thickness(int32_t cache_index, int32_t size) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FontFile::get_class_static()._native_ptr(), StringName("get_cache_underline_thickness")._native_ptr(), 3085491603);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	int64_t cache_index_encoded;
	PtrToArg<int64_t>::encode(cache_index, &cache_index_encoded);
	int64_t size_encoded;
	PtrToArg<int64_t>::encode(size, &size_encoded);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &cache_index_encoded, &size_encoded);
}

void FontFile::set_cache_scale(int32_t cache_index, int32_t size, double scale) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FontFile::get_class_static()._native_ptr(), StringName("set_cache_scale")._native_ptr(), 3506521499);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t cache_index_encoded;
	PtrToArg<int64_t>::encode(cache_index, &cache_index_encoded);
	int64_t size_encoded;
	PtrToArg<int64_t>::encode(size, &size_encoded);
	double scale_encoded;
	PtrToArg<double>::encode(scale, &scale_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &cache_index_encoded, &size_encoded, &scale_encoded);
}

double FontFile::get_cache_scale(int32_t cache_index, int32_t size) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FontFile::get_class_static()._native_ptr(), StringName("get_cache_scale")._native_ptr(), 3085491603);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	int64_t cache_index_encoded;
	PtrToArg<int64_t>::encode(cache_index, &cache_index_encoded);
	int64_t size_encoded;
	PtrToArg<int64_t>::encode(size, &size_encoded);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &cache_index_encoded, &size_encoded);
}

int32_t FontFile::get_texture_count(int32_t cache_index, const Vector2i &size) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FontFile::get_class_static()._native_ptr(), StringName("get_texture_count")._native_ptr(), 1987661582);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t cache_index_encoded;
	PtrToArg<int64_t>::encode(cache_index, &cache_index_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &cache_index_encoded, &size);
}

void FontFile::clear_textures(int32_t cache_index, const Vector2i &size) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FontFile::get_class_static()._native_ptr(), StringName("clear_textures")._native_ptr(), 2311374912);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t cache_index_encoded;
	PtrToArg<int64_t>::encode(cache_index, &cache_index_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &cache_index_encoded, &size);
}

void FontFile::remove_texture(int32_t cache_index, const Vector2i &size, int32_t texture_index) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FontFile::get_class_static()._native_ptr(), StringName("remove_texture")._native_ptr(), 2328951467);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t cache_index_encoded;
	PtrToArg<int64_t>::encode(cache_index, &cache_index_encoded);
	int64_t texture_index_encoded;
	PtrToArg<int64_t>::encode(texture_index, &texture_index_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &cache_index_encoded, &size, &texture_index_encoded);
}

void FontFile::set_texture_image(int32_t cache_index, const Vector2i &size, int32_t texture_index, const Ref<Image> &image) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FontFile::get_class_static()._native_ptr(), StringName("set_texture_image")._native_ptr(), 4157974066);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t cache_index_encoded;
	PtrToArg<int64_t>::encode(cache_index, &cache_index_encoded);
	int64_t texture_index_encoded;
	PtrToArg<int64_t>::encode(texture_index, &texture_index_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &cache_index_encoded, &size, &texture_index_encoded, (image != nullptr ? &image->_owner : nullptr));
}

Ref<Image> FontFile::get_texture_image(int32_t cache_index, const Vector2i &size, int32_t texture_index) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FontFile::get_class_static()._native_ptr(), StringName("get_texture_image")._native_ptr(), 3878418953);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<Image>());
	int64_t cache_index_encoded;
	PtrToArg<int64_t>::encode(cache_index, &cache_index_encoded);
	int64_t texture_index_encoded;
	PtrToArg<int64_t>::encode(texture_index, &texture_index_encoded);
	return Ref<Image>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<Image>(_gde_method_bind, _owner, &cache_index_encoded, &size, &texture_index_encoded));
}

void FontFile::set_texture_offsets(int32_t cache_index, const Vector2i &size, int32_t texture_index, const PackedInt32Array &offset) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FontFile::get_class_static()._native_ptr(), StringName("set_texture_offsets")._native_ptr(), 2849993437);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t cache_index_encoded;
	PtrToArg<int64_t>::encode(cache_index, &cache_index_encoded);
	int64_t texture_index_encoded;
	PtrToArg<int64_t>::encode(texture_index, &texture_index_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &cache_index_encoded, &size, &texture_index_encoded, &offset);
}

PackedInt32Array FontFile::get_texture_offsets(int32_t cache_index, const Vector2i &size, int32_t texture_index) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FontFile::get_class_static()._native_ptr(), StringName("get_texture_offsets")._native_ptr(), 3703444828);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedInt32Array());
	int64_t cache_index_encoded;
	PtrToArg<int64_t>::encode(cache_index, &cache_index_encoded);
	int64_t texture_index_encoded;
	PtrToArg<int64_t>::encode(texture_index, &texture_index_encoded);
	return internal::_call_native_mb_ret<PackedInt32Array>(_gde_method_bind, _owner, &cache_index_encoded, &size, &texture_index_encoded);
}

PackedInt32Array FontFile::get_glyph_list(int32_t cache_index, const Vector2i &size) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FontFile::get_class_static()._native_ptr(), StringName("get_glyph_list")._native_ptr(), 681709689);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedInt32Array());
	int64_t cache_index_encoded;
	PtrToArg<int64_t>::encode(cache_index, &cache_index_encoded);
	return internal::_call_native_mb_ret<PackedInt32Array>(_gde_method_bind, _owner, &cache_index_encoded, &size);
}

void FontFile::clear_glyphs(int32_t cache_index, const Vector2i &size) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FontFile::get_class_static()._native_ptr(), StringName("clear_glyphs")._native_ptr(), 2311374912);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t cache_index_encoded;
	PtrToArg<int64_t>::encode(cache_index, &cache_index_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &cache_index_encoded, &size);
}

void FontFile::remove_glyph(int32_t cache_index, const Vector2i &size, int32_t glyph) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FontFile::get_class_static()._native_ptr(), StringName("remove_glyph")._native_ptr(), 2328951467);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t cache_index_encoded;
	PtrToArg<int64_t>::encode(cache_index, &cache_index_encoded);
	int64_t glyph_encoded;
	PtrToArg<int64_t>::encode(glyph, &glyph_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &cache_index_encoded, &size, &glyph_encoded);
}

void FontFile::set_glyph_advance(int32_t cache_index, int32_t size, int32_t glyph, const Vector2 &advance) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FontFile::get_class_static()._native_ptr(), StringName("set_glyph_advance")._native_ptr(), 947991729);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t cache_index_encoded;
	PtrToArg<int64_t>::encode(cache_index, &cache_index_encoded);
	int64_t size_encoded;
	PtrToArg<int64_t>::encode(size, &size_encoded);
	int64_t glyph_encoded;
	PtrToArg<int64_t>::encode(glyph, &glyph_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &cache_index_encoded, &size_encoded, &glyph_encoded, &advance);
}

Vector2 FontFile::get_glyph_advance(int32_t cache_index, int32_t size, int32_t glyph) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FontFile::get_class_static()._native_ptr(), StringName("get_glyph_advance")._native_ptr(), 1601573536);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector2());
	int64_t cache_index_encoded;
	PtrToArg<int64_t>::encode(cache_index, &cache_index_encoded);
	int64_t size_encoded;
	PtrToArg<int64_t>::encode(size, &size_encoded);
	int64_t glyph_encoded;
	PtrToArg<int64_t>::encode(glyph, &glyph_encoded);
	return internal::_call_native_mb_ret<Vector2>(_gde_method_bind, _owner, &cache_index_encoded, &size_encoded, &glyph_encoded);
}

void FontFile::set_glyph_offset(int32_t cache_index, const Vector2i &size, int32_t glyph, const Vector2 &offset) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FontFile::get_class_static()._native_ptr(), StringName("set_glyph_offset")._native_ptr(), 921719850);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t cache_index_encoded;
	PtrToArg<int64_t>::encode(cache_index, &cache_index_encoded);
	int64_t glyph_encoded;
	PtrToArg<int64_t>::encode(glyph, &glyph_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &cache_index_encoded, &size, &glyph_encoded, &offset);
}

Vector2 FontFile::get_glyph_offset(int32_t cache_index, const Vector2i &size, int32_t glyph) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FontFile::get_class_static()._native_ptr(), StringName("get_glyph_offset")._native_ptr(), 3205412300);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector2());
	int64_t cache_index_encoded;
	PtrToArg<int64_t>::encode(cache_index, &cache_index_encoded);
	int64_t glyph_encoded;
	PtrToArg<int64_t>::encode(glyph, &glyph_encoded);
	return internal::_call_native_mb_ret<Vector2>(_gde_method_bind, _owner, &cache_index_encoded, &size, &glyph_encoded);
}

void FontFile::set_glyph_size(int32_t cache_index, const Vector2i &size, int32_t glyph, const Vector2 &gl_size) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FontFile::get_class_static()._native_ptr(), StringName("set_glyph_size")._native_ptr(), 921719850);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t cache_index_encoded;
	PtrToArg<int64_t>::encode(cache_index, &cache_index_encoded);
	int64_t glyph_encoded;
	PtrToArg<int64_t>::encode(glyph, &glyph_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &cache_index_encoded, &size, &glyph_encoded, &gl_size);
}

Vector2 FontFile::get_glyph_size(int32_t cache_index, const Vector2i &size, int32_t glyph) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FontFile::get_class_static()._native_ptr(), StringName("get_glyph_size")._native_ptr(), 3205412300);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector2());
	int64_t cache_index_encoded;
	PtrToArg<int64_t>::encode(cache_index, &cache_index_encoded);
	int64_t glyph_encoded;
	PtrToArg<int64_t>::encode(glyph, &glyph_encoded);
	return internal::_call_native_mb_ret<Vector2>(_gde_method_bind, _owner, &cache_index_encoded, &size, &glyph_encoded);
}

void FontFile::set_glyph_uv_rect(int32_t cache_index, const Vector2i &size, int32_t glyph, const Rect2 &uv_rect) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FontFile::get_class_static()._native_ptr(), StringName("set_glyph_uv_rect")._native_ptr(), 3821620992);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t cache_index_encoded;
	PtrToArg<int64_t>::encode(cache_index, &cache_index_encoded);
	int64_t glyph_encoded;
	PtrToArg<int64_t>::encode(glyph, &glyph_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &cache_index_encoded, &size, &glyph_encoded, &uv_rect);
}

Rect2 FontFile::get_glyph_uv_rect(int32_t cache_index, const Vector2i &size, int32_t glyph) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FontFile::get_class_static()._native_ptr(), StringName("get_glyph_uv_rect")._native_ptr(), 3927917900);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Rect2());
	int64_t cache_index_encoded;
	PtrToArg<int64_t>::encode(cache_index, &cache_index_encoded);
	int64_t glyph_encoded;
	PtrToArg<int64_t>::encode(glyph, &glyph_encoded);
	return internal::_call_native_mb_ret<Rect2>(_gde_method_bind, _owner, &cache_index_encoded, &size, &glyph_encoded);
}

void FontFile::set_glyph_texture_idx(int32_t cache_index, const Vector2i &size, int32_t glyph, int32_t texture_idx) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FontFile::get_class_static()._native_ptr(), StringName("set_glyph_texture_idx")._native_ptr(), 355564111);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t cache_index_encoded;
	PtrToArg<int64_t>::encode(cache_index, &cache_index_encoded);
	int64_t glyph_encoded;
	PtrToArg<int64_t>::encode(glyph, &glyph_encoded);
	int64_t texture_idx_encoded;
	PtrToArg<int64_t>::encode(texture_idx, &texture_idx_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &cache_index_encoded, &size, &glyph_encoded, &texture_idx_encoded);
}

int32_t FontFile::get_glyph_texture_idx(int32_t cache_index, const Vector2i &size, int32_t glyph) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FontFile::get_class_static()._native_ptr(), StringName("get_glyph_texture_idx")._native_ptr(), 1629411054);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t cache_index_encoded;
	PtrToArg<int64_t>::encode(cache_index, &cache_index_encoded);
	int64_t glyph_encoded;
	PtrToArg<int64_t>::encode(glyph, &glyph_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &cache_index_encoded, &size, &glyph_encoded);
}

TypedArray<Vector2i> FontFile::get_kerning_list(int32_t cache_index, int32_t size) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FontFile::get_class_static()._native_ptr(), StringName("get_kerning_list")._native_ptr(), 2345056839);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TypedArray<Vector2i>());
	int64_t cache_index_encoded;
	PtrToArg<int64_t>::encode(cache_index, &cache_index_encoded);
	int64_t size_encoded;
	PtrToArg<int64_t>::encode(size, &size_encoded);
	return internal::_call_native_mb_ret<TypedArray<Vector2i>>(_gde_method_bind, _owner, &cache_index_encoded, &size_encoded);
}

void FontFile::clear_kerning_map(int32_t cache_index, int32_t size) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FontFile::get_class_static()._native_ptr(), StringName("clear_kerning_map")._native_ptr(), 3937882851);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t cache_index_encoded;
	PtrToArg<int64_t>::encode(cache_index, &cache_index_encoded);
	int64_t size_encoded;
	PtrToArg<int64_t>::encode(size, &size_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &cache_index_encoded, &size_encoded);
}

void FontFile::remove_kerning(int32_t cache_index, int32_t size, const Vector2i &glyph_pair) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FontFile::get_class_static()._native_ptr(), StringName("remove_kerning")._native_ptr(), 3930204747);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t cache_index_encoded;
	PtrToArg<int64_t>::encode(cache_index, &cache_index_encoded);
	int64_t size_encoded;
	PtrToArg<int64_t>::encode(size, &size_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &cache_index_encoded, &size_encoded, &glyph_pair);
}

void FontFile::set_kerning(int32_t cache_index, int32_t size, const Vector2i &glyph_pair, const Vector2 &kerning) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FontFile::get_class_static()._native_ptr(), StringName("set_kerning")._native_ptr(), 3182200918);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t cache_index_encoded;
	PtrToArg<int64_t>::encode(cache_index, &cache_index_encoded);
	int64_t size_encoded;
	PtrToArg<int64_t>::encode(size, &size_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &cache_index_encoded, &size_encoded, &glyph_pair, &kerning);
}

Vector2 FontFile::get_kerning(int32_t cache_index, int32_t size, const Vector2i &glyph_pair) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FontFile::get_class_static()._native_ptr(), StringName("get_kerning")._native_ptr(), 1611912865);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector2());
	int64_t cache_index_encoded;
	PtrToArg<int64_t>::encode(cache_index, &cache_index_encoded);
	int64_t size_encoded;
	PtrToArg<int64_t>::encode(size, &size_encoded);
	return internal::_call_native_mb_ret<Vector2>(_gde_method_bind, _owner, &cache_index_encoded, &size_encoded, &glyph_pair);
}

void FontFile::render_range(int32_t cache_index, const Vector2i &size, int64_t start, int64_t end) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FontFile::get_class_static()._native_ptr(), StringName("render_range")._native_ptr(), 355564111);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t cache_index_encoded;
	PtrToArg<int64_t>::encode(cache_index, &cache_index_encoded);
	int64_t start_encoded;
	PtrToArg<int64_t>::encode(start, &start_encoded);
	int64_t end_encoded;
	PtrToArg<int64_t>::encode(end, &end_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &cache_index_encoded, &size, &start_encoded, &end_encoded);
}

void FontFile::render_glyph(int32_t cache_index, const Vector2i &size, int32_t index) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FontFile::get_class_static()._native_ptr(), StringName("render_glyph")._native_ptr(), 2328951467);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t cache_index_encoded;
	PtrToArg<int64_t>::encode(cache_index, &cache_index_encoded);
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &cache_index_encoded, &size, &index_encoded);
}

void FontFile::set_language_support_override(const String &language, bool supported) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FontFile::get_class_static()._native_ptr(), StringName("set_language_support_override")._native_ptr(), 2678287736);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t supported_encoded;
	PtrToArg<bool>::encode(supported, &supported_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &language, &supported_encoded);
}

bool FontFile::get_language_support_override(const String &language) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FontFile::get_class_static()._native_ptr(), StringName("get_language_support_override")._native_ptr(), 3927539163);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &language);
}

void FontFile::remove_language_support_override(const String &language) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FontFile::get_class_static()._native_ptr(), StringName("remove_language_support_override")._native_ptr(), 83702148);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &language);
}

PackedStringArray FontFile::get_language_support_overrides() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FontFile::get_class_static()._native_ptr(), StringName("get_language_support_overrides")._native_ptr(), 1139954409);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedStringArray());
	return internal::_call_native_mb_ret<PackedStringArray>(_gde_method_bind, _owner);
}

void FontFile::set_script_support_override(const String &script, bool supported) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FontFile::get_class_static()._native_ptr(), StringName("set_script_support_override")._native_ptr(), 2678287736);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t supported_encoded;
	PtrToArg<bool>::encode(supported, &supported_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &script, &supported_encoded);
}

bool FontFile::get_script_support_override(const String &script) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FontFile::get_class_static()._native_ptr(), StringName("get_script_support_override")._native_ptr(), 3927539163);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &script);
}

void FontFile::remove_script_support_override(const String &script) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FontFile::get_class_static()._native_ptr(), StringName("remove_script_support_override")._native_ptr(), 83702148);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &script);
}

PackedStringArray FontFile::get_script_support_overrides() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FontFile::get_class_static()._native_ptr(), StringName("get_script_support_overrides")._native_ptr(), 1139954409);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedStringArray());
	return internal::_call_native_mb_ret<PackedStringArray>(_gde_method_bind, _owner);
}

void FontFile::set_opentype_feature_overrides(const Dictionary &overrides) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FontFile::get_class_static()._native_ptr(), StringName("set_opentype_feature_overrides")._native_ptr(), 4155329257);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &overrides);
}

Dictionary FontFile::get_opentype_feature_overrides() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FontFile::get_class_static()._native_ptr(), StringName("get_opentype_feature_overrides")._native_ptr(), 3102165223);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Dictionary());
	return internal::_call_native_mb_ret<Dictionary>(_gde_method_bind, _owner);
}

int32_t FontFile::get_glyph_index(int32_t size, int64_t _char, int64_t variation_selector) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FontFile::get_class_static()._native_ptr(), StringName("get_glyph_index")._native_ptr(), 864943070);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t size_encoded;
	PtrToArg<int64_t>::encode(size, &size_encoded);
	int64_t _char_encoded;
	PtrToArg<int64_t>::encode(_char, &_char_encoded);
	int64_t variation_selector_encoded;
	PtrToArg<int64_t>::encode(variation_selector, &variation_selector_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &size_encoded, &_char_encoded, &variation_selector_encoded);
}

int64_t FontFile::get_char_from_glyph_index(int32_t size, int32_t glyph_index) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FontFile::get_class_static()._native_ptr(), StringName("get_char_from_glyph_index")._native_ptr(), 3175239445);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t size_encoded;
	PtrToArg<int64_t>::encode(size, &size_encoded);
	int64_t glyph_index_encoded;
	PtrToArg<int64_t>::encode(glyph_index, &glyph_index_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &size_encoded, &glyph_index_encoded);
}


} // namespace godot 