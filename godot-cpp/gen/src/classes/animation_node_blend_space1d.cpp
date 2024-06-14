/**************************************************************************/
/*  animation_node_blend_space1d.cpp                                      */
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

#include <godot_cpp/classes/animation_node_blend_space1d.hpp>

#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

namespace godot {


void AnimationNodeBlendSpace1D::add_blend_point(const Ref<AnimationRootNode> &node, double pos, int32_t at_index) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationNodeBlendSpace1D::get_class_static()._native_ptr(), StringName("add_blend_point")._native_ptr(), 285050433);
	CHECK_METHOD_BIND(_gde_method_bind);
	double pos_encoded;
	PtrToArg<double>::encode(pos, &pos_encoded);
	int64_t at_index_encoded;
	PtrToArg<int64_t>::encode(at_index, &at_index_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (node != nullptr ? &node->_owner : nullptr), &pos_encoded, &at_index_encoded);
}

void AnimationNodeBlendSpace1D::set_blend_point_position(int32_t point, double pos) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationNodeBlendSpace1D::get_class_static()._native_ptr(), StringName("set_blend_point_position")._native_ptr(), 1602489585);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t point_encoded;
	PtrToArg<int64_t>::encode(point, &point_encoded);
	double pos_encoded;
	PtrToArg<double>::encode(pos, &pos_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &point_encoded, &pos_encoded);
}

double AnimationNodeBlendSpace1D::get_blend_point_position(int32_t point) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationNodeBlendSpace1D::get_class_static()._native_ptr(), StringName("get_blend_point_position")._native_ptr(), 2339986948);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	int64_t point_encoded;
	PtrToArg<int64_t>::encode(point, &point_encoded);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &point_encoded);
}

void AnimationNodeBlendSpace1D::set_blend_point_node(int32_t point, const Ref<AnimationRootNode> &node) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationNodeBlendSpace1D::get_class_static()._native_ptr(), StringName("set_blend_point_node")._native_ptr(), 4240341528);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t point_encoded;
	PtrToArg<int64_t>::encode(point, &point_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &point_encoded, (node != nullptr ? &node->_owner : nullptr));
}

Ref<AnimationRootNode> AnimationNodeBlendSpace1D::get_blend_point_node(int32_t point) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationNodeBlendSpace1D::get_class_static()._native_ptr(), StringName("get_blend_point_node")._native_ptr(), 665599029);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<AnimationRootNode>());
	int64_t point_encoded;
	PtrToArg<int64_t>::encode(point, &point_encoded);
	return Ref<AnimationRootNode>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<AnimationRootNode>(_gde_method_bind, _owner, &point_encoded));
}

void AnimationNodeBlendSpace1D::remove_blend_point(int32_t point) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationNodeBlendSpace1D::get_class_static()._native_ptr(), StringName("remove_blend_point")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t point_encoded;
	PtrToArg<int64_t>::encode(point, &point_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &point_encoded);
}

int32_t AnimationNodeBlendSpace1D::get_blend_point_count() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationNodeBlendSpace1D::get_class_static()._native_ptr(), StringName("get_blend_point_count")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void AnimationNodeBlendSpace1D::set_min_space(double min_space) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationNodeBlendSpace1D::get_class_static()._native_ptr(), StringName("set_min_space")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double min_space_encoded;
	PtrToArg<double>::encode(min_space, &min_space_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &min_space_encoded);
}

double AnimationNodeBlendSpace1D::get_min_space() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationNodeBlendSpace1D::get_class_static()._native_ptr(), StringName("get_min_space")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void AnimationNodeBlendSpace1D::set_max_space(double max_space) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationNodeBlendSpace1D::get_class_static()._native_ptr(), StringName("set_max_space")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double max_space_encoded;
	PtrToArg<double>::encode(max_space, &max_space_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &max_space_encoded);
}

double AnimationNodeBlendSpace1D::get_max_space() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationNodeBlendSpace1D::get_class_static()._native_ptr(), StringName("get_max_space")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void AnimationNodeBlendSpace1D::set_snap(double snap) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationNodeBlendSpace1D::get_class_static()._native_ptr(), StringName("set_snap")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double snap_encoded;
	PtrToArg<double>::encode(snap, &snap_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &snap_encoded);
}

double AnimationNodeBlendSpace1D::get_snap() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationNodeBlendSpace1D::get_class_static()._native_ptr(), StringName("get_snap")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void AnimationNodeBlendSpace1D::set_value_label(const String &text) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationNodeBlendSpace1D::get_class_static()._native_ptr(), StringName("set_value_label")._native_ptr(), 83702148);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &text);
}

String AnimationNodeBlendSpace1D::get_value_label() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationNodeBlendSpace1D::get_class_static()._native_ptr(), StringName("get_value_label")._native_ptr(), 201670096);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner);
}

void AnimationNodeBlendSpace1D::set_blend_mode(AnimationNodeBlendSpace1D::BlendMode mode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationNodeBlendSpace1D::get_class_static()._native_ptr(), StringName("set_blend_mode")._native_ptr(), 2600869457);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &mode);
}

AnimationNodeBlendSpace1D::BlendMode AnimationNodeBlendSpace1D::get_blend_mode() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationNodeBlendSpace1D::get_class_static()._native_ptr(), StringName("get_blend_mode")._native_ptr(), 1547667849);
	CHECK_METHOD_BIND_RET(_gde_method_bind, AnimationNodeBlendSpace1D::BlendMode(0));
	return (AnimationNodeBlendSpace1D::BlendMode)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void AnimationNodeBlendSpace1D::set_use_sync(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationNodeBlendSpace1D::get_class_static()._native_ptr(), StringName("set_use_sync")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

bool AnimationNodeBlendSpace1D::is_using_sync() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationNodeBlendSpace1D::get_class_static()._native_ptr(), StringName("is_using_sync")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}


} // namespace godot 