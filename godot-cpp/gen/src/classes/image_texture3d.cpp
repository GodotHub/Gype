/**************************************************************************/
/*  image_texture3d.cpp                                                   */
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

#include <godot_cpp/classes/image_texture3d.hpp>

#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

namespace godot {

Error ImageTexture3D::create(Image::Format format, int32_t width, int32_t height, int32_t depth, bool use_mipmaps, const TypedArray<Image> &data) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ImageTexture3D::get_class_static()._native_ptr(), StringName("create")._native_ptr(), 1130379827);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Error(0));
	int64_t width_encoded;
	PtrToArg<int64_t>::encode(width, &width_encoded);
	int64_t height_encoded;
	PtrToArg<int64_t>::encode(height, &height_encoded);
	int64_t depth_encoded;
	PtrToArg<int64_t>::encode(depth, &depth_encoded);
	int8_t use_mipmaps_encoded;
	PtrToArg<bool>::encode(use_mipmaps, &use_mipmaps_encoded);
	return (Error)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &format, &width_encoded, &height_encoded, &depth_encoded, &use_mipmaps_encoded, &data);
}

void ImageTexture3D::update(const TypedArray<Image> &data) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ImageTexture3D::get_class_static()._native_ptr(), StringName("update")._native_ptr(), 381264803);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &data);
}


} // namespace godot 