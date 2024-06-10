/**************************************************************************/
/*  audio_stream_playlist.cpp                                             */
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

#include <godot_cpp/classes/audio_stream_playlist.hpp>

#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

namespace godot {

void AudioStreamPlaylist::set_stream_count(int32_t stream_count) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioStreamPlaylist::get_class_static()._native_ptr(), StringName("set_stream_count")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t stream_count_encoded;
	PtrToArg<int64_t>::encode(stream_count, &stream_count_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &stream_count_encoded);
}

int32_t AudioStreamPlaylist::get_stream_count() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioStreamPlaylist::get_class_static()._native_ptr(), StringName("get_stream_count")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

double AudioStreamPlaylist::get_bpm() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioStreamPlaylist::get_class_static()._native_ptr(), StringName("get_bpm")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void AudioStreamPlaylist::set_list_stream(int32_t stream_index, const Ref<AudioStream> &audio_stream) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioStreamPlaylist::get_class_static()._native_ptr(), StringName("set_list_stream")._native_ptr(), 111075094);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t stream_index_encoded;
	PtrToArg<int64_t>::encode(stream_index, &stream_index_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &stream_index_encoded, (audio_stream != nullptr ? &audio_stream->_owner : nullptr));
}

Ref<AudioStream> AudioStreamPlaylist::get_list_stream(int32_t stream_index) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioStreamPlaylist::get_class_static()._native_ptr(), StringName("get_list_stream")._native_ptr(), 2739380747);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<AudioStream>());
	int64_t stream_index_encoded;
	PtrToArg<int64_t>::encode(stream_index, &stream_index_encoded);
	return Ref<AudioStream>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<AudioStream>(_gde_method_bind, _owner, &stream_index_encoded));
}

void AudioStreamPlaylist::set_shuffle(bool shuffle) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioStreamPlaylist::get_class_static()._native_ptr(), StringName("set_shuffle")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t shuffle_encoded;
	PtrToArg<bool>::encode(shuffle, &shuffle_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &shuffle_encoded);
}

bool AudioStreamPlaylist::get_shuffle() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioStreamPlaylist::get_class_static()._native_ptr(), StringName("get_shuffle")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void AudioStreamPlaylist::set_fade_time(double dec) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioStreamPlaylist::get_class_static()._native_ptr(), StringName("set_fade_time")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double dec_encoded;
	PtrToArg<double>::encode(dec, &dec_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &dec_encoded);
}

double AudioStreamPlaylist::get_fade_time() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioStreamPlaylist::get_class_static()._native_ptr(), StringName("get_fade_time")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void AudioStreamPlaylist::set_loop(bool loop) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioStreamPlaylist::get_class_static()._native_ptr(), StringName("set_loop")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t loop_encoded;
	PtrToArg<bool>::encode(loop, &loop_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &loop_encoded);
}

bool AudioStreamPlaylist::has_loop() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioStreamPlaylist::get_class_static()._native_ptr(), StringName("has_loop")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}


} // namespace godot 