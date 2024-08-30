import * as internal from '__internal__'
import {
  _call_builtin_constructor,
  _call_builtin_method_ptr_ret,
  _call_builtin_method_ptr_no_ret
} from 'src/js_godot/core/builtin_ptrcall'
import { Quaternion } from 'src/js_godot/variant/quaternion'
import { StringName } from 'src/js_godot/variant/string_name'
import { Vector3 } from 'src/js_godot/variant/vector3'
import { Variant } from 'src/js_godot/variant/variant'

class _MethodBindings {
  from_variant_constructor
  constructor_0
  constructor_1
  constructor_2
  constructor_3
  constructor_4
  method_inverse
  method_transposed
  method_orthonormalized
  method_determinant
  method_rotated
  method_scaled
  method_get_scale
  method_get_euler
  method_tdotx
  method_tdoty
  method_tdotz
  method_slerp
  method_is_conformal
  method_is_equal_approx
  method_is_finite
  method_get_rotation_quaternion
  method_looking_at
  method_from_scale
  method_from_euler
  operator_equal_Variant
  operator_not_equal_Variant
  operator_not_
  operator_multiply_int
  operator_divide_int
  operator_multiply_float
  operator_divide_float
  operator_multiply_Vector3
  operator_equal_Basis
  operator_not_equal_Basis
  operator_multiply_Basis
  operator_in_Dictionary
  operator_in_Array
}

