#include "register/utils.h"
#include <godot_cpp/variant/utility_functions.hpp>

using namespace godot;

JSValue js_print(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	Array args;
	for (int i = 0; i < argc; i++) {
		if (JS_IsString(argv[i]) == 0) {
			args.push_back(JS_ToCString(ctx, argv[i]));
		} else if (JS_IsNumber(argv[i]) == 0) {
			int32_t _i;
			JS_ToInt32(ctx, &_i, argv[i]);
			args.push_back(_i);
		} else {
			args.push_back(nullptr);
		}
	}
	UtilityFunctions::print(Variant(), args);
	return JS_UNDEFINED;
}

void register_utility_functions() {
	// ADD_GLOBAL_FUNCTION(sin, &UtilityFunctions::sin);

	// ADD_GLOBAL_FUNCTION(cos, &UtilityFunctions::cos);

	// ADD_GLOBAL_FUNCTION(tan, &UtilityFunctions::tan);

	// ADD_GLOBAL_FUNCTION(sinh, &UtilityFunctions::sinh);

	// ADD_GLOBAL_FUNCTION(cosh, &UtilityFunctions::cosh);

	// ADD_GLOBAL_FUNCTION(tanh, &UtilityFunctions::tanh);

	// ADD_GLOBAL_FUNCTION(asin, &UtilityFunctions::asin);

	// ADD_GLOBAL_FUNCTION(acos, &UtilityFunctions::acos);

	// ADD_GLOBAL_FUNCTION(atan, &UtilityFunctions::atan);

	// ADD_GLOBAL_FUNCTION(atan2, &UtilityFunctions::atan2);

	// ADD_GLOBAL_FUNCTION(asinh, &UtilityFunctions::asinh);

	// ADD_GLOBAL_FUNCTION(acosh, &UtilityFunctions::acosh);

	// ADD_GLOBAL_FUNCTION(atanh, &UtilityFunctions::atanh);

	// ADD_GLOBAL_FUNCTION(sqrt, &UtilityFunctions::sqrt);

	// ADD_GLOBAL_FUNCTION(fmod, &UtilityFunctions::fmod);

	// ADD_GLOBAL_FUNCTION(fposmod, &UtilityFunctions::fposmod);

	// ADD_GLOBAL_FUNCTION(posmod, &UtilityFunctions::posmod);

	// ADD_GLOBAL_FUNCTION(floor, &UtilityFunctions::floor);

	// ADD_GLOBAL_FUNCTION(floorf, &UtilityFunctions::floorf);

	// ADD_GLOBAL_FUNCTION(floori, &UtilityFunctions::floori);

	// ADD_GLOBAL_FUNCTION(ceil, &UtilityFunctions::ceil);

	// ADD_GLOBAL_FUNCTION(ceilf, &UtilityFunctions::ceilf);

	// ADD_GLOBAL_FUNCTION(ceili, &UtilityFunctions::ceili);

	// ADD_GLOBAL_FUNCTION(round, &UtilityFunctions::round);

	// ADD_GLOBAL_FUNCTION(roundf, &UtilityFunctions::roundf);

	// ADD_GLOBAL_FUNCTION(roundi, &UtilityFunctions::roundi);

	// ADD_GLOBAL_FUNCTION(abs, &UtilityFunctions::abs);

	// ADD_GLOBAL_FUNCTION(absf, &UtilityFunctions::absf);

	// ADD_GLOBAL_FUNCTION(absi, &UtilityFunctions::absi);

	// ADD_GLOBAL_FUNCTION(sign, &UtilityFunctions::sign);

	// ADD_GLOBAL_FUNCTION(signf, &UtilityFunctions::signf);

	// ADD_GLOBAL_FUNCTION(signi, &UtilityFunctions::signi);

	// ADD_GLOBAL_FUNCTION(snapped, &UtilityFunctions::snapped);

	// ADD_GLOBAL_FUNCTION(snappedf, &UtilityFunctions::snappedf);

	// ADD_GLOBAL_FUNCTION(snappedi, &UtilityFunctions::snappedi);

	// ADD_GLOBAL_FUNCTION(pow, &UtilityFunctions::pow);

	// ADD_GLOBAL_FUNCTION(log, &UtilityFunctions::log);

	// ADD_GLOBAL_FUNCTION(exp, &UtilityFunctions::exp);

	// ADD_GLOBAL_FUNCTION(is_nan, &UtilityFunctions::is_nan);

	// ADD_GLOBAL_FUNCTION(is_inf, &UtilityFunctions::is_inf);

	// ADD_GLOBAL_FUNCTION(is_equal_approx, &UtilityFunctions::is_equal_approx);

	// ADD_GLOBAL_FUNCTION(is_zero_approx, &UtilityFunctions::is_zero_approx);

	// ADD_GLOBAL_FUNCTION(is_finite, &UtilityFunctions::is_finite);

	// ADD_GLOBAL_FUNCTION(ease, &UtilityFunctions::ease);

	// ADD_GLOBAL_FUNCTION(step_decimals, &UtilityFunctions::step_decimals);

	// ADD_GLOBAL_FUNCTION(lerp, &UtilityFunctions::lerp);

	// ADD_GLOBAL_FUNCTION(lerpf, &UtilityFunctions::lerpf);

	// ADD_GLOBAL_FUNCTION(cubic_interpolate, &UtilityFunctions::cubic_interpolate);

	// ADD_GLOBAL_FUNCTION(cubic_interpolate_angle, &UtilityFunctions::cubic_interpolate_angle);

	// ADD_GLOBAL_FUNCTION(cubic_interpolate_in_time, &UtilityFunctions::cubic_interpolate_in_time);

	// ADD_GLOBAL_FUNCTION(cubic_interpolate_angle_in_time, &UtilityFunctions::cubic_interpolate_angle_in_time);

	// ADD_GLOBAL_FUNCTION(bezier_interpolate, &UtilityFunctions::bezier_interpolate);

	// ADD_GLOBAL_FUNCTION(bezier_derivative, &UtilityFunctions::bezier_derivative);

	// ADD_GLOBAL_FUNCTION(angle_difference, &UtilityFunctions::angle_difference);

	// ADD_GLOBAL_FUNCTION(lerp_angle, &UtilityFunctions::lerp_angle);

	// ADD_GLOBAL_FUNCTION(inverse_lerp, &UtilityFunctions::inverse_lerp);

	// ADD_GLOBAL_FUNCTION(remap, &UtilityFunctions::remap);

	// ADD_GLOBAL_FUNCTION(smoothstep, &UtilityFunctions::smoothstep);

	// ADD_GLOBAL_FUNCTION(move_toward, &UtilityFunctions::move_toward);

	// ADD_GLOBAL_FUNCTION(rotate_toward, &UtilityFunctions::rotate_toward);

	// ADD_GLOBAL_FUNCTION(deg_to_rad, &UtilityFunctions::deg_to_rad);

	// ADD_GLOBAL_FUNCTION(rad_to_deg, &UtilityFunctions::rad_to_deg);

	// ADD_GLOBAL_FUNCTION(linear_to_db, &UtilityFunctions::linear_to_db);

	// ADD_GLOBAL_FUNCTION(db_to_linear, &UtilityFunctions::db_to_linear);

	// ADD_GLOBAL_FUNCTION(wrap, &UtilityFunctions::wrap);

	// ADD_GLOBAL_FUNCTION(wrapi, &UtilityFunctions::wrapi);

	// ADD_GLOBAL_FUNCTION(wrapf, &UtilityFunctions::wrapf);

	// ADD_GLOBAL_FUNCTION(max, &UtilityFunctions::max);

	// ADD_GLOBAL_FUNCTION(maxi, &UtilityFunctions::maxi);

	// ADD_GLOBAL_FUNCTION(maxf, &UtilityFunctions::maxf);

	// ADD_GLOBAL_FUNCTION(min, &UtilityFunctions::min);

	// ADD_GLOBAL_FUNCTION(mini, &UtilityFunctions::mini);

	// ADD_GLOBAL_FUNCTION(minf, &UtilityFunctions::minf);

	// ADD_GLOBAL_FUNCTION(clamp, &UtilityFunctions::clamp);

	// ADD_GLOBAL_FUNCTION(clampi, &UtilityFunctions::clampi);

	// ADD_GLOBAL_FUNCTION(clampf, &UtilityFunctions::clampf);

	// ADD_GLOBAL_FUNCTION(nearest_po2, &UtilityFunctions::nearest_po2);

	// ADD_GLOBAL_FUNCTION(pingpong, &UtilityFunctions::pingpong);

	// ADD_GLOBAL_FUNCTION(randomize, &UtilityFunctions::randomize);

	// ADD_GLOBAL_FUNCTION(randi, &UtilityFunctions::randi);

	// ADD_GLOBAL_FUNCTION(randf, &UtilityFunctions::randf);

	// ADD_GLOBAL_FUNCTION(randi_range, &UtilityFunctions::randi_range);

	// ADD_GLOBAL_FUNCTION(randf_range, &UtilityFunctions::randf_range);

	// ADD_GLOBAL_FUNCTION(randfn, &UtilityFunctions::randfn);

	// ADD_GLOBAL_FUNCTION(seed, &UtilityFunctions::seed);

	// ADD_GLOBAL_FUNCTION(rand_from_seed, &UtilityFunctions::rand_from_seed);

	// ADD_GLOBAL_FUNCTION(weakref, &UtilityFunctions::weakref);

	// ADD_GLOBAL_FUNCTION(typeof, &UtilityFunctions::typeof);

	// ADD_GLOBAL_FUNCTION(type_convert, &UtilityFunctions::type_convert);

	// ADD_GLOBAL_FUNCTION(str, &UtilityFunctions::str);

	// ADD_GLOBAL_FUNCTION(error_string, &UtilityFunctions::error_string);

	// ADD_GLOBAL_FUNCTION(type_string, &UtilityFunctions::type_string);

	ADD_GLOBAL_FUNCTION(print, &js_print);

	// ADD_GLOBAL_FUNCTION(print_rich, &UtilityFunctions::print_rich);

	// ADD_GLOBAL_FUNCTION(printerr, &UtilityFunctions::printerr);

	// ADD_GLOBAL_FUNCTION(printt, &UtilityFunctions::printt);

	// ADD_GLOBAL_FUNCTION(prints, &UtilityFunctions::prints);

	// ADD_GLOBAL_FUNCTION(printraw, &UtilityFunctions::printraw);

	// ADD_GLOBAL_FUNCTION(print_verbose, &UtilityFunctions::print_verbose);

	// ADD_GLOBAL_FUNCTION(push_error, &UtilityFunctions::push_error);

	// ADD_GLOBAL_FUNCTION(push_warning, &UtilityFunctions::push_warning);

	// ADD_GLOBAL_FUNCTION(var_to_str, &UtilityFunctions::var_to_str);

	// ADD_GLOBAL_FUNCTION(str_to_var, &UtilityFunctions::str_to_var);

	// ADD_GLOBAL_FUNCTION(var_to_bytes, &UtilityFunctions::var_to_bytes);

	// ADD_GLOBAL_FUNCTION(bytes_to_var, &UtilityFunctions::bytes_to_var);

	// ADD_GLOBAL_FUNCTION(var_to_bytes_with_objects, &UtilityFunctions::var_to_bytes_with_objects);

	// ADD_GLOBAL_FUNCTION(bytes_to_var_with_objects, &UtilityFunctions::bytes_to_var_with_objects);

	// ADD_GLOBAL_FUNCTION(hash, &UtilityFunctions::hash);

	// ADD_GLOBAL_FUNCTION(instance_from_id, &UtilityFunctions::instance_from_id);

	// ADD_GLOBAL_FUNCTION(is_instance_id_valid, &UtilityFunctions::is_instance_id_valid);

	// ADD_GLOBAL_FUNCTION(is_instance_valid, &UtilityFunctions::is_instance_valid);

	// ADD_GLOBAL_FUNCTION(rid_allocate_id, &UtilityFunctions::rid_allocate_id);

	// ADD_GLOBAL_FUNCTION(rid_from_int64, &UtilityFunctions::rid_from_int64);

	// ADD_GLOBAL_FUNCTION(is_same, &UtilityFunctions::is_same);
}