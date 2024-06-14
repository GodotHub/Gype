/**************************************************************************/
/*  animation.cpp                                                         */
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

#include <godot_cpp/classes/animation.hpp>

#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

namespace godot {


int32_t Animation::add_track(Animation::TrackType type, int32_t at_position) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Animation::get_class_static()._native_ptr(), StringName("add_track")._native_ptr(), 3843682357);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t at_position_encoded;
	PtrToArg<int64_t>::encode(at_position, &at_position_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &type, &at_position_encoded);
}

void Animation::remove_track(int32_t track_idx) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Animation::get_class_static()._native_ptr(), StringName("remove_track")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t track_idx_encoded;
	PtrToArg<int64_t>::encode(track_idx, &track_idx_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &track_idx_encoded);
}

int32_t Animation::get_track_count() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Animation::get_class_static()._native_ptr(), StringName("get_track_count")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

Animation::TrackType Animation::track_get_type(int32_t track_idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Animation::get_class_static()._native_ptr(), StringName("track_get_type")._native_ptr(), 3445944217);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Animation::TrackType(0));
	int64_t track_idx_encoded;
	PtrToArg<int64_t>::encode(track_idx, &track_idx_encoded);
	return (Animation::TrackType)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &track_idx_encoded);
}

NodePath Animation::track_get_path(int32_t track_idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Animation::get_class_static()._native_ptr(), StringName("track_get_path")._native_ptr(), 408788394);
	CHECK_METHOD_BIND_RET(_gde_method_bind, NodePath());
	int64_t track_idx_encoded;
	PtrToArg<int64_t>::encode(track_idx, &track_idx_encoded);
	return internal::_call_native_mb_ret<NodePath>(_gde_method_bind, _owner, &track_idx_encoded);
}

void Animation::track_set_path(int32_t track_idx, const NodePath &path) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Animation::get_class_static()._native_ptr(), StringName("track_set_path")._native_ptr(), 2761262315);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t track_idx_encoded;
	PtrToArg<int64_t>::encode(track_idx, &track_idx_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &track_idx_encoded, &path);
}

int32_t Animation::find_track(const NodePath &path, Animation::TrackType type) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Animation::get_class_static()._native_ptr(), StringName("find_track")._native_ptr(), 245376003);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &path, &type);
}

void Animation::track_move_up(int32_t track_idx) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Animation::get_class_static()._native_ptr(), StringName("track_move_up")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t track_idx_encoded;
	PtrToArg<int64_t>::encode(track_idx, &track_idx_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &track_idx_encoded);
}

void Animation::track_move_down(int32_t track_idx) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Animation::get_class_static()._native_ptr(), StringName("track_move_down")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t track_idx_encoded;
	PtrToArg<int64_t>::encode(track_idx, &track_idx_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &track_idx_encoded);
}

void Animation::track_move_to(int32_t track_idx, int32_t to_idx) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Animation::get_class_static()._native_ptr(), StringName("track_move_to")._native_ptr(), 3937882851);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t track_idx_encoded;
	PtrToArg<int64_t>::encode(track_idx, &track_idx_encoded);
	int64_t to_idx_encoded;
	PtrToArg<int64_t>::encode(to_idx, &to_idx_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &track_idx_encoded, &to_idx_encoded);
}

void Animation::track_swap(int32_t track_idx, int32_t with_idx) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Animation::get_class_static()._native_ptr(), StringName("track_swap")._native_ptr(), 3937882851);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t track_idx_encoded;
	PtrToArg<int64_t>::encode(track_idx, &track_idx_encoded);
	int64_t with_idx_encoded;
	PtrToArg<int64_t>::encode(with_idx, &with_idx_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &track_idx_encoded, &with_idx_encoded);
}

void Animation::track_set_imported(int32_t track_idx, bool imported) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Animation::get_class_static()._native_ptr(), StringName("track_set_imported")._native_ptr(), 300928843);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t track_idx_encoded;
	PtrToArg<int64_t>::encode(track_idx, &track_idx_encoded);
	int8_t imported_encoded;
	PtrToArg<bool>::encode(imported, &imported_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &track_idx_encoded, &imported_encoded);
}

