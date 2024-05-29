/**************************************************************************/
/*  utility_functions.cpp                                                 */
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

#include <godot_cpp/variant/utility_functions.hpp>

#include <godot_cpp/core/error_macros.hpp>
#include <godot_cpp/core/engine_ptrcall.hpp>

namespace godot {

double UtilityFunctions::sin(double angle_rad) {
	static GDExtensionPtrUtilityFunction _gde_function = internal::gdextension_interface_variant_get_ptr_utility_function(StringName("sin")._native_ptr(), 2140049587);
	CHECK_METHOD_BIND_RET(_gde_function, 0.0);
	double angle_rad_encoded;
	PtrToArg<double>::encode(angle_rad, &angle_rad_encoded);
	return internal::_call_utility_ret<double>(_gde_function, &angle_rad_encoded);
}

double UtilityFunctions::cos(double angle_rad) {
	static GDExtensionPtrUtilityFunction _gde_function = internal::gdextension_interface_variant_get_ptr_utility_function(StringName("cos")._native_ptr(), 2140049587);
	CHECK_METHOD_BIND_RET(_gde_function, 0.0);
	double angle_rad_encoded;
	PtrToArg<double>::encode(angle_rad, &angle_rad_encoded);
	return internal::_call_utility_ret<double>(_gde_function, &angle_rad_encoded);
}

double UtilityFunctions::tan(double angle_rad) {
	static GDExtensionPtrUtilityFunction _gde_function = internal::gdextension_interface_variant_get_ptr_utility_function(StringName("tan")._native_ptr(), 2140049587);
	CHECK_METHOD_BIND_RET(_gde_function, 0.0);
	double angle_rad_encoded;
	PtrToArg<double>::encode(angle_rad, &angle_rad_encoded);
	return internal::_call_utility_ret<double>(_gde_function, &angle_rad_encoded);
}

double UtilityFunctions::sinh(double x) {
	static GDExtensionPtrUtilityFunction _gde_function = internal::gdextension_interface_variant_get_ptr_utility_function(StringName("sinh")._native_ptr(), 2140049587);
	CHECK_METHOD_BIND_RET(_gde_function, 0.0);
	double x_encoded;
	PtrToArg<double>::encode(x, &x_encoded);
	return internal::_call_utility_ret<double>(_gde_function, &x_encoded);
}

double UtilityFunctions::cosh(double x) {
	static GDExtensionPtrUtilityFunction _gde_function = internal::gdextension_interface_variant_get_ptr_utility_function(StringName("cosh")._native_ptr(), 2140049587);
	CHECK_METHOD_BIND_RET(_gde_function, 0.0);
	double x_encoded;
	PtrToArg<double>::encode(x, &x_encoded);
	return internal::_call_utility_ret<double>(_gde_function, &x_encoded);
}

double UtilityFunctions::tanh(double x) {
	static GDExtensionPtrUtilityFunction _gde_function = internal::gdextension_interface_variant_get_ptr_utility_function(StringName("tanh")._native_ptr(), 2140049587);
	CHECK_METHOD_BIND_RET(_gde_function, 0.0);
	double x_encoded;
	PtrToArg<double>::encode(x, &x_encoded);
	return internal::_call_utility_ret<double>(_gde_function, &x_encoded);
}

double UtilityFunctions::asin(double x) {
	static GDExtensionPtrUtilityFunction _gde_function = internal::gdextension_interface_variant_get_ptr_utility_function(StringName("asin")._native_ptr(), 2140049587);
	CHECK_METHOD_BIND_RET(_gde_function, 0.0);
	double x_encoded;
	PtrToArg<double>::encode(x, &x_encoded);
	return internal::_call_utility_ret<double>(_gde_function, &x_encoded);
}

double UtilityFunctions::acos(double x) {
	static GDExtensionPtrUtilityFunction _gde_function = internal::gdextension_interface_variant_get_ptr_utility_function(StringName("acos")._native_ptr(), 2140049587);
	CHECK_METHOD_BIND_RET(_gde_function, 0.0);
	double x_encoded;
	PtrToArg<double>::encode(x, &x_encoded);
	return internal::_call_utility_ret<double>(_gde_function, &x_encoded);
}

double UtilityFunctions::atan(double x) {
	static GDExtensionPtrUtilityFunction _gde_function = internal::gdextension_interface_variant_get_ptr_utility_function(StringName("atan")._native_ptr(), 2140049587);
	CHECK_METHOD_BIND_RET(_gde_function, 0.0);
	double x_encoded;
	PtrToArg<double>::encode(x, &x_encoded);
	return internal::_call_utility_ret<double>(_gde_function, &x_encoded);
}

double UtilityFunctions::atan2(double y, double x) {
	static GDExtensionPtrUtilityFunction _gde_function = internal::gdextension_interface_variant_get_ptr_utility_function(StringName("atan2")._native_ptr(), 92296394);
	CHECK_METHOD_BIND_RET(_gde_function, 0.0);
	double y_encoded;
	PtrToArg<double>::encode(y, &y_encoded);
	double x_encoded;
	PtrToArg<double>::encode(x, &x_encoded);
	return internal::_call_utility_ret<double>(_gde_function, &y_encoded, &x_encoded);
}

double UtilityFunctions::asinh(double x) {
	static GDExtensionPtrUtilityFunction _gde_function = internal::gdextension_interface_variant_get_ptr_utility_function(StringName("asinh")._native_ptr(), 2140049587);
	CHECK_METHOD_BIND_RET(_gde_function, 0.0);
	double x_encoded;
	PtrToArg<double>::encode(x, &x_encoded);
	return internal::_call_utility_ret<double>(_gde_function, &x_encoded);
}

double UtilityFunctions::acosh(double x) {
	static GDExtensionPtrUtilityFunction _gde_function = internal::gdextension_interface_variant_get_ptr_utility_function(StringName("acosh")._native_ptr(), 2140049587);
	CHECK_METHOD_BIND_RET(_gde_function, 0.0);
	double x_encoded;
	PtrToArg<double>::encode(x, &x_encoded);
	return internal::_call_utility_ret<double>(_gde_function, &x_encoded);
}

double UtilityFunctions::atanh(double x) {
	static GDExtensionPtrUtilityFunction _gde_function = internal::gdextension_interface_variant_get_ptr_utility_function(StringName("atanh")._native_ptr(), 2140049587);
	CHECK_METHOD_BIND_RET(_gde_function, 0.0);
	double x_encoded;
	PtrToArg<double>::encode(x, &x_encoded);
	return internal::_call_utility_ret<double>(_gde_function, &x_encoded);
}

double UtilityFunctions::sqrt(double x) {
	static GDExtensionPtrUtilityFunction _gde_function = internal::gdextension_interface_variant_get_ptr_utility_function(StringName("sqrt")._native_ptr(), 2140049587);
	CHECK_METHOD_BIND_RET(_gde_function, 0.0);
	double x_encoded;
	PtrToArg<double>::encode(x, &x_encoded);
	return internal::_call_utility_ret<double>(_gde_function, &x_encoded);
}

double UtilityFunctions::fmod(double x, double y) {
	static GDExtensionPtrUtilityFunction _gde_function = internal::gdextension_interface_variant_get_ptr_utility_function(StringName("fmod")._native_ptr(), 92296394);
	CHECK_METHOD_BIND_RET(_gde_function, 0.0);
	double x_encoded;
	PtrToArg<double>::encode(x, &x_encoded);
	double y_encoded;
	PtrToArg<double>::encode(y, &y_encoded);
	return internal::_call_utility_ret<double>(_gde_function, &x_encoded, &y_encoded);
}

double UtilityFunctions::fposmod(double x, double y) {
	static GDExtensionPtrUtilityFunction _gde_function = internal::gdextension_interface_variant_get_ptr_utility_function(StringName("fposmod")._native_ptr(), 92296394);
	CHECK_METHOD_BIND_RET(_gde_function, 0.0);
	double x_encoded;
	PtrToArg<double>::encode(x, &x_encoded);
	double y_encoded;
	PtrToArg<double>::encode(y, &y_encoded);
	return internal::_call_utility_ret<double>(_gde_function, &x_encoded, &y_encoded);
}

int64_t UtilityFunctions::posmod(int64_t x, int64_t y) {
	static GDExtensionPtrUtilityFunction _gde_function = internal::gdextension_interface_variant_get_ptr_utility_function(StringName("posmod")._native_ptr(), 3133453818);
	CHECK_METHOD_BIND_RET(_gde_function, 0);
	int64_t x_encoded;
	PtrToArg<int64_t>::encode(x, &x_encoded);
	int64_t y_encoded;
	PtrToArg<int64_t>::encode(y, &y_encoded);
	return internal::_call_utility_ret<int64_t>(_gde_function, &x_encoded, &y_encoded);
}

Variant UtilityFunctions::floor(const Variant &x) {
	static GDExtensionPtrUtilityFunction _gde_function = internal::gdextension_interface_variant_get_ptr_utility_function(StringName("floor")._native_ptr(), 4776452);
	CHECK_METHOD_BIND_RET(_gde_function, Variant());
	return internal::_call_utility_ret<Variant>(_gde_function, &x);
}

double UtilityFunctions::floorf(double x) {
	static GDExtensionPtrUtilityFunction _gde_function = internal::gdextension_interface_variant_get_ptr_utility_function(StringName("floorf")._native_ptr(), 2140049587);
	CHECK_METHOD_BIND_RET(_gde_function, 0.0);
	double x_encoded;
	PtrToArg<double>::encode(x, &x_encoded);
	return internal::_call_utility_ret<double>(_gde_function, &x_encoded);
}

int64_t UtilityFunctions::floori(double x) {
	static GDExtensionPtrUtilityFunction _gde_function = internal::gdextension_interface_variant_get_ptr_utility_function(StringName("floori")._native_ptr(), 2780425386);
	CHECK_METHOD_BIND_RET(_gde_function, 0);
	double x_encoded;
	PtrToArg<double>::encode(x, &x_encoded);
	return internal::_call_utility_ret<int64_t>(_gde_function, &x_encoded);
}

Variant UtilityFunctions::ceil(const Variant &x) {
	static GDExtensionPtrUtilityFunction _gde_function = internal::gdextension_interface_variant_get_ptr_utility_function(StringName("ceil")._native_ptr(), 4776452);
	CHECK_METHOD_BIND_RET(_gde_function, Variant());
	return internal::_call_utility_ret<Variant>(_gde_function, &x);
}

double UtilityFunctions::ceilf(double x) {
	static GDExtensionPtrUtilityFunction _gde_function = internal::gdextension_interface_variant_get_ptr_utility_function(StringName("ceilf")._native_ptr(), 2140049587);
	CHECK_METHOD_BIND_RET(_gde_function, 0.0);
	double x_encoded;
	PtrToArg<double>::encode(x, &x_encoded);
	return internal::_call_utility_ret<double>(_gde_function, &x_encoded);
}

int64_t UtilityFunctions::ceili(double x) {
	static GDExtensionPtrUtilityFunction _gde_function = internal::gdextension_interface_variant_get_ptr_utility_function(StringName("ceili")._native_ptr(), 2780425386);
	CHECK_METHOD_BIND_RET(_gde_function, 0);
	double x_encoded;
	PtrToArg<double>::encode(x, &x_encoded);
	return internal::_call_utility_ret<int64_t>(_gde_function, &x_encoded);
}

Variant UtilityFunctions::round(const Variant &x) {
	static GDExtensionPtrUtilityFunction _gde_function = internal::gdextension_interface_variant_get_ptr_utility_function(StringName("round")._native_ptr(), 4776452);
	CHECK_METHOD_BIND_RET(_gde_function, Variant());
	return internal::_call_utility_ret<Variant>(_gde_function, &x);
}

double UtilityFunctions::roundf(double x) {
	static GDExtensionPtrUtilityFunction _gde_function = internal::gdextension_interface_variant_get_ptr_utility_function(StringName("roundf")._native_ptr(), 2140049587);
	CHECK_METHOD_BIND_RET(_gde_function, 0.0);
	double x_encoded;
	PtrToArg<double>::encode(x, &x_encoded);
	return internal::_call_utility_ret<double>(_gde_function, &x_encoded);
}

int64_t UtilityFunctions::roundi(double x) {
	static GDExtensionPtrUtilityFunction _gde_function = internal::gdextension_interface_variant_get_ptr_utility_function(StringName("roundi")._native_ptr(), 2780425386);
	CHECK_METHOD_BIND_RET(_gde_function, 0);
	double x_encoded;
	PtrToArg<double>::encode(x, &x_encoded);
	return internal::_call_utility_ret<int64_t>(_gde_function, &x_encoded);
}

Variant UtilityFunctions::abs(const Variant &x) {
	static GDExtensionPtrUtilityFunction _gde_function = internal::gdextension_interface_variant_get_ptr_utility_function(StringName("abs")._native_ptr(), 4776452);
	CHECK_METHOD_BIND_RET(_gde_function, Variant());
	return internal::_call_utility_ret<Variant>(_gde_function, &x);
}

double UtilityFunctions::absf(double x) {
	static GDExtensionPtrUtilityFunction _gde_function = internal::gdextension_interface_variant_get_ptr_utility_function(StringName("absf")._native_ptr(), 2140049587);
	CHECK_METHOD_BIND_RET(_gde_function, 0.0);
	double x_encoded;
	PtrToArg<double>::encode(x, &x_encoded);
	return internal::_call_utility_ret<double>(_gde_function, &x_encoded);
}

int64_t UtilityFunctions::absi(int64_t x) {
	static GDExtensionPtrUtilityFunction _gde_function = internal::gdextension_interface_variant_get_ptr_utility_function(StringName("absi")._native_ptr(), 2157319888);
	CHECK_METHOD_BIND_RET(_gde_function, 0);
	int64_t x_encoded;
	PtrToArg<int64_t>::encode(x, &x_encoded);
	return internal::_call_utility_ret<int64_t>(_gde_function, &x_encoded);
}

Variant UtilityFunctions::sign(const Variant &x) {
	static GDExtensionPtrUtilityFunction _gde_function = internal::gdextension_interface_variant_get_ptr_utility_function(StringName("sign")._native_ptr(), 4776452);
	CHECK_METHOD_BIND_RET(_gde_function, Variant());
	return internal::_call_utility_ret<Variant>(_gde_function, &x);
}

double UtilityFunctions::signf(double x) {
	static GDExtensionPtrUtilityFunction _gde_function = internal::gdextension_interface_variant_get_ptr_utility_function(StringName("signf")._native_ptr(), 2140049587);
	CHECK_METHOD_BIND_RET(_gde_function, 0.0);
	double x_encoded;
	PtrToArg<double>::encode(x, &x_encoded);
	return internal::_call_utility_ret<double>(_gde_function, &x_encoded);
}

int64_t UtilityFunctions::signi(int64_t x) {
	static GDExtensionPtrUtilityFunction _gde_function = internal::gdextension_interface_variant_get_ptr_utility_function(StringName("signi")._native_ptr(), 2157319888);
	CHECK_METHOD_BIND_RET(_gde_function, 0);
	int64_t x_encoded;
	PtrToArg<int64_t>::encode(x, &x_encoded);
	return internal::_call_utility_ret<int64_t>(_gde_function, &x_encoded);
}

Variant UtilityFunctions::snapped(const Variant &x, const Variant &step) {
	static GDExtensionPtrUtilityFunction _gde_function = internal::gdextension_interface_variant_get_ptr_utility_function(StringName("snapped")._native_ptr(), 459914704);
	CHECK_METHOD_BIND_RET(_gde_function, Variant());
	return internal::_call_utility_ret<Variant>(_gde_function, &x, &step);
}

double UtilityFunctions::snappedf(double x, double step) {
	static GDExtensionPtrUtilityFunction _gde_function = internal::gdextension_interface_variant_get_ptr_utility_function(StringName("snappedf")._native_ptr(), 92296394);
	CHECK_METHOD_BIND_RET(_gde_function, 0.0);
	double x_encoded;
	PtrToArg<double>::encode(x, &x_encoded);
	double step_encoded;
	PtrToArg<double>::encode(step, &step_encoded);
	return internal::_call_utility_ret<double>(_gde_function, &x_encoded, &step_encoded);
}

int64_t UtilityFunctions::snappedi(double x, int64_t step) {
	static GDExtensionPtrUtilityFunction _gde_function = internal::gdextension_interface_variant_get_ptr_utility_function(StringName("snappedi")._native_ptr(), 3570758393);
	CHECK_METHOD_BIND_RET(_gde_function, 0);
	double x_encoded;
	PtrToArg<double>::encode(x, &x_encoded);
	int64_t step_encoded;
	PtrToArg<int64_t>::encode(step, &step_encoded);
	return internal::_call_utility_ret<int64_t>(_gde_function, &x_encoded, &step_encoded);
}

double UtilityFunctions::pow(double base, double exp) {
	static GDExtensionPtrUtilityFunction _gde_function = internal::gdextension_interface_variant_get_ptr_utility_function(StringName("pow")._native_ptr(), 92296394);
	CHECK_METHOD_BIND_RET(_gde_function, 0.0);
	double base_encoded;
	PtrToArg<double>::encode(base, &base_encoded);
	double exp_encoded;
	PtrToArg<double>::encode(exp, &exp_encoded);
	return internal::_call_utility_ret<double>(_gde_function, &base_encoded, &exp_encoded);
}

double UtilityFunctions::log(double x) {
	static GDExtensionPtrUtilityFunction _gde_function = internal::gdextension_interface_variant_get_ptr_utility_function(StringName("log")._native_ptr(), 2140049587);
	CHECK_METHOD_BIND_RET(_gde_function, 0.0);
	double x_encoded;
	PtrToArg<double>::encode(x, &x_encoded);
	return internal::_call_utility_ret<double>(_gde_function, &x_encoded);
}

double UtilityFunctions::exp(double x) {
	static GDExtensionPtrUtilityFunction _gde_function = internal::gdextension_interface_variant_get_ptr_utility_function(StringName("exp")._native_ptr(), 2140049587);
	CHECK_METHOD_BIND_RET(_gde_function, 0.0);
	double x_encoded;
	PtrToArg<double>::encode(x, &x_encoded);
	return internal::_call_utility_ret<double>(_gde_function, &x_encoded);
}

bool UtilityFunctions::is_nan(double x) {
	static GDExtensionPtrUtilityFunction _gde_function = internal::gdextension_interface_variant_get_ptr_utility_function(StringName("is_nan")._native_ptr(), 3569215213);
	CHECK_METHOD_BIND_RET(_gde_function, false);
	double x_encoded;
	PtrToArg<double>::encode(x, &x_encoded);
	return internal::_call_utility_ret<int8_t>(_gde_function, &x_encoded);
}

bool UtilityFunctions::is_inf(double x) {
	static GDExtensionPtrUtilityFunction _gde_function = internal::gdextension_interface_variant_get_ptr_utility_function(StringName("is_inf")._native_ptr(), 3569215213);
	CHECK_METHOD_BIND_RET(_gde_function, false);
	double x_encoded;
	PtrToArg<double>::encode(x, &x_encoded);
	return internal::_call_utility_ret<int8_t>(_gde_function, &x_encoded);
}

bool UtilityFunctions::is_equal_approx(double a, double b) {
	static GDExtensionPtrUtilityFunction _gde_function = internal::gdextension_interface_variant_get_ptr_utility_function(StringName("is_equal_approx")._native_ptr(), 1400789633);
	CHECK_METHOD_BIND_RET(_gde_function, false);
	double a_encoded;
	PtrToArg<double>::encode(a, &a_encoded);
	double b_encoded;
	PtrToArg<double>::encode(b, &b_encoded);
	return internal::_call_utility_ret<int8_t>(_gde_function, &a_encoded, &b_encoded);
}

bool UtilityFunctions::is_zero_approx(double x) {
	static GDExtensionPtrUtilityFunction _gde_function = internal::gdextension_interface_variant_get_ptr_utility_function(StringName("is_zero_approx")._native_ptr(), 3569215213);
	CHECK_METHOD_BIND_RET(_gde_function, false);
	double x_encoded;
	PtrToArg<double>::encode(x, &x_encoded);
	return internal::_call_utility_ret<int8_t>(_gde_function, &x_encoded);
}

bool UtilityFunctions::is_finite(double x) {
	static GDExtensionPtrUtilityFunction _gde_function = internal::gdextension_interface_variant_get_ptr_utility_function(StringName("is_finite")._native_ptr(), 3569215213);
	CHECK_METHOD_BIND_RET(_gde_function, false);
	double x_encoded;
	PtrToArg<double>::encode(x, &x_encoded);
	return internal::_call_utility_ret<int8_t>(_gde_function, &x_encoded);
}

double UtilityFunctions::ease(double x, double curve) {
	static GDExtensionPtrUtilityFunction _gde_function = internal::gdextension_interface_variant_get_ptr_utility_function(StringName("ease")._native_ptr(), 92296394);
	CHECK_METHOD_BIND_RET(_gde_function, 0.0);
	double x_encoded;
	PtrToArg<double>::encode(x, &x_encoded);
	double curve_encoded;
	PtrToArg<double>::encode(curve, &curve_encoded);
	return internal::_call_utility_ret<double>(_gde_function, &x_encoded, &curve_encoded);
}

int64_t UtilityFunctions::step_decimals(double x) {
	static GDExtensionPtrUtilityFunction _gde_function = internal::gdextension_interface_variant_get_ptr_utility_function(StringName("step_decimals")._native_ptr(), 2780425386);
	CHECK_METHOD_BIND_RET(_gde_function, 0);
	double x_encoded;
	PtrToArg<double>::encode(x, &x_encoded);
	return internal::_call_utility_ret<int64_t>(_gde_function, &x_encoded);
}

Variant UtilityFunctions::lerp(const Variant &from, const Variant &to, const Variant &weight) {
	static GDExtensionPtrUtilityFunction _gde_function = internal::gdextension_interface_variant_get_ptr_utility_function(StringName("lerp")._native_ptr(), 3389874542);
	CHECK_METHOD_BIND_RET(_gde_function, Variant());
	return internal::_call_utility_ret<Variant>(_gde_function, &from, &to, &weight);
}

double UtilityFunctions::lerpf(double from, double to, double weight) {
	static GDExtensionPtrUtilityFunction _gde_function = internal::gdextension_interface_variant_get_ptr_utility_function(StringName("lerpf")._native_ptr(), 998901048);
	CHECK_METHOD_BIND_RET(_gde_function, 0.0);
	double from_encoded;
	PtrToArg<double>::encode(from, &from_encoded);
	double to_encoded;
	PtrToArg<double>::encode(to, &to_encoded);
	double weight_encoded;
	PtrToArg<double>::encode(weight, &weight_encoded);
	return internal::_call_utility_ret<double>(_gde_function, &from_encoded, &to_encoded, &weight_encoded);
}

double UtilityFunctions::cubic_interpolate(double from, double to, double pre, double post, double weight) {
	static GDExtensionPtrUtilityFunction _gde_function = internal::gdextension_interface_variant_get_ptr_utility_function(StringName("cubic_interpolate")._native_ptr(), 1090965791);
	CHECK_METHOD_BIND_RET(_gde_function, 0.0);
	double from_encoded;
	PtrToArg<double>::encode(from, &from_encoded);
	double to_encoded;
	PtrToArg<double>::encode(to, &to_encoded);
	double pre_encoded;
	PtrToArg<double>::encode(pre, &pre_encoded);
	double post_encoded;
	PtrToArg<double>::encode(post, &post_encoded);
	double weight_encoded;
	PtrToArg<double>::encode(weight, &weight_encoded);
	return internal::_call_utility_ret<double>(_gde_function, &from_encoded, &to_encoded, &pre_encoded, &post_encoded, &weight_encoded);
}

double UtilityFunctions::cubic_interpolate_angle(double from, double to, double pre, double post, double weight) {
	static GDExtensionPtrUtilityFunction _gde_function = internal::gdextension_interface_variant_get_ptr_utility_function(StringName("cubic_interpolate_angle")._native_ptr(), 1090965791);
	CHECK_METHOD_BIND_RET(_gde_function, 0.0);
	double from_encoded;
	PtrToArg<double>::encode(from, &from_encoded);
	double to_encoded;
	PtrToArg<double>::encode(to, &to_encoded);
	double pre_encoded;
	PtrToArg<double>::encode(pre, &pre_encoded);
	double post_encoded;
	PtrToArg<double>::encode(post, &post_encoded);
	double weight_encoded;
	PtrToArg<double>::encode(weight, &weight_encoded);
	return internal::_call_utility_ret<double>(_gde_function, &from_encoded, &to_encoded, &pre_encoded, &post_encoded, &weight_encoded);
}

double UtilityFunctions::cubic_interpolate_in_time(double from, double to, double pre, double post, double weight, double to_t, double pre_t, double post_t) {
	static GDExtensionPtrUtilityFunction _gde_function = internal::gdextension_interface_variant_get_ptr_utility_function(StringName("cubic_interpolate_in_time")._native_ptr(), 388121036);
	CHECK_METHOD_BIND_RET(_gde_function, 0.0);
	double from_encoded;
	PtrToArg<double>::encode(from, &from_encoded);
	double to_encoded;
	PtrToArg<double>::encode(to, &to_encoded);
	double pre_encoded;
	PtrToArg<double>::encode(pre, &pre_encoded);
	double post_encoded;
	PtrToArg<double>::encode(post, &post_encoded);
	double weight_encoded;
	PtrToArg<double>::encode(weight, &weight_encoded);
	double to_t_encoded;
	PtrToArg<double>::encode(to_t, &to_t_encoded);
	double pre_t_encoded;
	PtrToArg<double>::encode(pre_t, &pre_t_encoded);
	double post_t_encoded;
	PtrToArg<double>::encode(post_t, &post_t_encoded);
	return internal::_call_utility_ret<double>(_gde_function, &from_encoded, &to_encoded, &pre_encoded, &post_encoded, &weight_encoded, &to_t_encoded, &pre_t_encoded, &post_t_encoded);
}

double UtilityFunctions::cubic_interpolate_angle_in_time(double from, double to, double pre, double post, double weight, double to_t, double pre_t, double post_t) {
	static GDExtensionPtrUtilityFunction _gde_function = internal::gdextension_interface_variant_get_ptr_utility_function(StringName("cubic_interpolate_angle_in_time")._native_ptr(), 388121036);
	CHECK_METHOD_BIND_RET(_gde_function, 0.0);
	double from_encoded;
	PtrToArg<double>::encode(from, &from_encoded);
	double to_encoded;
	PtrToArg<double>::encode(to, &to_encoded);
	double pre_encoded;
	PtrToArg<double>::encode(pre, &pre_encoded);
	double post_encoded;
	PtrToArg<double>::encode(post, &post_encoded);
	double weight_encoded;
	PtrToArg<double>::encode(weight, &weight_encoded);
	double to_t_encoded;
	PtrToArg<double>::encode(to_t, &to_t_encoded);
	double pre_t_encoded;
	PtrToArg<double>::encode(pre_t, &pre_t_encoded);
	double post_t_encoded;
	PtrToArg<double>::encode(post_t, &post_t_encoded);
	return internal::_call_utility_ret<double>(_gde_function, &from_encoded, &to_encoded, &pre_encoded, &post_encoded, &weight_encoded, &to_t_encoded, &pre_t_encoded, &post_t_encoded);
}

double UtilityFunctions::bezier_interpolate(double start, double control_1, double control_2, double end, double t) {
	static GDExtensionPtrUtilityFunction _gde_function = internal::gdextension_interface_variant_get_ptr_utility_function(StringName("bezier_interpolate")._native_ptr(), 1090965791);
	CHECK_METHOD_BIND_RET(_gde_function, 0.0);
	double start_encoded;
	PtrToArg<double>::encode(start, &start_encoded);
	double control_1_encoded;
	PtrToArg<double>::encode(control_1, &control_1_encoded);
	double control_2_encoded;
	PtrToArg<double>::encode(control_2, &control_2_encoded);
	double end_encoded;
	PtrToArg<double>::encode(end, &end_encoded);
	double t_encoded;
	PtrToArg<double>::encode(t, &t_encoded);
	return internal::_call_utility_ret<double>(_gde_function, &start_encoded, &control_1_encoded, &control_2_encoded, &end_encoded, &t_encoded);
}

double UtilityFunctions::bezier_derivative(double start, double control_1, double control_2, double end, double t) {
	static GDExtensionPtrUtilityFunction _gde_function = internal::gdextension_interface_variant_get_ptr_utility_function(StringName("bezier_derivative")._native_ptr(), 1090965791);
	CHECK_METHOD_BIND_RET(_gde_function, 0.0);
	double start_encoded;
	PtrToArg<double>::encode(start, &start_encoded);
	double control_1_encoded;
	PtrToArg<double>::encode(control_1, &control_1_encoded);
	double control_2_encoded;
	PtrToArg<double>::encode(control_2, &control_2_encoded);
	double end_encoded;
	PtrToArg<double>::encode(end, &end_encoded);
	double t_encoded;
	PtrToArg<double>::encode(t, &t_encoded);
	return internal::_call_utility_ret<double>(_gde_function, &start_encoded, &control_1_encoded, &control_2_encoded, &end_encoded, &t_encoded);
}

double UtilityFunctions::angle_difference(double from, double to) {
	static GDExtensionPtrUtilityFunction _gde_function = internal::gdextension_interface_variant_get_ptr_utility_function(StringName("angle_difference")._native_ptr(), 92296394);
	CHECK_METHOD_BIND_RET(_gde_function, 0.0);
	double from_encoded;
	PtrToArg<double>::encode(from, &from_encoded);
	double to_encoded;
	PtrToArg<double>::encode(to, &to_encoded);
	return internal::_call_utility_ret<double>(_gde_function, &from_encoded, &to_encoded);
}

double UtilityFunctions::lerp_angle(double from, double to, double weight) {
	static GDExtensionPtrUtilityFunction _gde_function = internal::gdextension_interface_variant_get_ptr_utility_function(StringName("lerp_angle")._native_ptr(), 998901048);
	CHECK_METHOD_BIND_RET(_gde_function, 0.0);
	double from_encoded;
	PtrToArg<double>::encode(from, &from_encoded);
	double to_encoded;
	PtrToArg<double>::encode(to, &to_encoded);
	double weight_encoded;
	PtrToArg<double>::encode(weight, &weight_encoded);
	return internal::_call_utility_ret<double>(_gde_function, &from_encoded, &to_encoded, &weight_encoded);
}

double UtilityFunctions::inverse_lerp(double from, double to, double weight) {
	static GDExtensionPtrUtilityFunction _gde_function = internal::gdextension_interface_variant_get_ptr_utility_function(StringName("inverse_lerp")._native_ptr(), 998901048);
	CHECK_METHOD_BIND_RET(_gde_function, 0.0);
	double from_encoded;
	PtrToArg<double>::encode(from, &from_encoded);
	double to_encoded;
	PtrToArg<double>::encode(to, &to_encoded);
	double weight_encoded;
	PtrToArg<double>::encode(weight, &weight_encoded);
	return internal::_call_utility_ret<double>(_gde_function, &from_encoded, &to_encoded, &weight_encoded);
}

double UtilityFunctions::remap(double value, double istart, double istop, double ostart, double ostop) {
	static GDExtensionPtrUtilityFunction _gde_function = internal::gdextension_interface_variant_get_ptr_utility_function(StringName("remap")._native_ptr(), 1090965791);
	CHECK_METHOD_BIND_RET(_gde_function, 0.0);
	double value_encoded;
	PtrToArg<double>::encode(value, &value_encoded);
	double istart_encoded;
	PtrToArg<double>::encode(istart, &istart_encoded);
	double istop_encoded;
	PtrToArg<double>::encode(istop, &istop_encoded);
	double ostart_encoded;
	PtrToArg<double>::encode(ostart, &ostart_encoded);
	double ostop_encoded;
	PtrToArg<double>::encode(ostop, &ostop_encoded);
	return internal::_call_utility_ret<double>(_gde_function, &value_encoded, &istart_encoded, &istop_encoded, &ostart_encoded, &ostop_encoded);
}

double UtilityFunctions::smoothstep(double from, double to, double x) {
	static GDExtensionPtrUtilityFunction _gde_function = internal::gdextension_interface_variant_get_ptr_utility_function(StringName("smoothstep")._native_ptr(), 998901048);
	CHECK_METHOD_BIND_RET(_gde_function, 0.0);
	double from_encoded;
	PtrToArg<double>::encode(from, &from_encoded);
	double to_encoded;
	PtrToArg<double>::encode(to, &to_encoded);
	double x_encoded;
	PtrToArg<double>::encode(x, &x_encoded);
	return internal::_call_utility_ret<double>(_gde_function, &from_encoded, &to_encoded, &x_encoded);
}

double UtilityFunctions::move_toward(double from, double to, double delta) {
	static GDExtensionPtrUtilityFunction _gde_function = internal::gdextension_interface_variant_get_ptr_utility_function(StringName("move_toward")._native_ptr(), 998901048);
	CHECK_METHOD_BIND_RET(_gde_function, 0.0);
	double from_encoded;
	PtrToArg<double>::encode(from, &from_encoded);
	double to_encoded;
	PtrToArg<double>::encode(to, &to_encoded);
	double delta_encoded;
	PtrToArg<double>::encode(delta, &delta_encoded);
	return internal::_call_utility_ret<double>(_gde_function, &from_encoded, &to_encoded, &delta_encoded);
}

double UtilityFunctions::rotate_toward(double from, double to, double delta) {
	static GDExtensionPtrUtilityFunction _gde_function = internal::gdextension_interface_variant_get_ptr_utility_function(StringName("rotate_toward")._native_ptr(), 998901048);
	CHECK_METHOD_BIND_RET(_gde_function, 0.0);
	double from_encoded;
	PtrToArg<double>::encode(from, &from_encoded);
	double to_encoded;
	PtrToArg<double>::encode(to, &to_encoded);
	double delta_encoded;
	PtrToArg<double>::encode(delta, &delta_encoded);
	return internal::_call_utility_ret<double>(_gde_function, &from_encoded, &to_encoded, &delta_encoded);
}

double UtilityFunctions::deg_to_rad(double deg) {
	static GDExtensionPtrUtilityFunction _gde_function = internal::gdextension_interface_variant_get_ptr_utility_function(StringName("deg_to_rad")._native_ptr(), 2140049587);
	CHECK_METHOD_BIND_RET(_gde_function, 0.0);
	double deg_encoded;
	PtrToArg<double>::encode(deg, &deg_encoded);
	return internal::_call_utility_ret<double>(_gde_function, &deg_encoded);
}

double UtilityFunctions::rad_to_deg(double rad) {
	static GDExtensionPtrUtilityFunction _gde_function = internal::gdextension_interface_variant_get_ptr_utility_function(StringName("rad_to_deg")._native_ptr(), 2140049587);
	CHECK_METHOD_BIND_RET(_gde_function, 0.0);
	double rad_encoded;
	PtrToArg<double>::encode(rad, &rad_encoded);
	return internal::_call_utility_ret<double>(_gde_function, &rad_encoded);
}

double UtilityFunctions::linear_to_db(double lin) {
	static GDExtensionPtrUtilityFunction _gde_function = internal::gdextension_interface_variant_get_ptr_utility_function(StringName("linear_to_db")._native_ptr(), 2140049587);
	CHECK_METHOD_BIND_RET(_gde_function, 0.0);
	double lin_encoded;
	PtrToArg<double>::encode(lin, &lin_encoded);
	return internal::_call_utility_ret<double>(_gde_function, &lin_encoded);
}

double UtilityFunctions::db_to_linear(double db) {
	static GDExtensionPtrUtilityFunction _gde_function = internal::gdextension_interface_variant_get_ptr_utility_function(StringName("db_to_linear")._native_ptr(), 2140049587);
	CHECK_METHOD_BIND_RET(_gde_function, 0.0);
	double db_encoded;
	PtrToArg<double>::encode(db, &db_encoded);
	return internal::_call_utility_ret<double>(_gde_function, &db_encoded);
}

Variant UtilityFunctions::wrap(const Variant &value, const Variant &min, const Variant &max) {
	static GDExtensionPtrUtilityFunction _gde_function = internal::gdextension_interface_variant_get_ptr_utility_function(StringName("wrap")._native_ptr(), 3389874542);
	CHECK_METHOD_BIND_RET(_gde_function, Variant());
	return internal::_call_utility_ret<Variant>(_gde_function, &value, &min, &max);
}

int64_t UtilityFunctions::wrapi(int64_t value, int64_t min, int64_t max) {
	static GDExtensionPtrUtilityFunction _gde_function = internal::gdextension_interface_variant_get_ptr_utility_function(StringName("wrapi")._native_ptr(), 650295447);
	CHECK_METHOD_BIND_RET(_gde_function, 0);
	int64_t value_encoded;
	PtrToArg<int64_t>::encode(value, &value_encoded);
	int64_t min_encoded;
	PtrToArg<int64_t>::encode(min, &min_encoded);
	int64_t max_encoded;
	PtrToArg<int64_t>::encode(max, &max_encoded);
	return internal::_call_utility_ret<int64_t>(_gde_function, &value_encoded, &min_encoded, &max_encoded);
}

double UtilityFunctions::wrapf(double value, double min, double max) {
	static GDExtensionPtrUtilityFunction _gde_function = internal::gdextension_interface_variant_get_ptr_utility_function(StringName("wrapf")._native_ptr(), 998901048);
	CHECK_METHOD_BIND_RET(_gde_function, 0.0);
	double value_encoded;
	PtrToArg<double>::encode(value, &value_encoded);
	double min_encoded;
	PtrToArg<double>::encode(min, &min_encoded);
	double max_encoded;
	PtrToArg<double>::encode(max, &max_encoded);
	return internal::_call_utility_ret<double>(_gde_function, &value_encoded, &min_encoded, &max_encoded);
}

Variant UtilityFunctions::max_internal(const Variant **args, GDExtensionInt arg_count) {
	static GDExtensionPtrUtilityFunction _gde_function = internal::gdextension_interface_variant_get_ptr_utility_function(StringName("max")._native_ptr(), 3896050336);
	CHECK_METHOD_BIND_RET(_gde_function, Variant());
	Variant ret;
	_gde_function(&ret, reinterpret_cast<GDExtensionConstVariantPtr *>(args), arg_count);
	return ret;
}

int64_t UtilityFunctions::maxi(int64_t a, int64_t b) {
	static GDExtensionPtrUtilityFunction _gde_function = internal::gdextension_interface_variant_get_ptr_utility_function(StringName("maxi")._native_ptr(), 3133453818);
	CHECK_METHOD_BIND_RET(_gde_function, 0);
	int64_t a_encoded;
	PtrToArg<int64_t>::encode(a, &a_encoded);
	int64_t b_encoded;
	PtrToArg<int64_t>::encode(b, &b_encoded);
	return internal::_call_utility_ret<int64_t>(_gde_function, &a_encoded, &b_encoded);
}

double UtilityFunctions::maxf(double a, double b) {
	static GDExtensionPtrUtilityFunction _gde_function = internal::gdextension_interface_variant_get_ptr_utility_function(StringName("maxf")._native_ptr(), 92296394);
	CHECK_METHOD_BIND_RET(_gde_function, 0.0);
	double a_encoded;
	PtrToArg<double>::encode(a, &a_encoded);
	double b_encoded;
	PtrToArg<double>::encode(b, &b_encoded);
	return internal::_call_utility_ret<double>(_gde_function, &a_encoded, &b_encoded);
}

Variant UtilityFunctions::min_internal(const Variant **args, GDExtensionInt arg_count) {
	static GDExtensionPtrUtilityFunction _gde_function = internal::gdextension_interface_variant_get_ptr_utility_function(StringName("min")._native_ptr(), 3896050336);
	CHECK_METHOD_BIND_RET(_gde_function, Variant());
	Variant ret;
	_gde_function(&ret, reinterpret_cast<GDExtensionConstVariantPtr *>(args), arg_count);
	return ret;
}

int64_t UtilityFunctions::mini(int64_t a, int64_t b) {
	static GDExtensionPtrUtilityFunction _gde_function = internal::gdextension_interface_variant_get_ptr_utility_function(StringName("mini")._native_ptr(), 3133453818);
	CHECK_METHOD_BIND_RET(_gde_function, 0);
	int64_t a_encoded;
	PtrToArg<int64_t>::encode(a, &a_encoded);
	int64_t b_encoded;
	PtrToArg<int64_t>::encode(b, &b_encoded);
	return internal::_call_utility_ret<int64_t>(_gde_function, &a_encoded, &b_encoded);
}

double UtilityFunctions::minf(double a, double b) {
	static GDExtensionPtrUtilityFunction _gde_function = internal::gdextension_interface_variant_get_ptr_utility_function(StringName("minf")._native_ptr(), 92296394);
	CHECK_METHOD_BIND_RET(_gde_function, 0.0);
	double a_encoded;
	PtrToArg<double>::encode(a, &a_encoded);
	double b_encoded;
	PtrToArg<double>::encode(b, &b_encoded);
	return internal::_call_utility_ret<double>(_gde_function, &a_encoded, &b_encoded);
}

Variant UtilityFunctions::clamp(const Variant &value, const Variant &min, const Variant &max) {
	static GDExtensionPtrUtilityFunction _gde_function = internal::gdextension_interface_variant_get_ptr_utility_function(StringName("clamp")._native_ptr(), 3389874542);
	CHECK_METHOD_BIND_RET(_gde_function, Variant());
	return internal::_call_utility_ret<Variant>(_gde_function, &value, &min, &max);
}

int64_t UtilityFunctions::clampi(int64_t value, int64_t min, int64_t max) {
	static GDExtensionPtrUtilityFunction _gde_function = internal::gdextension_interface_variant_get_ptr_utility_function(StringName("clampi")._native_ptr(), 650295447);
	CHECK_METHOD_BIND_RET(_gde_function, 0);
	int64_t value_encoded;
	PtrToArg<int64_t>::encode(value, &value_encoded);
	int64_t min_encoded;
	PtrToArg<int64_t>::encode(min, &min_encoded);
	int64_t max_encoded;
	PtrToArg<int64_t>::encode(max, &max_encoded);
	return internal::_call_utility_ret<int64_t>(_gde_function, &value_encoded, &min_encoded, &max_encoded);
}

double UtilityFunctions::clampf(double value, double min, double max) {
	static GDExtensionPtrUtilityFunction _gde_function = internal::gdextension_interface_variant_get_ptr_utility_function(StringName("clampf")._native_ptr(), 998901048);
	CHECK_METHOD_BIND_RET(_gde_function, 0.0);
	double value_encoded;
	PtrToArg<double>::encode(value, &value_encoded);
	double min_encoded;
	PtrToArg<double>::encode(min, &min_encoded);
	double max_encoded;
	PtrToArg<double>::encode(max, &max_encoded);
	return internal::_call_utility_ret<double>(_gde_function, &value_encoded, &min_encoded, &max_encoded);
}

int64_t UtilityFunctions::nearest_po2(int64_t value) {
	static GDExtensionPtrUtilityFunction _gde_function = internal::gdextension_interface_variant_get_ptr_utility_function(StringName("nearest_po2")._native_ptr(), 2157319888);
	CHECK_METHOD_BIND_RET(_gde_function, 0);
	int64_t value_encoded;
	PtrToArg<int64_t>::encode(value, &value_encoded);
	return internal::_call_utility_ret<int64_t>(_gde_function, &value_encoded);
}

double UtilityFunctions::pingpong(double value, double length) {
	static GDExtensionPtrUtilityFunction _gde_function = internal::gdextension_interface_variant_get_ptr_utility_function(StringName("pingpong")._native_ptr(), 92296394);
	CHECK_METHOD_BIND_RET(_gde_function, 0.0);
	double value_encoded;
	PtrToArg<double>::encode(value, &value_encoded);
	double length_encoded;
	PtrToArg<double>::encode(length, &length_encoded);
	return internal::_call_utility_ret<double>(_gde_function, &value_encoded, &length_encoded);
}

void UtilityFunctions::randomize() {
	static GDExtensionPtrUtilityFunction _gde_function = internal::gdextension_interface_variant_get_ptr_utility_function(StringName("randomize")._native_ptr(), 1691721052);
	CHECK_METHOD_BIND(_gde_function);
	internal::_call_utility_no_ret(_gde_function);
}

int64_t UtilityFunctions::randi() {
	static GDExtensionPtrUtilityFunction _gde_function = internal::gdextension_interface_variant_get_ptr_utility_function(StringName("randi")._native_ptr(), 701202648);
	CHECK_METHOD_BIND_RET(_gde_function, 0);
	return internal::_call_utility_ret<int64_t>(_gde_function);
}

double UtilityFunctions::randf() {
	static GDExtensionPtrUtilityFunction _gde_function = internal::gdextension_interface_variant_get_ptr_utility_function(StringName("randf")._native_ptr(), 2086227845);
	CHECK_METHOD_BIND_RET(_gde_function, 0.0);
	return internal::_call_utility_ret<double>(_gde_function);
}

int64_t UtilityFunctions::randi_range(int64_t from, int64_t to) {
	static GDExtensionPtrUtilityFunction _gde_function = internal::gdextension_interface_variant_get_ptr_utility_function(StringName("randi_range")._native_ptr(), 3133453818);
	CHECK_METHOD_BIND_RET(_gde_function, 0);
	int64_t from_encoded;
	PtrToArg<int64_t>::encode(from, &from_encoded);
	int64_t to_encoded;
	PtrToArg<int64_t>::encode(to, &to_encoded);
	return internal::_call_utility_ret<int64_t>(_gde_function, &from_encoded, &to_encoded);
}

double UtilityFunctions::randf_range(double from, double to) {
	static GDExtensionPtrUtilityFunction _gde_function = internal::gdextension_interface_variant_get_ptr_utility_function(StringName("randf_range")._native_ptr(), 92296394);
	CHECK_METHOD_BIND_RET(_gde_function, 0.0);
	double from_encoded;
	PtrToArg<double>::encode(from, &from_encoded);
	double to_encoded;
	PtrToArg<double>::encode(to, &to_encoded);
	return internal::_call_utility_ret<double>(_gde_function, &from_encoded, &to_encoded);
}

double UtilityFunctions::randfn(double mean, double deviation) {
	static GDExtensionPtrUtilityFunction _gde_function = internal::gdextension_interface_variant_get_ptr_utility_function(StringName("randfn")._native_ptr(), 92296394);
	CHECK_METHOD_BIND_RET(_gde_function, 0.0);
	double mean_encoded;
	PtrToArg<double>::encode(mean, &mean_encoded);
	double deviation_encoded;
	PtrToArg<double>::encode(deviation, &deviation_encoded);
	return internal::_call_utility_ret<double>(_gde_function, &mean_encoded, &deviation_encoded);
}

void UtilityFunctions::seed(int64_t base) {
	static GDExtensionPtrUtilityFunction _gde_function = internal::gdextension_interface_variant_get_ptr_utility_function(StringName("seed")._native_ptr(), 382931173);
	CHECK_METHOD_BIND(_gde_function);
	int64_t base_encoded;
	PtrToArg<int64_t>::encode(base, &base_encoded);
	internal::_call_utility_no_ret(_gde_function, &base_encoded);
}

PackedInt64Array UtilityFunctions::rand_from_seed(int64_t seed) {
	static GDExtensionPtrUtilityFunction _gde_function = internal::gdextension_interface_variant_get_ptr_utility_function(StringName("rand_from_seed")._native_ptr(), 1391063685);
	CHECK_METHOD_BIND_RET(_gde_function, PackedInt64Array());
	int64_t seed_encoded;
	PtrToArg<int64_t>::encode(seed, &seed_encoded);
	return internal::_call_utility_ret<PackedInt64Array>(_gde_function, &seed_encoded);
}

Variant UtilityFunctions::weakref(const Variant &obj) {
	static GDExtensionPtrUtilityFunction _gde_function = internal::gdextension_interface_variant_get_ptr_utility_function(StringName("weakref")._native_ptr(), 4776452);
	CHECK_METHOD_BIND_RET(_gde_function, Variant());
	return internal::_call_utility_ret<Variant>(_gde_function, &obj);
}

int64_t UtilityFunctions::type_of(const Variant &variable) {
	static GDExtensionPtrUtilityFunction _gde_function = internal::gdextension_interface_variant_get_ptr_utility_function(StringName("typeof")._native_ptr(), 326422594);
	CHECK_METHOD_BIND_RET(_gde_function, 0);
	return internal::_call_utility_ret<int64_t>(_gde_function, &variable);
}

Variant UtilityFunctions::type_convert(const Variant &variant, int64_t type) {
	static GDExtensionPtrUtilityFunction _gde_function = internal::gdextension_interface_variant_get_ptr_utility_function(StringName("type_convert")._native_ptr(), 2453062746);
	CHECK_METHOD_BIND_RET(_gde_function, Variant());
	int64_t type_encoded;
	PtrToArg<int64_t>::encode(type, &type_encoded);
	return internal::_call_utility_ret<Variant>(_gde_function, &variant, &type_encoded);
}

String UtilityFunctions::str_internal(const Variant **args, GDExtensionInt arg_count) {
	static GDExtensionPtrUtilityFunction _gde_function = internal::gdextension_interface_variant_get_ptr_utility_function(StringName("str")._native_ptr(), 32569176);
	CHECK_METHOD_BIND_RET(_gde_function, String());
	String ret;
	_gde_function(&ret, reinterpret_cast<GDExtensionConstVariantPtr *>(args), arg_count);
	return ret;
}

String UtilityFunctions::error_string(int64_t error) {
	static GDExtensionPtrUtilityFunction _gde_function = internal::gdextension_interface_variant_get_ptr_utility_function(StringName("error_string")._native_ptr(), 942708242);
	CHECK_METHOD_BIND_RET(_gde_function, String());
	int64_t error_encoded;
	PtrToArg<int64_t>::encode(error, &error_encoded);
	return internal::_call_utility_ret<String>(_gde_function, &error_encoded);
}

String UtilityFunctions::type_string(int64_t type) {
	static GDExtensionPtrUtilityFunction _gde_function = internal::gdextension_interface_variant_get_ptr_utility_function(StringName("type_string")._native_ptr(), 942708242);
	CHECK_METHOD_BIND_RET(_gde_function, String());
	int64_t type_encoded;
	PtrToArg<int64_t>::encode(type, &type_encoded);
	return internal::_call_utility_ret<String>(_gde_function, &type_encoded);
}

void UtilityFunctions::print_internal(const Variant **args, GDExtensionInt arg_count) {
	static GDExtensionPtrUtilityFunction _gde_function = internal::gdextension_interface_variant_get_ptr_utility_function(StringName("print")._native_ptr(), 2648703342);
	CHECK_METHOD_BIND(_gde_function);
	Variant ret;
	_gde_function(&ret, reinterpret_cast<GDExtensionConstVariantPtr *>(args), arg_count);
}

void UtilityFunctions::print_rich_internal(const Variant **args, GDExtensionInt arg_count) {
	static GDExtensionPtrUtilityFunction _gde_function = internal::gdextension_interface_variant_get_ptr_utility_function(StringName("print_rich")._native_ptr(), 2648703342);
	CHECK_METHOD_BIND(_gde_function);
	Variant ret;
	_gde_function(&ret, reinterpret_cast<GDExtensionConstVariantPtr *>(args), arg_count);
}

void UtilityFunctions::printerr_internal(const Variant **args, GDExtensionInt arg_count) {
	static GDExtensionPtrUtilityFunction _gde_function = internal::gdextension_interface_variant_get_ptr_utility_function(StringName("printerr")._native_ptr(), 2648703342);
	CHECK_METHOD_BIND(_gde_function);
	Variant ret;
	_gde_function(&ret, reinterpret_cast<GDExtensionConstVariantPtr *>(args), arg_count);
}

void UtilityFunctions::printt_internal(const Variant **args, GDExtensionInt arg_count) {
	static GDExtensionPtrUtilityFunction _gde_function = internal::gdextension_interface_variant_get_ptr_utility_function(StringName("printt")._native_ptr(), 2648703342);
	CHECK_METHOD_BIND(_gde_function);
	Variant ret;
	_gde_function(&ret, reinterpret_cast<GDExtensionConstVariantPtr *>(args), arg_count);
}

void UtilityFunctions::prints_internal(const Variant **args, GDExtensionInt arg_count) {
	static GDExtensionPtrUtilityFunction _gde_function = internal::gdextension_interface_variant_get_ptr_utility_function(StringName("prints")._native_ptr(), 2648703342);
	CHECK_METHOD_BIND(_gde_function);
	Variant ret;
	_gde_function(&ret, reinterpret_cast<GDExtensionConstVariantPtr *>(args), arg_count);
}

void UtilityFunctions::printraw_internal(const Variant **args, GDExtensionInt arg_count) {
	static GDExtensionPtrUtilityFunction _gde_function = internal::gdextension_interface_variant_get_ptr_utility_function(StringName("printraw")._native_ptr(), 2648703342);
	CHECK_METHOD_BIND(_gde_function);
	Variant ret;
	_gde_function(&ret, reinterpret_cast<GDExtensionConstVariantPtr *>(args), arg_count);
}

void UtilityFunctions::print_verbose_internal(const Variant **args, GDExtensionInt arg_count) {
	static GDExtensionPtrUtilityFunction _gde_function = internal::gdextension_interface_variant_get_ptr_utility_function(StringName("print_verbose")._native_ptr(), 2648703342);
	CHECK_METHOD_BIND(_gde_function);
	Variant ret;
	_gde_function(&ret, reinterpret_cast<GDExtensionConstVariantPtr *>(args), arg_count);
}

void UtilityFunctions::push_error_internal(const Variant **args, GDExtensionInt arg_count) {
	static GDExtensionPtrUtilityFunction _gde_function = internal::gdextension_interface_variant_get_ptr_utility_function(StringName("push_error")._native_ptr(), 2648703342);
	CHECK_METHOD_BIND(_gde_function);
	Variant ret;
	_gde_function(&ret, reinterpret_cast<GDExtensionConstVariantPtr *>(args), arg_count);
}

void UtilityFunctions::push_warning_internal(const Variant **args, GDExtensionInt arg_count) {
	static GDExtensionPtrUtilityFunction _gde_function = internal::gdextension_interface_variant_get_ptr_utility_function(StringName("push_warning")._native_ptr(), 2648703342);
	CHECK_METHOD_BIND(_gde_function);
	Variant ret;
	_gde_function(&ret, reinterpret_cast<GDExtensionConstVariantPtr *>(args), arg_count);
}

String UtilityFunctions::var_to_str(const Variant &variable) {
	static GDExtensionPtrUtilityFunction _gde_function = internal::gdextension_interface_variant_get_ptr_utility_function(StringName("var_to_str")._native_ptr(), 866625479);
	CHECK_METHOD_BIND_RET(_gde_function, String());
	return internal::_call_utility_ret<String>(_gde_function, &variable);
}

Variant UtilityFunctions::str_to_var(const String &string) {
	static GDExtensionPtrUtilityFunction _gde_function = internal::gdextension_interface_variant_get_ptr_utility_function(StringName("str_to_var")._native_ptr(), 1891498491);
	CHECK_METHOD_BIND_RET(_gde_function, Variant());
	return internal::_call_utility_ret<Variant>(_gde_function, &string);
}

PackedByteArray UtilityFunctions::var_to_bytes(const Variant &variable) {
	static GDExtensionPtrUtilityFunction _gde_function = internal::gdextension_interface_variant_get_ptr_utility_function(StringName("var_to_bytes")._native_ptr(), 2947269930);
	CHECK_METHOD_BIND_RET(_gde_function, PackedByteArray());
	return internal::_call_utility_ret<PackedByteArray>(_gde_function, &variable);
}

Variant UtilityFunctions::bytes_to_var(const PackedByteArray &bytes) {
	static GDExtensionPtrUtilityFunction _gde_function = internal::gdextension_interface_variant_get_ptr_utility_function(StringName("bytes_to_var")._native_ptr(), 4249819452);
	CHECK_METHOD_BIND_RET(_gde_function, Variant());
	return internal::_call_utility_ret<Variant>(_gde_function, &bytes);
}

PackedByteArray UtilityFunctions::var_to_bytes_with_objects(const Variant &variable) {
	static GDExtensionPtrUtilityFunction _gde_function = internal::gdextension_interface_variant_get_ptr_utility_function(StringName("var_to_bytes_with_objects")._native_ptr(), 2947269930);
	CHECK_METHOD_BIND_RET(_gde_function, PackedByteArray());
	return internal::_call_utility_ret<PackedByteArray>(_gde_function, &variable);
}

Variant UtilityFunctions::bytes_to_var_with_objects(const PackedByteArray &bytes) {
	static GDExtensionPtrUtilityFunction _gde_function = internal::gdextension_interface_variant_get_ptr_utility_function(StringName("bytes_to_var_with_objects")._native_ptr(), 4249819452);
	CHECK_METHOD_BIND_RET(_gde_function, Variant());
	return internal::_call_utility_ret<Variant>(_gde_function, &bytes);
}

int64_t UtilityFunctions::hash(const Variant &variable) {
	static GDExtensionPtrUtilityFunction _gde_function = internal::gdextension_interface_variant_get_ptr_utility_function(StringName("hash")._native_ptr(), 326422594);
	CHECK_METHOD_BIND_RET(_gde_function, 0);
	return internal::_call_utility_ret<int64_t>(_gde_function, &variable);
}

Object  *UtilityFunctions::instance_from_id(int64_t instance_id) {
	static GDExtensionPtrUtilityFunction _gde_function = internal::gdextension_interface_variant_get_ptr_utility_function(StringName("instance_from_id")._native_ptr(), 1156694636);
	CHECK_METHOD_BIND_RET(_gde_function, nullptr);
	int64_t instance_id_encoded;
	PtrToArg<int64_t>::encode(instance_id, &instance_id_encoded);
	return internal::_call_utility_ret_obj(_gde_function, &instance_id_encoded);
}

bool UtilityFunctions::is_instance_id_valid(int64_t id) {
	static GDExtensionPtrUtilityFunction _gde_function = internal::gdextension_interface_variant_get_ptr_utility_function(StringName("is_instance_id_valid")._native_ptr(), 2232439758);
	CHECK_METHOD_BIND_RET(_gde_function, false);
	int64_t id_encoded;
	PtrToArg<int64_t>::encode(id, &id_encoded);
	return internal::_call_utility_ret<int8_t>(_gde_function, &id_encoded);
}

bool UtilityFunctions::is_instance_valid(const Variant &instance) {
	static GDExtensionPtrUtilityFunction _gde_function = internal::gdextension_interface_variant_get_ptr_utility_function(StringName("is_instance_valid")._native_ptr(), 996128841);
	CHECK_METHOD_BIND_RET(_gde_function, false);
	return internal::_call_utility_ret<int8_t>(_gde_function, &instance);
}

int64_t UtilityFunctions::rid_allocate_id() {
	static GDExtensionPtrUtilityFunction _gde_function = internal::gdextension_interface_variant_get_ptr_utility_function(StringName("rid_allocate_id")._native_ptr(), 701202648);
	CHECK_METHOD_BIND_RET(_gde_function, 0);
	return internal::_call_utility_ret<int64_t>(_gde_function);
}

RID UtilityFunctions::rid_from_int64(int64_t base) {
	static GDExtensionPtrUtilityFunction _gde_function = internal::gdextension_interface_variant_get_ptr_utility_function(StringName("rid_from_int64")._native_ptr(), 3426892196);
	CHECK_METHOD_BIND_RET(_gde_function, RID());
	int64_t base_encoded;
	PtrToArg<int64_t>::encode(base, &base_encoded);
	return internal::_call_utility_ret<RID>(_gde_function, &base_encoded);
}

bool UtilityFunctions::is_same(const Variant &a, const Variant &b) {
	static GDExtensionPtrUtilityFunction _gde_function = internal::gdextension_interface_variant_get_ptr_utility_function(StringName("is_same")._native_ptr(), 1409423524);
	CHECK_METHOD_BIND_RET(_gde_function, false);
	return internal::_call_utility_ret<int8_t>(_gde_function, &a, &b);
}

} // namespace godot