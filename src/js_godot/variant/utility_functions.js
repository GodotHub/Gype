
import {
  call_utility_ret,
  call_utility_no_ret,
} from "src/js_godot/core/engine_ptrcall";
import { StringName } from "src/js_godot/variant/string_name";
import { variant_get_ptr_utility_function } from "__internal__";
export class Math {
  static #sin_func;
  static #cos_func;
  static #tan_func;
  static #sinh_func;
  static #cosh_func;
  static #tanh_func;
  static #asin_func;
  static #acos_func;
  static #atan_func;
  static #atan2_func;
  static #asinh_func;
  static #acosh_func;
  static #atanh_func;
  static #sqrt_func;
  static #fmod_func;
  static #fposmod_func;
  static #posmod_func;
  static #floor_func;
  static #floorf_func;
  static #floori_func;
  static #ceil_func;
  static #ceilf_func;
  static #ceili_func;
  static #round_func;
  static #roundf_func;
  static #roundi_func;
  static #abs_func;
  static #absf_func;
  static #absi_func;
  static #sign_func;
  static #signf_func;
  static #signi_func;
  static #snapped_func;
  static #snappedf_func;
  static #snappedi_func;
  static #pow_func;
  static #log_func;
  static #exp_func;
  static #is_nan_func;
  static #is_inf_func;
  static #is_equal_approx_func;
  static #is_zero_approx_func;
  static #is_finite_func;
  static #ease_func;
  static #step_decimals_func;
  static #lerp_func;
  static #lerpf_func;
  static #cubic_interpolate_func;
  static #cubic_interpolate_angle_func;
  static #cubic_interpolate_in_time_func;
  static #cubic_interpolate_angle_in_time_func;
  static #bezier_interpolate_func;
  static #bezier_derivative_func;
  static #angle_difference_func;
  static #lerp_angle_func;
  static #inverse_lerp_func;
  static #remap_func;
  static #smoothstep_func;
  static #move_toward_func;
  static #rotate_toward_func;
  static #deg_to_rad_func;
  static #rad_to_deg_func;
  static #linear_to_db_func;
  static #db_to_linear_func;
  static #wrap_func;
  static #wrapi_func;
  static #wrapf_func;
  static #max_func;
  static #maxi_func;
  static #maxf_func;
  static #min_func;
  static #mini_func;
  static #minf_func;
  static #clamp_func;
  static #clampi_func;
  static #clampf_func;
  static #nearest_po2_func;
  static #pingpong_func;