bool Animation::track_is_imported(int32_t track_idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Animation::get_class_static()._native_ptr(), StringName("track_is_imported")._native_ptr(), 1116898809);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int64_t track_idx_encoded;
	PtrToArg<int64_t>::encode(track_idx, &track_idx_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &track_idx_encoded);
}

void Animation::track_set_enabled(int32_t track_idx, bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Animation::get_class_static()._native_ptr(), StringName("track_set_enabled")._native_ptr(), 300928843);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t track_idx_encoded;
	PtrToArg<int64_t>::encode(track_idx, &track_idx_encoded);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &track_idx_encoded, &enabled_encoded);
}

bool Animation::track_is_enabled(int32_t track_idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Animation::get_class_static()._native_ptr(), StringName("track_is_enabled")._native_ptr(), 1116898809);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int64_t track_idx_encoded;
	PtrToArg<int64_t>::encode(track_idx, &track_idx_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &track_idx_encoded);
}

int32_t Animation::position_track_insert_key(int32_t track_idx, double time, const Vector3 &position) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Animation::get_class_static()._native_ptr(), StringName("position_track_insert_key")._native_ptr(), 2540608232);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t track_idx_encoded;
	PtrToArg<int64_t>::encode(track_idx, &track_idx_encoded);
	double time_encoded;
	PtrToArg<double>::encode(time, &time_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &track_idx_encoded, &time_encoded, &position);
}

int32_t Animation::rotation_track_insert_key(int32_t track_idx, double time, const Quaternion &rotation) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Animation::get_class_static()._native_ptr(), StringName("rotation_track_insert_key")._native_ptr(), 4165004800);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t track_idx_encoded;
	PtrToArg<int64_t>::encode(track_idx, &track_idx_encoded);
	double time_encoded;
	PtrToArg<double>::encode(time, &time_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &track_idx_encoded, &time_encoded, &rotation);
}

int32_t Animation::scale_track_insert_key(int32_t track_idx, double time, const Vector3 &scale) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Animation::get_class_static()._native_ptr(), StringName("scale_track_insert_key")._native_ptr(), 2540608232);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t track_idx_encoded;
	PtrToArg<int64_t>::encode(track_idx, &track_idx_encoded);
	double time_encoded;
	PtrToArg<double>::encode(time, &time_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &track_idx_encoded, &time_encoded, &scale);
}

int32_t Animation::blend_shape_track_insert_key(int32_t track_idx, double time, double amount) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Animation::get_class_static()._native_ptr(), StringName("blend_shape_track_insert_key")._native_ptr(), 1534913637);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t track_idx_encoded;
	PtrToArg<int64_t>::encode(track_idx, &track_idx_encoded);
	double time_encoded;
	PtrToArg<double>::encode(time, &time_encoded);
	double amount_encoded;
	PtrToArg<double>::encode(amount, &amount_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &track_idx_encoded, &time_encoded, &amount_encoded);
}

Vector3 Animation::position_track_interpolate(int32_t track_idx, double time_sec, bool backward) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Animation::get_class_static()._native_ptr(), StringName("position_track_interpolate")._native_ptr(), 3530011197);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector3());
	int64_t track_idx_encoded;
	PtrToArg<int64_t>::encode(track_idx, &track_idx_encoded);
	double time_sec_encoded;
	PtrToArg<double>::encode(time_sec, &time_sec_encoded);
	int8_t backward_encoded;
	PtrToArg<bool>::encode(backward, &backward_encoded);
	return internal::_call_native_mb_ret<Vector3>(_gde_method_bind, _owner, &track_idx_encoded, &time_sec_encoded, &backward_encoded);
}

Quaternion Animation::rotation_track_interpolate(int32_t track_idx, double time_sec, bool backward) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Animation::get_class_static()._native_ptr(), StringName("rotation_track_interpolate")._native_ptr(), 2915876792);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Quaternion());
	int64_t track_idx_encoded;
	PtrToArg<int64_t>::encode(track_idx, &track_idx_encoded);
	double time_sec_encoded;
	PtrToArg<double>::encode(time_sec, &time_sec_encoded);
	int8_t backward_encoded;
	PtrToArg<bool>::encode(backward, &backward_encoded);
	return internal::_call_native_mb_ret<Quaternion>(_gde_method_bind, _owner, &track_idx_encoded, &time_sec_encoded, &backward_encoded);
}

