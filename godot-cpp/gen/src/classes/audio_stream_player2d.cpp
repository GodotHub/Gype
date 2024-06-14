/**************************************************************************/
/*  audio_stream_player2d.cpp                                             */
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

#include <godot_cpp/classes/audio_stream_player2d.hpp>

#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/classes/audio_stream.hpp>
#include <godot_cpp/classes/audio_stream_playback.hpp>

namespace godot {


void AudioStreamPlayer2D::set_stream(const Ref<AudioStream> &stream) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioStreamPlayer2D::get_class_static()._native_ptr(), StringName("set_stream")._native_ptr(), 2210767741);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (stream != nullptr ? &stream->_owner : nullptr));
}

Ref<AudioStream> AudioStreamPlayer2D::get_stream() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioStreamPlayer2D::get_class_static()._native_ptr(), StringName("get_stream")._native_ptr(), 160907539);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<AudioStream>());
	return Ref<AudioStream>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<AudioStream>(_gde_method_bind, _owner));
}

void AudioStreamPlayer2D::set_volume_db(double volume_db) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioStreamPlayer2D::get_class_static()._native_ptr(), StringName("set_volume_db")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double volume_db_encoded;
	PtrToArg<double>::encode(volume_db, &volume_db_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &volume_db_encoded);
}

double AudioStreamPlayer2D::get_volume_db() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioStreamPlayer2D::get_class_static()._native_ptr(), StringName("get_volume_db")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void AudioStreamPlayer2D::set_pitch_scale(double pitch_scale) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioStreamPlayer2D::get_class_static()._native_ptr(), StringName("set_pitch_scale")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double pitch_scale_encoded;
	PtrToArg<double>::encode(pitch_scale, &pitch_scale_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &pitch_scale_encoded);
}

double AudioStreamPlayer2D::get_pitch_scale() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioStreamPlayer2D::get_class_static()._native_ptr(), StringName("get_pitch_scale")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void AudioStreamPlayer2D::play(double from_position) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioStreamPlayer2D::get_class_static()._native_ptr(), StringName("play")._native_ptr(), 1958160172);
	CHECK_METHOD_BIND(_gde_method_bind);
	double from_position_encoded;
	PtrToArg<double>::encode(from_position, &from_position_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &from_position_encoded);
}

void AudioStreamPlayer2D::seek(double to_position) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioStreamPlayer2D::get_class_static()._native_ptr(), StringName("seek")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double to_position_encoded;
	PtrToArg<double>::encode(to_position, &to_position_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &to_position_encoded);
}

void AudioStreamPlayer2D::stop() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioStreamPlayer2D::get_class_static()._native_ptr(), StringName("stop")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

bool AudioStreamPlayer2D::is_playing() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioStreamPlayer2D::get_class_static()._native_ptr(), StringName("is_playing")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

double AudioStreamPlayer2D::get_playback_position() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioStreamPlayer2D::get_class_static()._native_ptr(), StringName("get_playback_position")._native_ptr(), 191475506);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void AudioStreamPlayer2D::set_bus(const StringName &bus) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioStreamPlayer2D::get_class_static()._native_ptr(), StringName("set_bus")._native_ptr(), 3304788590);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &bus);
}

StringName AudioStreamPlayer2D::get_bus() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioStreamPlayer2D::get_class_static()._native_ptr(), StringName("get_bus")._native_ptr(), 2002593661);
	CHECK_METHOD_BIND_RET(_gde_method_bind, StringName());
	return internal::_call_native_mb_ret<StringName>(_gde_method_bind, _owner);
}

void AudioStreamPlayer2D::set_autoplay(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioStreamPlayer2D::get_class_static()._native_ptr(), StringName("set_autoplay")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

bool AudioStreamPlayer2D::is_autoplay_enabled() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioStreamPlayer2D::get_class_static()._native_ptr(), StringName("is_autoplay_enabled")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void AudioStreamPlayer2D::set_max_distance(double pixels) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioStreamPlayer2D::get_class_static()._native_ptr(), StringName("set_max_distance")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double pixels_encoded;
	PtrToArg<double>::encode(pixels, &pixels_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &pixels_encoded);
}

double AudioStreamPlayer2D::get_max_distance() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioStreamPlayer2D::get_class_static()._native_ptr(), StringName("get_max_distance")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void AudioStreamPlayer2D::set_attenuation(double curve) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioStreamPlayer2D::get_class_static()._native_ptr(), StringName("set_attenuation")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double curve_encoded;
	PtrToArg<double>::encode(curve, &curve_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &curve_encoded);
}

double AudioStreamPlayer2D::get_attenuation() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioStreamPlayer2D::get_class_static()._native_ptr(), StringName("get_attenuation")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void AudioStreamPlayer2D::set_area_mask(uint32_t mask) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioStreamPlayer2D::get_class_static()._native_ptr(), StringName("set_area_mask")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t mask_encoded;
	PtrToArg<int64_t>::encode(mask, &mask_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &mask_encoded);
}

uint32_t AudioStreamPlayer2D::get_area_mask() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioStreamPlayer2D::get_class_static()._native_ptr(), StringName("get_area_mask")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void AudioStreamPlayer2D::set_stream_paused(bool pause) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioStreamPlayer2D::get_class_static()._native_ptr(), StringName("set_stream_paused")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t pause_encoded;
	PtrToArg<bool>::encode(pause, &pause_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &pause_encoded);
}

bool AudioStreamPlayer2D::get_stream_paused() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioStreamPlayer2D::get_class_static()._native_ptr(), StringName("get_stream_paused")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void AudioStreamPlayer2D::set_max_polyphony(int32_t max_polyphony) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioStreamPlayer2D::get_class_static()._native_ptr(), StringName("set_max_polyphony")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t max_polyphony_encoded;
	PtrToArg<int64_t>::encode(max_polyphony, &max_polyphony_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &max_polyphony_encoded);
}

int32_t AudioStreamPlayer2D::get_max_polyphony() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioStreamPlayer2D::get_class_static()._native_ptr(), StringName("get_max_polyphony")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void AudioStreamPlayer2D::set_panning_strength(double panning_strength) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioStreamPlayer2D::get_class_static()._native_ptr(), StringName("set_panning_strength")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double panning_strength_encoded;
	PtrToArg<double>::encode(panning_strength, &panning_strength_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &panning_strength_encoded);
}

double AudioStreamPlayer2D::get_panning_strength() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioStreamPlayer2D::get_class_static()._native_ptr(), StringName("get_panning_strength")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

bool AudioStreamPlayer2D::has_stream_playback() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioStreamPlayer2D::get_class_static()._native_ptr(), StringName("has_stream_playback")._native_ptr(), 2240911060);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

Ref<AudioStreamPlayback> AudioStreamPlayer2D::get_stream_playback() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioStreamPlayer2D::get_class_static()._native_ptr(), StringName("get_stream_playback")._native_ptr(), 210135309);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<AudioStreamPlayback>());
	return Ref<AudioStreamPlayback>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<AudioStreamPlayback>(_gde_method_bind, _owner));
}


} // namespace godot 