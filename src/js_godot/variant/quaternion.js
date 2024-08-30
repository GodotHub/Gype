import * as internal from '__internal__'
import {
  _call_builtin_constructor,
  _call_builtin_method_ptr_ret,
  _call_builtin_method_ptr_no_ret
} from 'src/js_godot/core/builtin_ptrcall'
import { StringName } from 'src/js_godot/variant/string_name'
import { Vector3 } from 'src/js_godot/variant/vector3'
import { Basis } from 'src/js_godot/variant/basis'
import { Variant } from 'src/js_godot/variant/variant'

class _MethodBindings {
  from_variant_constructor
  constructor_0
  constructor_1
  constructor_2
  constructor_3
  constructor_4
  constructor_5
  method_length
  method_length_squared
  method_normalized
  method_is_normalized
  method_is_equal_approx
  method_is_finite
  method_inverse
  method_log
  method_exp
  method_angle_to
  method_dot
  method_slerp
  method_slerpni
  method_spherical_cubic_interpolate
  method_spherical_cubic_interpolate_in_time
  method_get_euler
  method_from_euler
  method_get_axis
  method_get_angle
  operator_equal_Variant
  operator_not_equal_Variant
  operator_negate_
  operator_positive_
  operator_not_
  operator_multiply_int
  operator_divide_int
  operator_multiply_float
  operator_divide_float
  operator_multiply_Vector3
  operator_equal_Quaternion
  operator_not_equal_Quaternion
  operator_add_Quaternion
  operator_subtract_Quaternion
  operator_multiply_Quaternion
  operator_in_Dictionary
  operator_in_Array
}

