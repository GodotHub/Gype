/**************************************************************************/
/*  animated_sprite2d.cpp                                                 */
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

#include <godot_cpp/classes/animated_sprite2d.hpp>

#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/classes/sprite_frames.hpp>

namespace godot {


void AnimatedSprite2D::set_sprite_frames(const Ref<SpriteFrames> &sprite_frames) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimatedSprite2D::get_class_static()._native_ptr(), StringName("set_sprite_frames")._native_ptr(), 905781144);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (sprite_frames != nullptr ? &sprite_frames->_owner : nullptr));
}

Ref<SpriteFrames> AnimatedSprite2D::get_sprite_frames() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimatedSprite2D::get_class_static()._native_ptr(), StringName("get_sprite_frames")._native_ptr(), 3804851214);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<SpriteFrames>());
	return Ref<SpriteFrames>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<SpriteFrames>(_gde_method_bind, _owner));
}

void AnimatedSprite2D::set_animation(const StringName &name) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimatedSprite2D::get_class_static()._native_ptr(), StringName("set_animation")._native_ptr(), 3304788590);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &name);
}

StringName AnimatedSprite2D::get_animation() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimatedSprite2D::get_class_static()._native_ptr(), StringName("get_animation")._native_ptr(), 2002593661);
	CHECK_METHOD_BIND_RET(_gde_method_bind, StringName());
	return internal::_call_native_mb_ret<StringName>(_gde_method_bind, _owner);
}

void AnimatedSprite2D::set_autoplay(const String &name) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimatedSprite2D::get_class_static()._native_ptr(), StringName("set_autoplay")._native_ptr(), 83702148);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &name);
}

String AnimatedSprite2D::get_autoplay() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimatedSprite2D::get_class_static()._native_ptr(), StringName("get_autoplay")._native_ptr(), 201670096);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner);
}

bool AnimatedSprite2D::is_playing() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimatedSprite2D::get_class_static()._native_ptr(), StringName("is_playing")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void AnimatedSprite2D::play(const StringName &name, double custom_speed, bool from_end) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimatedSprite2D::get_class_static()._native_ptr(), StringName("play")._native_ptr(), 2372066587);
	CHECK_METHOD_BIND(_gde_method_bind);
	double custom_speed_encoded;
	PtrToArg<double>::encode(custom_speed, &custom_speed_encoded);
	int8_t from_end_encoded;
	PtrToArg<bool>::encode(from_end, &from_end_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &name, &custom_speed_encoded, &from_end_encoded);
}

void AnimatedSprite2D::play_backwards(const StringName &name) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimatedSprite2D::get_class_static()._native_ptr(), StringName("play_backwards")._native_ptr(), 1421762485);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &name);
}

void AnimatedSprite2D::pause() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimatedSprite2D::get_class_static()._native_ptr(), StringName("pause")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void AnimatedSprite2D::stop() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimatedSprite2D::get_class_static()._native_ptr(), StringName("stop")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void AnimatedSprite2D::set_centered(bool centered) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimatedSprite2D::get_class_static()._native_ptr(), StringName("set_centered")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t centered_encoded;
	PtrToArg<bool>::encode(centered, &centered_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &centered_encoded);
}

bool AnimatedSprite2D::is_centered() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimatedSprite2D::get_class_static()._native_ptr(), StringName("is_centered")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void AnimatedSprite2D::set_offset(const Vector2 &offset) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimatedSprite2D::get_class_static()._native_ptr(), StringName("set_offset")._native_ptr(), 743155724);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &offset);
}

Vector2 AnimatedSprite2D::get_offset() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimatedSprite2D::get_class_static()._native_ptr(), StringName("get_offset")._native_ptr(), 3341600327);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector2());
	return internal::_call_native_mb_ret<Vector2>(_gde_method_bind, _owner);
}

void AnimatedSprite2D::set_flip_h(bool flip_h) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimatedSprite2D::get_class_static()._native_ptr(), StringName("set_flip_h")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t flip_h_encoded;
	PtrToArg<bool>::encode(flip_h, &flip_h_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &flip_h_encoded);
}

bool AnimatedSprite2D::is_flipped_h() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimatedSprite2D::get_class_static()._native_ptr(), StringName("is_flipped_h")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void AnimatedSprite2D::set_flip_v(bool flip_v) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimatedSprite2D::get_class_static()._native_ptr(), StringName("set_flip_v")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t flip_v_encoded;
	PtrToArg<bool>::encode(flip_v, &flip_v_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &flip_v_encoded);
}

bool AnimatedSprite2D::is_flipped_v() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimatedSprite2D::get_class_static()._native_ptr(), StringName("is_flipped_v")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void AnimatedSprite2D::set_frame(int32_t frame) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimatedSprite2D::get_class_static()._native_ptr(), StringName("set_frame")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t frame_encoded;
	PtrToArg<int64_t>::encode(frame, &frame_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &frame_encoded);
}

int32_t AnimatedSprite2D::get_frame() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimatedSprite2D::get_class_static()._native_ptr(), StringName("get_frame")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void AnimatedSprite2D::set_frame_progress(double progress) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimatedSprite2D::get_class_static()._native_ptr(), StringName("set_frame_progress")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double progress_encoded;
	PtrToArg<double>::encode(progress, &progress_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &progress_encoded);
}

double AnimatedSprite2D::get_frame_progress() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimatedSprite2D::get_class_static()._native_ptr(), StringName("get_frame_progress")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void AnimatedSprite2D::set_frame_and_progress(int32_t frame, double progress) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimatedSprite2D::get_class_static()._native_ptr(), StringName("set_frame_and_progress")._native_ptr(), 1602489585);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t frame_encoded;
	PtrToArg<int64_t>::encode(frame, &frame_encoded);
	double progress_encoded;
	PtrToArg<double>::encode(progress, &progress_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &frame_encoded, &progress_encoded);
}

void AnimatedSprite2D::set_speed_scale(double speed_scale) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimatedSprite2D::get_class_static()._native_ptr(), StringName("set_speed_scale")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double speed_scale_encoded;
	PtrToArg<double>::encode(speed_scale, &speed_scale_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &speed_scale_encoded);
}

double AnimatedSprite2D::get_speed_scale() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimatedSprite2D::get_class_static()._native_ptr(), StringName("get_speed_scale")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

double AnimatedSprite2D::get_playing_speed() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimatedSprite2D::get_class_static()._native_ptr(), StringName("get_playing_speed")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}


} // namespace godot 