/**************************************************************************/
/*  audio_stream_interactive.cpp                                          */
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

#include <godot_cpp/classes/audio_stream_interactive.hpp>

#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

namespace godot {

const int AudioStreamInteractive::CLIP_ANY = -1;

void AudioStreamInteractive::set_clip_count(int32_t clip_count) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioStreamInteractive::get_class_static()._native_ptr(), StringName("set_clip_count")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t clip_count_encoded;
	PtrToArg<int64_t>::encode(clip_count, &clip_count_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &clip_count_encoded);
}

int32_t AudioStreamInteractive::get_clip_count() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioStreamInteractive::get_class_static()._native_ptr(), StringName("get_clip_count")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void AudioStreamInteractive::set_initial_clip(int32_t clip_index) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioStreamInteractive::get_class_static()._native_ptr(), StringName("set_initial_clip")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t clip_index_encoded;
	PtrToArg<int64_t>::encode(clip_index, &clip_index_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &clip_index_encoded);
}

int32_t AudioStreamInteractive::get_initial_clip() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioStreamInteractive::get_class_static()._native_ptr(), StringName("get_initial_clip")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void AudioStreamInteractive::set_clip_name(int32_t clip_index, const StringName &name) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioStreamInteractive::get_class_static()._native_ptr(), StringName("set_clip_name")._native_ptr(), 3780747571);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t clip_index_encoded;
	PtrToArg<int64_t>::encode(clip_index, &clip_index_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &clip_index_encoded, &name);
}

StringName AudioStreamInteractive::get_clip_name(int32_t clip_index) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioStreamInteractive::get_class_static()._native_ptr(), StringName("get_clip_name")._native_ptr(), 659327637);
	CHECK_METHOD_BIND_RET(_gde_method_bind, StringName());
	int64_t clip_index_encoded;
	PtrToArg<int64_t>::encode(clip_index, &clip_index_encoded);
	return internal::_call_native_mb_ret<StringName>(_gde_method_bind, _owner, &clip_index_encoded);
}

void AudioStreamInteractive::set_clip_stream(int32_t clip_index, const Ref<AudioStream> &stream) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioStreamInteractive::get_class_static()._native_ptr(), StringName("set_clip_stream")._native_ptr(), 111075094);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t clip_index_encoded;
	PtrToArg<int64_t>::encode(clip_index, &clip_index_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &clip_index_encoded, (stream != nullptr ? &stream->_owner : nullptr));
}

Ref<AudioStream> AudioStreamInteractive::get_clip_stream(int32_t clip_index) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioStreamInteractive::get_class_static()._native_ptr(), StringName("get_clip_stream")._native_ptr(), 2739380747);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<AudioStream>());
	int64_t clip_index_encoded;
	PtrToArg<int64_t>::encode(clip_index, &clip_index_encoded);
	return Ref<AudioStream>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<AudioStream>(_gde_method_bind, _owner, &clip_index_encoded));
}

void AudioStreamInteractive::set_clip_auto_advance(int32_t clip_index, AudioStreamInteractive::AutoAdvanceMode mode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioStreamInteractive::get_class_static()._native_ptr(), StringName("set_clip_auto_advance")._native_ptr(), 57217598);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t clip_index_encoded;
	PtrToArg<int64_t>::encode(clip_index, &clip_index_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &clip_index_encoded, &mode);
}

AudioStreamInteractive::AutoAdvanceMode AudioStreamInteractive::get_clip_auto_advance(int32_t clip_index) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioStreamInteractive::get_class_static()._native_ptr(), StringName("get_clip_auto_advance")._native_ptr(), 1778634807);
	CHECK_METHOD_BIND_RET(_gde_method_bind, AudioStreamInteractive::AutoAdvanceMode(0));
	int64_t clip_index_encoded;
	PtrToArg<int64_t>::encode(clip_index, &clip_index_encoded);
	return (AudioStreamInteractive::AutoAdvanceMode)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &clip_index_encoded);
}