export class Quaternion {
  static #SIZE = 16
  opaque = new Uint8Array(Quaternion.#SIZE)

  static _bindings = new _MethodBindings()

  constructor (from) {
    if (!from) {
      _call_builtin_constructor(Quaternion._bindings.constructor_0, this)
    }else if (from instanceof Quaternion) {
      _call_builtin_constructor(Quaternion._bindings.constructor_1, this, [
        from
      ])
    }else if (from instanceof Basis) {
      _call_builtin_constructor(Quaternion._bindings.constructor_2, this, [
        from
      ])
    } else if (arguments.length == 2&& arguments[0] instanceof Vector3&& typeof arguments[1] == "number") {
      let axis = arguments[0];
      let angle = arguments[1];
      _call_builtin_constructor(Quaternion._bindings.constructor_3, this, [
        axis, angle
      ])
    } else if (arguments.length == 2&& arguments[0] instanceof Vector3&& arguments[1] instanceof Vector3) {
      let arc_from = arguments[0];
      let arc_to = arguments[1];
      _call_builtin_constructor(Quaternion._bindings.constructor_4, this, [
        arc_from, arc_to
      ])
    } else if (arguments.length == 4&& typeof arguments[0] == "number"&& typeof arguments[1] == "number"&& typeof arguments[2] == "number"&& typeof arguments[3] == "number") {
      let x = arguments[0];
      let y = arguments[1];
      let z = arguments[2];
      let w = arguments[3];
      _call_builtin_constructor(Quaternion._bindings.constructor_5, this, [
        x, y, z, w
      ])
    } else if (from instanceof Variant) {
      Quaternion._bindings.from_variant_constructor(this.opaque, from.opaque)
    } 
  }
  
  static __init_bindings_constructors_destructor () {
    this._bindings.from_variant_constructor = internal.get_variant_to_type_constructor(
      Variant.Type.QUATERNION
    )
    this._bindings.constructor_0 = internal.variant_get_ptr_constructor(
      Variant.Type.QUATERNION,
      0
    )
    this._bindings.constructor_1 = internal.variant_get_ptr_constructor(
      Variant.Type.QUATERNION,
      1
    )
    this._bindings.constructor_2 = internal.variant_get_ptr_constructor(
      Variant.Type.QUATERNION,
      2
    )
    this._bindings.constructor_3 = internal.variant_get_ptr_constructor(
      Variant.Type.QUATERNION,
      3
    )
    this._bindings.constructor_4 = internal.variant_get_ptr_constructor(
      Variant.Type.QUATERNION,
      4
    )
    this._bindings.constructor_5 = internal.variant_get_ptr_constructor(
      Variant.Type.QUATERNION,
      5
    )
  }
  
  static _init_bindings () {
    this.__init_bindings_constructors_destructor()
    {
      let _gde_name = new StringName('length')
      this._bindings.method_length = internal.variant_get_ptr_builtin_method(
        Variant.Type.QUATERNION,
        _gde_name.opaque,
        466405837
      )
    }
    {
      let _gde_name = new StringName('length_squared')
      this._bindings.method_length_squared = internal.variant_get_ptr_builtin_method(
        Variant.Type.QUATERNION,
        _gde_name.opaque,
        466405837
      )
    }
    {
      let _gde_name = new StringName('normalized')
      this._bindings.method_normalized = internal.variant_get_ptr_builtin_method(
        Variant.Type.QUATERNION,
        _gde_name.opaque,
        4274879941
      )
    }
    {
      let _gde_name = new StringName('is_normalized')
      this._bindings.method_is_normalized = internal.variant_get_ptr_builtin_method(
        Variant.Type.QUATERNION,
        _gde_name.opaque,
        3918633141
      )
    }
    {
      let _gde_name = new StringName('is_equal_approx')
      this._bindings.method_is_equal_approx = internal.variant_get_ptr_builtin_method(
        Variant.Type.QUATERNION,
        _gde_name.opaque,
        1682156903
      )
    }
    {
      let _gde_name = new StringName('is_finite')
      this._bindings.method_is_finite = internal.variant_get_ptr_builtin_method(
        Variant.Type.QUATERNION,
        _gde_name.opaque,
        3918633141
      )
    }
    {
      let _gde_name = new StringName('inverse')
      this._bindings.method_inverse = internal.variant_get_ptr_builtin_method(
        Variant.Type.QUATERNION,
        _gde_name.opaque,
        4274879941
      )
    }
    {
      let _gde_name = new StringName('log')
      this._bindings.method_log = internal.variant_get_ptr_builtin_method(
        Variant.Type.QUATERNION,
        _gde_name.opaque,
        4274879941
      )
    }
    {
      let _gde_name = new StringName('exp')
      this._bindings.method_exp = internal.variant_get_ptr_builtin_method(
        Variant.Type.QUATERNION,
        _gde_name.opaque,
        4274879941
      )
    }
    {
      let _gde_name = new StringName('angle_to')
      this._bindings.method_angle_to = internal.variant_get_ptr_builtin_method(
        Variant.Type.QUATERNION,
        _gde_name.opaque,
        3244682419
      )
    }
    {
      let _gde_name = new StringName('dot')
      this._bindings.method_dot = internal.variant_get_ptr_builtin_method(
        Variant.Type.QUATERNION,
        _gde_name.opaque,
        3244682419
      )
    }
    {
      let _gde_name = new StringName('slerp')
      this._bindings.method_slerp = internal.variant_get_ptr_builtin_method(
        Variant.Type.QUATERNION,
        _gde_name.opaque,
        1773590316
      )
    }
    {
      let _gde_name = new StringName('slerpni')
      this._bindings.method_slerpni = internal.variant_get_ptr_builtin_method(
        Variant.Type.QUATERNION,
        _gde_name.opaque,
        1773590316
      )
    }
    {
      let _gde_name = new StringName('spherical_cubic_interpolate')
      this._bindings.method_spherical_cubic_interpolate = internal.variant_get_ptr_builtin_method(
        Variant.Type.QUATERNION,
        _gde_name.opaque,
        2150967576
      )
    }
    {
      let _gde_name = new StringName('spherical_cubic_interpolate_in_time')
      this._bindings.method_spherical_cubic_interpolate_in_time = internal.variant_get_ptr_builtin_method(
        Variant.Type.QUATERNION,
        _gde_name.opaque,
        1436023539
      )
    }
    {
      let _gde_name = new StringName('get_euler')
      this._bindings.method_get_euler = internal.variant_get_ptr_builtin_method(
        Variant.Type.QUATERNION,
        _gde_name.opaque,
        1394941017
      )
    }
    {
      let _gde_name = new StringName('from_euler')
      this._bindings.method_from_euler = internal.variant_get_ptr_builtin_method(
        Variant.Type.QUATERNION,
        _gde_name.opaque,
        4053467903
      )
    }
    {
      let _gde_name = new StringName('get_axis')
      this._bindings.method_get_axis = internal.variant_get_ptr_builtin_method(
        Variant.Type.QUATERNION,
        _gde_name.opaque,
        1776574132
      )
    }
    {
      let _gde_name = new StringName('get_angle')
      this._bindings.method_get_angle = internal.variant_get_ptr_builtin_method(
        Variant.Type.QUATERNION,
        _gde_name.opaque,
        466405837
      )
    }
  }

  
  length () {
    let ret
    ret = _call_builtin_method_ptr_ret(
      Quaternion._bindings.method_length,
      this,
      Variant.Type.FLOAT,
      []
    )
    return ret
  }
  length_squared () {
    let ret
    ret = _call_builtin_method_ptr_ret(
      Quaternion._bindings.method_length_squared,
      this,
      Variant.Type.FLOAT,
      []
    )
    return ret
  }
  normalized () {
    let ret = new Quaternion()
    ret.opaque = _call_builtin_method_ptr_ret(
      Quaternion._bindings.method_normalized,
      this,
      Variant.Type.QUATERNION,
      []
    )
    return ret
  }
  is_normalized () {
    let ret
    ret = _call_builtin_method_ptr_ret(
      Quaternion._bindings.method_is_normalized,
      this,
      Variant.Type.BOOL,
      []
    )
    return ret
  }
  is_equal_approx (_to) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      Quaternion._bindings.method_is_equal_approx,
      this,
      Variant.Type.BOOL,
      [_to]
    )
    return ret
  }
  is_finite () {
    let ret
    ret = _call_builtin_method_ptr_ret(
      Quaternion._bindings.method_is_finite,
      this,
      Variant.Type.BOOL,
      []
    )
    return ret
  }
  inverse () {
    let ret = new Quaternion()
    ret.opaque = _call_builtin_method_ptr_ret(
      Quaternion._bindings.method_inverse,
      this,
      Variant.Type.QUATERNION,
      []
    )
    return ret
  }
  log () {
    let ret = new Quaternion()
    ret.opaque = _call_builtin_method_ptr_ret(
      Quaternion._bindings.method_log,
      this,
      Variant.Type.QUATERNION,
      []
    )
    return ret
  }
  exp () {
    let ret = new Quaternion()
    ret.opaque = _call_builtin_method_ptr_ret(
      Quaternion._bindings.method_exp,
      this,
      Variant.Type.QUATERNION,
      []
    )
    return ret
  }
  angle_to (_to) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      Quaternion._bindings.method_angle_to,
      this,
      Variant.Type.FLOAT,
      [_to]
    )
    return ret
  }
  dot (_with) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      Quaternion._bindings.method_dot,
      this,
      Variant.Type.FLOAT,
      [_with]
    )
    return ret
  }
  slerp (_to, _weight) {
    let ret = new Quaternion()
    ret.opaque = _call_builtin_method_ptr_ret(
      Quaternion._bindings.method_slerp,
      this,
      Variant.Type.QUATERNION,
      [_to, _weight]
    )
    return ret
  }
  slerpni (_to, _weight) {
    let ret = new Quaternion()
    ret.opaque = _call_builtin_method_ptr_ret(
      Quaternion._bindings.method_slerpni,
      this,
      Variant.Type.QUATERNION,
      [_to, _weight]
    )
    return ret
  }
  spherical_cubic_interpolate (_b, _pre_a, _post_b, _weight) {
    let ret = new Quaternion()
    ret.opaque = _call_builtin_method_ptr_ret(
      Quaternion._bindings.method_spherical_cubic_interpolate,
      this,
      Variant.Type.QUATERNION,
      [_b, _pre_a, _post_b, _weight]
    )
    return ret
  }
  spherical_cubic_interpolate_in_time (_b, _pre_a, _post_b, _weight, _b_t, _pre_a_t, _post_b_t) {
    let ret = new Quaternion()
    ret.opaque = _call_builtin_method_ptr_ret(
      Quaternion._bindings.method_spherical_cubic_interpolate_in_time,
      this,
      Variant.Type.QUATERNION,
      [_b, _pre_a, _post_b, _weight, _b_t, _pre_a_t, _post_b_t]
    )
    return ret
  }
  get_euler (_order) {
    let ret = new Vector3()
    ret.opaque = _call_builtin_method_ptr_ret(
      Quaternion._bindings.method_get_euler,
      this,
      Variant.Type.VECTOR3,
      [_order]
    )
    return ret
  }
  from_euler (_euler) {
    let ret = new Quaternion()
    ret.opaque = _call_builtin_method_ptr_ret(
      Quaternion._bindings.method_from_euler,
      this,
      Variant.Type.QUATERNION,
      [_euler]
    )
    return ret
  }
  get_axis () {
    let ret = new Vector3()
    ret.opaque = _call_builtin_method_ptr_ret(
      Quaternion._bindings.method_get_axis,
      this,
      Variant.Type.VECTOR3,
      []
    )
    return ret
  }
  get_angle () {
    let ret
    ret = _call_builtin_method_ptr_ret(
      Quaternion._bindings.method_get_angle,
      this,
      Variant.Type.FLOAT,
      []
    )
    return ret
  }
}