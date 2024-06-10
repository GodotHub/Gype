/**************************************************************************/
/*  noise.cpp                                                             */
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

#include <godot_cpp/classes/noise.hpp>

#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/classes/image.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <godot_cpp/variant/vector3.hpp>

namespace godot {

double Noise::get_noise_1d(double x) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Noise::get_class_static()._native_ptr(), StringName("get_noise_1d")._native_ptr(), 3919130443);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	double x_encoded;
	PtrToArg<double>::encode(x, &x_encoded);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &x_encoded);
}

double Noise::get_noise_2d(double x, double y) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Noise::get_class_static()._native_ptr(), StringName("get_noise_2d")._native_ptr(), 2753205203);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	double x_encoded;
	PtrToArg<double>::encode(x, &x_encoded);
	double y_encoded;
	PtrToArg<double>::encode(y, &y_encoded);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &x_encoded, &y_encoded);
}

double Noise::get_noise_2dv(const Vector2 &v) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Noise::get_class_static()._native_ptr(), StringName("get_noise_2dv")._native_ptr(), 2276447920);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &v);
}

double Noise::get_noise_3d(double x, double y, double z) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Noise::get_class_static()._native_ptr(), StringName("get_noise_3d")._native_ptr(), 973811851);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	double x_encoded;
	PtrToArg<double>::encode(x, &x_encoded);
	double y_encoded;
	PtrToArg<double>::encode(y, &y_encoded);
	double z_encoded;
	PtrToArg<double>::encode(z, &z_encoded);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &x_encoded, &y_encoded, &z_encoded);
}

double Noise::get_noise_3dv(const Vector3 &v) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Noise::get_class_static()._native_ptr(), StringName("get_noise_3dv")._native_ptr(), 1109078154);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &v);
}

Ref<Image> Noise::get_image(int32_t width, int32_t height, bool invert, bool in_3d_space, bool normalize) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Noise::get_class_static()._native_ptr(), StringName("get_image")._native_ptr(), 3180683109);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<Image>());
	int64_t width_encoded;
	PtrToArg<int64_t>::encode(width, &width_encoded);
	int64_t height_encoded;
	PtrToArg<int64_t>::encode(height, &height_encoded);
	int8_t invert_encoded;
	PtrToArg<bool>::encode(invert, &invert_encoded);
	int8_t in_3d_space_encoded;
	PtrToArg<bool>::encode(in_3d_space, &in_3d_space_encoded);
	int8_t normalize_encoded;
	PtrToArg<bool>::encode(normalize, &normalize_encoded);
	return Ref<Image>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<Image>(_gde_method_bind, _owner, &width_encoded, &height_encoded, &invert_encoded, &in_3d_space_encoded, &normalize_encoded));
}

Ref<Image> Noise::get_seamless_image(int32_t width, int32_t height, bool invert, bool in_3d_space, double skirt, bool normalize) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Noise::get_class_static()._native_ptr(), StringName("get_seamless_image")._native_ptr(), 2770743602);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<Image>());
	int64_t width_encoded;
	PtrToArg<int64_t>::encode(width, &width_encoded);
	int64_t height_encoded;
	PtrToArg<int64_t>::encode(height, &height_encoded);
	int8_t invert_encoded;
	PtrToArg<bool>::encode(invert, &invert_encoded);
	int8_t in_3d_space_encoded;
	PtrToArg<bool>::encode(in_3d_space, &in_3d_space_encoded);
	double skirt_encoded;
	PtrToArg<double>::encode(skirt, &skirt_encoded);
	int8_t normalize_encoded;
	PtrToArg<bool>::encode(normalize, &normalize_encoded);
	return Ref<Image>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<Image>(_gde_method_bind, _owner, &width_encoded, &height_encoded, &invert_encoded, &in_3d_space_encoded, &skirt_encoded, &normalize_encoded));
}

TypedArray<Image> Noise::get_image_3d(int32_t width, int32_t height, int32_t depth, bool invert, bool normalize) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Noise::get_class_static()._native_ptr(), StringName("get_image_3d")._native_ptr(), 3977814329);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TypedArray<Image>());
	int64_t width_encoded;
	PtrToArg<int64_t>::encode(width, &width_encoded);
	int64_t height_encoded;
	PtrToArg<int64_t>::encode(height, &height_encoded);
	int64_t depth_encoded;
	PtrToArg<int64_t>::encode(depth, &depth_encoded);
	int8_t invert_encoded;
	PtrToArg<bool>::encode(invert, &invert_encoded);
	int8_t normalize_encoded;
	PtrToArg<bool>::encode(normalize, &normalize_encoded);
	return internal::_call_native_mb_ret<TypedArray<Image>>(_gde_method_bind, _owner, &width_encoded, &height_encoded, &depth_encoded, &invert_encoded, &normalize_encoded);
}

TypedArray<Image> Noise::get_seamless_image_3d(int32_t width, int32_t height, int32_t depth, bool invert, double skirt, bool normalize) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Noise::get_class_static()._native_ptr(), StringName("get_seamless_image_3d")._native_ptr(), 451006340);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TypedArray<Image>());
	int64_t width_encoded;
	PtrToArg<int64_t>::encode(width, &width_encoded);
	int64_t height_encoded;
	PtrToArg<int64_t>::encode(height, &height_encoded);
	int64_t depth_encoded;
	PtrToArg<int64_t>::encode(depth, &depth_encoded);
	int8_t invert_encoded;
	PtrToArg<bool>::encode(invert, &invert_encoded);
	double skirt_encoded;
	PtrToArg<double>::encode(skirt, &skirt_encoded);
	int8_t normalize_encoded;
	PtrToArg<bool>::encode(normalize, &normalize_encoded);
	return internal::_call_native_mb_ret<TypedArray<Image>>(_gde_method_bind, _owner, &width_encoded, &height_encoded, &depth_encoded, &invert_encoded, &skirt_encoded, &normalize_encoded);
}


} // namespace godot 