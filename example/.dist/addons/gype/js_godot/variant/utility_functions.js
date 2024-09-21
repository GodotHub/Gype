var __classPrivateFieldSet = (this && this.__classPrivateFieldSet) || function (receiver, state, value, kind, f) {
    if (kind === "m") throw new TypeError("Private method is not writable");
    if (kind === "a" && !f) throw new TypeError("Private accessor was defined without a setter");
    if (typeof state === "function" ? receiver !== state || !f : !state.has(receiver)) throw new TypeError("Cannot write private member to an object whose class did not declare it");
    return (kind === "a" ? f.call(receiver, value) : f ? f.value = value : state.set(receiver, value)), value;
};
var __classPrivateFieldGet = (this && this.__classPrivateFieldGet) || function (receiver, state, kind, f) {
    if (kind === "a" && !f) throw new TypeError("Private accessor was defined without a getter");
    if (typeof state === "function" ? receiver !== state || !f : !state.has(receiver)) throw new TypeError("Cannot read private member from an object whose class did not declare it");
    return kind === "m" ? f : kind === "a" ? f.call(receiver) : f ? f.value : state.get(receiver);
};
var _a, _Random_randomize_func, _Random_randi_func, _Random_randf_func, _Random_randi_range_func, _Random_randf_range_func, _Random_randfn_func, _Random_seed_func, _Random_rand_from_seed_func, _Random_randomize_internal, _Random_randi_internal, _Random_randf_internal, _Random_randi_range_internal, _Random_randf_range_internal, _Random_randfn_internal, _Random_seed_internal, _Random_rand_from_seed_internal, _b, _Math_sin_func, _Math_cos_func, _Math_tan_func, _Math_sinh_func, _Math_cosh_func, _Math_tanh_func, _Math_asin_func, _Math_acos_func, _Math_atan_func, _Math_atan2_func, _Math_asinh_func, _Math_acosh_func, _Math_atanh_func, _Math_sqrt_func, _Math_fmod_func, _Math_fposmod_func, _Math_posmod_func, _Math_floor_func, _Math_floorf_func, _Math_floori_func, _Math_ceil_func, _Math_ceilf_func, _Math_ceili_func, _Math_round_func, _Math_roundf_func, _Math_roundi_func, _Math_abs_func, _Math_absf_func, _Math_absi_func, _Math_sign_func, _Math_signf_func, _Math_signi_func, _Math_snapped_func, _Math_snappedf_func, _Math_snappedi_func, _Math_pow_func, _Math_log_func, _Math_exp_func, _Math_is_nan_func, _Math_is_inf_func, _Math_is_equal_approx_func, _Math_is_zero_approx_func, _Math_is_finite_func, _Math_ease_func, _Math_step_decimals_func, _Math_lerp_func, _Math_lerpf_func, _Math_cubic_interpolate_func, _Math_cubic_interpolate_angle_func, _Math_cubic_interpolate_in_time_func, _Math_cubic_interpolate_angle_in_time_func, _Math_bezier_interpolate_func, _Math_bezier_derivative_func, _Math_angle_difference_func, _Math_lerp_angle_func, _Math_inverse_lerp_func, _Math_remap_func, _Math_smoothstep_func, _Math_move_toward_func, _Math_rotate_toward_func, _Math_deg_to_rad_func, _Math_rad_to_deg_func, _Math_linear_to_db_func, _Math_db_to_linear_func, _Math_wrap_func, _Math_wrapi_func, _Math_wrapf_func, _Math_max_func, _Math_maxi_func, _Math_maxf_func, _Math_min_func, _Math_mini_func, _Math_minf_func, _Math_clamp_func, _Math_clampi_func, _Math_clampf_func, _Math_nearest_po2_func, _Math_pingpong_func, _Math_sin_internal, _Math_cos_internal, _Math_tan_internal, _Math_sinh_internal, _Math_cosh_internal, _Math_tanh_internal, _Math_asin_internal, _Math_acos_internal, _Math_atan_internal, _Math_atan2_internal, _Math_asinh_internal, _Math_acosh_internal, _Math_atanh_internal, _Math_sqrt_internal, _Math_fmod_internal, _Math_fposmod_internal, _Math_posmod_internal, _Math_floor_internal, _Math_floorf_internal, _Math_floori_internal, _Math_ceil_internal, _Math_ceilf_internal, _Math_ceili_internal, _Math_round_internal, _Math_roundf_internal, _Math_roundi_internal, _Math_abs_internal, _Math_absf_internal, _Math_absi_internal, _Math_sign_internal, _Math_signf_internal, _Math_signi_internal, _Math_snapped_internal, _Math_snappedf_internal, _Math_snappedi_internal, _Math_pow_internal, _Math_log_internal, _Math_exp_internal, _Math_is_nan_internal, _Math_is_inf_internal, _Math_is_equal_approx_internal, _Math_is_zero_approx_internal, _Math_is_finite_internal, _Math_ease_internal, _Math_step_decimals_internal, _Math_lerp_internal, _Math_lerpf_internal, _Math_cubic_interpolate_internal, _Math_cubic_interpolate_angle_internal, _Math_cubic_interpolate_in_time_internal, _Math_cubic_interpolate_angle_in_time_internal, _Math_bezier_interpolate_internal, _Math_bezier_derivative_internal, _Math_angle_difference_internal, _Math_lerp_angle_internal, _Math_inverse_lerp_internal, _Math_remap_internal, _Math_smoothstep_internal, _Math_move_toward_internal, _Math_rotate_toward_internal, _Math_deg_to_rad_internal, _Math_rad_to_deg_internal, _Math_linear_to_db_internal, _Math_db_to_linear_internal, _Math_wrap_internal, _Math_wrapi_internal, _Math_wrapf_internal, _Math_max_internal, _Math_maxi_internal, _Math_maxf_internal, _Math_min_internal, _Math_mini_internal, _Math_minf_internal, _Math_clamp_internal, _Math_clampi_internal, _Math_clampf_internal, _Math_nearest_po2_internal, _Math_pingpong_internal, _c, _GD_weakref_func, _GD_typeof_func, _GD_type_convert_func, _GD_str_func, _GD_error_string_func, _GD_type_string_func, _GD_print_func, _GD_print_rich_func, _GD_printerr_func, _GD_printt_func, _GD_prints_func, _GD_printraw_func, _GD_print_verbose_func, _GD_push_error_func, _GD_push_warning_func, _GD_var_to_str_func, _GD_str_to_var_func, _GD_var_to_bytes_func, _GD_bytes_to_var_func, _GD_var_to_bytes_with_objects_func, _GD_bytes_to_var_with_objects_func, _GD_hash_func, _GD_instance_from_id_func, _GD_is_instance_id_valid_func, _GD_is_instance_valid_func, _GD_rid_allocate_id_func, _GD_rid_from_int64_func, _GD_is_same_func, _GD_weakref_internal, _GD_typeof_internal, _GD_type_convert_internal, _GD_str_internal, _GD_error_string_internal, _GD_type_string_internal, _GD_print_internal, _GD_print_rich_internal, _GD_printerr_internal, _GD_printt_internal, _GD_prints_internal, _GD_printraw_internal, _GD_print_verbose_internal, _GD_push_error_internal, _GD_push_warning_internal, _GD_var_to_str_internal, _GD_str_to_var_internal, _GD_var_to_bytes_internal, _GD_bytes_to_var_internal, _GD_var_to_bytes_with_objects_internal, _GD_bytes_to_var_with_objects_internal, _GD_hash_internal, _GD_instance_from_id_internal, _GD_is_instance_id_valid_internal, _GD_is_instance_valid_internal, _GD_rid_allocate_id_internal, _GD_rid_from_int64_internal, _GD_is_same_internal;
import { call_utility_ret, call_utility_no_ret, } from "@js_godot/core/engine_ptrcall";
import { StringName } from "@js_godot/variant/string_name";
import { variant_get_ptr_utility_function } from "__internal__";
export class Random {
    static _init_bindings() {
        __classPrivateFieldSet(this, _a, variant_get_ptr_utility_function(new StringName("randomize").opaque, 1691721052), "f", _Random_randomize_func);
        __classPrivateFieldSet(this, _a, variant_get_ptr_utility_function(new StringName("randi").opaque, 701202648), "f", _Random_randi_func);
        __classPrivateFieldSet(this, _a, variant_get_ptr_utility_function(new StringName("randf").opaque, 2086227845), "f", _Random_randf_func);
        __classPrivateFieldSet(this, _a, variant_get_ptr_utility_function(new StringName("randi_range").opaque, 3133453818), "f", _Random_randi_range_func);
        __classPrivateFieldSet(this, _a, variant_get_ptr_utility_function(new StringName("randf_range").opaque, 92296394), "f", _Random_randf_range_func);
        __classPrivateFieldSet(this, _a, variant_get_ptr_utility_function(new StringName("randfn").opaque, 92296394), "f", _Random_randfn_func);
        __classPrivateFieldSet(this, _a, variant_get_ptr_utility_function(new StringName("seed").opaque, 382931173), "f", _Random_seed_func);
        __classPrivateFieldSet(this, _a, variant_get_ptr_utility_function(new StringName("rand_from_seed").opaque, 1391063685), "f", _Random_rand_from_seed_func);
    }
    randomize() {
        return __classPrivateFieldGet(_a, _a, "m", _Random_randomize_internal).call(_a);
    }
    randi() {
        return __classPrivateFieldGet(_a, _a, "m", _Random_randi_internal).call(_a);
    }
    randf() {
        return __classPrivateFieldGet(_a, _a, "m", _Random_randf_internal).call(_a);
    }
    randi_range(from, to) {
        return __classPrivateFieldGet(_a, _a, "m", _Random_randi_range_internal).call(_a, from, to);
    }
    randf_range(from, to) {
        return __classPrivateFieldGet(_a, _a, "m", _Random_randf_range_internal).call(_a, from, to);
    }
    randfn(mean, deviation) {
        return __classPrivateFieldGet(_a, _a, "m", _Random_randfn_internal).call(_a, mean, deviation);
    }
    seed(base) {
        return __classPrivateFieldGet(_a, _a, "m", _Random_seed_internal).call(_a, base);
    }
    rand_from_seed(seed) {
        return __classPrivateFieldGet(_a, _a, "m", _Random_rand_from_seed_internal).call(_a, seed);
    }
}
_a = Random, _Random_randomize_internal = function _Random_randomize_internal() {
    call_utility_no_ret(__classPrivateFieldGet(this, _a, "f", _Random_randomize_func));
}, _Random_randi_internal = function _Random_randi_internal() {
    return call_utility_ret(__classPrivateFieldGet(this, _a, "f", _Random_randi_func));
}, _Random_randf_internal = function _Random_randf_internal() {
    return call_utility_ret(__classPrivateFieldGet(this, _a, "f", _Random_randf_func));
}, _Random_randi_range_internal = function _Random_randi_range_internal(from, to) {
    return call_utility_ret(__classPrivateFieldGet(this, _a, "f", _Random_randi_range_func), from, to);
}, _Random_randf_range_internal = function _Random_randf_range_internal(from, to) {
    return call_utility_ret(__classPrivateFieldGet(this, _a, "f", _Random_randf_range_func), from, to);
}, _Random_randfn_internal = function _Random_randfn_internal(mean, deviation) {
    return call_utility_ret(__classPrivateFieldGet(this, _a, "f", _Random_randfn_func), mean, deviation);
}, _Random_seed_internal = function _Random_seed_internal(base) {
    call_utility_no_ret(__classPrivateFieldGet(this, _a, "f", _Random_seed_func), base);
}, _Random_rand_from_seed_internal = function _Random_rand_from_seed_internal(seed) {
    return call_utility_ret(__classPrivateFieldGet(this, _a, "f", _Random_rand_from_seed_func), seed);
};
_Random_randomize_func = { value: void 0 };
_Random_randi_func = { value: void 0 };
_Random_randf_func = { value: void 0 };
_Random_randi_range_func = { value: void 0 };
_Random_randf_range_func = { value: void 0 };
_Random_randfn_func = { value: void 0 };
_Random_seed_func = { value: void 0 };
_Random_rand_from_seed_func = { value: void 0 };
export class Math {
    static _init_bindings() {
        __classPrivateFieldSet(this, _b, variant_get_ptr_utility_function(new StringName("sin").opaque, 2140049587), "f", _Math_sin_func);
        __classPrivateFieldSet(this, _b, variant_get_ptr_utility_function(new StringName("cos").opaque, 2140049587), "f", _Math_cos_func);
        __classPrivateFieldSet(this, _b, variant_get_ptr_utility_function(new StringName("tan").opaque, 2140049587), "f", _Math_tan_func);
        __classPrivateFieldSet(this, _b, variant_get_ptr_utility_function(new StringName("sinh").opaque, 2140049587), "f", _Math_sinh_func);
        __classPrivateFieldSet(this, _b, variant_get_ptr_utility_function(new StringName("cosh").opaque, 2140049587), "f", _Math_cosh_func);
        __classPrivateFieldSet(this, _b, variant_get_ptr_utility_function(new StringName("tanh").opaque, 2140049587), "f", _Math_tanh_func);
        __classPrivateFieldSet(this, _b, variant_get_ptr_utility_function(new StringName("asin").opaque, 2140049587), "f", _Math_asin_func);
        __classPrivateFieldSet(this, _b, variant_get_ptr_utility_function(new StringName("acos").opaque, 2140049587), "f", _Math_acos_func);
        __classPrivateFieldSet(this, _b, variant_get_ptr_utility_function(new StringName("atan").opaque, 2140049587), "f", _Math_atan_func);
        __classPrivateFieldSet(this, _b, variant_get_ptr_utility_function(new StringName("atan2").opaque, 92296394), "f", _Math_atan2_func);
        __classPrivateFieldSet(this, _b, variant_get_ptr_utility_function(new StringName("asinh").opaque, 2140049587), "f", _Math_asinh_func);
        __classPrivateFieldSet(this, _b, variant_get_ptr_utility_function(new StringName("acosh").opaque, 2140049587), "f", _Math_acosh_func);
        __classPrivateFieldSet(this, _b, variant_get_ptr_utility_function(new StringName("atanh").opaque, 2140049587), "f", _Math_atanh_func);
        __classPrivateFieldSet(this, _b, variant_get_ptr_utility_function(new StringName("sqrt").opaque, 2140049587), "f", _Math_sqrt_func);
        __classPrivateFieldSet(this, _b, variant_get_ptr_utility_function(new StringName("fmod").opaque, 92296394), "f", _Math_fmod_func);
        __classPrivateFieldSet(this, _b, variant_get_ptr_utility_function(new StringName("fposmod").opaque, 92296394), "f", _Math_fposmod_func);
        __classPrivateFieldSet(this, _b, variant_get_ptr_utility_function(new StringName("posmod").opaque, 3133453818), "f", _Math_posmod_func);
        __classPrivateFieldSet(this, _b, variant_get_ptr_utility_function(new StringName("floor").opaque, 4776452), "f", _Math_floor_func);
        __classPrivateFieldSet(this, _b, variant_get_ptr_utility_function(new StringName("floorf").opaque, 2140049587), "f", _Math_floorf_func);
        __classPrivateFieldSet(this, _b, variant_get_ptr_utility_function(new StringName("floori").opaque, 2780425386), "f", _Math_floori_func);
        __classPrivateFieldSet(this, _b, variant_get_ptr_utility_function(new StringName("ceil").opaque, 4776452), "f", _Math_ceil_func);
        __classPrivateFieldSet(this, _b, variant_get_ptr_utility_function(new StringName("ceilf").opaque, 2140049587), "f", _Math_ceilf_func);
        __classPrivateFieldSet(this, _b, variant_get_ptr_utility_function(new StringName("ceili").opaque, 2780425386), "f", _Math_ceili_func);
        __classPrivateFieldSet(this, _b, variant_get_ptr_utility_function(new StringName("round").opaque, 4776452), "f", _Math_round_func);
        __classPrivateFieldSet(this, _b, variant_get_ptr_utility_function(new StringName("roundf").opaque, 2140049587), "f", _Math_roundf_func);
        __classPrivateFieldSet(this, _b, variant_get_ptr_utility_function(new StringName("roundi").opaque, 2780425386), "f", _Math_roundi_func);
        __classPrivateFieldSet(this, _b, variant_get_ptr_utility_function(new StringName("abs").opaque, 4776452), "f", _Math_abs_func);
        __classPrivateFieldSet(this, _b, variant_get_ptr_utility_function(new StringName("absf").opaque, 2140049587), "f", _Math_absf_func);
        __classPrivateFieldSet(this, _b, variant_get_ptr_utility_function(new StringName("absi").opaque, 2157319888), "f", _Math_absi_func);
        __classPrivateFieldSet(this, _b, variant_get_ptr_utility_function(new StringName("sign").opaque, 4776452), "f", _Math_sign_func);
        __classPrivateFieldSet(this, _b, variant_get_ptr_utility_function(new StringName("signf").opaque, 2140049587), "f", _Math_signf_func);
        __classPrivateFieldSet(this, _b, variant_get_ptr_utility_function(new StringName("signi").opaque, 2157319888), "f", _Math_signi_func);
        __classPrivateFieldSet(this, _b, variant_get_ptr_utility_function(new StringName("snapped").opaque, 459914704), "f", _Math_snapped_func);
        __classPrivateFieldSet(this, _b, variant_get_ptr_utility_function(new StringName("snappedf").opaque, 92296394), "f", _Math_snappedf_func);
        __classPrivateFieldSet(this, _b, variant_get_ptr_utility_function(new StringName("snappedi").opaque, 3570758393), "f", _Math_snappedi_func);
        __classPrivateFieldSet(this, _b, variant_get_ptr_utility_function(new StringName("pow").opaque, 92296394), "f", _Math_pow_func);
        __classPrivateFieldSet(this, _b, variant_get_ptr_utility_function(new StringName("log").opaque, 2140049587), "f", _Math_log_func);
        __classPrivateFieldSet(this, _b, variant_get_ptr_utility_function(new StringName("exp").opaque, 2140049587), "f", _Math_exp_func);
        __classPrivateFieldSet(this, _b, variant_get_ptr_utility_function(new StringName("is_nan").opaque, 3569215213), "f", _Math_is_nan_func);
        __classPrivateFieldSet(this, _b, variant_get_ptr_utility_function(new StringName("is_inf").opaque, 3569215213), "f", _Math_is_inf_func);
        __classPrivateFieldSet(this, _b, variant_get_ptr_utility_function(new StringName("is_equal_approx").opaque, 1400789633), "f", _Math_is_equal_approx_func);
        __classPrivateFieldSet(this, _b, variant_get_ptr_utility_function(new StringName("is_zero_approx").opaque, 3569215213), "f", _Math_is_zero_approx_func);
        __classPrivateFieldSet(this, _b, variant_get_ptr_utility_function(new StringName("is_finite").opaque, 3569215213), "f", _Math_is_finite_func);
        __classPrivateFieldSet(this, _b, variant_get_ptr_utility_function(new StringName("ease").opaque, 92296394), "f", _Math_ease_func);
        __classPrivateFieldSet(this, _b, variant_get_ptr_utility_function(new StringName("step_decimals").opaque, 2780425386), "f", _Math_step_decimals_func);
        __classPrivateFieldSet(this, _b, variant_get_ptr_utility_function(new StringName("lerp").opaque, 3389874542), "f", _Math_lerp_func);
        __classPrivateFieldSet(this, _b, variant_get_ptr_utility_function(new StringName("lerpf").opaque, 998901048), "f", _Math_lerpf_func);
        __classPrivateFieldSet(this, _b, variant_get_ptr_utility_function(new StringName("cubic_interpolate").opaque, 1090965791), "f", _Math_cubic_interpolate_func);
        __classPrivateFieldSet(this, _b, variant_get_ptr_utility_function(new StringName("cubic_interpolate_angle").opaque, 1090965791), "f", _Math_cubic_interpolate_angle_func);
        __classPrivateFieldSet(this, _b, variant_get_ptr_utility_function(new StringName("cubic_interpolate_in_time").opaque, 388121036), "f", _Math_cubic_interpolate_in_time_func);
        __classPrivateFieldSet(this, _b, variant_get_ptr_utility_function(new StringName("cubic_interpolate_angle_in_time").opaque, 388121036), "f", _Math_cubic_interpolate_angle_in_time_func);
        __classPrivateFieldSet(this, _b, variant_get_ptr_utility_function(new StringName("bezier_interpolate").opaque, 1090965791), "f", _Math_bezier_interpolate_func);
        __classPrivateFieldSet(this, _b, variant_get_ptr_utility_function(new StringName("bezier_derivative").opaque, 1090965791), "f", _Math_bezier_derivative_func);
        __classPrivateFieldSet(this, _b, variant_get_ptr_utility_function(new StringName("angle_difference").opaque, 92296394), "f", _Math_angle_difference_func);
        __classPrivateFieldSet(this, _b, variant_get_ptr_utility_function(new StringName("lerp_angle").opaque, 998901048), "f", _Math_lerp_angle_func);
        __classPrivateFieldSet(this, _b, variant_get_ptr_utility_function(new StringName("inverse_lerp").opaque, 998901048), "f", _Math_inverse_lerp_func);
        __classPrivateFieldSet(this, _b, variant_get_ptr_utility_function(new StringName("remap").opaque, 1090965791), "f", _Math_remap_func);
        __classPrivateFieldSet(this, _b, variant_get_ptr_utility_function(new StringName("smoothstep").opaque, 998901048), "f", _Math_smoothstep_func);
        __classPrivateFieldSet(this, _b, variant_get_ptr_utility_function(new StringName("move_toward").opaque, 998901048), "f", _Math_move_toward_func);
        __classPrivateFieldSet(this, _b, variant_get_ptr_utility_function(new StringName("rotate_toward").opaque, 998901048), "f", _Math_rotate_toward_func);
        __classPrivateFieldSet(this, _b, variant_get_ptr_utility_function(new StringName("deg_to_rad").opaque, 2140049587), "f", _Math_deg_to_rad_func);
        __classPrivateFieldSet(this, _b, variant_get_ptr_utility_function(new StringName("rad_to_deg").opaque, 2140049587), "f", _Math_rad_to_deg_func);
        __classPrivateFieldSet(this, _b, variant_get_ptr_utility_function(new StringName("linear_to_db").opaque, 2140049587), "f", _Math_linear_to_db_func);
        __classPrivateFieldSet(this, _b, variant_get_ptr_utility_function(new StringName("db_to_linear").opaque, 2140049587), "f", _Math_db_to_linear_func);
        __classPrivateFieldSet(this, _b, variant_get_ptr_utility_function(new StringName("wrap").opaque, 3389874542), "f", _Math_wrap_func);
        __classPrivateFieldSet(this, _b, variant_get_ptr_utility_function(new StringName("wrapi").opaque, 650295447), "f", _Math_wrapi_func);
        __classPrivateFieldSet(this, _b, variant_get_ptr_utility_function(new StringName("wrapf").opaque, 998901048), "f", _Math_wrapf_func);
        __classPrivateFieldSet(this, _b, variant_get_ptr_utility_function(new StringName("max").opaque, 3896050336), "f", _Math_max_func);
        __classPrivateFieldSet(this, _b, variant_get_ptr_utility_function(new StringName("maxi").opaque, 3133453818), "f", _Math_maxi_func);
        __classPrivateFieldSet(this, _b, variant_get_ptr_utility_function(new StringName("maxf").opaque, 92296394), "f", _Math_maxf_func);
        __classPrivateFieldSet(this, _b, variant_get_ptr_utility_function(new StringName("min").opaque, 3896050336), "f", _Math_min_func);
        __classPrivateFieldSet(this, _b, variant_get_ptr_utility_function(new StringName("mini").opaque, 3133453818), "f", _Math_mini_func);
        __classPrivateFieldSet(this, _b, variant_get_ptr_utility_function(new StringName("minf").opaque, 92296394), "f", _Math_minf_func);
        __classPrivateFieldSet(this, _b, variant_get_ptr_utility_function(new StringName("clamp").opaque, 3389874542), "f", _Math_clamp_func);
        __classPrivateFieldSet(this, _b, variant_get_ptr_utility_function(new StringName("clampi").opaque, 650295447), "f", _Math_clampi_func);
        __classPrivateFieldSet(this, _b, variant_get_ptr_utility_function(new StringName("clampf").opaque, 998901048), "f", _Math_clampf_func);
        __classPrivateFieldSet(this, _b, variant_get_ptr_utility_function(new StringName("nearest_po2").opaque, 2157319888), "f", _Math_nearest_po2_func);
        __classPrivateFieldSet(this, _b, variant_get_ptr_utility_function(new StringName("pingpong").opaque, 92296394), "f", _Math_pingpong_func);
    }
    sin(angle_rad) {
        return __classPrivateFieldGet(_b, _b, "m", _Math_sin_internal).call(_b, angle_rad);
    }
    cos(angle_rad) {
        return __classPrivateFieldGet(_b, _b, "m", _Math_cos_internal).call(_b, angle_rad);
    }
    tan(angle_rad) {
        return __classPrivateFieldGet(_b, _b, "m", _Math_tan_internal).call(_b, angle_rad);
    }
    sinh(x) {
        return __classPrivateFieldGet(_b, _b, "m", _Math_sinh_internal).call(_b, x);
    }
    cosh(x) {
        return __classPrivateFieldGet(_b, _b, "m", _Math_cosh_internal).call(_b, x);
    }
    tanh(x) {
        return __classPrivateFieldGet(_b, _b, "m", _Math_tanh_internal).call(_b, x);
    }
    asin(x) {
        return __classPrivateFieldGet(_b, _b, "m", _Math_asin_internal).call(_b, x);
    }
    acos(x) {
        return __classPrivateFieldGet(_b, _b, "m", _Math_acos_internal).call(_b, x);
    }
    atan(x) {
        return __classPrivateFieldGet(_b, _b, "m", _Math_atan_internal).call(_b, x);
    }
    atan2(y, x) {
        return __classPrivateFieldGet(_b, _b, "m", _Math_atan2_internal).call(_b, y, x);
    }
    asinh(x) {
        return __classPrivateFieldGet(_b, _b, "m", _Math_asinh_internal).call(_b, x);
    }
    acosh(x) {
        return __classPrivateFieldGet(_b, _b, "m", _Math_acosh_internal).call(_b, x);
    }
    atanh(x) {
        return __classPrivateFieldGet(_b, _b, "m", _Math_atanh_internal).call(_b, x);
    }
    sqrt(x) {
        return __classPrivateFieldGet(_b, _b, "m", _Math_sqrt_internal).call(_b, x);
    }
    fmod(x, y) {
        return __classPrivateFieldGet(_b, _b, "m", _Math_fmod_internal).call(_b, x, y);
    }
    fposmod(x, y) {
        return __classPrivateFieldGet(_b, _b, "m", _Math_fposmod_internal).call(_b, x, y);
    }
    posmod(x, y) {
        return __classPrivateFieldGet(_b, _b, "m", _Math_posmod_internal).call(_b, x, y);
    }
    floor(x) {
        return __classPrivateFieldGet(_b, _b, "m", _Math_floor_internal).call(_b, x);
    }
    floorf(x) {
        return __classPrivateFieldGet(_b, _b, "m", _Math_floorf_internal).call(_b, x);
    }
    floori(x) {
        return __classPrivateFieldGet(_b, _b, "m", _Math_floori_internal).call(_b, x);
    }
    ceil(x) {
        return __classPrivateFieldGet(_b, _b, "m", _Math_ceil_internal).call(_b, x);
    }
    ceilf(x) {
        return __classPrivateFieldGet(_b, _b, "m", _Math_ceilf_internal).call(_b, x);
    }
    ceili(x) {
        return __classPrivateFieldGet(_b, _b, "m", _Math_ceili_internal).call(_b, x);
    }
    round(x) {
        return __classPrivateFieldGet(_b, _b, "m", _Math_round_internal).call(_b, x);
    }
    roundf(x) {
        return __classPrivateFieldGet(_b, _b, "m", _Math_roundf_internal).call(_b, x);
    }
    roundi(x) {
        return __classPrivateFieldGet(_b, _b, "m", _Math_roundi_internal).call(_b, x);
    }
    abs(x) {
        return __classPrivateFieldGet(_b, _b, "m", _Math_abs_internal).call(_b, x);
    }
    absf(x) {
        return __classPrivateFieldGet(_b, _b, "m", _Math_absf_internal).call(_b, x);
    }
    absi(x) {
        return __classPrivateFieldGet(_b, _b, "m", _Math_absi_internal).call(_b, x);
    }
    sign(x) {
        return __classPrivateFieldGet(_b, _b, "m", _Math_sign_internal).call(_b, x);
    }
    signf(x) {
        return __classPrivateFieldGet(_b, _b, "m", _Math_signf_internal).call(_b, x);
    }
    signi(x) {
        return __classPrivateFieldGet(_b, _b, "m", _Math_signi_internal).call(_b, x);
    }
    snapped(x, step) {
        return __classPrivateFieldGet(_b, _b, "m", _Math_snapped_internal).call(_b, x, step);
    }
    snappedf(x, step) {
        return __classPrivateFieldGet(_b, _b, "m", _Math_snappedf_internal).call(_b, x, step);
    }
    snappedi(x, step) {
        return __classPrivateFieldGet(_b, _b, "m", _Math_snappedi_internal).call(_b, x, step);
    }
    pow(base, exp) {
        return __classPrivateFieldGet(_b, _b, "m", _Math_pow_internal).call(_b, base, exp);
    }
    log(x) {
        return __classPrivateFieldGet(_b, _b, "m", _Math_log_internal).call(_b, x);
    }
    exp(x) {
        return __classPrivateFieldGet(_b, _b, "m", _Math_exp_internal).call(_b, x);
    }
    is_nan(x) {
        return __classPrivateFieldGet(_b, _b, "m", _Math_is_nan_internal).call(_b, x);
    }
    is_inf(x) {
        return __classPrivateFieldGet(_b, _b, "m", _Math_is_inf_internal).call(_b, x);
    }
    is_equal_approx(a, b) {
        return __classPrivateFieldGet(_b, _b, "m", _Math_is_equal_approx_internal).call(_b, a, b);
    }
    is_zero_approx(x) {
        return __classPrivateFieldGet(_b, _b, "m", _Math_is_zero_approx_internal).call(_b, x);
    }
    is_finite(x) {
        return __classPrivateFieldGet(_b, _b, "m", _Math_is_finite_internal).call(_b, x);
    }
    ease(x, curve) {
        return __classPrivateFieldGet(_b, _b, "m", _Math_ease_internal).call(_b, x, curve);
    }
    step_decimals(x) {
        return __classPrivateFieldGet(_b, _b, "m", _Math_step_decimals_internal).call(_b, x);
    }
    lerp(from, to, weight) {
        return __classPrivateFieldGet(_b, _b, "m", _Math_lerp_internal).call(_b, from, to, weight);
    }
    lerpf(from, to, weight) {
        return __classPrivateFieldGet(_b, _b, "m", _Math_lerpf_internal).call(_b, from, to, weight);
    }
    cubic_interpolate(from, to, pre, post, weight) {
        return __classPrivateFieldGet(_b, _b, "m", _Math_cubic_interpolate_internal).call(_b, from, to, pre, post, weight);
    }
    cubic_interpolate_angle(from, to, pre, post, weight) {
        return __classPrivateFieldGet(_b, _b, "m", _Math_cubic_interpolate_angle_internal).call(_b, from, to, pre, post, weight);
    }
    cubic_interpolate_in_time(from, to, pre, post, weight, to_t, pre_t, post_t) {
        return __classPrivateFieldGet(_b, _b, "m", _Math_cubic_interpolate_in_time_internal).call(_b, from, to, pre, post, weight, to_t, pre_t, post_t);
    }
    cubic_interpolate_angle_in_time(from, to, pre, post, weight, to_t, pre_t, post_t) {
        return __classPrivateFieldGet(_b, _b, "m", _Math_cubic_interpolate_angle_in_time_internal).call(_b, from, to, pre, post, weight, to_t, pre_t, post_t);
    }
    bezier_interpolate(start, control_1, control_2, end, t) {
        return __classPrivateFieldGet(_b, _b, "m", _Math_bezier_interpolate_internal).call(_b, start, control_1, control_2, end, t);
    }
    bezier_derivative(start, control_1, control_2, end, t) {
        return __classPrivateFieldGet(_b, _b, "m", _Math_bezier_derivative_internal).call(_b, start, control_1, control_2, end, t);
    }
    angle_difference(from, to) {
        return __classPrivateFieldGet(_b, _b, "m", _Math_angle_difference_internal).call(_b, from, to);
    }
    lerp_angle(from, to, weight) {
        return __classPrivateFieldGet(_b, _b, "m", _Math_lerp_angle_internal).call(_b, from, to, weight);
    }
    inverse_lerp(from, to, weight) {
        return __classPrivateFieldGet(_b, _b, "m", _Math_inverse_lerp_internal).call(_b, from, to, weight);
    }
    remap(value, istart, istop, ostart, ostop) {
        return __classPrivateFieldGet(_b, _b, "m", _Math_remap_internal).call(_b, value, istart, istop, ostart, ostop);
    }
    smoothstep(from, to, x) {
        return __classPrivateFieldGet(_b, _b, "m", _Math_smoothstep_internal).call(_b, from, to, x);
    }
    move_toward(from, to, delta) {
        return __classPrivateFieldGet(_b, _b, "m", _Math_move_toward_internal).call(_b, from, to, delta);
    }
    rotate_toward(from, to, delta) {
        return __classPrivateFieldGet(_b, _b, "m", _Math_rotate_toward_internal).call(_b, from, to, delta);
    }
    deg_to_rad(deg) {
        return __classPrivateFieldGet(_b, _b, "m", _Math_deg_to_rad_internal).call(_b, deg);
    }
    rad_to_deg(rad) {
        return __classPrivateFieldGet(_b, _b, "m", _Math_rad_to_deg_internal).call(_b, rad);
    }
    linear_to_db(lin) {
        return __classPrivateFieldGet(_b, _b, "m", _Math_linear_to_db_internal).call(_b, lin);
    }
    db_to_linear(db) {
        return __classPrivateFieldGet(_b, _b, "m", _Math_db_to_linear_internal).call(_b, db);
    }
    wrap(value, min, max) {
        return __classPrivateFieldGet(_b, _b, "m", _Math_wrap_internal).call(_b, value, min, max);
    }
    wrapi(value, min, max) {
        return __classPrivateFieldGet(_b, _b, "m", _Math_wrapi_internal).call(_b, value, min, max);
    }
    wrapf(value, min, max) {
        return __classPrivateFieldGet(_b, _b, "m", _Math_wrapf_internal).call(_b, value, min, max);
    }
    max(arg1, arg2, ...args) {
        return __classPrivateFieldGet(_b, _b, "m", _Math_max_internal).call(_b, arg1, arg2, ...args);
    }
    maxi(a, b) {
        return __classPrivateFieldGet(_b, _b, "m", _Math_maxi_internal).call(_b, a, b);
    }
    maxf(a, b) {
        return __classPrivateFieldGet(_b, _b, "m", _Math_maxf_internal).call(_b, a, b);
    }
    min(arg1, arg2, ...args) {
        return __classPrivateFieldGet(_b, _b, "m", _Math_min_internal).call(_b, arg1, arg2, ...args);
    }
    mini(a, b) {
        return __classPrivateFieldGet(_b, _b, "m", _Math_mini_internal).call(_b, a, b);
    }
    minf(a, b) {
        return __classPrivateFieldGet(_b, _b, "m", _Math_minf_internal).call(_b, a, b);
    }
    clamp(value, min, max) {
        return __classPrivateFieldGet(_b, _b, "m", _Math_clamp_internal).call(_b, value, min, max);
    }
    clampi(value, min, max) {
        return __classPrivateFieldGet(_b, _b, "m", _Math_clampi_internal).call(_b, value, min, max);
    }
    clampf(value, min, max) {
        return __classPrivateFieldGet(_b, _b, "m", _Math_clampf_internal).call(_b, value, min, max);
    }
    nearest_po2(value) {
        return __classPrivateFieldGet(_b, _b, "m", _Math_nearest_po2_internal).call(_b, value);
    }
    pingpong(value, length) {
        return __classPrivateFieldGet(_b, _b, "m", _Math_pingpong_internal).call(_b, value, length);
    }
}
_b = Math, _Math_sin_internal = function _Math_sin_internal(angle_rad) {
    return call_utility_ret(__classPrivateFieldGet(this, _b, "f", _Math_sin_func), angle_rad);
}, _Math_cos_internal = function _Math_cos_internal(angle_rad) {
    return call_utility_ret(__classPrivateFieldGet(this, _b, "f", _Math_cos_func), angle_rad);
}, _Math_tan_internal = function _Math_tan_internal(angle_rad) {
    return call_utility_ret(__classPrivateFieldGet(this, _b, "f", _Math_tan_func), angle_rad);
}, _Math_sinh_internal = function _Math_sinh_internal(x) {
    return call_utility_ret(__classPrivateFieldGet(this, _b, "f", _Math_sinh_func), x);
}, _Math_cosh_internal = function _Math_cosh_internal(x) {
    return call_utility_ret(__classPrivateFieldGet(this, _b, "f", _Math_cosh_func), x);
}, _Math_tanh_internal = function _Math_tanh_internal(x) {
    return call_utility_ret(__classPrivateFieldGet(this, _b, "f", _Math_tanh_func), x);
}, _Math_asin_internal = function _Math_asin_internal(x) {
    return call_utility_ret(__classPrivateFieldGet(this, _b, "f", _Math_asin_func), x);
}, _Math_acos_internal = function _Math_acos_internal(x) {
    return call_utility_ret(__classPrivateFieldGet(this, _b, "f", _Math_acos_func), x);
}, _Math_atan_internal = function _Math_atan_internal(x) {
    return call_utility_ret(__classPrivateFieldGet(this, _b, "f", _Math_atan_func), x);
}, _Math_atan2_internal = function _Math_atan2_internal(y, x) {
    return call_utility_ret(__classPrivateFieldGet(this, _b, "f", _Math_atan2_func), y, x);
}, _Math_asinh_internal = function _Math_asinh_internal(x) {
    return call_utility_ret(__classPrivateFieldGet(this, _b, "f", _Math_asinh_func), x);
}, _Math_acosh_internal = function _Math_acosh_internal(x) {
    return call_utility_ret(__classPrivateFieldGet(this, _b, "f", _Math_acosh_func), x);
}, _Math_atanh_internal = function _Math_atanh_internal(x) {
    return call_utility_ret(__classPrivateFieldGet(this, _b, "f", _Math_atanh_func), x);
}, _Math_sqrt_internal = function _Math_sqrt_internal(x) {
    return call_utility_ret(__classPrivateFieldGet(this, _b, "f", _Math_sqrt_func), x);
}, _Math_fmod_internal = function _Math_fmod_internal(x, y) {
    return call_utility_ret(__classPrivateFieldGet(this, _b, "f", _Math_fmod_func), x, y);
}, _Math_fposmod_internal = function _Math_fposmod_internal(x, y) {
    return call_utility_ret(__classPrivateFieldGet(this, _b, "f", _Math_fposmod_func), x, y);
}, _Math_posmod_internal = function _Math_posmod_internal(x, y) {
    return call_utility_ret(__classPrivateFieldGet(this, _b, "f", _Math_posmod_func), x, y);
}, _Math_floor_internal = function _Math_floor_internal(x) {
    return call_utility_ret(__classPrivateFieldGet(this, _b, "f", _Math_floor_func), x);
}, _Math_floorf_internal = function _Math_floorf_internal(x) {
    return call_utility_ret(__classPrivateFieldGet(this, _b, "f", _Math_floorf_func), x);
}, _Math_floori_internal = function _Math_floori_internal(x) {
    return call_utility_ret(__classPrivateFieldGet(this, _b, "f", _Math_floori_func), x);
}, _Math_ceil_internal = function _Math_ceil_internal(x) {
    return call_utility_ret(__classPrivateFieldGet(this, _b, "f", _Math_ceil_func), x);
}, _Math_ceilf_internal = function _Math_ceilf_internal(x) {
    return call_utility_ret(__classPrivateFieldGet(this, _b, "f", _Math_ceilf_func), x);
}, _Math_ceili_internal = function _Math_ceili_internal(x) {
    return call_utility_ret(__classPrivateFieldGet(this, _b, "f", _Math_ceili_func), x);
}, _Math_round_internal = function _Math_round_internal(x) {
    return call_utility_ret(__classPrivateFieldGet(this, _b, "f", _Math_round_func), x);
}, _Math_roundf_internal = function _Math_roundf_internal(x) {
    return call_utility_ret(__classPrivateFieldGet(this, _b, "f", _Math_roundf_func), x);
}, _Math_roundi_internal = function _Math_roundi_internal(x) {
    return call_utility_ret(__classPrivateFieldGet(this, _b, "f", _Math_roundi_func), x);
}, _Math_abs_internal = function _Math_abs_internal(x) {
    return call_utility_ret(__classPrivateFieldGet(this, _b, "f", _Math_abs_func), x);
}, _Math_absf_internal = function _Math_absf_internal(x) {
    return call_utility_ret(__classPrivateFieldGet(this, _b, "f", _Math_absf_func), x);
}, _Math_absi_internal = function _Math_absi_internal(x) {
    return call_utility_ret(__classPrivateFieldGet(this, _b, "f", _Math_absi_func), x);
}, _Math_sign_internal = function _Math_sign_internal(x) {
    return call_utility_ret(__classPrivateFieldGet(this, _b, "f", _Math_sign_func), x);
}, _Math_signf_internal = function _Math_signf_internal(x) {
    return call_utility_ret(__classPrivateFieldGet(this, _b, "f", _Math_signf_func), x);
}, _Math_signi_internal = function _Math_signi_internal(x) {
    return call_utility_ret(__classPrivateFieldGet(this, _b, "f", _Math_signi_func), x);
}, _Math_snapped_internal = function _Math_snapped_internal(x, step) {
    return call_utility_ret(__classPrivateFieldGet(this, _b, "f", _Math_snapped_func), x, step);
}, _Math_snappedf_internal = function _Math_snappedf_internal(x, step) {
    return call_utility_ret(__classPrivateFieldGet(this, _b, "f", _Math_snappedf_func), x, step);
}, _Math_snappedi_internal = function _Math_snappedi_internal(x, step) {
    return call_utility_ret(__classPrivateFieldGet(this, _b, "f", _Math_snappedi_func), x, step);
}, _Math_pow_internal = function _Math_pow_internal(base, exp) {
    return call_utility_ret(__classPrivateFieldGet(this, _b, "f", _Math_pow_func), base, exp);
}, _Math_log_internal = function _Math_log_internal(x) {
    return call_utility_ret(__classPrivateFieldGet(this, _b, "f", _Math_log_func), x);
}, _Math_exp_internal = function _Math_exp_internal(x) {
    return call_utility_ret(__classPrivateFieldGet(this, _b, "f", _Math_exp_func), x);
}, _Math_is_nan_internal = function _Math_is_nan_internal(x) {
    return call_utility_ret(__classPrivateFieldGet(this, _b, "f", _Math_is_nan_func), x);
}, _Math_is_inf_internal = function _Math_is_inf_internal(x) {
    return call_utility_ret(__classPrivateFieldGet(this, _b, "f", _Math_is_inf_func), x);
}, _Math_is_equal_approx_internal = function _Math_is_equal_approx_internal(a, b) {
    return call_utility_ret(__classPrivateFieldGet(this, _b, "f", _Math_is_equal_approx_func), a, b);
}, _Math_is_zero_approx_internal = function _Math_is_zero_approx_internal(x) {
    return call_utility_ret(__classPrivateFieldGet(this, _b, "f", _Math_is_zero_approx_func), x);
}, _Math_is_finite_internal = function _Math_is_finite_internal(x) {
    return call_utility_ret(__classPrivateFieldGet(this, _b, "f", _Math_is_finite_func), x);
}, _Math_ease_internal = function _Math_ease_internal(x, curve) {
    return call_utility_ret(__classPrivateFieldGet(this, _b, "f", _Math_ease_func), x, curve);
}, _Math_step_decimals_internal = function _Math_step_decimals_internal(x) {
    return call_utility_ret(__classPrivateFieldGet(this, _b, "f", _Math_step_decimals_func), x);
}, _Math_lerp_internal = function _Math_lerp_internal(from, to, weight) {
    return call_utility_ret(__classPrivateFieldGet(this, _b, "f", _Math_lerp_func), from, to, weight);
}, _Math_lerpf_internal = function _Math_lerpf_internal(from, to, weight) {
    return call_utility_ret(__classPrivateFieldGet(this, _b, "f", _Math_lerpf_func), from, to, weight);
}, _Math_cubic_interpolate_internal = function _Math_cubic_interpolate_internal(from, to, pre, post, weight) {
    return call_utility_ret(__classPrivateFieldGet(this, _b, "f", _Math_cubic_interpolate_func), from, to, pre, post, weight);
}, _Math_cubic_interpolate_angle_internal = function _Math_cubic_interpolate_angle_internal(from, to, pre, post, weight) {
    return call_utility_ret(__classPrivateFieldGet(this, _b, "f", _Math_cubic_interpolate_angle_func), from, to, pre, post, weight);
}, _Math_cubic_interpolate_in_time_internal = function _Math_cubic_interpolate_in_time_internal(from, to, pre, post, weight, to_t, pre_t, post_t) {
    return call_utility_ret(__classPrivateFieldGet(this, _b, "f", _Math_cubic_interpolate_in_time_func), from, to, pre, post, weight, to_t, pre_t, post_t);
}, _Math_cubic_interpolate_angle_in_time_internal = function _Math_cubic_interpolate_angle_in_time_internal(from, to, pre, post, weight, to_t, pre_t, post_t) {
    return call_utility_ret(__classPrivateFieldGet(this, _b, "f", _Math_cubic_interpolate_angle_in_time_func), from, to, pre, post, weight, to_t, pre_t, post_t);
}, _Math_bezier_interpolate_internal = function _Math_bezier_interpolate_internal(start, control_1, control_2, end, t) {
    return call_utility_ret(__classPrivateFieldGet(this, _b, "f", _Math_bezier_interpolate_func), start, control_1, control_2, end, t);
}, _Math_bezier_derivative_internal = function _Math_bezier_derivative_internal(start, control_1, control_2, end, t) {
    return call_utility_ret(__classPrivateFieldGet(this, _b, "f", _Math_bezier_derivative_func), start, control_1, control_2, end, t);
}, _Math_angle_difference_internal = function _Math_angle_difference_internal(from, to) {
    return call_utility_ret(__classPrivateFieldGet(this, _b, "f", _Math_angle_difference_func), from, to);
}, _Math_lerp_angle_internal = function _Math_lerp_angle_internal(from, to, weight) {
    return call_utility_ret(__classPrivateFieldGet(this, _b, "f", _Math_lerp_angle_func), from, to, weight);
}, _Math_inverse_lerp_internal = function _Math_inverse_lerp_internal(from, to, weight) {
    return call_utility_ret(__classPrivateFieldGet(this, _b, "f", _Math_inverse_lerp_func), from, to, weight);
}, _Math_remap_internal = function _Math_remap_internal(value, istart, istop, ostart, ostop) {
    return call_utility_ret(__classPrivateFieldGet(this, _b, "f", _Math_remap_func), value, istart, istop, ostart, ostop);
}, _Math_smoothstep_internal = function _Math_smoothstep_internal(from, to, x) {
    return call_utility_ret(__classPrivateFieldGet(this, _b, "f", _Math_smoothstep_func), from, to, x);
}, _Math_move_toward_internal = function _Math_move_toward_internal(from, to, delta) {
    return call_utility_ret(__classPrivateFieldGet(this, _b, "f", _Math_move_toward_func), from, to, delta);
}, _Math_rotate_toward_internal = function _Math_rotate_toward_internal(from, to, delta) {
    return call_utility_ret(__classPrivateFieldGet(this, _b, "f", _Math_rotate_toward_func), from, to, delta);
}, _Math_deg_to_rad_internal = function _Math_deg_to_rad_internal(deg) {
    return call_utility_ret(__classPrivateFieldGet(this, _b, "f", _Math_deg_to_rad_func), deg);
}, _Math_rad_to_deg_internal = function _Math_rad_to_deg_internal(rad) {
    return call_utility_ret(__classPrivateFieldGet(this, _b, "f", _Math_rad_to_deg_func), rad);
}, _Math_linear_to_db_internal = function _Math_linear_to_db_internal(lin) {
    return call_utility_ret(__classPrivateFieldGet(this, _b, "f", _Math_linear_to_db_func), lin);
}, _Math_db_to_linear_internal = function _Math_db_to_linear_internal(db) {
    return call_utility_ret(__classPrivateFieldGet(this, _b, "f", _Math_db_to_linear_func), db);
}, _Math_wrap_internal = function _Math_wrap_internal(value, min, max) {
    return call_utility_ret(__classPrivateFieldGet(this, _b, "f", _Math_wrap_func), value, min, max);
}, _Math_wrapi_internal = function _Math_wrapi_internal(value, min, max) {
    return call_utility_ret(__classPrivateFieldGet(this, _b, "f", _Math_wrapi_func), value, min, max);
}, _Math_wrapf_internal = function _Math_wrapf_internal(value, min, max) {
    return call_utility_ret(__classPrivateFieldGet(this, _b, "f", _Math_wrapf_func), value, min, max);
}, _Math_max_internal = function _Math_max_internal(arg1, arg2, ...args) {
    return call_utility_ret(__classPrivateFieldGet(this, _b, "f", _Math_max_func), arg1, arg2, ...args);
}, _Math_maxi_internal = function _Math_maxi_internal(a, b) {
    return call_utility_ret(__classPrivateFieldGet(this, _b, "f", _Math_maxi_func), a, b);
}, _Math_maxf_internal = function _Math_maxf_internal(a, b) {
    return call_utility_ret(__classPrivateFieldGet(this, _b, "f", _Math_maxf_func), a, b);
}, _Math_min_internal = function _Math_min_internal(arg1, arg2, ...args) {
    return call_utility_ret(__classPrivateFieldGet(this, _b, "f", _Math_min_func), arg1, arg2, ...args);
}, _Math_mini_internal = function _Math_mini_internal(a, b) {
    return call_utility_ret(__classPrivateFieldGet(this, _b, "f", _Math_mini_func), a, b);
}, _Math_minf_internal = function _Math_minf_internal(a, b) {
    return call_utility_ret(__classPrivateFieldGet(this, _b, "f", _Math_minf_func), a, b);
}, _Math_clamp_internal = function _Math_clamp_internal(value, min, max) {
    return call_utility_ret(__classPrivateFieldGet(this, _b, "f", _Math_clamp_func), value, min, max);
}, _Math_clampi_internal = function _Math_clampi_internal(value, min, max) {
    return call_utility_ret(__classPrivateFieldGet(this, _b, "f", _Math_clampi_func), value, min, max);
}, _Math_clampf_internal = function _Math_clampf_internal(value, min, max) {
    return call_utility_ret(__classPrivateFieldGet(this, _b, "f", _Math_clampf_func), value, min, max);
}, _Math_nearest_po2_internal = function _Math_nearest_po2_internal(value) {
    return call_utility_ret(__classPrivateFieldGet(this, _b, "f", _Math_nearest_po2_func), value);
}, _Math_pingpong_internal = function _Math_pingpong_internal(value, length) {
    return call_utility_ret(__classPrivateFieldGet(this, _b, "f", _Math_pingpong_func), value, length);
};
_Math_sin_func = { value: void 0 };
_Math_cos_func = { value: void 0 };
_Math_tan_func = { value: void 0 };
_Math_sinh_func = { value: void 0 };
_Math_cosh_func = { value: void 0 };
_Math_tanh_func = { value: void 0 };
_Math_asin_func = { value: void 0 };
_Math_acos_func = { value: void 0 };
_Math_atan_func = { value: void 0 };
_Math_atan2_func = { value: void 0 };
_Math_asinh_func = { value: void 0 };
_Math_acosh_func = { value: void 0 };
_Math_atanh_func = { value: void 0 };
_Math_sqrt_func = { value: void 0 };
_Math_fmod_func = { value: void 0 };
_Math_fposmod_func = { value: void 0 };
_Math_posmod_func = { value: void 0 };
_Math_floor_func = { value: void 0 };
_Math_floorf_func = { value: void 0 };
_Math_floori_func = { value: void 0 };
_Math_ceil_func = { value: void 0 };
_Math_ceilf_func = { value: void 0 };
_Math_ceili_func = { value: void 0 };
_Math_round_func = { value: void 0 };
_Math_roundf_func = { value: void 0 };
_Math_roundi_func = { value: void 0 };
_Math_abs_func = { value: void 0 };
_Math_absf_func = { value: void 0 };
_Math_absi_func = { value: void 0 };
_Math_sign_func = { value: void 0 };
_Math_signf_func = { value: void 0 };
_Math_signi_func = { value: void 0 };
_Math_snapped_func = { value: void 0 };
_Math_snappedf_func = { value: void 0 };
_Math_snappedi_func = { value: void 0 };
_Math_pow_func = { value: void 0 };
_Math_log_func = { value: void 0 };
_Math_exp_func = { value: void 0 };
_Math_is_nan_func = { value: void 0 };
_Math_is_inf_func = { value: void 0 };
_Math_is_equal_approx_func = { value: void 0 };
_Math_is_zero_approx_func = { value: void 0 };
_Math_is_finite_func = { value: void 0 };
_Math_ease_func = { value: void 0 };
_Math_step_decimals_func = { value: void 0 };
_Math_lerp_func = { value: void 0 };
_Math_lerpf_func = { value: void 0 };
_Math_cubic_interpolate_func = { value: void 0 };
_Math_cubic_interpolate_angle_func = { value: void 0 };
_Math_cubic_interpolate_in_time_func = { value: void 0 };
_Math_cubic_interpolate_angle_in_time_func = { value: void 0 };
_Math_bezier_interpolate_func = { value: void 0 };
_Math_bezier_derivative_func = { value: void 0 };
_Math_angle_difference_func = { value: void 0 };
_Math_lerp_angle_func = { value: void 0 };
_Math_inverse_lerp_func = { value: void 0 };
_Math_remap_func = { value: void 0 };
_Math_smoothstep_func = { value: void 0 };
_Math_move_toward_func = { value: void 0 };
_Math_rotate_toward_func = { value: void 0 };
_Math_deg_to_rad_func = { value: void 0 };
_Math_rad_to_deg_func = { value: void 0 };
_Math_linear_to_db_func = { value: void 0 };
_Math_db_to_linear_func = { value: void 0 };
_Math_wrap_func = { value: void 0 };
_Math_wrapi_func = { value: void 0 };
_Math_wrapf_func = { value: void 0 };
_Math_max_func = { value: void 0 };
_Math_maxi_func = { value: void 0 };
_Math_maxf_func = { value: void 0 };
_Math_min_func = { value: void 0 };
_Math_mini_func = { value: void 0 };
_Math_minf_func = { value: void 0 };
_Math_clamp_func = { value: void 0 };
_Math_clampi_func = { value: void 0 };
_Math_clampf_func = { value: void 0 };
_Math_nearest_po2_func = { value: void 0 };
_Math_pingpong_func = { value: void 0 };
export class GD {
    static _init_bindings() {
        __classPrivateFieldSet(this, _c, variant_get_ptr_utility_function(new StringName("weakref").opaque, 4776452), "f", _GD_weakref_func);
        __classPrivateFieldSet(this, _c, variant_get_ptr_utility_function(new StringName("typeof").opaque, 326422594), "f", _GD_typeof_func);
        __classPrivateFieldSet(this, _c, variant_get_ptr_utility_function(new StringName("type_convert").opaque, 2453062746), "f", _GD_type_convert_func);
        __classPrivateFieldSet(this, _c, variant_get_ptr_utility_function(new StringName("str").opaque, 32569176), "f", _GD_str_func);
        __classPrivateFieldSet(this, _c, variant_get_ptr_utility_function(new StringName("error_string").opaque, 942708242), "f", _GD_error_string_func);
        __classPrivateFieldSet(this, _c, variant_get_ptr_utility_function(new StringName("type_string").opaque, 942708242), "f", _GD_type_string_func);
        __classPrivateFieldSet(this, _c, variant_get_ptr_utility_function(new StringName("print").opaque, 2648703342), "f", _GD_print_func);
        __classPrivateFieldSet(this, _c, variant_get_ptr_utility_function(new StringName("print_rich").opaque, 2648703342), "f", _GD_print_rich_func);
        __classPrivateFieldSet(this, _c, variant_get_ptr_utility_function(new StringName("printerr").opaque, 2648703342), "f", _GD_printerr_func);
        __classPrivateFieldSet(this, _c, variant_get_ptr_utility_function(new StringName("printt").opaque, 2648703342), "f", _GD_printt_func);
        __classPrivateFieldSet(this, _c, variant_get_ptr_utility_function(new StringName("prints").opaque, 2648703342), "f", _GD_prints_func);
        __classPrivateFieldSet(this, _c, variant_get_ptr_utility_function(new StringName("printraw").opaque, 2648703342), "f", _GD_printraw_func);
        __classPrivateFieldSet(this, _c, variant_get_ptr_utility_function(new StringName("print_verbose").opaque, 2648703342), "f", _GD_print_verbose_func);
        __classPrivateFieldSet(this, _c, variant_get_ptr_utility_function(new StringName("push_error").opaque, 2648703342), "f", _GD_push_error_func);
        __classPrivateFieldSet(this, _c, variant_get_ptr_utility_function(new StringName("push_warning").opaque, 2648703342), "f", _GD_push_warning_func);
        __classPrivateFieldSet(this, _c, variant_get_ptr_utility_function(new StringName("var_to_str").opaque, 866625479), "f", _GD_var_to_str_func);
        __classPrivateFieldSet(this, _c, variant_get_ptr_utility_function(new StringName("str_to_var").opaque, 1891498491), "f", _GD_str_to_var_func);
        __classPrivateFieldSet(this, _c, variant_get_ptr_utility_function(new StringName("var_to_bytes").opaque, 2947269930), "f", _GD_var_to_bytes_func);
        __classPrivateFieldSet(this, _c, variant_get_ptr_utility_function(new StringName("bytes_to_var").opaque, 4249819452), "f", _GD_bytes_to_var_func);
        __classPrivateFieldSet(this, _c, variant_get_ptr_utility_function(new StringName("var_to_bytes_with_objects").opaque, 2947269930), "f", _GD_var_to_bytes_with_objects_func);
        __classPrivateFieldSet(this, _c, variant_get_ptr_utility_function(new StringName("bytes_to_var_with_objects").opaque, 4249819452), "f", _GD_bytes_to_var_with_objects_func);
        __classPrivateFieldSet(this, _c, variant_get_ptr_utility_function(new StringName("hash").opaque, 326422594), "f", _GD_hash_func);
        __classPrivateFieldSet(this, _c, variant_get_ptr_utility_function(new StringName("instance_from_id").opaque, 1156694636), "f", _GD_instance_from_id_func);
        __classPrivateFieldSet(this, _c, variant_get_ptr_utility_function(new StringName("is_instance_id_valid").opaque, 2232439758), "f", _GD_is_instance_id_valid_func);
        __classPrivateFieldSet(this, _c, variant_get_ptr_utility_function(new StringName("is_instance_valid").opaque, 996128841), "f", _GD_is_instance_valid_func);
        __classPrivateFieldSet(this, _c, variant_get_ptr_utility_function(new StringName("rid_allocate_id").opaque, 701202648), "f", _GD_rid_allocate_id_func);
        __classPrivateFieldSet(this, _c, variant_get_ptr_utility_function(new StringName("rid_from_int64").opaque, 3426892196), "f", _GD_rid_from_int64_func);
        __classPrivateFieldSet(this, _c, variant_get_ptr_utility_function(new StringName("is_same").opaque, 1409423524), "f", _GD_is_same_func);
    }
    weakref(obj) {
        return __classPrivateFieldGet(_c, _c, "m", _GD_weakref_internal).call(_c, obj);
    }
    typeof(variable) {
        return __classPrivateFieldGet(_c, _c, "m", _GD_typeof_internal).call(_c, variable);
    }
    type_convert(variant, type) {
        return __classPrivateFieldGet(_c, _c, "m", _GD_type_convert_internal).call(_c, variant, type);
    }
    str(arg1, ...args) {
        return __classPrivateFieldGet(_c, _c, "m", _GD_str_internal).call(_c, arg1, ...args);
    }
    error_string(error) {
        return __classPrivateFieldGet(_c, _c, "m", _GD_error_string_internal).call(_c, error);
    }
    type_string(type) {
        return __classPrivateFieldGet(_c, _c, "m", _GD_type_string_internal).call(_c, type);
    }
    print(arg1, ...args) {
        return __classPrivateFieldGet(_c, _c, "m", _GD_print_internal).call(_c, arg1, ...args);
    }
    print_rich(arg1, ...args) {
        return __classPrivateFieldGet(_c, _c, "m", _GD_print_rich_internal).call(_c, arg1, ...args);
    }
    printerr(arg1, ...args) {
        return __classPrivateFieldGet(_c, _c, "m", _GD_printerr_internal).call(_c, arg1, ...args);
    }
    printt(arg1, ...args) {
        return __classPrivateFieldGet(_c, _c, "m", _GD_printt_internal).call(_c, arg1, ...args);
    }
    prints(arg1, ...args) {
        return __classPrivateFieldGet(_c, _c, "m", _GD_prints_internal).call(_c, arg1, ...args);
    }
    printraw(arg1, ...args) {
        return __classPrivateFieldGet(_c, _c, "m", _GD_printraw_internal).call(_c, arg1, ...args);
    }
    print_verbose(arg1, ...args) {
        return __classPrivateFieldGet(_c, _c, "m", _GD_print_verbose_internal).call(_c, arg1, ...args);
    }
    push_error(arg1, ...args) {
        return __classPrivateFieldGet(_c, _c, "m", _GD_push_error_internal).call(_c, arg1, ...args);
    }
    push_warning(arg1, ...args) {
        return __classPrivateFieldGet(_c, _c, "m", _GD_push_warning_internal).call(_c, arg1, ...args);
    }
    var_to_str(variable) {
        return __classPrivateFieldGet(_c, _c, "m", _GD_var_to_str_internal).call(_c, variable);
    }
    str_to_var(string) {
        return __classPrivateFieldGet(_c, _c, "m", _GD_str_to_var_internal).call(_c, string);
    }
    var_to_bytes(variable) {
        return __classPrivateFieldGet(_c, _c, "m", _GD_var_to_bytes_internal).call(_c, variable);
    }
    bytes_to_var(bytes) {
        return __classPrivateFieldGet(_c, _c, "m", _GD_bytes_to_var_internal).call(_c, bytes);
    }
    var_to_bytes_with_objects(variable) {
        return __classPrivateFieldGet(_c, _c, "m", _GD_var_to_bytes_with_objects_internal).call(_c, variable);
    }
    bytes_to_var_with_objects(bytes) {
        return __classPrivateFieldGet(_c, _c, "m", _GD_bytes_to_var_with_objects_internal).call(_c, bytes);
    }
    hash(variable) {
        return __classPrivateFieldGet(_c, _c, "m", _GD_hash_internal).call(_c, variable);
    }
    instance_from_id(instance_id) {
        return __classPrivateFieldGet(_c, _c, "m", _GD_instance_from_id_internal).call(_c, instance_id);
    }
    is_instance_id_valid(id) {
        return __classPrivateFieldGet(_c, _c, "m", _GD_is_instance_id_valid_internal).call(_c, id);
    }
    is_instance_valid(instance) {
        return __classPrivateFieldGet(_c, _c, "m", _GD_is_instance_valid_internal).call(_c, instance);
    }
    rid_allocate_id() {
        return __classPrivateFieldGet(_c, _c, "m", _GD_rid_allocate_id_internal).call(_c);
    }
    rid_from_int64(base) {
        return __classPrivateFieldGet(_c, _c, "m", _GD_rid_from_int64_internal).call(_c, base);
    }
    is_same(a, b) {
        return __classPrivateFieldGet(_c, _c, "m", _GD_is_same_internal).call(_c, a, b);
    }
}
_c = GD, _GD_weakref_internal = function _GD_weakref_internal(obj) {
    return call_utility_ret(__classPrivateFieldGet(this, _c, "f", _GD_weakref_func), obj);
}, _GD_typeof_internal = function _GD_typeof_internal(variable) {
    return call_utility_ret(__classPrivateFieldGet(this, _c, "f", _GD_typeof_func), variable);
}, _GD_type_convert_internal = function _GD_type_convert_internal(variant, type) {
    return call_utility_ret(__classPrivateFieldGet(this, _c, "f", _GD_type_convert_func), variant, type);
}, _GD_str_internal = function _GD_str_internal(arg1, ...args) {
    return call_utility_ret(__classPrivateFieldGet(this, _c, "f", _GD_str_func), arg1, ...args);
}, _GD_error_string_internal = function _GD_error_string_internal(error) {
    return call_utility_ret(__classPrivateFieldGet(this, _c, "f", _GD_error_string_func), error);
}, _GD_type_string_internal = function _GD_type_string_internal(type) {
    return call_utility_ret(__classPrivateFieldGet(this, _c, "f", _GD_type_string_func), type);
}, _GD_print_internal = function _GD_print_internal(arg1, ...args) {
    call_utility_no_ret(__classPrivateFieldGet(this, _c, "f", _GD_print_func), arg1, ...args);
}, _GD_print_rich_internal = function _GD_print_rich_internal(arg1, ...args) {
    call_utility_no_ret(__classPrivateFieldGet(this, _c, "f", _GD_print_rich_func), arg1, ...args);
}, _GD_printerr_internal = function _GD_printerr_internal(arg1, ...args) {
    call_utility_no_ret(__classPrivateFieldGet(this, _c, "f", _GD_printerr_func), arg1, ...args);
}, _GD_printt_internal = function _GD_printt_internal(arg1, ...args) {
    call_utility_no_ret(__classPrivateFieldGet(this, _c, "f", _GD_printt_func), arg1, ...args);
}, _GD_prints_internal = function _GD_prints_internal(arg1, ...args) {
    call_utility_no_ret(__classPrivateFieldGet(this, _c, "f", _GD_prints_func), arg1, ...args);
}, _GD_printraw_internal = function _GD_printraw_internal(arg1, ...args) {
    call_utility_no_ret(__classPrivateFieldGet(this, _c, "f", _GD_printraw_func), arg1, ...args);
}, _GD_print_verbose_internal = function _GD_print_verbose_internal(arg1, ...args) {
    call_utility_no_ret(__classPrivateFieldGet(this, _c, "f", _GD_print_verbose_func), arg1, ...args);
}, _GD_push_error_internal = function _GD_push_error_internal(arg1, ...args) {
    call_utility_no_ret(__classPrivateFieldGet(this, _c, "f", _GD_push_error_func), arg1, ...args);
}, _GD_push_warning_internal = function _GD_push_warning_internal(arg1, ...args) {
    call_utility_no_ret(__classPrivateFieldGet(this, _c, "f", _GD_push_warning_func), arg1, ...args);
}, _GD_var_to_str_internal = function _GD_var_to_str_internal(variable) {
    return call_utility_ret(__classPrivateFieldGet(this, _c, "f", _GD_var_to_str_func), variable);
}, _GD_str_to_var_internal = function _GD_str_to_var_internal(string) {
    return call_utility_ret(__classPrivateFieldGet(this, _c, "f", _GD_str_to_var_func), string);
}, _GD_var_to_bytes_internal = function _GD_var_to_bytes_internal(variable) {
    return call_utility_ret(__classPrivateFieldGet(this, _c, "f", _GD_var_to_bytes_func), variable);
}, _GD_bytes_to_var_internal = function _GD_bytes_to_var_internal(bytes) {
    return call_utility_ret(__classPrivateFieldGet(this, _c, "f", _GD_bytes_to_var_func), bytes);
}, _GD_var_to_bytes_with_objects_internal = function _GD_var_to_bytes_with_objects_internal(variable) {
    return call_utility_ret(__classPrivateFieldGet(this, _c, "f", _GD_var_to_bytes_with_objects_func), variable);
}, _GD_bytes_to_var_with_objects_internal = function _GD_bytes_to_var_with_objects_internal(bytes) {
    return call_utility_ret(__classPrivateFieldGet(this, _c, "f", _GD_bytes_to_var_with_objects_func), bytes);
}, _GD_hash_internal = function _GD_hash_internal(variable) {
    return call_utility_ret(__classPrivateFieldGet(this, _c, "f", _GD_hash_func), variable);
}, _GD_instance_from_id_internal = function _GD_instance_from_id_internal(instance_id) {
    return call_utility_ret(__classPrivateFieldGet(this, _c, "f", _GD_instance_from_id_func), instance_id);
}, _GD_is_instance_id_valid_internal = function _GD_is_instance_id_valid_internal(id) {
    return call_utility_ret(__classPrivateFieldGet(this, _c, "f", _GD_is_instance_id_valid_func), id);
}, _GD_is_instance_valid_internal = function _GD_is_instance_valid_internal(instance) {
    return call_utility_ret(__classPrivateFieldGet(this, _c, "f", _GD_is_instance_valid_func), instance);
}, _GD_rid_allocate_id_internal = function _GD_rid_allocate_id_internal() {
    return call_utility_ret(__classPrivateFieldGet(this, _c, "f", _GD_rid_allocate_id_func));
}, _GD_rid_from_int64_internal = function _GD_rid_from_int64_internal(base) {
    return call_utility_ret(__classPrivateFieldGet(this, _c, "f", _GD_rid_from_int64_func), base);
}, _GD_is_same_internal = function _GD_is_same_internal(a, b) {
    return call_utility_ret(__classPrivateFieldGet(this, _c, "f", _GD_is_same_func), a, b);
};
_GD_weakref_func = { value: void 0 };
_GD_typeof_func = { value: void 0 };
_GD_type_convert_func = { value: void 0 };
_GD_str_func = { value: void 0 };
_GD_error_string_func = { value: void 0 };
_GD_type_string_func = { value: void 0 };
_GD_print_func = { value: void 0 };
_GD_print_rich_func = { value: void 0 };
_GD_printerr_func = { value: void 0 };
_GD_printt_func = { value: void 0 };
_GD_prints_func = { value: void 0 };
_GD_printraw_func = { value: void 0 };
_GD_print_verbose_func = { value: void 0 };
_GD_push_error_func = { value: void 0 };
_GD_push_warning_func = { value: void 0 };
_GD_var_to_str_func = { value: void 0 };
_GD_str_to_var_func = { value: void 0 };
_GD_var_to_bytes_func = { value: void 0 };
_GD_bytes_to_var_func = { value: void 0 };
_GD_var_to_bytes_with_objects_func = { value: void 0 };
_GD_bytes_to_var_with_objects_func = { value: void 0 };
_GD_hash_func = { value: void 0 };
_GD_instance_from_id_func = { value: void 0 };
_GD_is_instance_id_valid_func = { value: void 0 };
_GD_is_instance_valid_func = { value: void 0 };
_GD_rid_allocate_id_func = { value: void 0 };
_GD_rid_from_int64_func = { value: void 0 };
_GD_is_same_func = { value: void 0 };
