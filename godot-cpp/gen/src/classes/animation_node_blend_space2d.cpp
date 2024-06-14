/**************************************************************************/
/*  animation_node_blend_space2d.cpp                                      */
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

#include <godot_cpp/classes/animation_node_blend_space2d.hpp>

#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

namespace godot {


void AnimationNodeBlendSpace2D::add_blend_point(const Ref<AnimationRootNode> &node, const Vector2 &pos, int32_t at_index) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationNodeBlendSpace2D::get_class_static()._native_ptr(), StringName("add_blend_point")._native_ptr(), 402261981);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t at_index_encoded;
	PtrToArg<int64_t>::encode(at_index, &at_index_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (node != nullptr ? &node->_owner : nullptr), &pos, &at_index_encoded);
}

void AnimationNodeBlendSpace2D::set_blend_point_position(int32_t point, const Vector2 &pos) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationNodeBlendSpace2D::get_class_static()._native_ptr(), StringName("set_blend_point_position")._native_ptr(), 163021252);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t point_encoded;
	PtrToArg<int64_t>::encode(point, &point_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &point_encoded, &pos);
}

Vector2 AnimationNodeBlendSpace2D::get_blend_point_position(int32_t point) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationNodeBlendSpace2D::get_class_static()._native_ptr(), StringName("get_blend_point_position")._native_ptr(), 2299179447);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector2());
	int64_t point_encoded;
	PtrToArg<int64_t>::encode(point, &point_encoded);
	return internal::_call_native_mb_ret<Vector2>(_gde_method_bind, _owner, &point_encoded);
}

void AnimationNodeBlendSpace2D::set_blend_point_node(int32_t point, const Ref<AnimationRootNode> &node) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationNodeBlendSpace2D::get_class_static()._native_ptr(), StringName("set_blend_point_node")._native_ptr(), 4240341528);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t point_encoded;
	PtrToArg<int64_t>::encode(point, &point_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &point_encoded, (node != nullptr ? &node->_owner : nullptr));
}

Ref<AnimationRootNode> AnimationNodeBlendSpace2D::get_blend_point_node(int32_t point) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationNodeBlendSpace2D::get_class_static()._native_ptr(), StringName("get_blend_point_node")._native_ptr(), 665599029);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<AnimationRootNode>());
	int64_t point_encoded;
	PtrToArg<int64_t>::encode(point, &point_encoded);
	return Ref<AnimationRootNode>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<AnimationRootNode>(_gde_method_bind, _owner, &point_encoded));
}

void AnimationNodeBlendSpace2D::remove_blend_point(int32_t point) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationNodeBlendSpace2D::get_class_static()._native_ptr(), StringName("remove_blend_point")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t point_encoded;
	PtrToArg<int64_t>::encode(point, &point_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &point_encoded);
}

int32_t AnimationNodeBlendSpace2D::get_blend_point_count() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationNodeBlendSpace2D::get_class_static()._native_ptr(), StringName("get_blend_point_count")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void AnimationNodeBlendSpace2D::add_triangle(int32_t x, int32_t y, int32_t z, int32_t at_index) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationNodeBlendSpace2D::get_class_static()._native_ptr(), StringName("add_triangle")._native_ptr(), 753017335);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t x_encoded;
	PtrToArg<int64_t>::encode(x, &x_encoded);
	int64_t y_encoded;
	PtrToArg<int64_t>::encode(y, &y_encoded);
	int64_t z_encoded;
	PtrToArg<int64_t>::encode(z, &z_encoded);
	int64_t at_index_encoded;
	PtrToArg<int64_t>::encode(at_index, &at_index_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &x_encoded, &y_encoded, &z_encoded, &at_index_encoded);
}

int32_t AnimationNodeBlendSpace2D::get_triangle_point(int32_t triangle, int32_t point) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationNodeBlendSpace2D::get_class_static()._native_ptr(), StringName("get_triangle_point")._native_ptr(), 50157827);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t triangle_encoded;
	PtrToArg<int64_t>::encode(triangle, &triangle_encoded);
	int64_t point_encoded;
	PtrToArg<int64_t>::encode(point, &point_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &triangle_encoded, &point_encoded);
}

