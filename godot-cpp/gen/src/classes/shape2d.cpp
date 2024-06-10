/**************************************************************************/
/*  shape2d.cpp                                                           */
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

#include <godot_cpp/classes/shape2d.hpp>

#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/variant/rid.hpp>
#include <godot_cpp/variant/transform2d.hpp>
#include <godot_cpp/variant/vector2.hpp>

namespace godot {

void Shape2D::set_custom_solver_bias(double bias) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Shape2D::get_class_static()._native_ptr(), StringName("set_custom_solver_bias")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double bias_encoded;
	PtrToArg<double>::encode(bias, &bias_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &bias_encoded);
}

double Shape2D::get_custom_solver_bias() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Shape2D::get_class_static()._native_ptr(), StringName("get_custom_solver_bias")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

bool Shape2D::collide(const Transform2D &local_xform, const Ref<Shape2D> &with_shape, const Transform2D &shape_xform) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Shape2D::get_class_static()._native_ptr(), StringName("collide")._native_ptr(), 3709843132);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &local_xform, (with_shape != nullptr ? &with_shape->_owner : nullptr), &shape_xform);
}

bool Shape2D::collide_with_motion(const Transform2D &local_xform, const Vector2 &local_motion, const Ref<Shape2D> &with_shape, const Transform2D &shape_xform, const Vector2 &shape_motion) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Shape2D::get_class_static()._native_ptr(), StringName("collide_with_motion")._native_ptr(), 2869556801);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &local_xform, &local_motion, (with_shape != nullptr ? &with_shape->_owner : nullptr), &shape_xform, &shape_motion);
}

PackedVector2Array Shape2D::collide_and_get_contacts(const Transform2D &local_xform, const Ref<Shape2D> &with_shape, const Transform2D &shape_xform) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Shape2D::get_class_static()._native_ptr(), StringName("collide_and_get_contacts")._native_ptr(), 3056932662);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedVector2Array());
	return internal::_call_native_mb_ret<PackedVector2Array>(_gde_method_bind, _owner, &local_xform, (with_shape != nullptr ? &with_shape->_owner : nullptr), &shape_xform);
}

PackedVector2Array Shape2D::collide_with_motion_and_get_contacts(const Transform2D &local_xform, const Vector2 &local_motion, const Ref<Shape2D> &with_shape, const Transform2D &shape_xform, const Vector2 &shape_motion) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Shape2D::get_class_static()._native_ptr(), StringName("collide_with_motion_and_get_contacts")._native_ptr(), 3620351573);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedVector2Array());
	return internal::_call_native_mb_ret<PackedVector2Array>(_gde_method_bind, _owner, &local_xform, &local_motion, (with_shape != nullptr ? &with_shape->_owner : nullptr), &shape_xform, &shape_motion);
}

void Shape2D::draw(const RID &canvas_item, const Color &color) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Shape2D::get_class_static()._native_ptr(), StringName("draw")._native_ptr(), 2948539648);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &canvas_item, &color);
}

Rect2 Shape2D::get_rect() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Shape2D::get_class_static()._native_ptr(), StringName("get_rect")._native_ptr(), 1639390495);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Rect2());
	return internal::_call_native_mb_ret<Rect2>(_gde_method_bind, _owner);
}


} // namespace godot 