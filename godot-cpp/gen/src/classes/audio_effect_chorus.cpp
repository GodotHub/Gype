/**************************************************************************/
/*  audio_effect_chorus.cpp                                               */
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

#include <godot_cpp/classes/audio_effect_chorus.hpp>

#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

namespace godot {

void AudioEffectChorus::set_voice_count(int32_t voices) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioEffectChorus::get_class_static()._native_ptr(), StringName("set_voice_count")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t voices_encoded;
	PtrToArg<int64_t>::encode(voices, &voices_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &voices_encoded);
}

int32_t AudioEffectChorus::get_voice_count() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioEffectChorus::get_class_static()._native_ptr(), StringName("get_voice_count")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void AudioEffectChorus::set_voice_delay_ms(int32_t voice_idx, double delay_ms) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioEffectChorus::get_class_static()._native_ptr(), StringName("set_voice_delay_ms")._native_ptr(), 1602489585);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t voice_idx_encoded;
	PtrToArg<int64_t>::encode(voice_idx, &voice_idx_encoded);
	double delay_ms_encoded;
	PtrToArg<double>::encode(delay_ms, &delay_ms_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &voice_idx_encoded, &delay_ms_encoded);
}

double AudioEffectChorus::get_voice_delay_ms(int32_t voice_idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioEffectChorus::get_class_static()._native_ptr(), StringName("get_voice_delay_ms")._native_ptr(), 2339986948);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	int64_t voice_idx_encoded;
	PtrToArg<int64_t>::encode(voice_idx, &voice_idx_encoded);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &voice_idx_encoded);
}

void AudioEffectChorus::set_voice_rate_hz(int32_t voice_idx, double rate_hz) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioEffectChorus::get_class_static()._native_ptr(), StringName("set_voice_rate_hz")._native_ptr(), 1602489585);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t voice_idx_encoded;
	PtrToArg<int64_t>::encode(voice_idx, &voice_idx_encoded);
	double rate_hz_encoded;
	PtrToArg<double>::encode(rate_hz, &rate_hz_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &voice_idx_encoded, &rate_hz_encoded);
}

double AudioEffectChorus::get_voice_rate_hz(int32_t voice_idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioEffectChorus::get_class_static()._native_ptr(), StringName("get_voice_rate_hz")._native_ptr(), 2339986948);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	int64_t voice_idx_encoded;
	PtrToArg<int64_t>::encode(voice_idx, &voice_idx_encoded);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &voice_idx_encoded);
}

void AudioEffectChorus::set_voice_depth_ms(int32_t voice_idx, double depth_ms) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioEffectChorus::get_class_static()._native_ptr(), StringName("set_voice_depth_ms")._native_ptr(), 1602489585);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t voice_idx_encoded;
	PtrToArg<int64_t>::encode(voice_idx, &voice_idx_encoded);
	double depth_ms_encoded;
	PtrToArg<double>::encode(depth_ms, &depth_ms_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &voice_idx_encoded, &depth_ms_encoded);
}

double AudioEffectChorus::get_voice_depth_ms(int32_t voice_idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioEffectChorus::get_class_static()._native_ptr(), StringName("get_voice_depth_ms")._native_ptr(), 2339986948);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	int64_t voice_idx_encoded;
	PtrToArg<int64_t>::encode(voice_idx, &voice_idx_encoded);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &voice_idx_encoded);
}

void AudioEffectChorus::set_voice_level_db(int32_t voice_idx, double level_db) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioEffectChorus::get_class_static()._native_ptr(), StringName("set_voice_level_db")._native_ptr(), 1602489585);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t voice_idx_encoded;
	PtrToArg<int64_t>::encode(voice_idx, &voice_idx_encoded);
	double level_db_encoded;
	PtrToArg<double>::encode(level_db, &level_db_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &voice_idx_encoded, &level_db_encoded);
}

double AudioEffectChorus::get_voice_level_db(int32_t voice_idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioEffectChorus::get_class_static()._native_ptr(), StringName("get_voice_level_db")._native_ptr(), 2339986948);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	int64_t voice_idx_encoded;
	PtrToArg<int64_t>::encode(voice_idx, &voice_idx_encoded);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &voice_idx_encoded);
}

void AudioEffectChorus::set_voice_cutoff_hz(int32_t voice_idx, double cutoff_hz) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioEffectChorus::get_class_static()._native_ptr(), StringName("set_voice_cutoff_hz")._native_ptr(), 1602489585);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t voice_idx_encoded;
	PtrToArg<int64_t>::encode(voice_idx, &voice_idx_encoded);
	double cutoff_hz_encoded;
	PtrToArg<double>::encode(cutoff_hz, &cutoff_hz_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &voice_idx_encoded, &cutoff_hz_encoded);
}

double AudioEffectChorus::get_voice_cutoff_hz(int32_t voice_idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioEffectChorus::get_class_static()._native_ptr(), StringName("get_voice_cutoff_hz")._native_ptr(), 2339986948);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	int64_t voice_idx_encoded;
	PtrToArg<int64_t>::encode(voice_idx, &voice_idx_encoded);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &voice_idx_encoded);
}

void AudioEffectChorus::set_voice_pan(int32_t voice_idx, double pan) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioEffectChorus::get_class_static()._native_ptr(), StringName("set_voice_pan")._native_ptr(), 1602489585);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t voice_idx_encoded;
	PtrToArg<int64_t>::encode(voice_idx, &voice_idx_encoded);
	double pan_encoded;
	PtrToArg<double>::encode(pan, &pan_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &voice_idx_encoded, &pan_encoded);
}

double AudioEffectChorus::get_voice_pan(int32_t voice_idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioEffectChorus::get_class_static()._native_ptr(), StringName("get_voice_pan")._native_ptr(), 2339986948);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	int64_t voice_idx_encoded;
	PtrToArg<int64_t>::encode(voice_idx, &voice_idx_encoded);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &voice_idx_encoded);
}

void AudioEffectChorus::set_wet(double amount) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioEffectChorus::get_class_static()._native_ptr(), StringName("set_wet")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double amount_encoded;
	PtrToArg<double>::encode(amount, &amount_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &amount_encoded);
}

double AudioEffectChorus::get_wet() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioEffectChorus::get_class_static()._native_ptr(), StringName("get_wet")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void AudioEffectChorus::set_dry(double amount) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioEffectChorus::get_class_static()._native_ptr(), StringName("set_dry")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double amount_encoded;
	PtrToArg<double>::encode(amount, &amount_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &amount_encoded);
}

double AudioEffectChorus::get_dry() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioEffectChorus::get_class_static()._native_ptr(), StringName("get_dry")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}


} // namespace godot 