void AudioStreamInteractive::set_clip_auto_advance_next_clip(int32_t clip_index, int32_t auto_advance_next_clip) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioStreamInteractive::get_class_static()._native_ptr(), StringName("set_clip_auto_advance_next_clip")._native_ptr(), 3937882851);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t clip_index_encoded;
	PtrToArg<int64_t>::encode(clip_index, &clip_index_encoded);
	int64_t auto_advance_next_clip_encoded;
	PtrToArg<int64_t>::encode(auto_advance_next_clip, &auto_advance_next_clip_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &clip_index_encoded, &auto_advance_next_clip_encoded);
}

int32_t AudioStreamInteractive::get_clip_auto_advance_next_clip(int32_t clip_index) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioStreamInteractive::get_class_static()._native_ptr(), StringName("get_clip_auto_advance_next_clip")._native_ptr(), 923996154);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t clip_index_encoded;
	PtrToArg<int64_t>::encode(clip_index, &clip_index_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &clip_index_encoded);
}

void AudioStreamInteractive::add_transition(int32_t from_clip, int32_t to_clip, AudioStreamInteractive::TransitionFromTime from_time, AudioStreamInteractive::TransitionToTime to_time, AudioStreamInteractive::FadeMode fade_mode, double fade_beats, bool use_filler_clip, int32_t filler_clip, bool hold_previous) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioStreamInteractive::get_class_static()._native_ptr(), StringName("add_transition")._native_ptr(), 1630280552);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t from_clip_encoded;
	PtrToArg<int64_t>::encode(from_clip, &from_clip_encoded);
	int64_t to_clip_encoded;
	PtrToArg<int64_t>::encode(to_clip, &to_clip_encoded);
	double fade_beats_encoded;
	PtrToArg<double>::encode(fade_beats, &fade_beats_encoded);
	int8_t use_filler_clip_encoded;
	PtrToArg<bool>::encode(use_filler_clip, &use_filler_clip_encoded);
	int64_t filler_clip_encoded;
	PtrToArg<int64_t>::encode(filler_clip, &filler_clip_encoded);
	int8_t hold_previous_encoded;
	PtrToArg<bool>::encode(hold_previous, &hold_previous_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &from_clip_encoded, &to_clip_encoded, &from_time, &to_time, &fade_mode, &fade_beats_encoded, &use_filler_clip_encoded, &filler_clip_encoded, &hold_previous_encoded);
}

bool AudioStreamInteractive::has_transition(int32_t from_clip, int32_t to_clip) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioStreamInteractive::get_class_static()._native_ptr(), StringName("has_transition")._native_ptr(), 2522259332);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int64_t from_clip_encoded;
	PtrToArg<int64_t>::encode(from_clip, &from_clip_encoded);
	int64_t to_clip_encoded;
	PtrToArg<int64_t>::encode(to_clip, &to_clip_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &from_clip_encoded, &to_clip_encoded);
}

void AudioStreamInteractive::erase_transition(int32_t from_clip, int32_t to_clip) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioStreamInteractive::get_class_static()._native_ptr(), StringName("erase_transition")._native_ptr(), 3937882851);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t from_clip_encoded;
	PtrToArg<int64_t>::encode(from_clip, &from_clip_encoded);
	int64_t to_clip_encoded;
	PtrToArg<int64_t>::encode(to_clip, &to_clip_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &from_clip_encoded, &to_clip_encoded);
}

PackedInt32Array AudioStreamInteractive::get_transition_list() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioStreamInteractive::get_class_static()._native_ptr(), StringName("get_transition_list")._native_ptr(), 1930428628);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedInt32Array());
	return internal::_call_native_mb_ret<PackedInt32Array>(_gde_method_bind, _owner);
}

AudioStreamInteractive::TransitionFromTime AudioStreamInteractive::get_transition_from_time(int32_t from_clip, int32_t to_clip) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioStreamInteractive::get_class_static()._native_ptr(), StringName("get_transition_from_time")._native_ptr(), 3453338158);
	CHECK_METHOD_BIND_RET(_gde_method_bind, AudioStreamInteractive::TransitionFromTime(0));
	int64_t from_clip_encoded;
	PtrToArg<int64_t>::encode(from_clip, &from_clip_encoded);
	int64_t to_clip_encoded;
	PtrToArg<int64_t>::encode(to_clip, &to_clip_encoded);
	return (AudioStreamInteractive::TransitionFromTime)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &from_clip_encoded, &to_clip_encoded);
}