  static _init_bindings() {
    this.#sin_func = variant_get_ptr_utility_function(
      new StringName("sin").opaque,
      2140049587
    );
    this.#cos_func = variant_get_ptr_utility_function(
      new StringName("cos").opaque,
      2140049587
    );
    this.#tan_func = variant_get_ptr_utility_function(
      new StringName("tan").opaque,
      2140049587
    );
    this.#sinh_func = variant_get_ptr_utility_function(
      new StringName("sinh").opaque,
      2140049587
    );
    this.#cosh_func = variant_get_ptr_utility_function(
      new StringName("cosh").opaque,
      2140049587
    );
    this.#tanh_func = variant_get_ptr_utility_function(
      new StringName("tanh").opaque,
      2140049587
    );
    this.#asin_func = variant_get_ptr_utility_function(
      new StringName("asin").opaque,
      2140049587
    );
    this.#acos_func = variant_get_ptr_utility_function(
      new StringName("acos").opaque,
      2140049587
    );
    this.#atan_func = variant_get_ptr_utility_function(
      new StringName("atan").opaque,
      2140049587
    );
    this.#atan2_func = variant_get_ptr_utility_function(
      new StringName("atan2").opaque,
      92296394
    );
    this.#asinh_func = variant_get_ptr_utility_function(
      new StringName("asinh").opaque,
      2140049587
    );
    this.#acosh_func = variant_get_ptr_utility_function(
      new StringName("acosh").opaque,
      2140049587
    );
    this.#atanh_func = variant_get_ptr_utility_function(
      new StringName("atanh").opaque,
      2140049587
    );
    this.#sqrt_func = variant_get_ptr_utility_function(
      new StringName("sqrt").opaque,
      2140049587
    );
    this.#fmod_func = variant_get_ptr_utility_function(
      new StringName("fmod").opaque,
      92296394
    );
    this.#fposmod_func = variant_get_ptr_utility_function(
      new StringName("fposmod").opaque,
      92296394
    );
    this.#posmod_func = variant_get_ptr_utility_function(
      new StringName("posmod").opaque,
      3133453818
    );
    this.#floor_func = variant_get_ptr_utility_function(
      new StringName("floor").opaque,
      4776452
    );
    this.#floorf_func = variant_get_ptr_utility_function(
      new StringName("floorf").opaque,
      2140049587
    );
    this.#floori_func = variant_get_ptr_utility_function(
      new StringName("floori").opaque,
      2780425386
    );
    this.#ceil_func = variant_get_ptr_utility_function(
      new StringName("ceil").opaque,
      4776452
    );
    this.#ceilf_func = variant_get_ptr_utility_function(
      new StringName("ceilf").opaque,
      2140049587
    );
    this.#ceili_func = variant_get_ptr_utility_function(
      new StringName("ceili").opaque,
      2780425386
    );
    this.#round_func = variant_get_ptr_utility_function(
      new StringName("round").opaque,
      4776452
    );
    this.#roundf_func = variant_get_ptr_utility_function(
      new StringName("roundf").opaque,
      2140049587
    );
    this.#roundi_func = variant_get_ptr_utility_function(
      new StringName("roundi").opaque,
      2780425386
    );
    this.#abs_func = variant_get_ptr_utility_function(
      new StringName("abs").opaque,
      4776452
    );
    this.#absf_func = variant_get_ptr_utility_function(
      new StringName("absf").opaque,
      2140049587
    );
    this.#absi_func = variant_get_ptr_utility_function(
      new StringName("absi").opaque,
      2157319888
    );
    this.#sign_func = variant_get_ptr_utility_function(
      new StringName("sign").opaque,
      4776452
    );
    this.#signf_func = variant_get_ptr_utility_function(
      new StringName("signf").opaque,
      2140049587
    );
    this.#signi_func = variant_get_ptr_utility_function(
      new StringName("signi").opaque,
      2157319888
    );
    this.#snapped_func = variant_get_ptr_utility_function(
      new StringName("snapped").opaque,
      459914704
    );
    this.#snappedf_func = variant_get_ptr_utility_function(
      new StringName("snappedf").opaque,
      92296394
    );
    this.#snappedi_func = variant_get_ptr_utility_function(
      new StringName("snappedi").opaque,
      3570758393
    );
    this.#pow_func = variant_get_ptr_utility_function(
      new StringName("pow").opaque,
      92296394
    );
    this.#log_func = variant_get_ptr_utility_function(
      new StringName("log").opaque,
      2140049587
    );
    this.#exp_func = variant_get_ptr_utility_function(
      new StringName("exp").opaque,
      2140049587
    );
    this.#is_nan_func = variant_get_ptr_utility_function(
      new StringName("is_nan").opaque,
      3569215213
    );
    this.#is_inf_func = variant_get_ptr_utility_function(
      new StringName("is_inf").opaque,
      3569215213
    );
    this.#is_equal_approx_func = variant_get_ptr_utility_function(
      new StringName("is_equal_approx").opaque,
      1400789633
    );
    this.#is_zero_approx_func = variant_get_ptr_utility_function(
      new StringName("is_zero_approx").opaque,
      3569215213
    );
    this.#is_finite_func = variant_get_ptr_utility_function(
      new StringName("is_finite").opaque,
      3569215213
    );
    this.#ease_func = variant_get_ptr_utility_function(
      new StringName("ease").opaque,
      92296394
    );
    this.#step_decimals_func = variant_get_ptr_utility_function(
      new StringName("step_decimals").opaque,
      2780425386
    );
    this.#lerp_func = variant_get_ptr_utility_function(
      new StringName("lerp").opaque,
      3389874542
    );
    this.#lerpf_func = variant_get_ptr_utility_function(
      new StringName("lerpf").opaque,
      998901048
    );
    this.#cubic_interpolate_func = variant_get_ptr_utility_function(
      new StringName("cubic_interpolate").opaque,
      1090965791
    );
    this.#cubic_interpolate_angle_func = variant_get_ptr_utility_function(
      new StringName("cubic_interpolate_angle").opaque,
      1090965791
    );
    this.#cubic_interpolate_in_time_func = variant_get_ptr_utility_function(
      new StringName("cubic_interpolate_in_time").opaque,
      388121036
    );
    this.#cubic_interpolate_angle_in_time_func = variant_get_ptr_utility_function(
      new StringName("cubic_interpolate_angle_in_time").opaque,
      388121036
    );
    this.#bezier_interpolate_func = variant_get_ptr_utility_function(
      new StringName("bezier_interpolate").opaque,
      1090965791
    );
    this.#bezier_derivative_func = variant_get_ptr_utility_function(
      new StringName("bezier_derivative").opaque,
      1090965791
    );
    this.#angle_difference_func = variant_get_ptr_utility_function(
      new StringName("angle_difference").opaque,
      92296394
    );
    this.#lerp_angle_func = variant_get_ptr_utility_function(
      new StringName("lerp_angle").opaque,
      998901048
    );
    this.#inverse_lerp_func = variant_get_ptr_utility_function(
      new StringName("inverse_lerp").opaque,
      998901048
    );
    this.#remap_func = variant_get_ptr_utility_function(
      new StringName("remap").opaque,
      1090965791
    );
    this.#smoothstep_func = variant_get_ptr_utility_function(
      new StringName("smoothstep").opaque,
      998901048
    );
    this.#move_toward_func = variant_get_ptr_utility_function(
      new StringName("move_toward").opaque,
      998901048
    );
    this.#rotate_toward_func = variant_get_ptr_utility_function(
      new StringName("rotate_toward").opaque,
      998901048
    );
    this.#deg_to_rad_func = variant_get_ptr_utility_function(
      new StringName("deg_to_rad").opaque,
      2140049587
    );
    this.#rad_to_deg_func = variant_get_ptr_utility_function(
      new StringName("rad_to_deg").opaque,
      2140049587
    );
    this.#linear_to_db_func = variant_get_ptr_utility_function(
      new StringName("linear_to_db").opaque,
      2140049587
    );
    this.#db_to_linear_func = variant_get_ptr_utility_function(
      new StringName("db_to_linear").opaque,
      2140049587
    );
    this.#wrap_func = variant_get_ptr_utility_function(
      new StringName("wrap").opaque,
      3389874542
    );
    this.#wrapi_func = variant_get_ptr_utility_function(
      new StringName("wrapi").opaque,
      650295447
    );
    this.#wrapf_func = variant_get_ptr_utility_function(
      new StringName("wrapf").opaque,
      998901048
    );
    this.#max_func = variant_get_ptr_utility_function(
      new StringName("max").opaque,
      3896050336
    );
    this.#maxi_func = variant_get_ptr_utility_function(
      new StringName("maxi").opaque,
      3133453818
    );
    this.#maxf_func = variant_get_ptr_utility_function(
      new StringName("maxf").opaque,
      92296394
    );
    this.#min_func = variant_get_ptr_utility_function(
      new StringName("min").opaque,
      3896050336
    );
    this.#mini_func = variant_get_ptr_utility_function(
      new StringName("mini").opaque,
      3133453818
    );
    this.#minf_func = variant_get_ptr_utility_function(
      new StringName("minf").opaque,
      92296394
    );
    this.#clamp_func = variant_get_ptr_utility_function(
      new StringName("clamp").opaque,
      3389874542
    );
    this.#clampi_func = variant_get_ptr_utility_function(
      new StringName("clampi").opaque,
      650295447
    );
    this.#clampf_func = variant_get_ptr_utility_function(
      new StringName("clampf").opaque,
      998901048
    );
    this.#nearest_po2_func = variant_get_ptr_utility_function(
      new StringName("nearest_po2").opaque,
      2157319888
    );
    this.#pingpong_func = variant_get_ptr_utility_function(
      new StringName("pingpong").opaque,
      92296394
    );
  }
  static #sin_internal(angle_rad) {
    return call_utility_ret(this.#sin_func, angle_rad);
  }
  static #cos_internal(angle_rad) {
    return call_utility_ret(this.#cos_func, angle_rad);
  }
  static #tan_internal(angle_rad) {
    return call_utility_ret(this.#tan_func, angle_rad);
  }
  static #sinh_internal(x) {
    return call_utility_ret(this.#sinh_func, x);
  }
  static #cosh_internal(x) {
    return call_utility_ret(this.#cosh_func, x);
  }
  static #tanh_internal(x) {
    return call_utility_ret(this.#tanh_func, x);
  }
  static #asin_internal(x) {
    return call_utility_ret(this.#asin_func, x);
  }
  static #acos_internal(x) {
    return call_utility_ret(this.#acos_func, x);
  }
  static #atan_internal(x) {
    return call_utility_ret(this.#atan_func, x);
  }
  static #atan2_internal(y, x) {
    return call_utility_ret(this.#atan2_func, y, x);
  }
  static #asinh_internal(x) {
    return call_utility_ret(this.#asinh_func, x);
  }
  static #acosh_internal(x) {
    return call_utility_ret(this.#acosh_func, x);
  }
  static #atanh_internal(x) {
    return call_utility_ret(this.#atanh_func, x);
  }
  static #sqrt_internal(x) {
    return call_utility_ret(this.#sqrt_func, x);
  }
  static #fmod_internal(x, y) {
    return call_utility_ret(this.#fmod_func, x, y);
  }
  static #fposmod_internal(x, y) {
    return call_utility_ret(this.#fposmod_func, x, y);
  }
  static #posmod_internal(x, y) {
    return call_utility_ret(this.#posmod_func, x, y);
  }
  static #floor_internal(x) {
    return call_utility_ret(this.#floor_func, x);
  }
  static #floorf_internal(x) {
    return call_utility_ret(this.#floorf_func, x);
  }
  static #floori_internal(x) {
    return call_utility_ret(this.#floori_func, x);
  }
  static #ceil_internal(x) {
    return call_utility_ret(this.#ceil_func, x);
  }
  static #ceilf_internal(x) {
    return call_utility_ret(this.#ceilf_func, x);
  }
  static #ceili_internal(x) {
    return call_utility_ret(this.#ceili_func, x);
  }
  static #round_internal(x) {
    return call_utility_ret(this.#round_func, x);
  }
  static #roundf_internal(x) {
    return call_utility_ret(this.#roundf_func, x);
  }
  static #roundi_internal(x) {
    return call_utility_ret(this.#roundi_func, x);
  }
  static #abs_internal(x) {
    return call_utility_ret(this.#abs_func, x);
  }
  static #absf_internal(x) {
    return call_utility_ret(this.#absf_func, x);
  }
  static #absi_internal(x) {
    return call_utility_ret(this.#absi_func, x);
  }
  static #sign_internal(x) {
    return call_utility_ret(this.#sign_func, x);
  }
  static #signf_internal(x) {
    return call_utility_ret(this.#signf_func, x);
  }
  static #signi_internal(x) {
    return call_utility_ret(this.#signi_func, x);
  }
  static #snapped_internal(x, step) {
    return call_utility_ret(this.#snapped_func, x, step);
  }
  static #snappedf_internal(x, step) {
    return call_utility_ret(this.#snappedf_func, x, step);
  }
  static #snappedi_internal(x, step) {
    return call_utility_ret(this.#snappedi_func, x, step);
  }
  static #pow_internal(base, exp) {
    return call_utility_ret(this.#pow_func, base, exp);
  }
  static #log_internal(x) {
    return call_utility_ret(this.#log_func, x);
  }
  static #exp_internal(x) {
    return call_utility_ret(this.#exp_func, x);
  }
  static #is_nan_internal(x) {
    return call_utility_ret(this.#is_nan_func, x);
  }
  static #is_inf_internal(x) {
    return call_utility_ret(this.#is_inf_func, x);
  }
  static #is_equal_approx_internal(a, b) {
    return call_utility_ret(this.#is_equal_approx_func, a, b);
  }
  static #is_zero_approx_internal(x) {
    return call_utility_ret(this.#is_zero_approx_func, x);
  }
  static #is_finite_internal(x) {
    return call_utility_ret(this.#is_finite_func, x);
  }
  static #ease_internal(x, curve) {
    return call_utility_ret(this.#ease_func, x, curve);
  }
  static #step_decimals_internal(x) {
    return call_utility_ret(this.#step_decimals_func, x);
  }
  static #lerp_internal(from, to, weight) {
    return call_utility_ret(this.#lerp_func, from, to, weight);
  }
  static #lerpf_internal(from, to, weight) {
    return call_utility_ret(this.#lerpf_func, from, to, weight);
  }
  static #cubic_interpolate_internal(from, to, pre, post, weight) {
    return call_utility_ret(this.#cubic_interpolate_func, from, to, pre, post, weight);
  }
  static #cubic_interpolate_angle_internal(from, to, pre, post, weight) {
    return call_utility_ret(this.#cubic_interpolate_angle_func, from, to, pre, post, weight);
  }
  static #cubic_interpolate_in_time_internal(from, to, pre, post, weight, to_t, pre_t, post_t) {
    return call_utility_ret(this.#cubic_interpolate_in_time_func, from, to, pre, post, weight, to_t, pre_t, post_t);
  }
  static #cubic_interpolate_angle_in_time_internal(from, to, pre, post, weight, to_t, pre_t, post_t) {
    return call_utility_ret(this.#cubic_interpolate_angle_in_time_func, from, to, pre, post, weight, to_t, pre_t, post_t);
  }
  static #bezier_interpolate_internal(start, control_1, control_2, end, t) {
    return call_utility_ret(this.#bezier_interpolate_func, start, control_1, control_2, end, t);
  }
  static #bezier_derivative_internal(start, control_1, control_2, end, t) {
    return call_utility_ret(this.#bezier_derivative_func, start, control_1, control_2, end, t);
  }
  static #angle_difference_internal(from, to) {
    return call_utility_ret(this.#angle_difference_func, from, to);
  }
  static #lerp_angle_internal(from, to, weight) {
    return call_utility_ret(this.#lerp_angle_func, from, to, weight);
  }
  static #inverse_lerp_internal(from, to, weight) {
    return call_utility_ret(this.#inverse_lerp_func, from, to, weight);
  }
  static #remap_internal(value, istart, istop, ostart, ostop) {
    return call_utility_ret(this.#remap_func, value, istart, istop, ostart, ostop);
  }
  static #smoothstep_internal(from, to, x) {
    return call_utility_ret(this.#smoothstep_func, from, to, x);
  }
  static #move_toward_internal(from, to, delta) {
    return call_utility_ret(this.#move_toward_func, from, to, delta);
  }
  static #rotate_toward_internal(from, to, delta) {
    return call_utility_ret(this.#rotate_toward_func, from, to, delta);
  }
  static #deg_to_rad_internal(deg) {
    return call_utility_ret(this.#deg_to_rad_func, deg);
  }
  static #rad_to_deg_internal(rad) {
    return call_utility_ret(this.#rad_to_deg_func, rad);
  }
  static #linear_to_db_internal(lin) {
    return call_utility_ret(this.#linear_to_db_func, lin);
  }
  static #db_to_linear_internal(db) {
    return call_utility_ret(this.#db_to_linear_func, db);
  }
  static #wrap_internal(value, min, max) {
    return call_utility_ret(this.#wrap_func, value, min, max);
  }
  static #wrapi_internal(value, min, max) {
    return call_utility_ret(this.#wrapi_func, value, min, max);
  }
  static #wrapf_internal(value, min, max) {
    return call_utility_ret(this.#wrapf_func, value, min, max);
  }
  static #max_internal(arg1, arg2, ...args) {
    return call_utility_ret(this.#max_func, arg1, arg2, ...args);
  }
  static #maxi_internal(a, b) {
    return call_utility_ret(this.#maxi_func, a, b);
  }
  static #maxf_internal(a, b) {
    return call_utility_ret(this.#maxf_func, a, b);
  }
  static #min_internal(arg1, arg2, ...args) {
    return call_utility_ret(this.#min_func, arg1, arg2, ...args);
  }
  static #mini_internal(a, b) {
    return call_utility_ret(this.#mini_func, a, b);
  }
  static #minf_internal(a, b) {
    return call_utility_ret(this.#minf_func, a, b);
  }
  static #clamp_internal(value, min, max) {
    return call_utility_ret(this.#clamp_func, value, min, max);
  }
  static #clampi_internal(value, min, max) {
    return call_utility_ret(this.#clampi_func, value, min, max);
  }
  static #clampf_internal(value, min, max) {
    return call_utility_ret(this.#clampf_func, value, min, max);
  }
  static #nearest_po2_internal(value) {
    return call_utility_ret(this.#nearest_po2_func, value);
  }
  static #pingpong_internal(value, length) {
    return call_utility_ret(this.#pingpong_func, value, length);
  }
  sin(angle_rad) {
    return Math.#sin_internal(angle_rad);
  }
  cos(angle_rad) {
    return Math.#cos_internal(angle_rad);
  }
  tan(angle_rad) {
    return Math.#tan_internal(angle_rad);
  }
  sinh(x) {
    return Math.#sinh_internal(x);
  }
  cosh(x) {
    return Math.#cosh_internal(x);
  }
  tanh(x) {
    return Math.#tanh_internal(x);
  }
  asin(x) {
    return Math.#asin_internal(x);
  }
  acos(x) {
    return Math.#acos_internal(x);
  }
  atan(x) {
    return Math.#atan_internal(x);
  }
  atan2(y, x) {
    return Math.#atan2_internal(y, x);
  }
  asinh(x) {
    return Math.#asinh_internal(x);
  }
  acosh(x) {
    return Math.#acosh_internal(x);
  }
  atanh(x) {
    return Math.#atanh_internal(x);
  }
  sqrt(x) {
    return Math.#sqrt_internal(x);
  }
  fmod(x, y) {
    return Math.#fmod_internal(x, y);
  }
  fposmod(x, y) {
    return Math.#fposmod_internal(x, y);
  }
  posmod(x, y) {
    return Math.#posmod_internal(x, y);
  }
  floor(x) {
    return Math.#floor_internal(x);
  }
  floorf(x) {
    return Math.#floorf_internal(x);
  }
  floori(x) {
    return Math.#floori_internal(x);
  }
  ceil(x) {
    return Math.#ceil_internal(x);
  }
  ceilf(x) {
    return Math.#ceilf_internal(x);
  }
  ceili(x) {
    return Math.#ceili_internal(x);
  }
  round(x) {
    return Math.#round_internal(x);
  }
  roundf(x) {
    return Math.#roundf_internal(x);
  }
  roundi(x) {
    return Math.#roundi_internal(x);
  }
  abs(x) {
    return Math.#abs_internal(x);
  }
  absf(x) {
    return Math.#absf_internal(x);
  }
  absi(x) {
    return Math.#absi_internal(x);
  }
  sign(x) {
    return Math.#sign_internal(x);
  }
  signf(x) {
    return Math.#signf_internal(x);
  }
  signi(x) {
    return Math.#signi_internal(x);
  }
  snapped(x, step) {
    return Math.#snapped_internal(x, step);
  }
  snappedf(x, step) {
    return Math.#snappedf_internal(x, step);
  }
  snappedi(x, step) {
    return Math.#snappedi_internal(x, step);
  }
  pow(base, exp) {
    return Math.#pow_internal(base, exp);
  }
  log(x) {
    return Math.#log_internal(x);
  }
  exp(x) {
    return Math.#exp_internal(x);
  }
  is_nan(x) {
    return Math.#is_nan_internal(x);
  }
  is_inf(x) {
    return Math.#is_inf_internal(x);
  }
  is_equal_approx(a, b) {
    return Math.#is_equal_approx_internal(a, b);
  }
  is_zero_approx(x) {
    return Math.#is_zero_approx_internal(x);
  }
  is_finite(x) {
    return Math.#is_finite_internal(x);
  }
  ease(x, curve) {
    return Math.#ease_internal(x, curve);
  }
  step_decimals(x) {
    return Math.#step_decimals_internal(x);
  }
  lerp(from, to, weight) {
    return Math.#lerp_internal(from, to, weight);
  }
  lerpf(from, to, weight) {
    return Math.#lerpf_internal(from, to, weight);
  }
  cubic_interpolate(from, to, pre, post, weight) {
    return Math.#cubic_interpolate_internal(from, to, pre, post, weight);
  }
  cubic_interpolate_angle(from, to, pre, post, weight) {
    return Math.#cubic_interpolate_angle_internal(from, to, pre, post, weight);
  }
  cubic_interpolate_in_time(from, to, pre, post, weight, to_t, pre_t, post_t) {
    return Math.#cubic_interpolate_in_time_internal(from, to, pre, post, weight, to_t, pre_t, post_t);
  }
  cubic_interpolate_angle_in_time(from, to, pre, post, weight, to_t, pre_t, post_t) {
    return Math.#cubic_interpolate_angle_in_time_internal(from, to, pre, post, weight, to_t, pre_t, post_t);
  }
  bezier_interpolate(start, control_1, control_2, end, t) {
    return Math.#bezier_interpolate_internal(start, control_1, control_2, end, t);
  }
  bezier_derivative(start, control_1, control_2, end, t) {
    return Math.#bezier_derivative_internal(start, control_1, control_2, end, t);
  }
  angle_difference(from, to) {
    return Math.#angle_difference_internal(from, to);
  }
  lerp_angle(from, to, weight) {
    return Math.#lerp_angle_internal(from, to, weight);
  }
  inverse_lerp(from, to, weight) {
    return Math.#inverse_lerp_internal(from, to, weight);
  }
  remap(value, istart, istop, ostart, ostop) {
    return Math.#remap_internal(value, istart, istop, ostart, ostop);
  }
  smoothstep(from, to, x) {
    return Math.#smoothstep_internal(from, to, x);
  }
  move_toward(from, to, delta) {
    return Math.#move_toward_internal(from, to, delta);
  }
  rotate_toward(from, to, delta) {
    return Math.#rotate_toward_internal(from, to, delta);
  }
  deg_to_rad(deg) {
    return Math.#deg_to_rad_internal(deg);
  }
  rad_to_deg(rad) {
    return Math.#rad_to_deg_internal(rad);
  }
  linear_to_db(lin) {
    return Math.#linear_to_db_internal(lin);
  }
  db_to_linear(db) {
    return Math.#db_to_linear_internal(db);
  }
  wrap(value, min, max) {
    return Math.#wrap_internal(value, min, max);
  }
  wrapi(value, min, max) {
    return Math.#wrapi_internal(value, min, max);
  }
  wrapf(value, min, max) {
    return Math.#wrapf_internal(value, min, max);
  }
  max(arg1, arg2, ...args) {
    return Math.#max_internal(arg1, arg2, ...args);
  }
  maxi(a, b) {
    return Math.#maxi_internal(a, b);
  }
  maxf(a, b) {
    return Math.#maxf_internal(a, b);
  }
  min(arg1, arg2, ...args) {
    return Math.#min_internal(arg1, arg2, ...args);
  }
  mini(a, b) {
    return Math.#mini_internal(a, b);
  }
  minf(a, b) {
    return Math.#minf_internal(a, b);
  }
  clamp(value, min, max) {
    return Math.#clamp_internal(value, min, max);
  }
  clampi(value, min, max) {
    return Math.#clampi_internal(value, min, max);
  }
  clampf(value, min, max) {
    return Math.#clampf_internal(value, min, max);
  }
  nearest_po2(value) {
    return Math.#nearest_po2_internal(value);
  }
  pingpong(value, length) {
    return Math.#pingpong_internal(value, length);
  }
}

