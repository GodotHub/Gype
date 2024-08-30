import * as internal from '__internal__'
import {
  _call_builtin_constructor,
  _call_builtin_method_ptr_ret,
  _call_builtin_method_ptr_no_ret
} from 'src/js_godot/core/builtin_ptrcall'
import { Variant } from 'src/js_godot/variant/variant'
import { Vector2i } from 'src/js_godot/variant/vector2i'
import { StringName } from 'src/js_godot/variant/string_name'

class _MethodBindings {
  from_variant_constructor
  constructor_0
  constructor_1
  constructor_2
  constructor_3
  method_angle
  method_angle_to
  method_angle_to_point
  method_direction_to
  method_distance_to
  method_distance_squared_to
  method_length
  method_length_squared
  method_limit_length
  method_normalized
  method_is_normalized
  method_is_equal_approx
  method_is_zero_approx
  method_is_finite
  method_posmod
  method_posmodv
  method_project
  method_lerp
  method_slerp
  method_cubic_interpolate
  method_cubic_interpolate_in_time
  method_bezier_interpolate
  method_bezier_derivative
  method_max_axis_index
  method_min_axis_index
  method_move_toward
  method_rotated
  method_orthogonal
  method_floor
  method_ceil
  method_round
  method_aspect
  method_dot
  method_slide
  method_bounce
  method_reflect
  method_cross
  method_abs
  method_sign
  method_clamp
  method_clampf
  method_snapped
  method_snappedf
  method_min
  method_minf
  method_max
  method_maxf
  method_from_angle
  operator_equal_Variant
  operator_not_equal_Variant
  operator_negate_
  operator_positive_
  operator_not_
  operator_multiply_int
  operator_divide_int
  operator_multiply_float
  operator_divide_float
  operator_equal_Vector2
  operator_not_equal_Vector2
  operator_less_Vector2
  operator_less_equal_Vector2
  operator_greater_Vector2
  operator_greater_equal_Vector2
  operator_add_Vector2
  operator_subtract_Vector2
  operator_multiply_Vector2
  operator_divide_Vector2
  operator_multiply_Transform2D
  operator_in_Dictionary
  operator_in_Array
  operator_in_PackedVector2Array
}