AudioStreamInteractive::TransitionToTime AudioStreamInteractive::get_transition_to_time(int32_t from_clip, int32_t to_clip) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioStreamInteractive::get_class_static()._native_ptr(), StringName("get_transition_to_time")._native_ptr(), 1369651373);
	CHECK_METHOD_BIND_RET(_gde_method_bind, AudioStreamInteractive::TransitionToTime(0));
	int64_t from_clip_encoded;
	PtrToArg<int64_t>::encode(from_clip, &from_clip_encoded);
	int64_t to_clip_encoded;
	PtrToArg<int64_t>::encode(to_clip, &to_clip_encoded);
	return (AudioStreamInteractive::TransitionToTime)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &from_clip_encoded, &to_clip_encoded);
}

AudioStreamInteractive::FadeMode AudioStreamInteractive::get_transition_fade_mode(int32_t from_clip, int32_t to_clip) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioStreamInteractive::get_class_static()._native_ptr(), StringName("get_transition_fade_mode")._native_ptr(), 4065396087);
	CHECK_METHOD_BIND_RET(_gde_method_bind, AudioStreamInteractive::FadeMode(0));
	int64_t from_clip_encoded;
	PtrToArg<int64_t>::encode(from_clip, &from_clip_encoded);
	int64_t to_clip_encoded;
	PtrToArg<int64_t>::encode(to_clip, &to_clip_encoded);
	return (AudioStreamInteractive::FadeMode)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &from_clip_encoded, &to_clip_encoded);
}

double AudioStreamInteractive::get_transition_fade_beats(int32_t from_clip, int32_t to_clip) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioStreamInteractive::get_class_static()._native_ptr(), StringName("get_transition_fade_beats")._native_ptr(), 3085491603);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	int64_t from_clip_encoded;
	PtrToArg<int64_t>::encode(from_clip, &from_clip_encoded);
	int64_t to_clip_encoded;
	PtrToArg<int64_t>::encode(to_clip, &to_clip_encoded);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &from_clip_encoded, &to_clip_encoded);
}

bool AudioStreamInteractive::is_transition_using_filler_clip(int32_t from_clip, int32_t to_clip) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioStreamInteractive::get_class_static()._native_ptr(), StringName("is_transition_using_filler_clip")._native_ptr(), 2522259332);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int64_t from_clip_encoded;
	PtrToArg<int64_t>::encode(from_clip, &from_clip_encoded);
	int64_t to_clip_encoded;
	PtrToArg<int64_t>::encode(to_clip, &to_clip_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &from_clip_encoded, &to_clip_encoded);
}

int32_t AudioStreamInteractive::get_transition_filler_clip(int32_t from_clip, int32_t to_clip) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioStreamInteractive::get_class_static()._native_ptr(), StringName("get_transition_filler_clip")._native_ptr(), 3175239445);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t from_clip_encoded;
	PtrToArg<int64_t>::encode(from_clip, &from_clip_encoded);
	int64_t to_clip_encoded;
	PtrToArg<int64_t>::encode(to_clip, &to_clip_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &from_clip_encoded, &to_clip_encoded);
}

bool AudioStreamInteractive::is_transition_holding_previous(int32_t from_clip, int32_t to_clip) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AudioStreamInteractive::get_class_static()._native_ptr(), StringName("is_transition_holding_previous")._native_ptr(), 2522259332);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int64_t from_clip_encoded;
	PtrToArg<int64_t>::encode(from_clip, &from_clip_encoded);
	int64_t to_clip_encoded;
	PtrToArg<int64_t>::encode(to_clip, &to_clip_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &from_clip_encoded, &to_clip_encoded);
}


} // namespace godot 