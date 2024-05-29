/**************************************************************************/
/*  skeleton_modification2d.cpp                                           */
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

#include <godot_cpp/classes/skeleton_modification2d.hpp>

#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/classes/skeleton_modification_stack2d.hpp>

namespace godot {

void SkeletonModification2D::set_enabled(bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SkeletonModification2D::get_class_static()._native_ptr(), StringName("set_enabled")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enabled_encoded);
}

bool SkeletonModification2D::get_enabled() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SkeletonModification2D::get_class_static()._native_ptr(), StringName("get_enabled")._native_ptr(), 2240911060);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

Ref<SkeletonModificationStack2D> SkeletonModification2D::get_modification_stack() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SkeletonModification2D::get_class_static()._native_ptr(), StringName("get_modification_stack")._native_ptr(), 2137761694);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<SkeletonModificationStack2D>());
	return Ref<SkeletonModificationStack2D>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<SkeletonModificationStack2D>(_gde_method_bind, _owner));
}

void SkeletonModification2D::set_is_setup(bool is_setup) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SkeletonModification2D::get_class_static()._native_ptr(), StringName("set_is_setup")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t is_setup_encoded;
	PtrToArg<bool>::encode(is_setup, &is_setup_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &is_setup_encoded);
}

bool SkeletonModification2D::get_is_setup() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SkeletonModification2D::get_class_static()._native_ptr(), StringName("get_is_setup")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void SkeletonModification2D::set_execution_mode(int32_t execution_mode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SkeletonModification2D::get_class_static()._native_ptr(), StringName("set_execution_mode")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t execution_mode_encoded;
	PtrToArg<int64_t>::encode(execution_mode, &execution_mode_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &execution_mode_encoded);
}

int32_t SkeletonModification2D::get_execution_mode() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SkeletonModification2D::get_class_static()._native_ptr(), StringName("get_execution_mode")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

double SkeletonModification2D::clamp_angle(double angle, double min, double max, bool invert) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SkeletonModification2D::get_class_static()._native_ptr(), StringName("clamp_angle")._native_ptr(), 1229502682);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	double angle_encoded;
	PtrToArg<double>::encode(angle, &angle_encoded);
	double min_encoded;
	PtrToArg<double>::encode(min, &min_encoded);
	double max_encoded;
	PtrToArg<double>::encode(max, &max_encoded);
	int8_t invert_encoded;
	PtrToArg<bool>::encode(invert, &invert_encoded);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &angle_encoded, &min_encoded, &max_encoded, &invert_encoded);
}

void SkeletonModification2D::set_editor_draw_gizmo(bool draw_gizmo) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SkeletonModification2D::get_class_static()._native_ptr(), StringName("set_editor_draw_gizmo")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t draw_gizmo_encoded;
	PtrToArg<bool>::encode(draw_gizmo, &draw_gizmo_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &draw_gizmo_encoded);
}

bool SkeletonModification2D::get_editor_draw_gizmo() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(SkeletonModification2D::get_class_static()._native_ptr(), StringName("get_editor_draw_gizmo")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void SkeletonModification2D::_execute(double delta) {}

void SkeletonModification2D::_setup_modification(const Ref<SkeletonModificationStack2D> &modification_stack) {}

void SkeletonModification2D::_draw_editor_gizmo() {}


} // namespace godot 