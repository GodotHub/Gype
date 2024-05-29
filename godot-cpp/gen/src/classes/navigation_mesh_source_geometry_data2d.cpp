/**************************************************************************/
/*  navigation_mesh_source_geometry_data2d.cpp                            */
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

#include <godot_cpp/classes/navigation_mesh_source_geometry_data2d.hpp>

#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

namespace godot {

void NavigationMeshSourceGeometryData2D::clear() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationMeshSourceGeometryData2D::get_class_static()._native_ptr(), StringName("clear")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

bool NavigationMeshSourceGeometryData2D::has_data() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationMeshSourceGeometryData2D::get_class_static()._native_ptr(), StringName("has_data")._native_ptr(), 2240911060);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void NavigationMeshSourceGeometryData2D::set_traversable_outlines(const TypedArray<PackedVector2Array> &traversable_outlines) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationMeshSourceGeometryData2D::get_class_static()._native_ptr(), StringName("set_traversable_outlines")._native_ptr(), 381264803);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &traversable_outlines);
}

TypedArray<PackedVector2Array> NavigationMeshSourceGeometryData2D::get_traversable_outlines() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationMeshSourceGeometryData2D::get_class_static()._native_ptr(), StringName("get_traversable_outlines")._native_ptr(), 3995934104);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TypedArray<PackedVector2Array>());
	return internal::_call_native_mb_ret<TypedArray<PackedVector2Array>>(_gde_method_bind, _owner);
}

void NavigationMeshSourceGeometryData2D::set_obstruction_outlines(const TypedArray<PackedVector2Array> &obstruction_outlines) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationMeshSourceGeometryData2D::get_class_static()._native_ptr(), StringName("set_obstruction_outlines")._native_ptr(), 381264803);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &obstruction_outlines);
}

TypedArray<PackedVector2Array> NavigationMeshSourceGeometryData2D::get_obstruction_outlines() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationMeshSourceGeometryData2D::get_class_static()._native_ptr(), StringName("get_obstruction_outlines")._native_ptr(), 3995934104);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TypedArray<PackedVector2Array>());
	return internal::_call_native_mb_ret<TypedArray<PackedVector2Array>>(_gde_method_bind, _owner);
}

void NavigationMeshSourceGeometryData2D::add_traversable_outline(const PackedVector2Array &shape_outline) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationMeshSourceGeometryData2D::get_class_static()._native_ptr(), StringName("add_traversable_outline")._native_ptr(), 1509147220);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &shape_outline);
}

void NavigationMeshSourceGeometryData2D::add_obstruction_outline(const PackedVector2Array &shape_outline) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(NavigationMeshSourceGeometryData2D::get_class_static()._native_ptr(), StringName("add_obstruction_outline")._native_ptr(), 1509147220);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &shape_outline);
}


} // namespace godot 