import * as internal from '__internal__'
import {
  _call_builtin_constructor,
  _call_builtin_method_ptr_ret,
  _call_builtin_method_ptr_no_ret,
  _call_builtin_method_ptr_obj_ret,
} from '@js_godot/core/builtin_ptrcall'
import { Vector4i } from '@js_godot/variant/vector4i'
import { StringName } from '@js_godot/variant/string_name'
import { GodotObject } from "@js_godot/classes/godot_object";

class _MethodBindings {
  from_variant_constructor
  constructor_0
  constructor_1
  constructor_2
  constructor_3
  method_min_axis_index
  method_max_axis_index
  method_length
  method_length_squared
  method_abs
  method_sign
  method_floor
  method_ceil
  method_round
  method_lerp
  method_cubic_interpolate
  method_cubic_interpolate_in_time
  method_posmod
  method_posmodv
  method_snapped
  method_snappedf
  method_clamp
  method_clampf
  method_normalized
  method_is_normalized
  method_direction_to
  method_distance_to
  method_distance_squared_to
  method_dot
  method_inverse
  method_is_equal_approx
  method_is_zero_approx
  method_is_finite
  method_min
  method_minf
  method_max
  method_maxf
  operator_equal_Variant
  operator_not_equal_Variant
  operator_negate_
  operator_positive_
  operator_not_
  operator_multiply_int
  operator_divide_int
  operator_multiply_float
  operator_divide_float
  operator_equal_Vector4
  operator_not_equal_Vector4
  operator_less_Vector4
  operator_less_equal_Vector4
  operator_greater_Vector4
  operator_greater_equal_Vector4
  operator_add_Vector4
  operator_subtract_Vector4
  operator_multiply_Vector4
  operator_divide_Vector4
  operator_multiply_Projection
  operator_in_Dictionary
  operator_in_Array
  operator_in_PackedVector4Array
}

