/**************************************************************************/
/*  navigation_obstacle2d.cpp                                             */
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

#include <godot_cpp/classes/navigation_obstacle2d.hpp>

#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

namespace godot {

RID NavigationObstacle2D::get_rid() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationObstacle2D::get_class_static()._native_ptr(), StringName("get_rid")._native_ptr(), 2944877500);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner);
}

void NavigationObstacle2D::set_avoidance_enabled(bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationObstacle2D::get_class_static()._native_ptr(), StringName("set_avoidance_enabled")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enabled_encoded);
}

bool NavigationObstacle2D::get_avoidance_enabled() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationObstacle2D::get_class_static()._native_ptr(), StringName("get_avoidance_enabled")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void NavigationObstacle2D::set_navigation_map(const RID &navigation_map) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationObstacle2D::get_class_static()._native_ptr(), StringName("set_navigation_map")._native_ptr(), 2722037293);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &navigation_map);
}

RID NavigationObstacle2D::get_navigation_map() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationObstacle2D::get_class_static()._native_ptr(), StringName("get_navigation_map")._native_ptr(), 2944877500);
	CHECK_METHOD_BIND_RET(_gde_method_bind, RID());
	return internal::_call_native_mb_ret<RID>(_gde_method_bind, _owner);
}

void NavigationObstacle2D::set_radius(double radius) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationObstacle2D::get_class_static()._native_ptr(), StringName("set_radius")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double radius_encoded;
	PtrToArg<double>::encode(radius, &radius_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &radius_encoded);
}

double NavigationObstacle2D::get_radius() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationObstacle2D::get_class_static()._native_ptr(), StringName("get_radius")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void NavigationObstacle2D::set_velocity(const Vector2 &velocity) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationObstacle2D::get_class_static()._native_ptr(), StringName("set_velocity")._native_ptr(), 743155724);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &velocity);
}

Vector2 NavigationObstacle2D::get_velocity() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationObstacle2D::get_class_static()._native_ptr(), StringName("get_velocity")._native_ptr(), 3341600327);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector2());
	return internal::_call_native_mb_ret<Vector2>(_gde_method_bind, _owner);
}

void NavigationObstacle2D::set_vertices(const PackedVector2Array &vertices) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationObstacle2D::get_class_static()._native_ptr(), StringName("set_vertices")._native_ptr(), 1509147220);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &vertices);
}

PackedVector2Array NavigationObstacle2D::get_vertices() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationObstacle2D::get_class_static()._native_ptr(), StringName("get_vertices")._native_ptr(), 2961356807);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedVector2Array());
	return internal::_call_native_mb_ret<PackedVector2Array>(_gde_method_bind, _owner);
}

void NavigationObstacle2D::set_avoidance_layers(uint32_t layers) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationObstacle2D::get_class_static()._native_ptr(), StringName("set_avoidance_layers")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t layers_encoded;
	PtrToArg<int64_t>::encode(layers, &layers_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &layers_encoded);
}

uint32_t NavigationObstacle2D::get_avoidance_layers() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationObstacle2D::get_class_static()._native_ptr(), StringName("get_avoidance_layers")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void NavigationObstacle2D::set_avoidance_layer_value(int32_t layer_number, bool value) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationObstacle2D::get_class_static()._native_ptr(), StringName("set_avoidance_layer_value")._native_ptr(), 300928843);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t layer_number_encoded;
	PtrToArg<int64_t>::encode(layer_number, &layer_number_encoded);
	int8_t value_encoded;
	PtrToArg<bool>::encode(value, &value_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &layer_number_encoded, &value_encoded);
}

bool NavigationObstacle2D::get_avoidance_layer_value(int32_t layer_number) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationObstacle2D::get_class_static()._native_ptr(), StringName("get_avoidance_layer_value")._native_ptr(), 1116898809);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int64_t layer_number_encoded;
	PtrToArg<int64_t>::encode(layer_number, &layer_number_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &layer_number_encoded);
}


} // namespace godot 