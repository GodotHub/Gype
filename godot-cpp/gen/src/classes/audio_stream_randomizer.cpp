/**************************************************************************/
/*  audio_stream_randomizer.cpp                                           */
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

#include <godot_cpp/classes/audio_stream_randomizer.hpp>

#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

namespace godot {

void AudioStreamRandomizer::add_stream(int32_t index, const Ref<AudioStream> &stream, double weight) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioStreamRandomizer::get_class_static()._native_ptr(), StringName("add_stream")._native_ptr(), 1892018854);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	double weight_encoded;
	PtrToArg<double>::encode(weight, &weight_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &index_encoded, (stream != nullptr ? &stream->_owner : nullptr), &weight_encoded);
}

void AudioStreamRandomizer::move_stream(int32_t index_from, int32_t index_to) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioStreamRandomizer::get_class_static()._native_ptr(), StringName("move_stream")._native_ptr(), 3937882851);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t index_from_encoded;
	PtrToArg<int64_t>::encode(index_from, &index_from_encoded);
	int64_t index_to_encoded;
	PtrToArg<int64_t>::encode(index_to, &index_to_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &index_from_encoded, &index_to_encoded);
}

void AudioStreamRandomizer::remove_stream(int32_t index) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioStreamRandomizer::get_class_static()._native_ptr(), StringName("remove_stream")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &index_encoded);
}

void AudioStreamRandomizer::set_stream(int32_t index, const Ref<AudioStream> &stream) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioStreamRandomizer::get_class_static()._native_ptr(), StringName("set_stream")._native_ptr(), 111075094);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &index_encoded, (stream != nullptr ? &stream->_owner : nullptr));
}

Ref<AudioStream> AudioStreamRandomizer::get_stream(int32_t index) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioStreamRandomizer::get_class_static()._native_ptr(), StringName("get_stream")._native_ptr(), 2739380747);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<AudioStream>());
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	return Ref<AudioStream>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<AudioStream>(_gde_method_bind, _owner, &index_encoded));
}

void AudioStreamRandomizer::set_stream_probability_weight(int32_t index, double weight) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioStreamRandomizer::get_class_static()._native_ptr(), StringName("set_stream_probability_weight")._native_ptr(), 1602489585);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	double weight_encoded;
	PtrToArg<double>::encode(weight, &weight_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &index_encoded, &weight_encoded);
}

double AudioStreamRandomizer::get_stream_probability_weight(int32_t index) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioStreamRandomizer::get_class_static()._native_ptr(), StringName("get_stream_probability_weight")._native_ptr(), 2339986948);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &index_encoded);
}

void AudioStreamRandomizer::set_streams_count(int32_t count) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioStreamRandomizer::get_class_static()._native_ptr(), StringName("set_streams_count")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t count_encoded;
	PtrToArg<int64_t>::encode(count, &count_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &count_encoded);
}

int32_t AudioStreamRandomizer::get_streams_count() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioStreamRandomizer::get_class_static()._native_ptr(), StringName("get_streams_count")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void AudioStreamRandomizer::set_random_pitch(double scale) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioStreamRandomizer::get_class_static()._native_ptr(), StringName("set_random_pitch")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double scale_encoded;
	PtrToArg<double>::encode(scale, &scale_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &scale_encoded);
}

double AudioStreamRandomizer::get_random_pitch() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioStreamRandomizer::get_class_static()._native_ptr(), StringName("get_random_pitch")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void AudioStreamRandomizer::set_random_volume_offset_db(double db_offset) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioStreamRandomizer::get_class_static()._native_ptr(), StringName("set_random_volume_offset_db")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double db_offset_encoded;
	PtrToArg<double>::encode(db_offset, &db_offset_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &db_offset_encoded);
}

double AudioStreamRandomizer::get_random_volume_offset_db() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioStreamRandomizer::get_class_static()._native_ptr(), StringName("get_random_volume_offset_db")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void AudioStreamRandomizer::set_playback_mode(AudioStreamRandomizer::PlaybackMode mode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioStreamRandomizer::get_class_static()._native_ptr(), StringName("set_playback_mode")._native_ptr(), 3950967023);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &mode);
}

AudioStreamRandomizer::PlaybackMode AudioStreamRandomizer::get_playback_mode() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioStreamRandomizer::get_class_static()._native_ptr(), StringName("get_playback_mode")._native_ptr(), 3943055077);
	CHECK_METHOD_BIND_RET(_gde_method_bind, AudioStreamRandomizer::PlaybackMode(0));
	return (AudioStreamRandomizer::PlaybackMode)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}


} // namespace godot 