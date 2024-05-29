/**************************************************************************/
/*  bit_map.cpp                                                           */
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

#include <godot_cpp/classes/bit_map.hpp>

#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/classes/image.hpp>
#include <godot_cpp/variant/rect2i.hpp>

namespace godot {

void BitMap::create(const Vector2i &size) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BitMap::get_class_static()._native_ptr(), StringName("create")._native_ptr(), 1130785943);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &size);
}

void BitMap::create_from_image_alpha(const Ref<Image> &image, double threshold) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BitMap::get_class_static()._native_ptr(), StringName("create_from_image_alpha")._native_ptr(), 106271684);
	CHECK_METHOD_BIND(_gde_method_bind);
	double threshold_encoded;
	PtrToArg<double>::encode(threshold, &threshold_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (image != nullptr ? &image->_owner : nullptr), &threshold_encoded);
}

void BitMap::set_bitv(const Vector2i &position, bool bit) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BitMap::get_class_static()._native_ptr(), StringName("set_bitv")._native_ptr(), 4153096796);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t bit_encoded;
	PtrToArg<bool>::encode(bit, &bit_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &position, &bit_encoded);
}

void BitMap::set_bit(int32_t x, int32_t y, bool bit) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BitMap::get_class_static()._native_ptr(), StringName("set_bit")._native_ptr(), 1383440665);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t x_encoded;
	PtrToArg<int64_t>::encode(x, &x_encoded);
	int64_t y_encoded;
	PtrToArg<int64_t>::encode(y, &y_encoded);
	int8_t bit_encoded;
	PtrToArg<bool>::encode(bit, &bit_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &x_encoded, &y_encoded, &bit_encoded);
}

bool BitMap::get_bitv(const Vector2i &position) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BitMap::get_class_static()._native_ptr(), StringName("get_bitv")._native_ptr(), 3900751641);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &position);
}

bool BitMap::get_bit(int32_t x, int32_t y) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BitMap::get_class_static()._native_ptr(), StringName("get_bit")._native_ptr(), 2522259332);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int64_t x_encoded;
	PtrToArg<int64_t>::encode(x, &x_encoded);
	int64_t y_encoded;
	PtrToArg<int64_t>::encode(y, &y_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &x_encoded, &y_encoded);
}

void BitMap::set_bit_rect(const Rect2i &rect, bool bit) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BitMap::get_class_static()._native_ptr(), StringName("set_bit_rect")._native_ptr(), 472162941);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t bit_encoded;
	PtrToArg<bool>::encode(bit, &bit_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &rect, &bit_encoded);
}

int32_t BitMap::get_true_bit_count() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BitMap::get_class_static()._native_ptr(), StringName("get_true_bit_count")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

Vector2i BitMap::get_size() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BitMap::get_class_static()._native_ptr(), StringName("get_size")._native_ptr(), 3690982128);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector2i());
	return internal::_call_native_mb_ret<Vector2i>(_gde_method_bind, _owner);
}

void BitMap::resize(const Vector2i &new_size) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BitMap::get_class_static()._native_ptr(), StringName("resize")._native_ptr(), 1130785943);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &new_size);
}

void BitMap::grow_mask(int32_t pixels, const Rect2i &rect) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BitMap::get_class_static()._native_ptr(), StringName("grow_mask")._native_ptr(), 3317281434);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t pixels_encoded;
	PtrToArg<int64_t>::encode(pixels, &pixels_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &pixels_encoded, &rect);
}

Ref<Image> BitMap::convert_to_image() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BitMap::get_class_static()._native_ptr(), StringName("convert_to_image")._native_ptr(), 4190603485);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<Image>());
	return Ref<Image>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<Image>(_gde_method_bind, _owner));
}

TypedArray<PackedVector2Array> BitMap::opaque_to_polygons(const Rect2i &rect, double epsilon) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(BitMap::get_class_static()._native_ptr(), StringName("opaque_to_polygons")._native_ptr(), 48478126);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TypedArray<PackedVector2Array>());
	double epsilon_encoded;
	PtrToArg<double>::encode(epsilon, &epsilon_encoded);
	return internal::_call_native_mb_ret<TypedArray<PackedVector2Array>>(_gde_method_bind, _owner, &rect, &epsilon_encoded);
}


} // namespace godot 