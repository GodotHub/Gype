/**************************************************************************/
/*  animation_node.cpp                                                    */
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

#include <godot_cpp/classes/animation_node.hpp>

#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/variant/node_path.hpp>
#include <godot_cpp/variant/string_name.hpp>

namespace godot {

bool AnimationNode::add_input(const String &name) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationNode::get_class_static()._native_ptr(), StringName("add_input")._native_ptr(), 2323990056);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &name);
}

void AnimationNode::remove_input(int32_t index) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationNode::get_class_static()._native_ptr(), StringName("remove_input")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &index_encoded);
}

bool AnimationNode::set_input_name(int32_t input, const String &name) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationNode::get_class_static()._native_ptr(), StringName("set_input_name")._native_ptr(), 215573526);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int64_t input_encoded;
	PtrToArg<int64_t>::encode(input, &input_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &input_encoded, &name);
}

String AnimationNode::get_input_name(int32_t input) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationNode::get_class_static()._native_ptr(), StringName("get_input_name")._native_ptr(), 844755477);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	int64_t input_encoded;
	PtrToArg<int64_t>::encode(input, &input_encoded);
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner, &input_encoded);
}

int32_t AnimationNode::get_input_count() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationNode::get_class_static()._native_ptr(), StringName("get_input_count")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

int32_t AnimationNode::find_input(const String &name) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationNode::get_class_static()._native_ptr(), StringName("find_input")._native_ptr(), 1321353865);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &name);
}

void AnimationNode::set_filter_path(const NodePath &path, bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationNode::get_class_static()._native_ptr(), StringName("set_filter_path")._native_ptr(), 3868023870);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &path, &enable_encoded);
}

bool AnimationNode::is_path_filtered(const NodePath &path) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationNode::get_class_static()._native_ptr(), StringName("is_path_filtered")._native_ptr(), 861721659);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &path);
}

void AnimationNode::set_filter_enabled(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationNode::get_class_static()._native_ptr(), StringName("set_filter_enabled")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

bool AnimationNode::is_filter_enabled() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationNode::get_class_static()._native_ptr(), StringName("is_filter_enabled")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void AnimationNode::blend_animation(const StringName &animation, double time, double delta, bool seeked, bool is_external_seeking, double blend, Animation::LoopedFlag looped_flag) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationNode::get_class_static()._native_ptr(), StringName("blend_animation")._native_ptr(), 1630801826);
	CHECK_METHOD_BIND(_gde_method_bind);
	double time_encoded;
	PtrToArg<double>::encode(time, &time_encoded);
	double delta_encoded;
	PtrToArg<double>::encode(delta, &delta_encoded);
	int8_t seeked_encoded;
	PtrToArg<bool>::encode(seeked, &seeked_encoded);
	int8_t is_external_seeking_encoded;
	PtrToArg<bool>::encode(is_external_seeking, &is_external_seeking_encoded);
	double blend_encoded;
	PtrToArg<double>::encode(blend, &blend_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &animation, &time_encoded, &delta_encoded, &seeked_encoded, &is_external_seeking_encoded, &blend_encoded, &looped_flag);
}

double AnimationNode::blend_node(const StringName &name, const Ref<AnimationNode> &node, double time, bool seek, bool is_external_seeking, double blend, AnimationNode::FilterAction filter, bool sync, bool test_only) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationNode::get_class_static()._native_ptr(), StringName("blend_node")._native_ptr(), 1746075988);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	double time_encoded;
	PtrToArg<double>::encode(time, &time_encoded);
	int8_t seek_encoded;
	PtrToArg<bool>::encode(seek, &seek_encoded);
	int8_t is_external_seeking_encoded;
	PtrToArg<bool>::encode(is_external_seeking, &is_external_seeking_encoded);
	double blend_encoded;
	PtrToArg<double>::encode(blend, &blend_encoded);
	int8_t sync_encoded;
	PtrToArg<bool>::encode(sync, &sync_encoded);
	int8_t test_only_encoded;
	PtrToArg<bool>::encode(test_only, &test_only_encoded);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &name, (node != nullptr ? &node->_owner : nullptr), &time_encoded, &seek_encoded, &is_external_seeking_encoded, &blend_encoded, &filter, &sync_encoded, &test_only_encoded);
}

double AnimationNode::blend_input(int32_t input_index, double time, bool seek, bool is_external_seeking, double blend, AnimationNode::FilterAction filter, bool sync, bool test_only) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationNode::get_class_static()._native_ptr(), StringName("blend_input")._native_ptr(), 1361527350);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	int64_t input_index_encoded;
	PtrToArg<int64_t>::encode(input_index, &input_index_encoded);
	double time_encoded;
	PtrToArg<double>::encode(time, &time_encoded);
	int8_t seek_encoded;
	PtrToArg<bool>::encode(seek, &seek_encoded);
	int8_t is_external_seeking_encoded;
	PtrToArg<bool>::encode(is_external_seeking, &is_external_seeking_encoded);
	double blend_encoded;
	PtrToArg<double>::encode(blend, &blend_encoded);
	int8_t sync_encoded;
	PtrToArg<bool>::encode(sync, &sync_encoded);
	int8_t test_only_encoded;
	PtrToArg<bool>::encode(test_only, &test_only_encoded);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &input_index_encoded, &time_encoded, &seek_encoded, &is_external_seeking_encoded, &blend_encoded, &filter, &sync_encoded, &test_only_encoded);
}

void AnimationNode::set_parameter(const StringName &name, const Variant &value) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationNode::get_class_static()._native_ptr(), StringName("set_parameter")._native_ptr(), 3776071444);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &name, &value);
}

Variant AnimationNode::get_parameter(const StringName &name) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationNode::get_class_static()._native_ptr(), StringName("get_parameter")._native_ptr(), 2760726917);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Variant());
	return internal::_call_native_mb_ret<Variant>(_gde_method_bind, _owner, &name);
}

Dictionary AnimationNode::_get_child_nodes() const {
	return Dictionary();
}

Array AnimationNode::_get_parameter_list() const {
	return Array();
}

Ref<AnimationNode> AnimationNode::_get_child_by_name(const StringName &name) const {
	return Ref<AnimationNode>();
}

Variant AnimationNode::_get_parameter_default_value(const StringName &parameter) const {
	return Variant();
}

bool AnimationNode::_is_parameter_read_only(const StringName &parameter) const {
	return false;
}

double AnimationNode::_process(double time, bool seek, bool is_external_seeking, bool test_only) const {
	return 0.0;
}

String AnimationNode::_get_caption() const {
	return String();
}

bool AnimationNode::_has_filter() const {
	return false;
}


} // namespace godot 