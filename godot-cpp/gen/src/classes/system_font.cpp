/**************************************************************************/
/*  system_font.cpp                                                       */
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

#include <godot_cpp/classes/system_font.hpp>

#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

namespace godot {

void SystemFont::set_antialiasing(TextServer::FontAntialiasing antialiasing) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SystemFont::get_class_static()._native_ptr(), StringName("set_antialiasing")._native_ptr(), 1669900);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &antialiasing);
}

TextServer::FontAntialiasing SystemFont::get_antialiasing() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SystemFont::get_class_static()._native_ptr(), StringName("get_antialiasing")._native_ptr(), 4262718649);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TextServer::FontAntialiasing(0));
	return (TextServer::FontAntialiasing)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void SystemFont::set_disable_embedded_bitmaps(bool disable_embedded_bitmaps) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SystemFont::get_class_static()._native_ptr(), StringName("set_disable_embedded_bitmaps")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t disable_embedded_bitmaps_encoded;
	PtrToArg<bool>::encode(disable_embedded_bitmaps, &disable_embedded_bitmaps_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &disable_embedded_bitmaps_encoded);
}

bool SystemFont::get_disable_embedded_bitmaps() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SystemFont::get_class_static()._native_ptr(), StringName("get_disable_embedded_bitmaps")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void SystemFont::set_generate_mipmaps(bool generate_mipmaps) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SystemFont::get_class_static()._native_ptr(), StringName("set_generate_mipmaps")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t generate_mipmaps_encoded;
	PtrToArg<bool>::encode(generate_mipmaps, &generate_mipmaps_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &generate_mipmaps_encoded);
}

bool SystemFont::get_generate_mipmaps() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SystemFont::get_class_static()._native_ptr(), StringName("get_generate_mipmaps")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void SystemFont::set_allow_system_fallback(bool allow_system_fallback) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SystemFont::get_class_static()._native_ptr(), StringName("set_allow_system_fallback")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t allow_system_fallback_encoded;
	PtrToArg<bool>::encode(allow_system_fallback, &allow_system_fallback_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &allow_system_fallback_encoded);
}

bool SystemFont::is_allow_system_fallback() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SystemFont::get_class_static()._native_ptr(), StringName("is_allow_system_fallback")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void SystemFont::set_force_autohinter(bool force_autohinter) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SystemFont::get_class_static()._native_ptr(), StringName("set_force_autohinter")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t force_autohinter_encoded;
	PtrToArg<bool>::encode(force_autohinter, &force_autohinter_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &force_autohinter_encoded);
}

bool SystemFont::is_force_autohinter() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SystemFont::get_class_static()._native_ptr(), StringName("is_force_autohinter")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void SystemFont::set_hinting(TextServer::Hinting hinting) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SystemFont::get_class_static()._native_ptr(), StringName("set_hinting")._native_ptr(), 1827459492);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &hinting);
}

TextServer::Hinting SystemFont::get_hinting() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SystemFont::get_class_static()._native_ptr(), StringName("get_hinting")._native_ptr(), 3683214614);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TextServer::Hinting(0));
	return (TextServer::Hinting)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void SystemFont::set_subpixel_positioning(TextServer::SubpixelPositioning subpixel_positioning) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SystemFont::get_class_static()._native_ptr(), StringName("set_subpixel_positioning")._native_ptr(), 4225742182);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &subpixel_positioning);
}

TextServer::SubpixelPositioning SystemFont::get_subpixel_positioning() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SystemFont::get_class_static()._native_ptr(), StringName("get_subpixel_positioning")._native_ptr(), 1069238588);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TextServer::SubpixelPositioning(0));
	return (TextServer::SubpixelPositioning)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void SystemFont::set_multichannel_signed_distance_field(bool msdf) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SystemFont::get_class_static()._native_ptr(), StringName("set_multichannel_signed_distance_field")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t msdf_encoded;
	PtrToArg<bool>::encode(msdf, &msdf_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &msdf_encoded);
}

bool SystemFont::is_multichannel_signed_distance_field() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SystemFont::get_class_static()._native_ptr(), StringName("is_multichannel_signed_distance_field")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void SystemFont::set_msdf_pixel_range(int32_t msdf_pixel_range) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SystemFont::get_class_static()._native_ptr(), StringName("set_msdf_pixel_range")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t msdf_pixel_range_encoded;
	PtrToArg<int64_t>::encode(msdf_pixel_range, &msdf_pixel_range_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &msdf_pixel_range_encoded);
}

int32_t SystemFont::get_msdf_pixel_range() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SystemFont::get_class_static()._native_ptr(), StringName("get_msdf_pixel_range")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void SystemFont::set_msdf_size(int32_t msdf_size) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SystemFont::get_class_static()._native_ptr(), StringName("set_msdf_size")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t msdf_size_encoded;
	PtrToArg<int64_t>::encode(msdf_size, &msdf_size_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &msdf_size_encoded);
}

int32_t SystemFont::get_msdf_size() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SystemFont::get_class_static()._native_ptr(), StringName("get_msdf_size")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void SystemFont::set_oversampling(double oversampling) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SystemFont::get_class_static()._native_ptr(), StringName("set_oversampling")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double oversampling_encoded;
	PtrToArg<double>::encode(oversampling, &oversampling_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &oversampling_encoded);
}

double SystemFont::get_oversampling() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SystemFont::get_class_static()._native_ptr(), StringName("get_oversampling")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

PackedStringArray SystemFont::get_font_names() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SystemFont::get_class_static()._native_ptr(), StringName("get_font_names")._native_ptr(), 1139954409);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedStringArray());
	return internal::_call_native_mb_ret<PackedStringArray>(_gde_method_bind, _owner);
}

void SystemFont::set_font_names(const PackedStringArray &names) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SystemFont::get_class_static()._native_ptr(), StringName("set_font_names")._native_ptr(), 4015028928);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &names);
}

bool SystemFont::get_font_italic() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SystemFont::get_class_static()._native_ptr(), StringName("get_font_italic")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void SystemFont::set_font_italic(bool italic) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SystemFont::get_class_static()._native_ptr(), StringName("set_font_italic")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t italic_encoded;
	PtrToArg<bool>::encode(italic, &italic_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &italic_encoded);
}

void SystemFont::set_font_weight(int32_t weight) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SystemFont::get_class_static()._native_ptr(), StringName("set_font_weight")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t weight_encoded;
	PtrToArg<int64_t>::encode(weight, &weight_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &weight_encoded);
}

void SystemFont::set_font_stretch(int32_t stretch) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SystemFont::get_class_static()._native_ptr(), StringName("set_font_stretch")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t stretch_encoded;
	PtrToArg<int64_t>::encode(stretch, &stretch_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &stretch_encoded);
}


} // namespace godot 