Vector3 Animation::scale_track_interpolate(int32_t track_idx, double time_sec, bool backward) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Animation::get_class_static()._native_ptr(), StringName("scale_track_interpolate")._native_ptr(), 3530011197);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector3());
	int64_t track_idx_encoded;
	PtrToArg<int64_t>::encode(track_idx, &track_idx_encoded);
	double time_sec_encoded;
	PtrToArg<double>::encode(time_sec, &time_sec_encoded);
	int8_t backward_encoded;
	PtrToArg<bool>::encode(backward, &backward_encoded);
	return internal::_call_native_mb_ret<Vector3>(_gde_method_bind, _owner, &track_idx_encoded, &time_sec_encoded, &backward_encoded);
}

double Animation::blend_shape_track_interpolate(int32_t track_idx, double time_sec, bool backward) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Animation::get_class_static()._native_ptr(), StringName("blend_shape_track_interpolate")._native_ptr(), 2482365182);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	int64_t track_idx_encoded;
	PtrToArg<int64_t>::encode(track_idx, &track_idx_encoded);
	double time_sec_encoded;
	PtrToArg<double>::encode(time_sec, &time_sec_encoded);
	int8_t backward_encoded;
	PtrToArg<bool>::encode(backward, &backward_encoded);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &track_idx_encoded, &time_sec_encoded, &backward_encoded);
}

int32_t Animation::track_insert_key(int32_t track_idx, double time, const Variant &key, double transition) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Animation::get_class_static()._native_ptr(), StringName("track_insert_key")._native_ptr(), 808952278);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t track_idx_encoded;
	PtrToArg<int64_t>::encode(track_idx, &track_idx_encoded);
	double time_encoded;
	PtrToArg<double>::encode(time, &time_encoded);
	double transition_encoded;
	PtrToArg<double>::encode(transition, &transition_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &track_idx_encoded, &time_encoded, &key, &transition_encoded);
}

void Animation::track_remove_key(int32_t track_idx, int32_t key_idx) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Animation::get_class_static()._native_ptr(), StringName("track_remove_key")._native_ptr(), 3937882851);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t track_idx_encoded;
	PtrToArg<int64_t>::encode(track_idx, &track_idx_encoded);
	int64_t key_idx_encoded;
	PtrToArg<int64_t>::encode(key_idx, &key_idx_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &track_idx_encoded, &key_idx_encoded);
}

void Animation::track_remove_key_at_time(int32_t track_idx, double time) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Animation::get_class_static()._native_ptr(), StringName("track_remove_key_at_time")._native_ptr(), 1602489585);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t track_idx_encoded;
	PtrToArg<int64_t>::encode(track_idx, &track_idx_encoded);
	double time_encoded;
	PtrToArg<double>::encode(time, &time_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &track_idx_encoded, &time_encoded);
}

void Animation::track_set_key_value(int32_t track_idx, int32_t key, const Variant &value) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Animation::get_class_static()._native_ptr(), StringName("track_set_key_value")._native_ptr(), 2060538656);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t track_idx_encoded;
	PtrToArg<int64_t>::encode(track_idx, &track_idx_encoded);
	int64_t key_encoded;
	PtrToArg<int64_t>::encode(key, &key_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &track_idx_encoded, &key_encoded, &value);
}

void Animation::track_set_key_transition(int32_t track_idx, int32_t key_idx, double transition) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Animation::get_class_static()._native_ptr(), StringName("track_set_key_transition")._native_ptr(), 3506521499);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t track_idx_encoded;
	PtrToArg<int64_t>::encode(track_idx, &track_idx_encoded);
	int64_t key_idx_encoded;
	PtrToArg<int64_t>::encode(key_idx, &key_idx_encoded);
	double transition_encoded;
	PtrToArg<double>::encode(transition, &transition_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &track_idx_encoded, &key_idx_encoded, &transition_encoded);
}

void Animation::track_set_key_time(int32_t track_idx, int32_t key_idx, double time) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Animation::get_class_static()._native_ptr(), StringName("track_set_key_time")._native_ptr(), 3506521499);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t track_idx_encoded;
	PtrToArg<int64_t>::encode(track_idx, &track_idx_encoded);
	int64_t key_idx_encoded;
	PtrToArg<int64_t>::encode(key_idx, &key_idx_encoded);
	double time_encoded;
	PtrToArg<double>::encode(time, &time_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &track_idx_encoded, &key_idx_encoded, &time_encoded);
}