export class Vector2 {
  static #SIZE = 8
  opaque = new Uint8Array(Vector2.#SIZE)

  static _bindings = new _MethodBindings()

  constructor (from) {
    if (!from) {
      _call_builtin_constructor(Vector2._bindings.constructor_0, this)
    }else if (from instanceof Vector2) {
      _call_builtin_constructor(Vector2._bindings.constructor_1, this, [
        from
      ])
    }else if (from instanceof Vector2i) {
      _call_builtin_constructor(Vector2._bindings.constructor_2, this, [
        from
      ])
    } else if (arguments.length == 2&& typeof arguments[0] == "number"&& typeof arguments[1] == "number") {
      let x = arguments[0];
      let y = arguments[1];
      _call_builtin_constructor(Vector2._bindings.constructor_3, this, [
        x, y
      ])
    } else if (from instanceof Variant) {
      Vector2._bindings.from_variant_constructor(this.opaque, from.opaque)
    } 
  }
  
  static __init_bindings_constructors_destructor () {
    this._bindings.from_variant_constructor = internal.get_variant_to_type_constructor(
      Variant.Type.VECTOR2
    )
    this._bindings.constructor_0 = internal.variant_get_ptr_constructor(
      Variant.Type.VECTOR2,
      0
    )
    this._bindings.constructor_1 = internal.variant_get_ptr_constructor(
      Variant.Type.VECTOR2,
      1
    )
    this._bindings.constructor_2 = internal.variant_get_ptr_constructor(
      Variant.Type.VECTOR2,
      2
    )
    this._bindings.constructor_3 = internal.variant_get_ptr_constructor(
      Variant.Type.VECTOR2,
      3
    )
  }
  
  static _init_bindings () {
    this.__init_bindings_constructors_destructor()
    {
      let _gde_name = new StringName('angle')
      this._bindings.method_angle = internal.variant_get_ptr_builtin_method(
        Variant.Type.VECTOR2,
        _gde_name.opaque,
        466405837
      )
    }
    {
      let _gde_name = new StringName('angle_to')
      this._bindings.method_angle_to = internal.variant_get_ptr_builtin_method(
        Variant.Type.VECTOR2,
        _gde_name.opaque,
        3819070308
      )
    }
    {
      let _gde_name = new StringName('angle_to_point')
      this._bindings.method_angle_to_point = internal.variant_get_ptr_builtin_method(
        Variant.Type.VECTOR2,
        _gde_name.opaque,
        3819070308
      )
    }
    {
      let _gde_name = new StringName('direction_to')
      this._bindings.method_direction_to = internal.variant_get_ptr_builtin_method(
        Variant.Type.VECTOR2,
        _gde_name.opaque,
        2026743667
      )
    }
    {
      let _gde_name = new StringName('distance_to')
      this._bindings.method_distance_to = internal.variant_get_ptr_builtin_method(
        Variant.Type.VECTOR2,
        _gde_name.opaque,
        3819070308
      )
    }
    {
      let _gde_name = new StringName('distance_squared_to')
      this._bindings.method_distance_squared_to = internal.variant_get_ptr_builtin_method(
        Variant.Type.VECTOR2,
        _gde_name.opaque,
        3819070308
      )
    }
    {
      let _gde_name = new StringName('length')
      this._bindings.method_length = internal.variant_get_ptr_builtin_method(
        Variant.Type.VECTOR2,
        _gde_name.opaque,
        466405837
      )
    }
    {
      let _gde_name = new StringName('length_squared')
      this._bindings.method_length_squared = internal.variant_get_ptr_builtin_method(
        Variant.Type.VECTOR2,
        _gde_name.opaque,
        466405837
      )
    }
    {
      let _gde_name = new StringName('limit_length')
      this._bindings.method_limit_length = internal.variant_get_ptr_builtin_method(
        Variant.Type.VECTOR2,
        _gde_name.opaque,
        2544004089
      )
    }
    {
      let _gde_name = new StringName('normalized')
      this._bindings.method_normalized = internal.variant_get_ptr_builtin_method(
        Variant.Type.VECTOR2,
        _gde_name.opaque,
        2428350749
      )
    }
    {
      let _gde_name = new StringName('is_normalized')
      this._bindings.method_is_normalized = internal.variant_get_ptr_builtin_method(
        Variant.Type.VECTOR2,
        _gde_name.opaque,
        3918633141
      )
    }
    {
      let _gde_name = new StringName('is_equal_approx')
      this._bindings.method_is_equal_approx = internal.variant_get_ptr_builtin_method(
        Variant.Type.VECTOR2,
        _gde_name.opaque,
        3190634762
      )
    }
    {
      let _gde_name = new StringName('is_zero_approx')
      this._bindings.method_is_zero_approx = internal.variant_get_ptr_builtin_method(
        Variant.Type.VECTOR2,
        _gde_name.opaque,
        3918633141
      )
    }
    {
      let _gde_name = new StringName('is_finite')
      this._bindings.method_is_finite = internal.variant_get_ptr_builtin_method(
        Variant.Type.VECTOR2,
        _gde_name.opaque,
        3918633141
      )
    }
    {
      let _gde_name = new StringName('posmod')
      this._bindings.method_posmod = internal.variant_get_ptr_builtin_method(
        Variant.Type.VECTOR2,
        _gde_name.opaque,
        2544004089
      )
    }
    {
      let _gde_name = new StringName('posmodv')
      this._bindings.method_posmodv = internal.variant_get_ptr_builtin_method(
        Variant.Type.VECTOR2,
        _gde_name.opaque,
        2026743667
      )
    }
    {
      let _gde_name = new StringName('project')
      this._bindings.method_project = internal.variant_get_ptr_builtin_method(
        Variant.Type.VECTOR2,
        _gde_name.opaque,
        2026743667
      )
    }
    {
      let _gde_name = new StringName('lerp')
      this._bindings.method_lerp = internal.variant_get_ptr_builtin_method(
        Variant.Type.VECTOR2,
        _gde_name.opaque,
        4250033116
      )
    }
    {
      let _gde_name = new StringName('slerp')
      this._bindings.method_slerp = internal.variant_get_ptr_builtin_method(
        Variant.Type.VECTOR2,
        _gde_name.opaque,
        4250033116
      )
    }
    {
      let _gde_name = new StringName('cubic_interpolate')
      this._bindings.method_cubic_interpolate = internal.variant_get_ptr_builtin_method(
        Variant.Type.VECTOR2,
        _gde_name.opaque,
        193522989
      )
    }
    {
      let _gde_name = new StringName('cubic_interpolate_in_time')
      this._bindings.method_cubic_interpolate_in_time = internal.variant_get_ptr_builtin_method(
        Variant.Type.VECTOR2,
        _gde_name.opaque,
        1957055074
      )
    }
    {
      let _gde_name = new StringName('bezier_interpolate')
      this._bindings.method_bezier_interpolate = internal.variant_get_ptr_builtin_method(
        Variant.Type.VECTOR2,
        _gde_name.opaque,
        193522989
      )
    }
    {
      let _gde_name = new StringName('bezier_derivative')
      this._bindings.method_bezier_derivative = internal.variant_get_ptr_builtin_method(
        Variant.Type.VECTOR2,
        _gde_name.opaque,
        193522989
      )
    }
    {
      let _gde_name = new StringName('max_axis_index')
      this._bindings.method_max_axis_index = internal.variant_get_ptr_builtin_method(
        Variant.Type.VECTOR2,
        _gde_name.opaque,
        3173160232
      )
    }
    {
      let _gde_name = new StringName('min_axis_index')
      this._bindings.method_min_axis_index = internal.variant_get_ptr_builtin_method(
        Variant.Type.VECTOR2,
        _gde_name.opaque,
        3173160232
      )
    }
    {
      let _gde_name = new StringName('move_toward')
      this._bindings.method_move_toward = internal.variant_get_ptr_builtin_method(
        Variant.Type.VECTOR2,
        _gde_name.opaque,
        4250033116
      )
    }
    {
      let _gde_name = new StringName('rotated')
      this._bindings.method_rotated = internal.variant_get_ptr_builtin_method(
        Variant.Type.VECTOR2,
        _gde_name.opaque,
        2544004089
      )
    }
    {
      let _gde_name = new StringName('orthogonal')
      this._bindings.method_orthogonal = internal.variant_get_ptr_builtin_method(
        Variant.Type.VECTOR2,
        _gde_name.opaque,
        2428350749
      )
    }
    {
      let _gde_name = new StringName('floor')
      this._bindings.method_floor = internal.variant_get_ptr_builtin_method(
        Variant.Type.VECTOR2,
        _gde_name.opaque,
        2428350749
      )
    }
    {
      let _gde_name = new StringName('ceil')
      this._bindings.method_ceil = internal.variant_get_ptr_builtin_method(
        Variant.Type.VECTOR2,
        _gde_name.opaque,
        2428350749
      )
    }
    {
      let _gde_name = new StringName('round')
      this._bindings.method_round = internal.variant_get_ptr_builtin_method(
        Variant.Type.VECTOR2,
        _gde_name.opaque,
        2428350749
      )
    }
    {
      let _gde_name = new StringName('aspect')
      this._bindings.method_aspect = internal.variant_get_ptr_builtin_method(
        Variant.Type.VECTOR2,
        _gde_name.opaque,
        466405837
      )
    }
    {
      let _gde_name = new StringName('dot')
      this._bindings.method_dot = internal.variant_get_ptr_builtin_method(
        Variant.Type.VECTOR2,
        _gde_name.opaque,
        3819070308
      )
    }
    {
      let _gde_name = new StringName('slide')
      this._bindings.method_slide = internal.variant_get_ptr_builtin_method(
        Variant.Type.VECTOR2,
        _gde_name.opaque,
        2026743667
      )
    }
    {
      let _gde_name = new StringName('bounce')
      this._bindings.method_bounce = internal.variant_get_ptr_builtin_method(
        Variant.Type.VECTOR2,
        _gde_name.opaque,
        2026743667
      )
    }
    {
      let _gde_name = new StringName('reflect')
      this._bindings.method_reflect = internal.variant_get_ptr_builtin_method(
        Variant.Type.VECTOR2,
        _gde_name.opaque,
        2026743667
      )
    }
    {
      let _gde_name = new StringName('cross')
      this._bindings.method_cross = internal.variant_get_ptr_builtin_method(
        Variant.Type.VECTOR2,
        _gde_name.opaque,
        3819070308
      )
    }
    {
      let _gde_name = new StringName('abs')
      this._bindings.method_abs = internal.variant_get_ptr_builtin_method(
        Variant.Type.VECTOR2,
        _gde_name.opaque,
        2428350749
      )
    }
    {
      let _gde_name = new StringName('sign')
      this._bindings.method_sign = internal.variant_get_ptr_builtin_method(
        Variant.Type.VECTOR2,
        _gde_name.opaque,
        2428350749
      )
    }
    {
      let _gde_name = new StringName('clamp')
      this._bindings.method_clamp = internal.variant_get_ptr_builtin_method(
        Variant.Type.VECTOR2,
        _gde_name.opaque,
        318031021
      )
    }
    {
      let _gde_name = new StringName('clampf')
      this._bindings.method_clampf = internal.variant_get_ptr_builtin_method(
        Variant.Type.VECTOR2,
        _gde_name.opaque,
        3464402636
      )
    }
    {
      let _gde_name = new StringName('snapped')
      this._bindings.method_snapped = internal.variant_get_ptr_builtin_method(
        Variant.Type.VECTOR2,
        _gde_name.opaque,
        2026743667
      )
    }
    {
      let _gde_name = new StringName('snappedf')
      this._bindings.method_snappedf = internal.variant_get_ptr_builtin_method(
        Variant.Type.VECTOR2,
        _gde_name.opaque,
        2544004089
      )
    }
    {
      let _gde_name = new StringName('min')
      this._bindings.method_min = internal.variant_get_ptr_builtin_method(
        Variant.Type.VECTOR2,
        _gde_name.opaque,
        2026743667
      )
    }
    {
      let _gde_name = new StringName('minf')
      this._bindings.method_minf = internal.variant_get_ptr_builtin_method(
        Variant.Type.VECTOR2,
        _gde_name.opaque,
        2544004089
      )
    }
    {
      let _gde_name = new StringName('max')
      this._bindings.method_max = internal.variant_get_ptr_builtin_method(
        Variant.Type.VECTOR2,
        _gde_name.opaque,
        2026743667
      )
    }
    {
      let _gde_name = new StringName('maxf')
      this._bindings.method_maxf = internal.variant_get_ptr_builtin_method(
        Variant.Type.VECTOR2,
        _gde_name.opaque,
        2544004089
      )
    }
    {
      let _gde_name = new StringName('from_angle')
      this._bindings.method_from_angle = internal.variant_get_ptr_builtin_method(
        Variant.Type.VECTOR2,
        _gde_name.opaque,
        889263119
      )
    }
  }

  
  angle () {
    let ret
    ret = _call_builtin_method_ptr_ret(
      Vector2._bindings.method_angle,
      this,
      Variant.Type.FLOAT,
      []
    )
    return ret
  }
  angle_to (_to) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      Vector2._bindings.method_angle_to,
      this,
      Variant.Type.FLOAT,
      [_to]
    )
    return ret
  }
  angle_to_point (_to) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      Vector2._bindings.method_angle_to_point,
      this,
      Variant.Type.FLOAT,
      [_to]
    )
    return ret
  }
  direction_to (_to) {
    let ret = new Vector2()
    ret.opaque = _call_builtin_method_ptr_ret(
      Vector2._bindings.method_direction_to,
      this,
      Variant.Type.VECTOR2,
      [_to]
    )
    return ret
  }
  distance_to (_to) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      Vector2._bindings.method_distance_to,
      this,
      Variant.Type.FLOAT,
      [_to]
    )
    return ret
  }
  distance_squared_to (_to) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      Vector2._bindings.method_distance_squared_to,
      this,
      Variant.Type.FLOAT,
      [_to]
    )
    return ret
  }
  length () {
    let ret
    ret = _call_builtin_method_ptr_ret(
      Vector2._bindings.method_length,
      this,
      Variant.Type.FLOAT,
      []
    )
    return ret
  }
  length_squared () {
    let ret
    ret = _call_builtin_method_ptr_ret(
      Vector2._bindings.method_length_squared,
      this,
      Variant.Type.FLOAT,
      []
    )
    return ret
  }
  limit_length (_length) {
    let ret = new Vector2()
    ret.opaque = _call_builtin_method_ptr_ret(
      Vector2._bindings.method_limit_length,
      this,
      Variant.Type.VECTOR2,
      [_length]
    )
    return ret
  }
  normalized () {
    let ret = new Vector2()
    ret.opaque = _call_builtin_method_ptr_ret(
      Vector2._bindings.method_normalized,
      this,
      Variant.Type.VECTOR2,
      []
    )
    return ret
  }
  is_normalized () {
    let ret
    ret = _call_builtin_method_ptr_ret(
      Vector2._bindings.method_is_normalized,
      this,
      Variant.Type.BOOL,
      []
    )
    return ret
  }
  is_equal_approx (_to) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      Vector2._bindings.method_is_equal_approx,
      this,
      Variant.Type.BOOL,
      [_to]
    )
    return ret
  }
  is_zero_approx () {
    let ret
    ret = _call_builtin_method_ptr_ret(
      Vector2._bindings.method_is_zero_approx,
      this,
      Variant.Type.BOOL,
      []
    )
    return ret
  }
  is_finite () {
    let ret
    ret = _call_builtin_method_ptr_ret(
      Vector2._bindings.method_is_finite,
      this,
      Variant.Type.BOOL,
      []
    )
    return ret
  }
  posmod (_mod) {
    let ret = new Vector2()
    ret.opaque = _call_builtin_method_ptr_ret(
      Vector2._bindings.method_posmod,
      this,
      Variant.Type.VECTOR2,
      [_mod]
    )
    return ret
  }
  posmodv (_modv) {
    let ret = new Vector2()
    ret.opaque = _call_builtin_method_ptr_ret(
      Vector2._bindings.method_posmodv,
      this,
      Variant.Type.VECTOR2,
      [_modv]
    )
    return ret
  }
  project (_b) {
    let ret = new Vector2()
    ret.opaque = _call_builtin_method_ptr_ret(
      Vector2._bindings.method_project,
      this,
      Variant.Type.VECTOR2,
      [_b]
    )
    return ret
  }
  lerp (_to, _weight) {
    let ret = new Vector2()
    ret.opaque = _call_builtin_method_ptr_ret(
      Vector2._bindings.method_lerp,
      this,
      Variant.Type.VECTOR2,
      [_to, _weight]
    )
    return ret
  }
  slerp (_to, _weight) {
    let ret = new Vector2()
    ret.opaque = _call_builtin_method_ptr_ret(
      Vector2._bindings.method_slerp,
      this,
      Variant.Type.VECTOR2,
      [_to, _weight]
    )
    return ret
  }
  cubic_interpolate (_b, _pre_a, _post_b, _weight) {
    let ret = new Vector2()
    ret.opaque = _call_builtin_method_ptr_ret(
      Vector2._bindings.method_cubic_interpolate,
      this,
      Variant.Type.VECTOR2,
      [_b, _pre_a, _post_b, _weight]
    )
    return ret
  }
  cubic_interpolate_in_time (_b, _pre_a, _post_b, _weight, _b_t, _pre_a_t, _post_b_t) {
    let ret = new Vector2()
    ret.opaque = _call_builtin_method_ptr_ret(
      Vector2._bindings.method_cubic_interpolate_in_time,
      this,
      Variant.Type.VECTOR2,
      [_b, _pre_a, _post_b, _weight, _b_t, _pre_a_t, _post_b_t]
    )
    return ret
  }
  bezier_interpolate (_control_1, _control_2, _end, _t) {
    let ret = new Vector2()
    ret.opaque = _call_builtin_method_ptr_ret(
      Vector2._bindings.method_bezier_interpolate,
      this,
      Variant.Type.VECTOR2,
      [_control_1, _control_2, _end, _t]
    )
    return ret
  }
  bezier_derivative (_control_1, _control_2, _end, _t) {
    let ret = new Vector2()
    ret.opaque = _call_builtin_method_ptr_ret(
      Vector2._bindings.method_bezier_derivative,
      this,
      Variant.Type.VECTOR2,
      [_control_1, _control_2, _end, _t]
    )
    return ret
  }
  max_axis_index () {
    let ret
    ret = _call_builtin_method_ptr_ret(
      Vector2._bindings.method_max_axis_index,
      this,
      Variant.Type.INT,
      []
    )
    return ret
  }
  min_axis_index () {
    let ret
    ret = _call_builtin_method_ptr_ret(
      Vector2._bindings.method_min_axis_index,
      this,
      Variant.Type.INT,
      []
    )
    return ret
  }
  move_toward (_to, _delta) {
    let ret = new Vector2()
    ret.opaque = _call_builtin_method_ptr_ret(
      Vector2._bindings.method_move_toward,
      this,
      Variant.Type.VECTOR2,
      [_to, _delta]
    )
    return ret
  }
  rotated (_angle) {
    let ret = new Vector2()
    ret.opaque = _call_builtin_method_ptr_ret(
      Vector2._bindings.method_rotated,
      this,
      Variant.Type.VECTOR2,
      [_angle]
    )
    return ret
  }
  orthogonal () {
    let ret = new Vector2()
    ret.opaque = _call_builtin_method_ptr_ret(
      Vector2._bindings.method_orthogonal,
      this,
      Variant.Type.VECTOR2,
      []
    )
    return ret
  }
  floor () {
    let ret = new Vector2()
    ret.opaque = _call_builtin_method_ptr_ret(
      Vector2._bindings.method_floor,
      this,
      Variant.Type.VECTOR2,
      []
    )
    return ret
  }
  ceil () {
    let ret = new Vector2()
    ret.opaque = _call_builtin_method_ptr_ret(
      Vector2._bindings.method_ceil,
      this,
      Variant.Type.VECTOR2,
      []
    )
    return ret
  }
  round () {
    let ret = new Vector2()
    ret.opaque = _call_builtin_method_ptr_ret(
      Vector2._bindings.method_round,
      this,
      Variant.Type.VECTOR2,
      []
    )
    return ret
  }
  aspect () {
    let ret
    ret = _call_builtin_method_ptr_ret(
      Vector2._bindings.method_aspect,
      this,
      Variant.Type.FLOAT,
      []
    )
    return ret
  }
  dot (_with) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      Vector2._bindings.method_dot,
      this,
      Variant.Type.FLOAT,
      [_with]
    )
    return ret
  }
  slide (_n) {
    let ret = new Vector2()
    ret.opaque = _call_builtin_method_ptr_ret(
      Vector2._bindings.method_slide,
      this,
      Variant.Type.VECTOR2,
      [_n]
    )
    return ret
  }
  bounce (_n) {
    let ret = new Vector2()
    ret.opaque = _call_builtin_method_ptr_ret(
      Vector2._bindings.method_bounce,
      this,
      Variant.Type.VECTOR2,
      [_n]
    )
    return ret
  }
  reflect (_line) {
    let ret = new Vector2()
    ret.opaque = _call_builtin_method_ptr_ret(
      Vector2._bindings.method_reflect,
      this,
      Variant.Type.VECTOR2,
      [_line]
    )
    return ret
  }
  cross (_with) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      Vector2._bindings.method_cross,
      this,
      Variant.Type.FLOAT,
      [_with]
    )
    return ret
  }
  abs () {
    let ret = new Vector2()
    ret.opaque = _call_builtin_method_ptr_ret(
      Vector2._bindings.method_abs,
      this,
      Variant.Type.VECTOR2,
      []
    )
    return ret
  }
  sign () {
    let ret = new Vector2()
    ret.opaque = _call_builtin_method_ptr_ret(
      Vector2._bindings.method_sign,
      this,
      Variant.Type.VECTOR2,
      []
    )
    return ret
  }
  clamp (_min, _max) {
    let ret = new Vector2()
    ret.opaque = _call_builtin_method_ptr_ret(
      Vector2._bindings.method_clamp,
      this,
      Variant.Type.VECTOR2,
      [_min, _max]
    )
    return ret
  }
  clampf (_min, _max) {
    let ret = new Vector2()
    ret.opaque = _call_builtin_method_ptr_ret(
      Vector2._bindings.method_clampf,
      this,
      Variant.Type.VECTOR2,
      [_min, _max]
    )
    return ret
  }
  snapped (_step) {
    let ret = new Vector2()
    ret.opaque = _call_builtin_method_ptr_ret(
      Vector2._bindings.method_snapped,
      this,
      Variant.Type.VECTOR2,
      [_step]
    )
    return ret
  }
  snappedf (_step) {
    let ret = new Vector2()
    ret.opaque = _call_builtin_method_ptr_ret(
      Vector2._bindings.method_snappedf,
      this,
      Variant.Type.VECTOR2,
      [_step]
    )
    return ret
  }
  min (_with) {
    let ret = new Vector2()
    ret.opaque = _call_builtin_method_ptr_ret(
      Vector2._bindings.method_min,
      this,
      Variant.Type.VECTOR2,
      [_with]
    )
    return ret
  }
  minf (_with) {
    let ret = new Vector2()
    ret.opaque = _call_builtin_method_ptr_ret(
      Vector2._bindings.method_minf,
      this,
      Variant.Type.VECTOR2,
      [_with]
    )
    return ret
  }
  max (_with) {
    let ret = new Vector2()
    ret.opaque = _call_builtin_method_ptr_ret(
      Vector2._bindings.method_max,
      this,
      Variant.Type.VECTOR2,
      [_with]
    )
    return ret
  }
  maxf (_with) {
    let ret = new Vector2()
    ret.opaque = _call_builtin_method_ptr_ret(
      Vector2._bindings.method_maxf,
      this,
      Variant.Type.VECTOR2,
      [_with]
    )
    return ret
  }
  from_angle (_angle) {
    let ret = new Vector2()
    ret.opaque = _call_builtin_method_ptr_ret(
      Vector2._bindings.method_from_angle,
      this,
      Variant.Type.VECTOR2,
      [_angle]
    )
    return ret
  }
}