export class Vector4 {
  static #SIZE = 16
  opaque = new Uint8Array(Vector4.#SIZE)

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor (value) {
    if (!value) {
      _call_builtin_constructor(Vector4.#_bindings.constructor_0, this)
    } else if (arguments.length == 1&& arguments[0] instanceof Vector4) {
      let from = arguments[0];
      _call_builtin_constructor(Vector4.#_bindings.constructor_1, this, [
        from
      ])
    } else if (arguments.length == 1&& arguments[0] instanceof Vector4i) {
      let from = arguments[0];
      _call_builtin_constructor(Vector4.#_bindings.constructor_2, this, [
        from
      ])
    } else if (arguments.length == 4&& typeof arguments[0] == "number"&& typeof arguments[1] == "number"&& typeof arguments[2] == "number"&& typeof arguments[3] == "number") {
      let x = arguments[0];
      let y = arguments[1];
      let z = arguments[2];
      let w = arguments[3];
      _call_builtin_constructor(Vector4.#_bindings.constructor_3, this, [
        x, y, z, w
      ])
    } else if (value.constructor.name === "Variant") {
      Vector4.#_bindings.from_variant_constructor(this.opaque, value.opaque)
    } else if (value instanceof Uint8Array) {
      this.opaque = value;
    } 
  }
  
  static __init_bindings_constructors_destructor () {
    this.#_bindings.from_variant_constructor = internal.get_variant_to_type_constructor(
      12
    )
    this.#_bindings.constructor_0 = internal.variant_get_ptr_constructor(
      12,
      0
    )
    this.#_bindings.constructor_1 = internal.variant_get_ptr_constructor(
      12,
      1
    )
    this.#_bindings.constructor_2 = internal.variant_get_ptr_constructor(
      12,
      2
    )
    this.#_bindings.constructor_3 = internal.variant_get_ptr_constructor(
      12,
      3
    )
  }
  
  static async _init_bindings () {
    if (this.#initialized) {
      return;
    }
    this.#initialized = true;
    this.__init_bindings_constructors_destructor()
    {
      let _gde_name = new StringName('min_axis_index')
      this.#_bindings.method_min_axis_index = internal.variant_get_ptr_builtin_method(
        12,
        _gde_name.opaque,
        3173160232
      )
    }
    {
      let _gde_name = new StringName('max_axis_index')
      this.#_bindings.method_max_axis_index = internal.variant_get_ptr_builtin_method(
        12,
        _gde_name.opaque,
        3173160232
      )
    }
    {
      let _gde_name = new StringName('length')
      this.#_bindings.method_length = internal.variant_get_ptr_builtin_method(
        12,
        _gde_name.opaque,
        466405837
      )
    }
    {
      let _gde_name = new StringName('length_squared')
      this.#_bindings.method_length_squared = internal.variant_get_ptr_builtin_method(
        12,
        _gde_name.opaque,
        466405837
      )
    }
    {
      let _gde_name = new StringName('abs')
      this.#_bindings.method_abs = internal.variant_get_ptr_builtin_method(
        12,
        _gde_name.opaque,
        80860099
      )
    }
    {
      let _gde_name = new StringName('sign')
      this.#_bindings.method_sign = internal.variant_get_ptr_builtin_method(
        12,
        _gde_name.opaque,
        80860099
      )
    }
    {
      let _gde_name = new StringName('floor')
      this.#_bindings.method_floor = internal.variant_get_ptr_builtin_method(
        12,
        _gde_name.opaque,
        80860099
      )
    }
    {
      let _gde_name = new StringName('ceil')
      this.#_bindings.method_ceil = internal.variant_get_ptr_builtin_method(
        12,
        _gde_name.opaque,
        80860099
      )
    }
    {
      let _gde_name = new StringName('round')
      this.#_bindings.method_round = internal.variant_get_ptr_builtin_method(
        12,
        _gde_name.opaque,
        80860099
      )
    }
    {
      let _gde_name = new StringName('lerp')
      this.#_bindings.method_lerp = internal.variant_get_ptr_builtin_method(
        12,
        _gde_name.opaque,
        2329757942
      )
    }
    {
      let _gde_name = new StringName('cubic_interpolate')
      this.#_bindings.method_cubic_interpolate = internal.variant_get_ptr_builtin_method(
        12,
        _gde_name.opaque,
        726768410
      )
    }
    {
      let _gde_name = new StringName('cubic_interpolate_in_time')
      this.#_bindings.method_cubic_interpolate_in_time = internal.variant_get_ptr_builtin_method(
        12,
        _gde_name.opaque,
        681631873
      )
    }
    {
      let _gde_name = new StringName('posmod')
      this.#_bindings.method_posmod = internal.variant_get_ptr_builtin_method(
        12,
        _gde_name.opaque,
        3129671720
      )
    }
    {
      let _gde_name = new StringName('posmodv')
      this.#_bindings.method_posmodv = internal.variant_get_ptr_builtin_method(
        12,
        _gde_name.opaque,
        2031281584
      )
    }
    {
      let _gde_name = new StringName('snapped')
      this.#_bindings.method_snapped = internal.variant_get_ptr_builtin_method(
        12,
        _gde_name.opaque,
        2031281584
      )
    }
    {
      let _gde_name = new StringName('snappedf')
      this.#_bindings.method_snappedf = internal.variant_get_ptr_builtin_method(
        12,
        _gde_name.opaque,
        3129671720
      )
    }
    {
      let _gde_name = new StringName('clamp')
      this.#_bindings.method_clamp = internal.variant_get_ptr_builtin_method(
        12,
        _gde_name.opaque,
        823915692
      )
    }
    {
      let _gde_name = new StringName('clampf')
      this.#_bindings.method_clampf = internal.variant_get_ptr_builtin_method(
        12,
        _gde_name.opaque,
        4072091586
      )
    }
    {
      let _gde_name = new StringName('normalized')
      this.#_bindings.method_normalized = internal.variant_get_ptr_builtin_method(
        12,
        _gde_name.opaque,
        80860099
      )
    }
    {
      let _gde_name = new StringName('is_normalized')
      this.#_bindings.method_is_normalized = internal.variant_get_ptr_builtin_method(
        12,
        _gde_name.opaque,
        3918633141
      )
    }
    {
      let _gde_name = new StringName('direction_to')
      this.#_bindings.method_direction_to = internal.variant_get_ptr_builtin_method(
        12,
        _gde_name.opaque,
        2031281584
      )
    }
    {
      let _gde_name = new StringName('distance_to')
      this.#_bindings.method_distance_to = internal.variant_get_ptr_builtin_method(
        12,
        _gde_name.opaque,
        3770801042
      )
    }
    {
      let _gde_name = new StringName('distance_squared_to')
      this.#_bindings.method_distance_squared_to = internal.variant_get_ptr_builtin_method(
        12,
        _gde_name.opaque,
        3770801042
      )
    }
    {
      let _gde_name = new StringName('dot')
      this.#_bindings.method_dot = internal.variant_get_ptr_builtin_method(
        12,
        _gde_name.opaque,
        3770801042
      )
    }
    {
      let _gde_name = new StringName('inverse')
      this.#_bindings.method_inverse = internal.variant_get_ptr_builtin_method(
        12,
        _gde_name.opaque,
        80860099
      )
    }
    {
      let _gde_name = new StringName('is_equal_approx')
      this.#_bindings.method_is_equal_approx = internal.variant_get_ptr_builtin_method(
        12,
        _gde_name.opaque,
        88913544
      )
    }
    {
      let _gde_name = new StringName('is_zero_approx')
      this.#_bindings.method_is_zero_approx = internal.variant_get_ptr_builtin_method(
        12,
        _gde_name.opaque,
        3918633141
      )
    }
    {
      let _gde_name = new StringName('is_finite')
      this.#_bindings.method_is_finite = internal.variant_get_ptr_builtin_method(
        12,
        _gde_name.opaque,
        3918633141
      )
    }
    {
      let _gde_name = new StringName('min')
      this.#_bindings.method_min = internal.variant_get_ptr_builtin_method(
        12,
        _gde_name.opaque,
        2031281584
      )
    }
    {
      let _gde_name = new StringName('minf')
      this.#_bindings.method_minf = internal.variant_get_ptr_builtin_method(
        12,
        _gde_name.opaque,
        3129671720
      )
    }
    {
      let _gde_name = new StringName('max')
      this.#_bindings.method_max = internal.variant_get_ptr_builtin_method(
        12,
        _gde_name.opaque,
        2031281584
      )
    }
    {
      let _gde_name = new StringName('maxf')
      this.#_bindings.method_maxf = internal.variant_get_ptr_builtin_method(
        12,
        _gde_name.opaque,
        3129671720
      )
    }
  }

  
  min_axis_index () {
    let ret
    ret = _call_builtin_method_ptr_ret(
      Vector4.#_bindings.method_min_axis_index,
      this,
      2,
      []
    )
    return ret
  }
  max_axis_index () {
    let ret
    ret = _call_builtin_method_ptr_ret(
      Vector4.#_bindings.method_max_axis_index,
      this,
      2,
      []
    )
    return ret
  }
  length () {
    let ret
    ret = _call_builtin_method_ptr_ret(
      Vector4.#_bindings.method_length,
      this,
      3,
      []
    )
    return ret
  }
  length_squared () {
    let ret
    ret = _call_builtin_method_ptr_ret(
      Vector4.#_bindings.method_length_squared,
      this,
      3,
      []
    )
    return ret
  }
  abs () {
    let ret = new Vector4()
    ret.opaque = _call_builtin_method_ptr_ret(
      Vector4.#_bindings.method_abs,
      this,
      12,
      []
    )
    return ret
  }
  sign () {
    let ret = new Vector4()
    ret.opaque = _call_builtin_method_ptr_ret(
      Vector4.#_bindings.method_sign,
      this,
      12,
      []
    )
    return ret
  }
  floor () {
    let ret = new Vector4()
    ret.opaque = _call_builtin_method_ptr_ret(
      Vector4.#_bindings.method_floor,
      this,
      12,
      []
    )
    return ret
  }
  ceil () {
    let ret = new Vector4()
    ret.opaque = _call_builtin_method_ptr_ret(
      Vector4.#_bindings.method_ceil,
      this,
      12,
      []
    )
    return ret
  }
  round () {
    let ret = new Vector4()
    ret.opaque = _call_builtin_method_ptr_ret(
      Vector4.#_bindings.method_round,
      this,
      12,
      []
    )
    return ret
  }
  lerp (_to, _weight) {
    let ret = new Vector4()
    ret.opaque = _call_builtin_method_ptr_ret(
      Vector4.#_bindings.method_lerp,
      this,
      12,
      [_to, _weight]
    )
    return ret
  }
  cubic_interpolate (_b, _pre_a, _post_b, _weight) {
    let ret = new Vector4()
    ret.opaque = _call_builtin_method_ptr_ret(
      Vector4.#_bindings.method_cubic_interpolate,
      this,
      12,
      [_b, _pre_a, _post_b, _weight]
    )
    return ret
  }
  cubic_interpolate_in_time (_b, _pre_a, _post_b, _weight, _b_t, _pre_a_t, _post_b_t) {
    let ret = new Vector4()
    ret.opaque = _call_builtin_method_ptr_ret(
      Vector4.#_bindings.method_cubic_interpolate_in_time,
      this,
      12,
      [_b, _pre_a, _post_b, _weight, _b_t, _pre_a_t, _post_b_t]
    )
    return ret
  }
  posmod (_mod) {
    let ret = new Vector4()
    ret.opaque = _call_builtin_method_ptr_ret(
      Vector4.#_bindings.method_posmod,
      this,
      12,
      [_mod]
    )
    return ret
  }
  posmodv (_modv) {
    let ret = new Vector4()
    ret.opaque = _call_builtin_method_ptr_ret(
      Vector4.#_bindings.method_posmodv,
      this,
      12,
      [_modv]
    )
    return ret
  }
  snapped (_step) {
    let ret = new Vector4()
    ret.opaque = _call_builtin_method_ptr_ret(
      Vector4.#_bindings.method_snapped,
      this,
      12,
      [_step]
    )
    return ret
  }
  snappedf (_step) {
    let ret = new Vector4()
    ret.opaque = _call_builtin_method_ptr_ret(
      Vector4.#_bindings.method_snappedf,
      this,
      12,
      [_step]
    )
    return ret
  }
  clamp (_min, _max) {
    let ret = new Vector4()
    ret.opaque = _call_builtin_method_ptr_ret(
      Vector4.#_bindings.method_clamp,
      this,
      12,
      [_min, _max]
    )
    return ret
  }
  clampf (_min, _max) {
    let ret = new Vector4()
    ret.opaque = _call_builtin_method_ptr_ret(
      Vector4.#_bindings.method_clampf,
      this,
      12,
      [_min, _max]
    )
    return ret
  }
  normalized () {
    let ret = new Vector4()
    ret.opaque = _call_builtin_method_ptr_ret(
      Vector4.#_bindings.method_normalized,
      this,
      12,
      []
    )
    return ret
  }
  is_normalized () {
    let ret
    ret = _call_builtin_method_ptr_ret(
      Vector4.#_bindings.method_is_normalized,
      this,
      1,
      []
    )
    return ret
  }
  direction_to (_to) {
    let ret = new Vector4()
    ret.opaque = _call_builtin_method_ptr_ret(
      Vector4.#_bindings.method_direction_to,
      this,
      12,
      [_to]
    )
    return ret
  }
  distance_to (_to) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      Vector4.#_bindings.method_distance_to,
      this,
      3,
      [_to]
    )
    return ret
  }
  distance_squared_to (_to) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      Vector4.#_bindings.method_distance_squared_to,
      this,
      3,
      [_to]
    )
    return ret
  }
  dot (_with) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      Vector4.#_bindings.method_dot,
      this,
      3,
      [_with]
    )
    return ret
  }
  inverse () {
    let ret = new Vector4()
    ret.opaque = _call_builtin_method_ptr_ret(
      Vector4.#_bindings.method_inverse,
      this,
      12,
      []
    )
    return ret
  }
  is_equal_approx (_to) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      Vector4.#_bindings.method_is_equal_approx,
      this,
      1,
      [_to]
    )
    return ret
  }
  is_zero_approx () {
    let ret
    ret = _call_builtin_method_ptr_ret(
      Vector4.#_bindings.method_is_zero_approx,
      this,
      1,
      []
    )
    return ret
  }
  is_finite () {
    let ret
    ret = _call_builtin_method_ptr_ret(
      Vector4.#_bindings.method_is_finite,
      this,
      1,
      []
    )
    return ret
  }
  min (_with) {
    let ret = new Vector4()
    ret.opaque = _call_builtin_method_ptr_ret(
      Vector4.#_bindings.method_min,
      this,
      12,
      [_with]
    )
    return ret
  }
  minf (_with) {
    let ret = new Vector4()
    ret.opaque = _call_builtin_method_ptr_ret(
      Vector4.#_bindings.method_minf,
      this,
      12,
      [_with]
    )
    return ret
  }
  max (_with) {
    let ret = new Vector4()
    ret.opaque = _call_builtin_method_ptr_ret(
      Vector4.#_bindings.method_max,
      this,
      12,
      [_with]
    )
    return ret
  }
  maxf (_with) {
    let ret = new Vector4()
    ret.opaque = _call_builtin_method_ptr_ret(
      Vector4.#_bindings.method_maxf,
      this,
      12,
      [_with]
    )
    return ret
  }
static {
    this._init_bindings();
  }
}