double Animation::track_get_key_transition(int32_t track_idx, int32_t key_idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Animation::get_class_static()._native_ptr(), StringName("track_get_key_transition")._native_ptr(), 3085491603);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	int64_t track_idx_encoded;
	PtrToArg<int64_t>::encode(track_idx, &track_idx_encoded);
	int64_t key_idx_encoded;
	PtrToArg<int64_t>::encode(key_idx, &key_idx_encoded);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &track_idx_encoded, &key_idx_encoded);
}

int32_t Animation::track_get_key_count(int32_t track_idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Animation::get_class_static()._native_ptr(), StringName("track_get_key_count")._native_ptr(), 923996154);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t track_idx_encoded;
	PtrToArg<int64_t>::encode(track_idx, &track_idx_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &track_idx_encoded);
}

Variant Animation::track_get_key_value(int32_t track_idx, int32_t key_idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Animation::get_class_static()._native_ptr(), StringName("track_get_key_value")._native_ptr(), 678354945);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Variant());
	int64_t track_idx_encoded;
	PtrToArg<int64_t>::encode(track_idx, &track_idx_encoded);
	int64_t key_idx_encoded;
	PtrToArg<int64_t>::encode(key_idx, &key_idx_encoded);
	return internal::_call_native_mb_ret<Variant>(_gde_method_bind, _owner, &track_idx_encoded, &key_idx_encoded);
}

double Animation::track_get_key_time(int32_t track_idx, int32_t key_idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Animation::get_class_static()._native_ptr(), StringName("track_get_key_time")._native_ptr(), 3085491603);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	int64_t track_idx_encoded;
	PtrToArg<int64_t>::encode(track_idx, &track_idx_encoded);
	int64_t key_idx_encoded;
	PtrToArg<int64_t>::encode(key_idx, &key_idx_encoded);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &track_idx_encoded, &key_idx_encoded);
}

int32_t Animation::track_find_key(int32_t track_idx, double time, Animation::FindMode find_mode, bool limit) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Animation::get_class_static()._native_ptr(), StringName("track_find_key")._native_ptr(), 189695464);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t track_idx_encoded;
	PtrToArg<int64_t>::encode(track_idx, &track_idx_encoded);
	double time_encoded;
	PtrToArg<double>::encode(time, &time_encoded);
	int8_t limit_encoded;
	PtrToArg<bool>::encode(limit, &limit_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &track_idx_encoded, &time_encoded, &find_mode, &limit_encoded);
}

void Animation::track_set_interpolation_type(int32_t track_idx, Animation::InterpolationType interpolation) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Animation::get_class_static()._native_ptr(), StringName("track_set_interpolation_type")._native_ptr(), 4112932513);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t track_idx_encoded;
	PtrToArg<int64_t>::encode(track_idx, &track_idx_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &track_idx_encoded, &interpolation);
}

Animation::InterpolationType Animation::track_get_interpolation_type(int32_t track_idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Animation::get_class_static()._native_ptr(), StringName("track_get_interpolation_type")._native_ptr(), 1530756894);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Animation::InterpolationType(0));
	int64_t track_idx_encoded;
	PtrToArg<int64_t>::encode(track_idx, &track_idx_encoded);
	return (Animation::InterpolationType)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &track_idx_encoded);
}

void Animation::track_set_interpolation_loop_wrap(int32_t track_idx, bool interpolation) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Animation::get_class_static()._native_ptr(), StringName("track_set_interpolation_loop_wrap")._native_ptr(), 300928843);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t track_idx_encoded;
	PtrToArg<int64_t>::encode(track_idx, &track_idx_encoded);
	int8_t interpolation_encoded;
	PtrToArg<bool>::encode(interpolation, &interpolation_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &track_idx_encoded, &interpolation_encoded);
}

bool Animation::track_get_interpolation_loop_wrap(int32_t track_idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Animation::get_class_static()._native_ptr(), StringName("track_get_interpolation_loop_wrap")._native_ptr(), 1116898809);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int64_t track_idx_encoded;
	PtrToArg<int64_t>::encode(track_idx, &track_idx_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &track_idx_encoded);
}