export class Basis {
  static #SIZE = 36
  opaque = new Uint8Array(Basis.#SIZE)

  static _bindings = new _MethodBindings()

  constructor (from) {
    if (!from) {
      _call_builtin_constructor(Basis._bindings.constructor_0, this)
    }else if (from instanceof Basis) {
      _call_builtin_constructor(Basis._bindings.constructor_1, this, [
        from
      ])
    }else if (from instanceof Quaternion) {
      _call_builtin_constructor(Basis._bindings.constructor_2, this, [
        from
      ])
    } else if (arguments.length == 2&& arguments[0] instanceof Vector3&& typeof arguments[1] == "number") {
      let axis = arguments[0];
      let angle = arguments[1];
      _call_builtin_constructor(Basis._bindings.constructor_3, this, [
        axis, angle
      ])
    } else if (arguments.length == 3&& arguments[0] instanceof Vector3&& arguments[1] instanceof Vector3&& arguments[2] instanceof Vector3) {
      let x_axis = arguments[0];
      let y_axis = arguments[1];
      let z_axis = arguments[2];
      _call_builtin_constructor(Basis._bindings.constructor_4, this, [
        x_axis, y_axis, z_axis
      ])
    } else if (from instanceof Variant) {
      Basis._bindings.from_variant_constructor(this.opaque, from.opaque)
    } 
  }
  
  static __init_bindings_constructors_destructor () {
    this._bindings.from_variant_constructor = internal.get_variant_to_type_constructor(
      Variant.Type.BASIS
    )
    this._bindings.constructor_0 = internal.variant_get_ptr_constructor(
      Variant.Type.BASIS,
      0
    )
    this._bindings.constructor_1 = internal.variant_get_ptr_constructor(
      Variant.Type.BASIS,
      1
    )
    this._bindings.constructor_2 = internal.variant_get_ptr_constructor(
      Variant.Type.BASIS,
      2
    )
    this._bindings.constructor_3 = internal.variant_get_ptr_constructor(
      Variant.Type.BASIS,
      3
    )
    this._bindings.constructor_4 = internal.variant_get_ptr_constructor(
      Variant.Type.BASIS,
      4
    )
  }
  
  static _init_bindings () {
    this.__init_bindings_constructors_destructor()
    {
      let _gde_name = new StringName('inverse')
      this._bindings.method_inverse = internal.variant_get_ptr_builtin_method(
        Variant.Type.BASIS,
        _gde_name.opaque,
        594669093
      )
    }
    {
      let _gde_name = new StringName('transposed')
      this._bindings.method_transposed = internal.variant_get_ptr_builtin_method(
        Variant.Type.BASIS,
        _gde_name.opaque,
        594669093
      )
    }
    {
      let _gde_name = new StringName('orthonormalized')
      this._bindings.method_orthonormalized = internal.variant_get_ptr_builtin_method(
        Variant.Type.BASIS,
        _gde_name.opaque,
        594669093
      )
    }
    {
      let _gde_name = new StringName('determinant')
      this._bindings.method_determinant = internal.variant_get_ptr_builtin_method(
        Variant.Type.BASIS,
        _gde_name.opaque,
        466405837
      )
    }
    {
      let _gde_name = new StringName('rotated')
      this._bindings.method_rotated = internal.variant_get_ptr_builtin_method(
        Variant.Type.BASIS,
        _gde_name.opaque,
        1998708965
      )
    }
    {
      let _gde_name = new StringName('scaled')
      this._bindings.method_scaled = internal.variant_get_ptr_builtin_method(
        Variant.Type.BASIS,
        _gde_name.opaque,
        3934786792
      )
    }
    {
      let _gde_name = new StringName('get_scale')
      this._bindings.method_get_scale = internal.variant_get_ptr_builtin_method(
        Variant.Type.BASIS,
        _gde_name.opaque,
        1776574132
      )
    }
    {
      let _gde_name = new StringName('get_euler')
      this._bindings.method_get_euler = internal.variant_get_ptr_builtin_method(
        Variant.Type.BASIS,
        _gde_name.opaque,
        1394941017
      )
    }
    {
      let _gde_name = new StringName('tdotx')
      this._bindings.method_tdotx = internal.variant_get_ptr_builtin_method(
        Variant.Type.BASIS,
        _gde_name.opaque,
        1047977935
      )
    }
    {
      let _gde_name = new StringName('tdoty')
      this._bindings.method_tdoty = internal.variant_get_ptr_builtin_method(
        Variant.Type.BASIS,
        _gde_name.opaque,
        1047977935
      )
    }
    {
      let _gde_name = new StringName('tdotz')
      this._bindings.method_tdotz = internal.variant_get_ptr_builtin_method(
        Variant.Type.BASIS,
        _gde_name.opaque,
        1047977935
      )
    }
    {
      let _gde_name = new StringName('slerp')
      this._bindings.method_slerp = internal.variant_get_ptr_builtin_method(
        Variant.Type.BASIS,
        _gde_name.opaque,
        3118673011
      )
    }
    {
      let _gde_name = new StringName('is_conformal')
      this._bindings.method_is_conformal = internal.variant_get_ptr_builtin_method(
        Variant.Type.BASIS,
        _gde_name.opaque,
        3918633141
      )
    }
    {
      let _gde_name = new StringName('is_equal_approx')
      this._bindings.method_is_equal_approx = internal.variant_get_ptr_builtin_method(
        Variant.Type.BASIS,
        _gde_name.opaque,
        3165333982
      )
    }
    {
      let _gde_name = new StringName('is_finite')
      this._bindings.method_is_finite = internal.variant_get_ptr_builtin_method(
        Variant.Type.BASIS,
        _gde_name.opaque,
        3918633141
      )
    }
    {
      let _gde_name = new StringName('get_rotation_quaternion')
      this._bindings.method_get_rotation_quaternion = internal.variant_get_ptr_builtin_method(
        Variant.Type.BASIS,
        _gde_name.opaque,
        4274879941
      )
    }
    {
      let _gde_name = new StringName('looking_at')
      this._bindings.method_looking_at = internal.variant_get_ptr_builtin_method(
        Variant.Type.BASIS,
        _gde_name.opaque,
        3728732505
      )
    }
    {
      let _gde_name = new StringName('from_scale')
      this._bindings.method_from_scale = internal.variant_get_ptr_builtin_method(
        Variant.Type.BASIS,
        _gde_name.opaque,
        3703240166
      )
    }
    {
      let _gde_name = new StringName('from_euler')
      this._bindings.method_from_euler = internal.variant_get_ptr_builtin_method(
        Variant.Type.BASIS,
        _gde_name.opaque,
        2802321791
      )
    }
  }

  
  inverse () {
    let ret = new Basis()
    ret.opaque = _call_builtin_method_ptr_ret(
      Basis._bindings.method_inverse,
      this,
      Variant.Type.BASIS,
      []
    )
    return ret
  }
  transposed () {
    let ret = new Basis()
    ret.opaque = _call_builtin_method_ptr_ret(
      Basis._bindings.method_transposed,
      this,
      Variant.Type.BASIS,
      []
    )
    return ret
  }
  orthonormalized () {
    let ret = new Basis()
    ret.opaque = _call_builtin_method_ptr_ret(
      Basis._bindings.method_orthonormalized,
      this,
      Variant.Type.BASIS,
      []
    )
    return ret
  }
  determinant () {
    let ret
    ret = _call_builtin_method_ptr_ret(
      Basis._bindings.method_determinant,
      this,
      Variant.Type.FLOAT,
      []
    )
    return ret
  }
  rotated (_axis, _angle) {
    let ret = new Basis()
    ret.opaque = _call_builtin_method_ptr_ret(
      Basis._bindings.method_rotated,
      this,
      Variant.Type.BASIS,
      [_axis, _angle]
    )
    return ret
  }
  scaled (_scale) {
    let ret = new Basis()
    ret.opaque = _call_builtin_method_ptr_ret(
      Basis._bindings.method_scaled,
      this,
      Variant.Type.BASIS,
      [_scale]
    )
    return ret
  }
  get_scale () {
    let ret = new Vector3()
    ret.opaque = _call_builtin_method_ptr_ret(
      Basis._bindings.method_get_scale,
      this,
      Variant.Type.VECTOR3,
      []
    )
    return ret
  }
  get_euler (_order) {
    let ret = new Vector3()
    ret.opaque = _call_builtin_method_ptr_ret(
      Basis._bindings.method_get_euler,
      this,
      Variant.Type.VECTOR3,
      [_order]
    )
    return ret
  }
  tdotx (_with) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      Basis._bindings.method_tdotx,
      this,
      Variant.Type.FLOAT,
      [_with]
    )
    return ret
  }
  tdoty (_with) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      Basis._bindings.method_tdoty,
      this,
      Variant.Type.FLOAT,
      [_with]
    )
    return ret
  }
  tdotz (_with) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      Basis._bindings.method_tdotz,
      this,
      Variant.Type.FLOAT,
      [_with]
    )
    return ret
  }
  slerp (_to, _weight) {
    let ret = new Basis()
    ret.opaque = _call_builtin_method_ptr_ret(
      Basis._bindings.method_slerp,
      this,
      Variant.Type.BASIS,
      [_to, _weight]
    )
    return ret
  }
  is_conformal () {
    let ret
    ret = _call_builtin_method_ptr_ret(
      Basis._bindings.method_is_conformal,
      this,
      Variant.Type.BOOL,
      []
    )
    return ret
  }
  is_equal_approx (_b) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      Basis._bindings.method_is_equal_approx,
      this,
      Variant.Type.BOOL,
      [_b]
    )
    return ret
  }
  is_finite () {
    let ret
    ret = _call_builtin_method_ptr_ret(
      Basis._bindings.method_is_finite,
      this,
      Variant.Type.BOOL,
      []
    )
    return ret
  }
  get_rotation_quaternion () {
    let ret = new Quaternion()
    ret.opaque = _call_builtin_method_ptr_ret(
      Basis._bindings.method_get_rotation_quaternion,
      this,
      Variant.Type.QUATERNION,
      []
    )
    return ret
  }
  looking_at (_target, _up, _use_model_front) {
    let ret = new Basis()
    ret.opaque = _call_builtin_method_ptr_ret(
      Basis._bindings.method_looking_at,
      this,
      Variant.Type.BASIS,
      [_target, _up, _use_model_front]
    )
    return ret
  }
  from_scale (_scale) {
    let ret = new Basis()
    ret.opaque = _call_builtin_method_ptr_ret(
      Basis._bindings.method_from_scale,
      this,
      Variant.Type.BASIS,
      [_scale]
    )
    return ret
  }
  from_euler (_euler, _order) {
    let ret = new Basis()
    ret.opaque = _call_builtin_method_ptr_ret(
      Basis._bindings.method_from_euler,
      this,
      Variant.Type.BASIS,
      [_euler, _order]
    )
    return ret
  }
}