export class GD {
  static #weakref_func;
  static #typeof_func;
  static #type_convert_func;
  static #str_func;
  static #error_string_func;
  static #type_string_func;
  static #print_func;
  static #print_rich_func;
  static #printerr_func;
  static #printt_func;
  static #prints_func;
  static #printraw_func;
  static #print_verbose_func;
  static #push_error_func;
  static #push_warning_func;
  static #var_to_str_func;
  static #str_to_var_func;
  static #var_to_bytes_func;
  static #bytes_to_var_func;
  static #var_to_bytes_with_objects_func;
  static #bytes_to_var_with_objects_func;
  static #hash_func;
  static #instance_from_id_func;
  static #is_instance_id_valid_func;
  static #is_instance_valid_func;
  static #rid_allocate_id_func;
  static #rid_from_int64_func;
  static #is_same_func;

  static _init_bindings() {
    this.#weakref_func = variant_get_ptr_utility_function(
      new StringName("weakref").opaque,
      4776452
    );
    this.#typeof_func = variant_get_ptr_utility_function(
      new StringName("typeof").opaque,
      326422594
    );
    this.#type_convert_func = variant_get_ptr_utility_function(
      new StringName("type_convert").opaque,
      2453062746
    );
    this.#str_func = variant_get_ptr_utility_function(
      new StringName("str").opaque,
      32569176
    );
    this.#error_string_func = variant_get_ptr_utility_function(
      new StringName("error_string").opaque,
      942708242
    );
    this.#type_string_func = variant_get_ptr_utility_function(
      new StringName("type_string").opaque,
      942708242
    );
    this.#print_func = variant_get_ptr_utility_function(
      new StringName("print").opaque,
      2648703342
    );
    this.#print_rich_func = variant_get_ptr_utility_function(
      new StringName("print_rich").opaque,
      2648703342
    );
    this.#printerr_func = variant_get_ptr_utility_function(
      new StringName("printerr").opaque,
      2648703342
    );
    this.#printt_func = variant_get_ptr_utility_function(
      new StringName("printt").opaque,
      2648703342
    );
    this.#prints_func = variant_get_ptr_utility_function(
      new StringName("prints").opaque,
      2648703342
    );
    this.#printraw_func = variant_get_ptr_utility_function(
      new StringName("printraw").opaque,
      2648703342
    );
    this.#print_verbose_func = variant_get_ptr_utility_function(
      new StringName("print_verbose").opaque,
      2648703342
    );
    this.#push_error_func = variant_get_ptr_utility_function(
      new StringName("push_error").opaque,
      2648703342
    );
    this.#push_warning_func = variant_get_ptr_utility_function(
      new StringName("push_warning").opaque,
      2648703342
    );
    this.#var_to_str_func = variant_get_ptr_utility_function(
      new StringName("var_to_str").opaque,
      866625479
    );
    this.#str_to_var_func = variant_get_ptr_utility_function(
      new StringName("str_to_var").opaque,
      1891498491
    );
    this.#var_to_bytes_func = variant_get_ptr_utility_function(
      new StringName("var_to_bytes").opaque,
      2947269930
    );
    this.#bytes_to_var_func = variant_get_ptr_utility_function(
      new StringName("bytes_to_var").opaque,
      4249819452
    );
    this.#var_to_bytes_with_objects_func = variant_get_ptr_utility_function(
      new StringName("var_to_bytes_with_objects").opaque,
      2947269930
    );
    this.#bytes_to_var_with_objects_func = variant_get_ptr_utility_function(
      new StringName("bytes_to_var_with_objects").opaque,
      4249819452
    );
    this.#hash_func = variant_get_ptr_utility_function(
      new StringName("hash").opaque,
      326422594
    );
    this.#instance_from_id_func = variant_get_ptr_utility_function(
      new StringName("instance_from_id").opaque,
      1156694636
    );
    this.#is_instance_id_valid_func = variant_get_ptr_utility_function(
      new StringName("is_instance_id_valid").opaque,
      2232439758
    );
    this.#is_instance_valid_func = variant_get_ptr_utility_function(
      new StringName("is_instance_valid").opaque,
      996128841
    );
    this.#rid_allocate_id_func = variant_get_ptr_utility_function(
      new StringName("rid_allocate_id").opaque,
      701202648
    );
    this.#rid_from_int64_func = variant_get_ptr_utility_function(
      new StringName("rid_from_int64").opaque,
      3426892196
    );
    this.#is_same_func = variant_get_ptr_utility_function(
      new StringName("is_same").opaque,
      1409423524
    );
  }
  static #weakref_internal(obj) {
    return call_utility_ret(this.#weakref_func, obj);
  }
  static #typeof_internal(variable) {
    return call_utility_ret(this.#typeof_func, variable);
  }
  static #type_convert_internal(variant, type) {
    return call_utility_ret(this.#type_convert_func, variant, type);
  }
  static #str_internal(arg1, ...args) {
    return call_utility_ret(this.#str_func, arg1, ...args);
  }
  static #error_string_internal(error) {
    return call_utility_ret(this.#error_string_func, error);
  }
  static #type_string_internal(type) {
    return call_utility_ret(this.#type_string_func, type);
  }
  static #print_internal(arg1, ...args) {
    call_utility_no_ret(this.#print_func, arg1, ...args);
  }
  static #print_rich_internal(arg1, ...args) {
    call_utility_no_ret(this.#print_rich_func, arg1, ...args);
  }
  static #printerr_internal(arg1, ...args) {
    call_utility_no_ret(this.#printerr_func, arg1, ...args);
  }
  static #printt_internal(arg1, ...args) {
    call_utility_no_ret(this.#printt_func, arg1, ...args);
  }
  static #prints_internal(arg1, ...args) {
    call_utility_no_ret(this.#prints_func, arg1, ...args);
  }
  static #printraw_internal(arg1, ...args) {
    call_utility_no_ret(this.#printraw_func, arg1, ...args);
  }
  static #print_verbose_internal(arg1, ...args) {
    call_utility_no_ret(this.#print_verbose_func, arg1, ...args);
  }
  static #push_error_internal(arg1, ...args) {
    call_utility_no_ret(this.#push_error_func, arg1, ...args);
  }
  static #push_warning_internal(arg1, ...args) {
    call_utility_no_ret(this.#push_warning_func, arg1, ...args);
  }
  static #var_to_str_internal(variable) {
    return call_utility_ret(this.#var_to_str_func, variable);
  }
  static #str_to_var_internal(string) {
    return call_utility_ret(this.#str_to_var_func, string);
  }
  static #var_to_bytes_internal(variable) {
    return call_utility_ret(this.#var_to_bytes_func, variable);
  }
  static #bytes_to_var_internal(bytes) {
    return call_utility_ret(this.#bytes_to_var_func, bytes);
  }
  static #var_to_bytes_with_objects_internal(variable) {
    return call_utility_ret(this.#var_to_bytes_with_objects_func, variable);
  }
  static #bytes_to_var_with_objects_internal(bytes) {
    return call_utility_ret(this.#bytes_to_var_with_objects_func, bytes);
  }
  static #hash_internal(variable) {
    return call_utility_ret(this.#hash_func, variable);
  }
  static #instance_from_id_internal(instance_id) {
    return call_utility_ret(this.#instance_from_id_func, instance_id);
  }
  static #is_instance_id_valid_internal(id) {
    return call_utility_ret(this.#is_instance_id_valid_func, id);
  }
  static #is_instance_valid_internal(instance) {
    return call_utility_ret(this.#is_instance_valid_func, instance);
  }
  static #rid_allocate_id_internal() {
    return call_utility_ret(this.#rid_allocate_id_func, );
  }
  static #rid_from_int64_internal(base) {
    return call_utility_ret(this.#rid_from_int64_func, base);
  }
  static #is_same_internal(a, b) {
    return call_utility_ret(this.#is_same_func, a, b);
  }
  weakref(obj) {
    return GD.#weakref_internal(obj);
  }
  typeof(variable) {
    return GD.#typeof_internal(variable);
  }
  type_convert(variant, type) {
    return GD.#type_convert_internal(variant, type);
  }
  str(arg1, ...args) {
    return GD.#str_internal(arg1, ...args);
  }
  error_string(error) {
    return GD.#error_string_internal(error);
  }
  type_string(type) {
    return GD.#type_string_internal(type);
  }
  print(arg1, ...args) {
    return GD.#print_internal(arg1, ...args);
  }
  print_rich(arg1, ...args) {
    return GD.#print_rich_internal(arg1, ...args);
  }
  printerr(arg1, ...args) {
    return GD.#printerr_internal(arg1, ...args);
  }
  printt(arg1, ...args) {
    return GD.#printt_internal(arg1, ...args);
  }
  prints(arg1, ...args) {
    return GD.#prints_internal(arg1, ...args);
  }
  printraw(arg1, ...args) {
    return GD.#printraw_internal(arg1, ...args);
  }
  print_verbose(arg1, ...args) {
    return GD.#print_verbose_internal(arg1, ...args);
  }
  push_error(arg1, ...args) {
    return GD.#push_error_internal(arg1, ...args);
  }
  push_warning(arg1, ...args) {
    return GD.#push_warning_internal(arg1, ...args);
  }
  var_to_str(variable) {
    return GD.#var_to_str_internal(variable);
  }
  str_to_var(string) {
    return GD.#str_to_var_internal(string);
  }
  var_to_bytes(variable) {
    return GD.#var_to_bytes_internal(variable);
  }
  bytes_to_var(bytes) {
    return GD.#bytes_to_var_internal(bytes);
  }
  var_to_bytes_with_objects(variable) {
    return GD.#var_to_bytes_with_objects_internal(variable);
  }
  bytes_to_var_with_objects(bytes) {
    return GD.#bytes_to_var_with_objects_internal(bytes);
  }
  hash(variable) {
    return GD.#hash_internal(variable);
  }
  instance_from_id(instance_id) {
    return GD.#instance_from_id_internal(instance_id);
  }
  is_instance_id_valid(id) {
    return GD.#is_instance_id_valid_internal(id);
  }
  is_instance_valid(instance) {
    return GD.#is_instance_valid_internal(instance);
  }
  rid_allocate_id() {
    return GD.#rid_allocate_id_internal();
  }
  rid_from_int64(base) {
    return GD.#rid_from_int64_internal(base);
  }
  is_same(a, b) {
    return GD.#is_same_internal(a, b);
  }
}