bool Animation::track_is_compressed(int32_t track_idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Animation::get_class_static()._native_ptr(), StringName("track_is_compressed")._native_ptr(), 1116898809);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int64_t track_idx_encoded;
	PtrToArg<int64_t>::encode(track_idx, &track_idx_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &track_idx_encoded);
}

void Animation::value_track_set_update_mode(int32_t track_idx, Animation::UpdateMode mode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Animation::get_class_static()._native_ptr(), StringName("value_track_set_update_mode")._native_ptr(), 2854058312);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t track_idx_encoded;
	PtrToArg<int64_t>::encode(track_idx, &track_idx_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &track_idx_encoded, &mode);
}

Animation::UpdateMode Animation::value_track_get_update_mode(int32_t track_idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Animation::get_class_static()._native_ptr(), StringName("value_track_get_update_mode")._native_ptr(), 1440326473);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Animation::UpdateMode(0));
	int64_t track_idx_encoded;
	PtrToArg<int64_t>::encode(track_idx, &track_idx_encoded);
	return (Animation::UpdateMode)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &track_idx_encoded);
}

Variant Animation::value_track_interpolate(int32_t track_idx, double time_sec, bool backward) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Animation::get_class_static()._native_ptr(), StringName("value_track_interpolate")._native_ptr(), 747269075);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Variant());
	int64_t track_idx_encoded;
	PtrToArg<int64_t>::encode(track_idx, &track_idx_encoded);
	double time_sec_encoded;
	PtrToArg<double>::encode(time_sec, &time_sec_encoded);
	int8_t backward_encoded;
	PtrToArg<bool>::encode(backward, &backward_encoded);
	return internal::_call_native_mb_ret<Variant>(_gde_method_bind, _owner, &track_idx_encoded, &time_sec_encoded, &backward_encoded);
}

StringName Animation::method_track_get_name(int32_t track_idx, int32_t key_idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Animation::get_class_static()._native_ptr(), StringName("method_track_get_name")._native_ptr(), 351665558);
	CHECK_METHOD_BIND_RET(_gde_method_bind, StringName());
	int64_t track_idx_encoded;
	PtrToArg<int64_t>::encode(track_idx, &track_idx_encoded);
	int64_t key_idx_encoded;
	PtrToArg<int64_t>::encode(key_idx, &key_idx_encoded);
	return internal::_call_native_mb_ret<StringName>(_gde_method_bind, _owner, &track_idx_encoded, &key_idx_encoded);
}

Array Animation::method_track_get_params(int32_t track_idx, int32_t key_idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Animation::get_class_static()._native_ptr(), StringName("method_track_get_params")._native_ptr(), 2345056839);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Array());
	int64_t track_idx_encoded;
	PtrToArg<int64_t>::encode(track_idx, &track_idx_encoded);
	int64_t key_idx_encoded;
	PtrToArg<int64_t>::encode(key_idx, &key_idx_encoded);
	return internal::_call_native_mb_ret<Array>(_gde_method_bind, _owner, &track_idx_encoded, &key_idx_encoded);
}

int32_t Animation::bezier_track_insert_key(int32_t track_idx, double time, double value, const Vector2 &in_handle, const Vector2 &out_handle) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Animation::get_class_static()._native_ptr(), StringName("bezier_track_insert_key")._native_ptr(), 3656773645);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t track_idx_encoded;
	PtrToArg<int64_t>::encode(track_idx, &track_idx_encoded);
	double time_encoded;
	PtrToArg<double>::encode(time, &time_encoded);
	double value_encoded;
	PtrToArg<double>::encode(value, &value_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &track_idx_encoded, &time_encoded, &value_encoded, &in_handle, &out_handle);
}

void Animation::bezier_track_set_key_value(int32_t track_idx, int32_t key_idx, double value) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Animation::get_class_static()._native_ptr(), StringName("bezier_track_set_key_value")._native_ptr(), 3506521499);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t track_idx_encoded;
	PtrToArg<int64_t>::encode(track_idx, &track_idx_encoded);
	int64_t key_idx_encoded;
	PtrToArg<int64_t>::encode(key_idx, &key_idx_encoded);
	double value_encoded;
	PtrToArg<double>::encode(value, &value_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &track_idx_encoded, &key_idx_encoded, &value_encoded);
}

