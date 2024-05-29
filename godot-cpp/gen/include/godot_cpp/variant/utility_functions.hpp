/**************************************************************************/
/*  utility_functions.hpp                                                 */
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

#ifndef GODOT_CPP_UTILITY_FUNCTIONS_HPP
#define GODOT_CPP_UTILITY_FUNCTIONS_HPP

#include <godot_cpp/variant/builtin_types.hpp>
#include <godot_cpp/variant/variant.hpp>

#include <godot_cpp/templates/vararg.h>

namespace godot {

class UtilityFunctions {
public:
	static double sin(double angle_rad);
	static double cos(double angle_rad);
	static double tan(double angle_rad);
	static double sinh(double x);
	static double cosh(double x);
	static double tanh(double x);
	static double asin(double x);
	static double acos(double x);
	static double atan(double x);
	static double atan2(double y, double x);
	static double asinh(double x);
	static double acosh(double x);
	static double atanh(double x);
	static double sqrt(double x);
	static double fmod(double x, double y);
	static double fposmod(double x, double y);
	static int64_t posmod(int64_t x, int64_t y);
	static Variant floor(const Variant &x);
	static double floorf(double x);
	static int64_t floori(double x);
	static Variant ceil(const Variant &x);
	static double ceilf(double x);
	static int64_t ceili(double x);
	static Variant round(const Variant &x);
	static double roundf(double x);
	static int64_t roundi(double x);
	static Variant abs(const Variant &x);
	static double absf(double x);
	static int64_t absi(int64_t x);
	static Variant sign(const Variant &x);
	static double signf(double x);
	static int64_t signi(int64_t x);
	static Variant snapped(const Variant &x, const Variant &step);
	static double snappedf(double x, double step);
	static int64_t snappedi(double x, int64_t step);
	static double pow(double base, double exp);
	static double log(double x);
	static double exp(double x);
	static bool is_nan(double x);
	static bool is_inf(double x);
	static bool is_equal_approx(double a, double b);
	static bool is_zero_approx(double x);
	static bool is_finite(double x);
	static double ease(double x, double curve);
	static int64_t step_decimals(double x);
	static Variant lerp(const Variant &from, const Variant &to, const Variant &weight);
	static double lerpf(double from, double to, double weight);
	static double cubic_interpolate(double from, double to, double pre, double post, double weight);
	static double cubic_interpolate_angle(double from, double to, double pre, double post, double weight);
	static double cubic_interpolate_in_time(double from, double to, double pre, double post, double weight, double to_t, double pre_t, double post_t);
	static double cubic_interpolate_angle_in_time(double from, double to, double pre, double post, double weight, double to_t, double pre_t, double post_t);
	static double bezier_interpolate(double start, double control_1, double control_2, double end, double t);
	static double bezier_derivative(double start, double control_1, double control_2, double end, double t);
	static double angle_difference(double from, double to);
	static double lerp_angle(double from, double to, double weight);
	static double inverse_lerp(double from, double to, double weight);
	static double remap(double value, double istart, double istop, double ostart, double ostop);
	static double smoothstep(double from, double to, double x);
	static double move_toward(double from, double to, double delta);
	static double rotate_toward(double from, double to, double delta);
	static double deg_to_rad(double deg);
	static double rad_to_deg(double rad);
	static double linear_to_db(double lin);
	static double db_to_linear(double db);
	static Variant wrap(const Variant &value, const Variant &min, const Variant &max);
	static int64_t wrapi(int64_t value, int64_t min, int64_t max);
	static double wrapf(double value, double min, double max);
	private: static Variant max_internal(const Variant **args, GDExtensionInt arg_count);
	public: static Variant max(const Variant &arg1, const Variant &arg2, rest<Variant> args) {
		std::vector<Variant> variant_args;
		for (int i = 0; i < 2; i++) {
			variant_args.push_back(arg1);
			variant_args.push_back(arg2);
		}
		variant_args.insert(variant_args.end(), args.begin(), args.end());
		std::vector<const Variant *> call_args;
		for(size_t i = 0; i < variant_args.size(); i++) {
			call_args.push_back(&variant_args[i]);
		}
		return max_internal(call_args.data(), variant_args.size());
	}
	static int64_t maxi(int64_t a, int64_t b);
	static double maxf(double a, double b);
	private: static Variant min_internal(const Variant **args, GDExtensionInt arg_count);
	public: static Variant min(const Variant &arg1, const Variant &arg2, rest<Variant> args) {
		std::vector<Variant> variant_args;
		for (int i = 0; i < 2; i++) {
			variant_args.push_back(arg1);
			variant_args.push_back(arg2);
		}
		variant_args.insert(variant_args.end(), args.begin(), args.end());
		std::vector<const Variant *> call_args;
		for(size_t i = 0; i < variant_args.size(); i++) {
			call_args.push_back(&variant_args[i]);
		}
		return min_internal(call_args.data(), variant_args.size());
	}
	static int64_t mini(int64_t a, int64_t b);
	static double minf(double a, double b);
	static Variant clamp(const Variant &value, const Variant &min, const Variant &max);
	static int64_t clampi(int64_t value, int64_t min, int64_t max);
	static double clampf(double value, double min, double max);
	static int64_t nearest_po2(int64_t value);
	static double pingpong(double value, double length);
	static void randomize();
	static int64_t randi();
	static double randf();
	static int64_t randi_range(int64_t from, int64_t to);
	static double randf_range(double from, double to);
	static double randfn(double mean, double deviation);
	static void seed(int64_t base);
	static PackedInt64Array rand_from_seed(int64_t seed);
	static Variant weakref(const Variant &obj);
	static int64_t type_of(const Variant &variable);
	static Variant type_convert(const Variant &variant, int64_t type);
	private: static String str_internal(const Variant **args, GDExtensionInt arg_count);
	public: static String str(const Variant &arg1, rest<Variant> args) {
		std::vector<Variant> variant_args;
		for (int i = 0; i < 1; i++) {
			variant_args.push_back(arg1);
		}
		variant_args.insert(variant_args.end(), args.begin(), args.end());
		std::vector<const Variant *> call_args;
		for(size_t i = 0; i < variant_args.size(); i++) {
			call_args.push_back(&variant_args[i]);
		}
		return str_internal(call_args.data(), variant_args.size());
	}
	static String error_string(int64_t error);
	static String type_string(int64_t type);
	private: static void print_internal(const Variant **args, GDExtensionInt arg_count);
	public: static void print(const Variant &arg1, rest<Variant> args) {
		std::vector<Variant> variant_args;
		for (int i = 0; i < 1; i++) {
			variant_args.push_back(arg1);
		}
		variant_args.insert(variant_args.end(), args.begin(), args.end());
		std::vector<const Variant *> call_args;
		for(size_t i = 0; i < variant_args.size(); i++) {
			call_args.push_back(&variant_args[i]);
		}
		print_internal(call_args.data(), variant_args.size());
	}
	private: static void print_rich_internal(const Variant **args, GDExtensionInt arg_count);
	public: static void print_rich(const Variant &arg1, rest<Variant> args) {
		std::vector<Variant> variant_args;
		for (int i = 0; i < 1; i++) {
			variant_args.push_back(arg1);
		}
		variant_args.insert(variant_args.end(), args.begin(), args.end());
		std::vector<const Variant *> call_args;
		for(size_t i = 0; i < variant_args.size(); i++) {
			call_args.push_back(&variant_args[i]);
		}
		print_rich_internal(call_args.data(), variant_args.size());
	}
	private: static void printerr_internal(const Variant **args, GDExtensionInt arg_count);
	public: static void printerr(const Variant &arg1, rest<Variant> args) {
		std::vector<Variant> variant_args;
		for (int i = 0; i < 1; i++) {
			variant_args.push_back(arg1);
		}
		variant_args.insert(variant_args.end(), args.begin(), args.end());
		std::vector<const Variant *> call_args;
		for(size_t i = 0; i < variant_args.size(); i++) {
			call_args.push_back(&variant_args[i]);
		}
		printerr_internal(call_args.data(), variant_args.size());
	}
	private: static void printt_internal(const Variant **args, GDExtensionInt arg_count);
	public: static void printt(const Variant &arg1, rest<Variant> args) {
		std::vector<Variant> variant_args;
		for (int i = 0; i < 1; i++) {
			variant_args.push_back(arg1);
		}
		variant_args.insert(variant_args.end(), args.begin(), args.end());
		std::vector<const Variant *> call_args;
		for(size_t i = 0; i < variant_args.size(); i++) {
			call_args.push_back(&variant_args[i]);
		}
		printt_internal(call_args.data(), variant_args.size());
	}
	private: static void prints_internal(const Variant **args, GDExtensionInt arg_count);
	public: static void prints(const Variant &arg1, rest<Variant> args) {
		std::vector<Variant> variant_args;
		for (int i = 0; i < 1; i++) {
			variant_args.push_back(arg1);
		}
		variant_args.insert(variant_args.end(), args.begin(), args.end());
		std::vector<const Variant *> call_args;
		for(size_t i = 0; i < variant_args.size(); i++) {
			call_args.push_back(&variant_args[i]);
		}
		prints_internal(call_args.data(), variant_args.size());
	}
	private: static void printraw_internal(const Variant **args, GDExtensionInt arg_count);
	public: static void printraw(const Variant &arg1, rest<Variant> args) {
		std::vector<Variant> variant_args;
		for (int i = 0; i < 1; i++) {
			variant_args.push_back(arg1);
		}
		variant_args.insert(variant_args.end(), args.begin(), args.end());
		std::vector<const Variant *> call_args;
		for(size_t i = 0; i < variant_args.size(); i++) {
			call_args.push_back(&variant_args[i]);
		}
		printraw_internal(call_args.data(), variant_args.size());
	}
	private: static void print_verbose_internal(const Variant **args, GDExtensionInt arg_count);
	public: static void print_verbose(const Variant &arg1, rest<Variant> args) {
		std::vector<Variant> variant_args;
		for (int i = 0; i < 1; i++) {
			variant_args.push_back(arg1);
		}
		variant_args.insert(variant_args.end(), args.begin(), args.end());
		std::vector<const Variant *> call_args;
		for(size_t i = 0; i < variant_args.size(); i++) {
			call_args.push_back(&variant_args[i]);
		}
		print_verbose_internal(call_args.data(), variant_args.size());
	}
	private: static void push_error_internal(const Variant **args, GDExtensionInt arg_count);
	public: static void push_error(const Variant &arg1, rest<Variant> args) {
		std::vector<Variant> variant_args;
		for (int i = 0; i < 1; i++) {
			variant_args.push_back(arg1);
		}
		variant_args.insert(variant_args.end(), args.begin(), args.end());
		std::vector<const Variant *> call_args;
		for(size_t i = 0; i < variant_args.size(); i++) {
			call_args.push_back(&variant_args[i]);
		}
		push_error_internal(call_args.data(), variant_args.size());
	}
	private: static void push_warning_internal(const Variant **args, GDExtensionInt arg_count);
	public: static void push_warning(const Variant &arg1, rest<Variant> args) {
		std::vector<Variant> variant_args;
		for (int i = 0; i < 1; i++) {
			variant_args.push_back(arg1);
		}
		variant_args.insert(variant_args.end(), args.begin(), args.end());
		std::vector<const Variant *> call_args;
		for(size_t i = 0; i < variant_args.size(); i++) {
			call_args.push_back(&variant_args[i]);
		}
		push_warning_internal(call_args.data(), variant_args.size());
	}
	static String var_to_str(const Variant &variable);
	static Variant str_to_var(const String &string);
	static PackedByteArray var_to_bytes(const Variant &variable);
	static Variant bytes_to_var(const PackedByteArray &bytes);
	static PackedByteArray var_to_bytes_with_objects(const Variant &variable);
	static Variant bytes_to_var_with_objects(const PackedByteArray &bytes);
	static int64_t hash(const Variant &variable);
	static Object  *instance_from_id(int64_t instance_id);
	static bool is_instance_id_valid(int64_t id);
	static bool is_instance_valid(const Variant &instance);
	static int64_t rid_allocate_id();
	static RID rid_from_int64(int64_t base);
	static bool is_same(const Variant &a, const Variant &b);
};

} // namespace godot

#endif // ! GODOT_CPP_UTILITY_FUNCTIONS_HPP