void AnimationNodeBlendSpace2D::remove_triangle(int32_t triangle) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationNodeBlendSpace2D::get_class_static()._native_ptr(), StringName("remove_triangle")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t triangle_encoded;
	PtrToArg<int64_t>::encode(triangle, &triangle_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &triangle_encoded);
}

int32_t AnimationNodeBlendSpace2D::get_triangle_count() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationNodeBlendSpace2D::get_class_static()._native_ptr(), StringName("get_triangle_count")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void AnimationNodeBlendSpace2D::set_min_space(const Vector2 &min_space) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationNodeBlendSpace2D::get_class_static()._native_ptr(), StringName("set_min_space")._native_ptr(), 743155724);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &min_space);
}

Vector2 AnimationNodeBlendSpace2D::get_min_space() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationNodeBlendSpace2D::get_class_static()._native_ptr(), StringName("get_min_space")._native_ptr(), 3341600327);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector2());
	return internal::_call_native_mb_ret<Vector2>(_gde_method_bind, _owner);
}

void AnimationNodeBlendSpace2D::set_max_space(const Vector2 &max_space) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationNodeBlendSpace2D::get_class_static()._native_ptr(), StringName("set_max_space")._native_ptr(), 743155724);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &max_space);
}

Vector2 AnimationNodeBlendSpace2D::get_max_space() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationNodeBlendSpace2D::get_class_static()._native_ptr(), StringName("get_max_space")._native_ptr(), 3341600327);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector2());
	return internal::_call_native_mb_ret<Vector2>(_gde_method_bind, _owner);
}

void AnimationNodeBlendSpace2D::set_snap(const Vector2 &snap) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationNodeBlendSpace2D::get_class_static()._native_ptr(), StringName("set_snap")._native_ptr(), 743155724);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &snap);
}

Vector2 AnimationNodeBlendSpace2D::get_snap() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationNodeBlendSpace2D::get_class_static()._native_ptr(), StringName("get_snap")._native_ptr(), 3341600327);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector2());
	return internal::_call_native_mb_ret<Vector2>(_gde_method_bind, _owner);
}

void AnimationNodeBlendSpace2D::set_x_label(const String &text) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationNodeBlendSpace2D::get_class_static()._native_ptr(), StringName("set_x_label")._native_ptr(), 83702148);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &text);
}

String AnimationNodeBlendSpace2D::get_x_label() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationNodeBlendSpace2D::get_class_static()._native_ptr(), StringName("get_x_label")._native_ptr(), 201670096);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner);
}

void AnimationNodeBlendSpace2D::set_y_label(const String &text) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationNodeBlendSpace2D::get_class_static()._native_ptr(), StringName("set_y_label")._native_ptr(), 83702148);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &text);
}

String AnimationNodeBlendSpace2D::get_y_label() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationNodeBlendSpace2D::get_class_static()._native_ptr(), StringName("get_y_label")._native_ptr(), 201670096);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner);
}

void AnimationNodeBlendSpace2D::set_auto_triangles(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationNodeBlendSpace2D::get_class_static()._native_ptr(), StringName("set_auto_triangles")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

bool AnimationNodeBlendSpace2D::get_auto_triangles() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationNodeBlendSpace2D::get_class_static()._native_ptr(), StringName("get_auto_triangles")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void AnimationNodeBlendSpace2D::set_blend_mode(AnimationNodeBlendSpace2D::BlendMode mode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationNodeBlendSpace2D::get_class_static()._native_ptr(), StringName("set_blend_mode")._native_ptr(), 81193520);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &mode);
}

AnimationNodeBlendSpace2D::BlendMode AnimationNodeBlendSpace2D::get_blend_mode() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationNodeBlendSpace2D::get_class_static()._native_ptr(), StringName("get_blend_mode")._native_ptr(), 1398433632);
	CHECK_METHOD_BIND_RET(_gde_method_bind, AnimationNodeBlendSpace2D::BlendMode(0));
	return (AnimationNodeBlendSpace2D::BlendMode)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void AnimationNodeBlendSpace2D::set_use_sync(bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationNodeBlendSpace2D::get_class_static()._native_ptr(), StringName("set_use_sync")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enable_encoded);
}

bool AnimationNodeBlendSpace2D::is_using_sync() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationNodeBlendSpace2D::get_class_static()._native_ptr(), StringName("is_using_sync")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}


} // namespace godot 