export class Random {
  static #randomize_func;
  static #randi_func;
  static #randf_func;
  static #randi_range_func;
  static #randf_range_func;
  static #randfn_func;
  static #seed_func;
  static #rand_from_seed_func;

  static _init_bindings() {
    this.#randomize_func = variant_get_ptr_utility_function(
      new StringName("randomize").opaque,
      1691721052
    );
    this.#randi_func = variant_get_ptr_utility_function(
      new StringName("randi").opaque,
      701202648
    );
    this.#randf_func = variant_get_ptr_utility_function(
      new StringName("randf").opaque,
      2086227845
    );
    this.#randi_range_func = variant_get_ptr_utility_function(
      new StringName("randi_range").opaque,
      3133453818
    );
    this.#randf_range_func = variant_get_ptr_utility_function(
      new StringName("randf_range").opaque,
      92296394
    );
    this.#randfn_func = variant_get_ptr_utility_function(
      new StringName("randfn").opaque,
      92296394
    );
    this.#seed_func = variant_get_ptr_utility_function(
      new StringName("seed").opaque,
      382931173
    );
    this.#rand_from_seed_func = variant_get_ptr_utility_function(
      new StringName("rand_from_seed").opaque,
      1391063685
    );
  }
  static #randomize_internal() {
    call_utility_no_ret(this.#randomize_func, );
  }
  static #randi_internal() {
    return call_utility_ret(this.#randi_func, );
  }
  static #randf_internal() {
    return call_utility_ret(this.#randf_func, );
  }
  static #randi_range_internal(from, to) {
    return call_utility_ret(this.#randi_range_func, from, to);
  }
  static #randf_range_internal(from, to) {
    return call_utility_ret(this.#randf_range_func, from, to);
  }
  static #randfn_internal(mean, deviation) {
    return call_utility_ret(this.#randfn_func, mean, deviation);
  }
  static #seed_internal(base) {
    call_utility_no_ret(this.#seed_func, base);
  }
  static #rand_from_seed_internal(seed) {
    return call_utility_ret(this.#rand_from_seed_func, seed);
  }
  randomize() {
    return Random.#randomize_internal();
  }
  randi() {
    return Random.#randi_internal();
  }
  randf() {
    return Random.#randf_internal();
  }
  randi_range(from, to) {
    return Random.#randi_range_internal(from, to);
  }
  randf_range(from, to) {
    return Random.#randf_range_internal(from, to);
  }
  randfn(mean, deviation) {
    return Random.#randfn_internal(mean, deviation);
  }
  seed(base) {
    return Random.#seed_internal(base);
  }
  rand_from_seed(seed) {
    return Random.#rand_from_seed_internal(seed);
  }
}
