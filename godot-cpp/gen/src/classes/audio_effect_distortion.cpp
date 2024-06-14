/**************************************************************************/
/*  audio_effect_distortion.cpp                                           */
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

#include <godot_cpp/classes/audio_effect_distortion.hpp>

#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

namespace godot {


void AudioEffectDistortion::set_mode(AudioEffectDistortion::Mode mode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioEffectDistortion::get_class_static()._native_ptr(), StringName("set_mode")._native_ptr(), 1314744793);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &mode);
}

AudioEffectDistortion::Mode AudioEffectDistortion::get_mode() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioEffectDistortion::get_class_static()._native_ptr(), StringName("get_mode")._native_ptr(), 809118343);
	CHECK_METHOD_BIND_RET(_gde_method_bind, AudioEffectDistortion::Mode(0));
	return (AudioEffectDistortion::Mode)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void AudioEffectDistortion::set_pre_gain(double pre_gain) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioEffectDistortion::get_class_static()._native_ptr(), StringName("set_pre_gain")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double pre_gain_encoded;
	PtrToArg<double>::encode(pre_gain, &pre_gain_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &pre_gain_encoded);
}

double AudioEffectDistortion::get_pre_gain() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioEffectDistortion::get_class_static()._native_ptr(), StringName("get_pre_gain")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void AudioEffectDistortion::set_keep_hf_hz(double keep_hf_hz) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioEffectDistortion::get_class_static()._native_ptr(), StringName("set_keep_hf_hz")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double keep_hf_hz_encoded;
	PtrToArg<double>::encode(keep_hf_hz, &keep_hf_hz_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &keep_hf_hz_encoded);
}

double AudioEffectDistortion::get_keep_hf_hz() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioEffectDistortion::get_class_static()._native_ptr(), StringName("get_keep_hf_hz")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void AudioEffectDistortion::set_drive(double drive) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioEffectDistortion::get_class_static()._native_ptr(), StringName("set_drive")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double drive_encoded;
	PtrToArg<double>::encode(drive, &drive_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &drive_encoded);
}

double AudioEffectDistortion::get_drive() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioEffectDistortion::get_class_static()._native_ptr(), StringName("get_drive")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void AudioEffectDistortion::set_post_gain(double post_gain) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioEffectDistortion::get_class_static()._native_ptr(), StringName("set_post_gain")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double post_gain_encoded;
	PtrToArg<double>::encode(post_gain, &post_gain_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &post_gain_encoded);
}

double AudioEffectDistortion::get_post_gain() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioEffectDistortion::get_class_static()._native_ptr(), StringName("get_post_gain")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}


} // namespace godot 