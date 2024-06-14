/**************************************************************************/
/*  physical_sky_material.cpp                                             */
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

#include <godot_cpp/classes/physical_sky_material.hpp>

#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/classes/texture2d.hpp>

namespace godot {


void PhysicalSkyMaterial::set_rayleigh_coefficient(double rayleigh) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicalSkyMaterial::get_class_static()._native_ptr(), StringName("set_rayleigh_coefficient")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double rayleigh_encoded;
	PtrToArg<double>::encode(rayleigh, &rayleigh_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &rayleigh_encoded);
}

double PhysicalSkyMaterial::get_rayleigh_coefficient() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicalSkyMaterial::get_class_static()._native_ptr(), StringName("get_rayleigh_coefficient")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void PhysicalSkyMaterial::set_rayleigh_color(const Color &color) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicalSkyMaterial::get_class_static()._native_ptr(), StringName("set_rayleigh_color")._native_ptr(), 2920490490);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &color);
}

Color PhysicalSkyMaterial::get_rayleigh_color() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicalSkyMaterial::get_class_static()._native_ptr(), StringName("get_rayleigh_color")._native_ptr(), 3444240500);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Color());
	return internal::_call_native_mb_ret<Color>(_gde_method_bind, _owner);
}

void PhysicalSkyMaterial::set_mie_coefficient(double mie) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicalSkyMaterial::get_class_static()._native_ptr(), StringName("set_mie_coefficient")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double mie_encoded;
	PtrToArg<double>::encode(mie, &mie_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &mie_encoded);
}

double PhysicalSkyMaterial::get_mie_coefficient() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicalSkyMaterial::get_class_static()._native_ptr(), StringName("get_mie_coefficient")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void PhysicalSkyMaterial::set_mie_eccentricity(double eccentricity) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicalSkyMaterial::get_class_static()._native_ptr(), StringName("set_mie_eccentricity")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double eccentricity_encoded;
	PtrToArg<double>::encode(eccentricity, &eccentricity_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &eccentricity_encoded);
}

double PhysicalSkyMaterial::get_mie_eccentricity() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicalSkyMaterial::get_class_static()._native_ptr(), StringName("get_mie_eccentricity")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void PhysicalSkyMaterial::set_mie_color(const Color &color) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicalSkyMaterial::get_class_static()._native_ptr(), StringName("set_mie_color")._native_ptr(), 2920490490);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &color);
}

Color PhysicalSkyMaterial::get_mie_color() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicalSkyMaterial::get_class_static()._native_ptr(), StringName("get_mie_color")._native_ptr(), 3444240500);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Color());
	return internal::_call_native_mb_ret<Color>(_gde_method_bind, _owner);
}

void PhysicalSkyMaterial::set_turbidity(double turbidity) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicalSkyMaterial::get_class_static()._native_ptr(), StringName("set_turbidity")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double turbidity_encoded;
	PtrToArg<double>::encode(turbidity, &turbidity_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &turbidity_encoded);
}

double PhysicalSkyMaterial::get_turbidity() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicalSkyMaterial::get_class_static()._native_ptr(), StringName("get_turbidity")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void PhysicalSkyMaterial::set_sun_disk_scale(double scale) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicalSkyMaterial::get_class_static()._native_ptr(), StringName("set_sun_disk_scale")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double scale_encoded;
	PtrToArg<double>::encode(scale, &scale_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &scale_encoded);
}

double PhysicalSkyMaterial::get_sun_disk_scale() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicalSkyMaterial::get_class_static()._native_ptr(), StringName("get_sun_disk_scale")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void PhysicalSkyMaterial::set_ground_color(const Color &color) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicalSkyMaterial::get_class_static()._native_ptr(), StringName("set_ground_color")._native_ptr(), 2920490490);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &color);
}

Color PhysicalSkyMaterial::get_ground_color() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicalSkyMaterial::get_class_static()._native_ptr(), StringName("get_ground_color")._native_ptr(), 3444240500);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Color());
	return internal::_call_native_mb_ret<Color>(_gde_method_bind, _owner);
}

void PhysicalSkyMaterial::set_energy_multiplier(double multiplier) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicalSkyMaterial::get_class_static()._native_ptr(), StringName("set_energy_multiplier")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double multiplier_encoded;
	PtrToArg<double>::encode(multiplier, &multiplier_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &multiplier_encoded);
}

double PhysicalSkyMaterial::get_energy_multiplier() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicalSkyMaterial::get_class_static()._native_ptr(), StringName("get_energy_multiplier")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void PhysicalSkyMaterial::set_use_debanding(bool use_debanding) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicalSkyMaterial::get_class_static()._native_ptr(), StringName("set_use_debanding")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t use_debanding_encoded;
	PtrToArg<bool>::encode(use_debanding, &use_debanding_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &use_debanding_encoded);
}

bool PhysicalSkyMaterial::get_use_debanding() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicalSkyMaterial::get_class_static()._native_ptr(), StringName("get_use_debanding")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void PhysicalSkyMaterial::set_night_sky(const Ref<Texture2D> &night_sky) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicalSkyMaterial::get_class_static()._native_ptr(), StringName("set_night_sky")._native_ptr(), 4051416890);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (night_sky != nullptr ? &night_sky->_owner : nullptr));
}

Ref<Texture2D> PhysicalSkyMaterial::get_night_sky() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(PhysicalSkyMaterial::get_class_static()._native_ptr(), StringName("get_night_sky")._native_ptr(), 3635182373);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<Texture2D>());
	return Ref<Texture2D>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<Texture2D>(_gde_method_bind, _owner));
}


} // namespace godot 