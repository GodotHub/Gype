/**************************************************************************/
/*  fog_material.cpp                                                      */
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

#include <godot_cpp/classes/fog_material.hpp>

#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/classes/texture3d.hpp>

namespace godot {

void FogMaterial::set_density(double density) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FogMaterial::get_class_static()._native_ptr(), StringName("set_density")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double density_encoded;
	PtrToArg<double>::encode(density, &density_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &density_encoded);
}

double FogMaterial::get_density() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FogMaterial::get_class_static()._native_ptr(), StringName("get_density")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void FogMaterial::set_albedo(const Color &albedo) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FogMaterial::get_class_static()._native_ptr(), StringName("set_albedo")._native_ptr(), 2920490490);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &albedo);
}

Color FogMaterial::get_albedo() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FogMaterial::get_class_static()._native_ptr(), StringName("get_albedo")._native_ptr(), 3444240500);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Color());
	return internal::_call_native_mb_ret<Color>(_gde_method_bind, _owner);
}

void FogMaterial::set_emission(const Color &emission) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FogMaterial::get_class_static()._native_ptr(), StringName("set_emission")._native_ptr(), 2920490490);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &emission);
}

Color FogMaterial::get_emission() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FogMaterial::get_class_static()._native_ptr(), StringName("get_emission")._native_ptr(), 3444240500);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Color());
	return internal::_call_native_mb_ret<Color>(_gde_method_bind, _owner);
}

void FogMaterial::set_height_falloff(double height_falloff) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FogMaterial::get_class_static()._native_ptr(), StringName("set_height_falloff")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double height_falloff_encoded;
	PtrToArg<double>::encode(height_falloff, &height_falloff_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &height_falloff_encoded);
}

double FogMaterial::get_height_falloff() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FogMaterial::get_class_static()._native_ptr(), StringName("get_height_falloff")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void FogMaterial::set_edge_fade(double edge_fade) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FogMaterial::get_class_static()._native_ptr(), StringName("set_edge_fade")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double edge_fade_encoded;
	PtrToArg<double>::encode(edge_fade, &edge_fade_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &edge_fade_encoded);
}

double FogMaterial::get_edge_fade() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FogMaterial::get_class_static()._native_ptr(), StringName("get_edge_fade")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void FogMaterial::set_density_texture(const Ref<Texture3D> &density_texture) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FogMaterial::get_class_static()._native_ptr(), StringName("set_density_texture")._native_ptr(), 1188404210);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (density_texture != nullptr ? &density_texture->_owner : nullptr));
}

Ref<Texture3D> FogMaterial::get_density_texture() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(FogMaterial::get_class_static()._native_ptr(), StringName("get_density_texture")._native_ptr(), 373985333);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<Texture3D>());
	return Ref<Texture3D>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<Texture3D>(_gde_method_bind, _owner));
}


} // namespace godot 