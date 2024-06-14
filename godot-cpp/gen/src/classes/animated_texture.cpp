/**************************************************************************/
/*  animated_texture.cpp                                                  */
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

#include <godot_cpp/classes/animated_texture.hpp>

#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

namespace godot {

const int AnimatedTexture::MAX_FRAMES = 256;

void AnimatedTexture::set_frames(int32_t frames) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimatedTexture::get_class_static()._native_ptr(), StringName("set_frames")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t frames_encoded;
	PtrToArg<int64_t>::encode(frames, &frames_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &frames_encoded);
}

int32_t AnimatedTexture::get_frames() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimatedTexture::get_class_static()._native_ptr(), StringName("get_frames")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void AnimatedTexture::set_current_frame(int32_t frame) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimatedTexture::get_class_static()._native_ptr(), StringName("set_current_frame")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t frame_encoded;
	PtrToArg<int64_t>::encode(frame, &frame_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &frame_encoded);
}

int32_t AnimatedTexture::get_current_frame() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimatedTexture::get_class_static()._native_ptr(), StringName("get_current_frame")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void AnimatedTexture::set_pause(bool pause) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimatedTexture::get_class_static()._native_ptr(), StringName("set_pause")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t pause_encoded;
	PtrToArg<bool>::encode(pause, &pause_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &pause_encoded);
}

bool AnimatedTexture::get_pause() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimatedTexture::get_class_static()._native_ptr(), StringName("get_pause")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void AnimatedTexture::set_one_shot(bool one_shot) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimatedTexture::get_class_static()._native_ptr(), StringName("set_one_shot")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t one_shot_encoded;
	PtrToArg<bool>::encode(one_shot, &one_shot_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &one_shot_encoded);
}

bool AnimatedTexture::get_one_shot() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimatedTexture::get_class_static()._native_ptr(), StringName("get_one_shot")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void AnimatedTexture::set_speed_scale(double scale) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimatedTexture::get_class_static()._native_ptr(), StringName("set_speed_scale")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double scale_encoded;
	PtrToArg<double>::encode(scale, &scale_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &scale_encoded);
}

double AnimatedTexture::get_speed_scale() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimatedTexture::get_class_static()._native_ptr(), StringName("get_speed_scale")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void AnimatedTexture::set_frame_texture(int32_t frame, const Ref<Texture2D> &texture) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimatedTexture::get_class_static()._native_ptr(), StringName("set_frame_texture")._native_ptr(), 666127730);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t frame_encoded;
	PtrToArg<int64_t>::encode(frame, &frame_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &frame_encoded, (texture != nullptr ? &texture->_owner : nullptr));
}

Ref<Texture2D> AnimatedTexture::get_frame_texture(int32_t frame) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimatedTexture::get_class_static()._native_ptr(), StringName("get_frame_texture")._native_ptr(), 3536238170);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<Texture2D>());
	int64_t frame_encoded;
	PtrToArg<int64_t>::encode(frame, &frame_encoded);
	return Ref<Texture2D>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<Texture2D>(_gde_method_bind, _owner, &frame_encoded));
}

void AnimatedTexture::set_frame_duration(int32_t frame, double duration) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimatedTexture::get_class_static()._native_ptr(), StringName("set_frame_duration")._native_ptr(), 1602489585);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t frame_encoded;
	PtrToArg<int64_t>::encode(frame, &frame_encoded);
	double duration_encoded;
	PtrToArg<double>::encode(duration, &duration_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &frame_encoded, &duration_encoded);
}

double AnimatedTexture::get_frame_duration(int32_t frame) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimatedTexture::get_class_static()._native_ptr(), StringName("get_frame_duration")._native_ptr(), 2339986948);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	int64_t frame_encoded;
	PtrToArg<int64_t>::encode(frame, &frame_encoded);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &frame_encoded);
}


} // namespace godot 