void Animation::bezier_track_set_key_in_handle(int32_t track_idx, int32_t key_idx, const Vector2 &in_handle, double balanced_value_time_ratio) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Animation::get_class_static()._native_ptr(), StringName("bezier_track_set_key_in_handle")._native_ptr(), 1719223284);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t track_idx_encoded;
	PtrToArg<int64_t>::encode(track_idx, &track_idx_encoded);
	int64_t key_idx_encoded;
	PtrToArg<int64_t>::encode(key_idx, &key_idx_encoded);
	double balanced_value_time_ratio_encoded;
	PtrToArg<double>::encode(balanced_value_time_ratio, &balanced_value_time_ratio_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &track_idx_encoded, &key_idx_encoded, &in_handle, &balanced_value_time_ratio_encoded);
}

void Animation::bezier_track_set_key_out_handle(int32_t track_idx, int32_t key_idx, const Vector2 &out_handle, double balanced_value_time_ratio) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Animation::get_class_static()._native_ptr(), StringName("bezier_track_set_key_out_handle")._native_ptr(), 1719223284);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t track_idx_encoded;
	PtrToArg<int64_t>::encode(track_idx, &track_idx_encoded);
	int64_t key_idx_encoded;
	PtrToArg<int64_t>::encode(key_idx, &key_idx_encoded);
	double balanced_value_time_ratio_encoded;
	PtrToArg<double>::encode(balanced_value_time_ratio, &balanced_value_time_ratio_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &track_idx_encoded, &key_idx_encoded, &out_handle, &balanced_value_time_ratio_encoded);
}

double Animation::bezier_track_get_key_value(int32_t track_idx, int32_t key_idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Animation::get_class_static()._native_ptr(), StringName("bezier_track_get_key_value")._native_ptr(), 3085491603);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	int64_t track_idx_encoded;
	PtrToArg<int64_t>::encode(track_idx, &track_idx_encoded);
	int64_t key_idx_encoded;
	PtrToArg<int64_t>::encode(key_idx, &key_idx_encoded);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &track_idx_encoded, &key_idx_encoded);
}

Vector2 Animation::bezier_track_get_key_in_handle(int32_t track_idx, int32_t key_idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Animation::get_class_static()._native_ptr(), StringName("bezier_track_get_key_in_handle")._native_ptr(), 3016396712);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector2());
	int64_t track_idx_encoded;
	PtrToArg<int64_t>::encode(track_idx, &track_idx_encoded);
	int64_t key_idx_encoded;
	PtrToArg<int64_t>::encode(key_idx, &key_idx_encoded);
	return internal::_call_native_mb_ret<Vector2>(_gde_method_bind, _owner, &track_idx_encoded, &key_idx_encoded);
}

Vector2 Animation::bezier_track_get_key_out_handle(int32_t track_idx, int32_t key_idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Animation::get_class_static()._native_ptr(), StringName("bezier_track_get_key_out_handle")._native_ptr(), 3016396712);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector2());
	int64_t track_idx_encoded;
	PtrToArg<int64_t>::encode(track_idx, &track_idx_encoded);
	int64_t key_idx_encoded;
	PtrToArg<int64_t>::encode(key_idx, &key_idx_encoded);
	return internal::_call_native_mb_ret<Vector2>(_gde_method_bind, _owner, &track_idx_encoded, &key_idx_encoded);
}

double Animation::bezier_track_interpolate(int32_t track_idx, double time) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Animation::get_class_static()._native_ptr(), StringName("bezier_track_interpolate")._native_ptr(), 1900462983);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	int64_t track_idx_encoded;
	PtrToArg<int64_t>::encode(track_idx, &track_idx_encoded);
	double time_encoded;
	PtrToArg<double>::encode(time, &time_encoded);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &track_idx_encoded, &time_encoded);
}

int32_t Animation::audio_track_insert_key(int32_t track_idx, double time, const Ref<Resource> &stream, double start_offset, double end_offset) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Animation::get_class_static()._native_ptr(), StringName("audio_track_insert_key")._native_ptr(), 4021027286);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t track_idx_encoded;
	PtrToArg<int64_t>::encode(track_idx, &track_idx_encoded);
	double time_encoded;
	PtrToArg<double>::encode(time, &time_encoded);
	double start_offset_encoded;
	PtrToArg<double>::encode(start_offset, &start_offset_encoded);
	double end_offset_encoded;
	PtrToArg<double>::encode(end_offset, &end_offset_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &track_idx_encoded, &time_encoded, (stream != nullptr ? &stream->_owner : nullptr), &start_offset_encoded, &end_offset_encoded);
}

