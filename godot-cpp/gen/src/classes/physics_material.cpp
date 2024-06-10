/**************************************************************************/
/*  physics_material.cpp                                                  */
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

#include <godot_cpp/classes/physics_material.hpp>

#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

namespace godot {

void PhysicsMaterial::set_friction(double friction) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsMaterial::get_class_static()._native_ptr(), StringName("set_friction")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double friction_encoded;
	PtrToArg<double>::encode(friction, &friction_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &friction_encoded);
}

double PhysicsMaterial::get_friction() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsMaterial::get_class_static()._native_ptr(), StringName("get_friction")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void PhysicsMaterial::set_rough(bool rough) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsMaterial::get_class_static()._native_ptr(), StringName("set_rough")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t rough_encoded;
	PtrToArg<bool>::encode(rough, &rough_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &rough_encoded);
}

bool PhysicsMaterial::is_rough() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsMaterial::get_class_static()._native_ptr(), StringName("is_rough")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void PhysicsMaterial::set_bounce(double bounce) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsMaterial::get_class_static()._native_ptr(), StringName("set_bounce")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double bounce_encoded;
	PtrToArg<double>::encode(bounce, &bounce_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &bounce_encoded);
}

double PhysicsMaterial::get_bounce() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsMaterial::get_class_static()._native_ptr(), StringName("get_bounce")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void PhysicsMaterial::set_absorbent(bool absorbent) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsMaterial::get_class_static()._native_ptr(), StringName("set_absorbent")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t absorbent_encoded;
	PtrToArg<bool>::encode(absorbent, &absorbent_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &absorbent_encoded);
}

bool PhysicsMaterial::is_absorbent() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicsMaterial::get_class_static()._native_ptr(), StringName("is_absorbent")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}


} // namespace godot 