void Animation::audio_track_set_key_stream(int32_t track_idx, int32_t key_idx, const Ref<Resource> &stream) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Animation::get_class_static()._native_ptr(), StringName("audio_track_set_key_stream")._native_ptr(), 3886397084);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t track_idx_encoded;
	PtrToArg<int64_t>::encode(track_idx, &track_idx_encoded);
	int64_t key_idx_encoded;
	PtrToArg<int64_t>::encode(key_idx, &key_idx_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &track_idx_encoded, &key_idx_encoded, (stream != nullptr ? &stream->_owner : nullptr));
}

void Animation::audio_track_set_key_start_offset(int32_t track_idx, int32_t key_idx, double offset) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Animation::get_class_static()._native_ptr(), StringName("audio_track_set_key_start_offset")._native_ptr(), 3506521499);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t track_idx_encoded;
	PtrToArg<int64_t>::encode(track_idx, &track_idx_encoded);
	int64_t key_idx_encoded;
	PtrToArg<int64_t>::encode(key_idx, &key_idx_encoded);
	double offset_encoded;
	PtrToArg<double>::encode(offset, &offset_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &track_idx_encoded, &key_idx_encoded, &offset_encoded);
}

void Animation::audio_track_set_key_end_offset(int32_t track_idx, int32_t key_idx, double offset) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Animation::get_class_static()._native_ptr(), StringName("audio_track_set_key_end_offset")._native_ptr(), 3506521499);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t track_idx_encoded;
	PtrToArg<int64_t>::encode(track_idx, &track_idx_encoded);
	int64_t key_idx_encoded;
	PtrToArg<int64_t>::encode(key_idx, &key_idx_encoded);
	double offset_encoded;
	PtrToArg<double>::encode(offset, &offset_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &track_idx_encoded, &key_idx_encoded, &offset_encoded);
}

Ref<Resource> Animation::audio_track_get_key_stream(int32_t track_idx, int32_t key_idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Animation::get_class_static()._native_ptr(), StringName("audio_track_get_key_stream")._native_ptr(), 635277205);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<Resource>());
	int64_t track_idx_encoded;
	PtrToArg<int64_t>::encode(track_idx, &track_idx_encoded);
	int64_t key_idx_encoded;
	PtrToArg<int64_t>::encode(key_idx, &key_idx_encoded);
	return Ref<Resource>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<Resource>(_gde_method_bind, _owner, &track_idx_encoded, &key_idx_encoded));
}

double Animation::audio_track_get_key_start_offset(int32_t track_idx, int32_t key_idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Animation::get_class_static()._native_ptr(), StringName("audio_track_get_key_start_offset")._native_ptr(), 3085491603);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	int64_t track_idx_encoded;
	PtrToArg<int64_t>::encode(track_idx, &track_idx_encoded);
	int64_t key_idx_encoded;
	PtrToArg<int64_t>::encode(key_idx, &key_idx_encoded);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &track_idx_encoded, &key_idx_encoded);
}

double Animation::audio_track_get_key_end_offset(int32_t track_idx, int32_t key_idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Animation::get_class_static()._native_ptr(), StringName("audio_track_get_key_end_offset")._native_ptr(), 3085491603);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	int64_t track_idx_encoded;
	PtrToArg<int64_t>::encode(track_idx, &track_idx_encoded);
	int64_t key_idx_encoded;
	PtrToArg<int64_t>::encode(key_idx, &key_idx_encoded);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &track_idx_encoded, &key_idx_encoded);
}

void Animation::audio_track_set_use_blend(int32_t track_idx, bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Animation::get_class_static()._native_ptr(), StringName("audio_track_set_use_blend")._native_ptr(), 300928843);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t track_idx_encoded;
	PtrToArg<int64_t>::encode(track_idx, &track_idx_encoded);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &track_idx_encoded, &enable_encoded);
}

bool Animation::audio_track_is_use_blend(int32_t track_idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Animation::get_class_static()._native_ptr(), StringName("audio_track_is_use_blend")._native_ptr(), 1116898809);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int64_t track_idx_encoded;
	PtrToArg<int64_t>::encode(track_idx, &track_idx_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &track_idx_encoded);
}

int32_t Animation::animation_track_insert_key(int32_t track_idx, double time, const StringName &animation) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Animation::get_class_static()._native_ptr(), StringName("animation_track_insert_key")._native_ptr(), 158676774);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t track_idx_encoded;
	PtrToArg<int64_t>::encode(track_idx, &track_idx_encoded);
	double time_encoded;
	PtrToArg<double>::encode(time, &time_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &track_idx_encoded, &time_encoded, &animation);
}

void Animation::animation_track_set_key_animation(int32_t track_idx, int32_t key_idx, const StringName &animation) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Animation::get_class_static()._native_ptr(), StringName("animation_track_set_key_animation")._native_ptr(), 117615382);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t track_idx_encoded;
	PtrToArg<int64_t>::encode(track_idx, &track_idx_encoded);
	int64_t key_idx_encoded;
	PtrToArg<int64_t>::encode(key_idx, &key_idx_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &track_idx_encoded, &key_idx_encoded, &animation);
}

StringName Animation::animation_track_get_key_animation(int32_t track_idx, int32_t key_idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Animation::get_class_static()._native_ptr(), StringName("animation_track_get_key_animation")._native_ptr(), 351665558);
	CHECK_METHOD_BIND_RET(_gde_method_bind, StringName());
	int64_t track_idx_encoded;
	PtrToArg<int64_t>::encode(track_idx, &track_idx_encoded);
	int64_t key_idx_encoded;
	PtrToArg<int64_t>::encode(key_idx, &key_idx_encoded);
	return internal::_call_native_mb_ret<StringName>(_gde_method_bind, _owner, &track_idx_encoded, &key_idx_encoded);
}

void Animation::set_length(double time_sec) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Animation::get_class_static()._native_ptr(), StringName("set_length")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double time_sec_encoded;
	PtrToArg<double>::encode(time_sec, &time_sec_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &time_sec_encoded);
}

double Animation::get_length() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Animation::get_class_static()._native_ptr(), StringName("get_length")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void Animation::set_loop_mode(Animation::LoopMode loop_mode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Animation::get_class_static()._native_ptr(), StringName("set_loop_mode")._native_ptr(), 3155355575);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &loop_mode);
}

Animation::LoopMode Animation::get_loop_mode() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Animation::get_class_static()._native_ptr(), StringName("get_loop_mode")._native_ptr(), 1988889481);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Animation::LoopMode(0));
	return (Animation::LoopMode)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void Animation::set_step(double size_sec) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Animation::get_class_static()._native_ptr(), StringName("set_step")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double size_sec_encoded;
	PtrToArg<double>::encode(size_sec, &size_sec_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &size_sec_encoded);
}

double Animation::get_step() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Animation::get_class_static()._native_ptr(), StringName("get_step")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void Animation::clear() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Animation::get_class_static()._native_ptr(), StringName("clear")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void Animation::copy_track(int32_t track_idx, const Ref<Animation> &to_animation) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Animation::get_class_static()._native_ptr(), StringName("copy_track")._native_ptr(), 148001024);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t track_idx_encoded;
	PtrToArg<int64_t>::encode(track_idx, &track_idx_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &track_idx_encoded, (to_animation != nullptr ? &to_animation->_owner : nullptr));
}

void Animation::compress(uint32_t page_size, uint32_t fps, double split_tolerance) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Animation::get_class_static()._native_ptr(), StringName("compress")._native_ptr(), 3608408117);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t page_size_encoded;
	PtrToArg<int64_t>::encode(page_size, &page_size_encoded);
	int64_t fps_encoded;
	PtrToArg<int64_t>::encode(fps, &fps_encoded);
	double split_tolerance_encoded;
	PtrToArg<double>::encode(split_tolerance, &split_tolerance_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &page_size_encoded, &fps_encoded, &split_tolerance_encoded);
}

bool Animation::is_capture_included() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Animation::get_class_static()._native_ptr(), StringName("is_capture_included")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}


} // namespace godot 