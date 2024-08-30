import * as internal from '__internal__'
import {
  _call_builtin_constructor,
  _call_builtin_method_ptr_ret,
  _call_builtin_method_ptr_no_ret
} from 'src/js_godot/core/builtin_ptrcall'
import { Vector2 } from 'src/js_godot/variant/vector2'
import { Variant } from 'src/js_godot/variant/variant'
import { StringName } from 'src/js_godot/variant/string_name'

class _MethodBindings {
  from_variant_constructor
  constructor_0
  constructor_1
  constructor_2
  constructor_3
  constructor_4
  method_inverse
  method_affine_inverse
  method_get_rotation
  method_get_origin
  method_get_scale
  method_get_skew
  method_orthonormalized
  method_rotated
  method_rotated_local
  method_scaled
  method_scaled_local
  method_translated
  method_translated_local
  method_determinant
  method_basis_xform
  method_basis_xform_inv
  method_interpolate_with
  method_is_conformal
  method_is_equal_approx
  method_is_finite
  method_looking_at
  operator_equal_Variant
  operator_not_equal_Variant
  operator_not_
  operator_multiply_int
  operator_divide_int
  operator_multiply_float
  operator_divide_float
  operator_multiply_Vector2
  operator_multiply_Rect2
  operator_equal_Transform2D
  operator_not_equal_Transform2D
  operator_multiply_Transform2D
  operator_in_Dictionary
  operator_in_Array
  operator_multiply_PackedVector2Array
}

export class Transform2D {
  static #SIZE = 24
  opaque = new Uint8Array(Transform2D.#SIZE)

  static _bindings = new _MethodBindings()

  constructor (from) {
    if (!from) {
      _call_builtin_constructor(Transform2D._bindings.constructor_0, this)
    }else if (from instanceof Transform2D) {
      _call_builtin_constructor(Transform2D._bindings.constructor_1, this, [
        from
      ])
    } else if (arguments.length == 2&& typeof arguments[0] == "number"&& arguments[1] instanceof Vector2) {
      let rotation = arguments[0];
      let position = arguments[1];
      _call_builtin_constructor(Transform2D._bindings.constructor_2, this, [
        rotation, position
      ])
    } else if (arguments.length == 4&& typeof arguments[0] == "number"&& arguments[1] instanceof Vector2&& typeof arguments[2] == "number"&& arguments[3] instanceof Vector2) {
      let rotation = arguments[0];
      let scale = arguments[1];
      let skew = arguments[2];
      let position = arguments[3];
      _call_builtin_constructor(Transform2D._bindings.constructor_3, this, [
        rotation, scale, skew, position
      ])
    } else if (arguments.length == 3&& arguments[0] instanceof Vector2&& arguments[1] instanceof Vector2&& arguments[2] instanceof Vector2) {
      let x_axis = arguments[0];
      let y_axis = arguments[1];
      let origin = arguments[2];
      _call_builtin_constructor(Transform2D._bindings.constructor_4, this, [
        x_axis, y_axis, origin
      ])
    } else if (from instanceof Variant) {
      Transform2D._bindings.from_variant_constructor(this.opaque, from.opaque)
    } 
  }
  
  static __init_bindings_constructors_destructor () {
    this._bindings.from_variant_constructor = internal.get_variant_to_type_constructor(
      Variant.Type.TRANSFORM2D
    )
    this._bindings.constructor_0 = internal.variant_get_ptr_constructor(
      Variant.Type.TRANSFORM2D,
      0
    )
    this._bindings.constructor_1 = internal.variant_get_ptr_constructor(
      Variant.Type.TRANSFORM2D,
      1
    )
    this._bindings.constructor_2 = internal.variant_get_ptr_constructor(
      Variant.Type.TRANSFORM2D,
      2
    )
    this._bindings.constructor_3 = internal.variant_get_ptr_constructor(
      Variant.Type.TRANSFORM2D,
      3
    )
    this._bindings.constructor_4 = internal.variant_get_ptr_constructor(
      Variant.Type.TRANSFORM2D,
      4
    )
  }
  
  static _init_bindings () {
    this.__init_bindings_constructors_destructor()
    {
      let _gde_name = new StringName('inverse')
      this._bindings.method_inverse = internal.variant_get_ptr_builtin_method(
        Variant.Type.TRANSFORM2D,
        _gde_name.opaque,
        1420440541
      )
    }
    {
      let _gde_name = new StringName('affine_inverse')
      this._bindings.method_affine_inverse = internal.variant_get_ptr_builtin_method(
        Variant.Type.TRANSFORM2D,
        _gde_name.opaque,
        1420440541
      )
    }
    {
      let _gde_name = new StringName('get_rotation')
      this._bindings.method_get_rotation = internal.variant_get_ptr_builtin_method(
        Variant.Type.TRANSFORM2D,
        _gde_name.opaque,
        466405837
      )
    }
    {
      let _gde_name = new StringName('get_origin')
      this._bindings.method_get_origin = internal.variant_get_ptr_builtin_method(
        Variant.Type.TRANSFORM2D,
        _gde_name.opaque,
        2428350749
      )
    }
    {
      let _gde_name = new StringName('get_scale')
      this._bindings.method_get_scale = internal.variant_get_ptr_builtin_method(
        Variant.Type.TRANSFORM2D,
        _gde_name.opaque,
        2428350749
      )
    }
    {
      let _gde_name = new StringName('get_skew')
      this._bindings.method_get_skew = internal.variant_get_ptr_builtin_method(
        Variant.Type.TRANSFORM2D,
        _gde_name.opaque,
        466405837
      )
    }
    {
      let _gde_name = new StringName('orthonormalized')
      this._bindings.method_orthonormalized = internal.variant_get_ptr_builtin_method(
        Variant.Type.TRANSFORM2D,
        _gde_name.opaque,
        1420440541
      )
    }
    {
      let _gde_name = new StringName('rotated')
      this._bindings.method_rotated = internal.variant_get_ptr_builtin_method(
        Variant.Type.TRANSFORM2D,
        _gde_name.opaque,
        729597514
      )
    }
    {
      let _gde_name = new StringName('rotated_local')
      this._bindings.method_rotated_local = internal.variant_get_ptr_builtin_method(
        Variant.Type.TRANSFORM2D,
        _gde_name.opaque,
        729597514
      )
    }
    {
      let _gde_name = new StringName('scaled')
      this._bindings.method_scaled = internal.variant_get_ptr_builtin_method(
        Variant.Type.TRANSFORM2D,
        _gde_name.opaque,
        1446323263
      )
    }
    {
      let _gde_name = new StringName('scaled_local')
      this._bindings.method_scaled_local = internal.variant_get_ptr_builtin_method(
        Variant.Type.TRANSFORM2D,
        _gde_name.opaque,
        1446323263
      )
    }
    {
      let _gde_name = new StringName('translated')
      this._bindings.method_translated = internal.variant_get_ptr_builtin_method(
        Variant.Type.TRANSFORM2D,
        _gde_name.opaque,
        1446323263
      )
    }
    {
      let _gde_name = new StringName('translated_local')
      this._bindings.method_translated_local = internal.variant_get_ptr_builtin_method(
        Variant.Type.TRANSFORM2D,
        _gde_name.opaque,
        1446323263
      )
    }
    {
      let _gde_name = new StringName('determinant')
      this._bindings.method_determinant = internal.variant_get_ptr_builtin_method(
        Variant.Type.TRANSFORM2D,
        _gde_name.opaque,
        466405837
      )
    }
    {
      let _gde_name = new StringName('basis_xform')
      this._bindings.method_basis_xform = internal.variant_get_ptr_builtin_method(
        Variant.Type.TRANSFORM2D,
        _gde_name.opaque,
        2026743667
      )
    }
    {
      let _gde_name = new StringName('basis_xform_inv')
      this._bindings.method_basis_xform_inv = internal.variant_get_ptr_builtin_method(
        Variant.Type.TRANSFORM2D,
        _gde_name.opaque,
        2026743667
      )
    }
    {
      let _gde_name = new StringName('interpolate_with')
      this._bindings.method_interpolate_with = internal.variant_get_ptr_builtin_method(
        Variant.Type.TRANSFORM2D,
        _gde_name.opaque,
        359399686
      )
    }
    {
      let _gde_name = new StringName('is_conformal')
      this._bindings.method_is_conformal = internal.variant_get_ptr_builtin_method(
        Variant.Type.TRANSFORM2D,
        _gde_name.opaque,
        3918633141
      )
    }
    {
      let _gde_name = new StringName('is_equal_approx')
      this._bindings.method_is_equal_approx = internal.variant_get_ptr_builtin_method(
        Variant.Type.TRANSFORM2D,
        _gde_name.opaque,
        3837431929
      )
    }
    {
      let _gde_name = new StringName('is_finite')
      this._bindings.method_is_finite = internal.variant_get_ptr_builtin_method(
        Variant.Type.TRANSFORM2D,
        _gde_name.opaque,
        3918633141
      )
    }
    {
      let _gde_name = new StringName('looking_at')
      this._bindings.method_looking_at = internal.variant_get_ptr_builtin_method(
        Variant.Type.TRANSFORM2D,
        _gde_name.opaque,
        1446323263
      )
    }
  }

  
  inverse () {
    let ret = new Transform2D()
    ret.opaque = _call_builtin_method_ptr_ret(
      Transform2D._bindings.method_inverse,
      this,
      Variant.Type.TRANSFORM2D,
      []
    )
    return ret
  }
  affine_inverse () {
    let ret = new Transform2D()
    ret.opaque = _call_builtin_method_ptr_ret(
      Transform2D._bindings.method_affine_inverse,
      this,
      Variant.Type.TRANSFORM2D,
      []
    )
    return ret
  }
  get_rotation () {
    let ret
    ret = _call_builtin_method_ptr_ret(
      Transform2D._bindings.method_get_rotation,
      this,
      Variant.Type.FLOAT,
      []
    )
    return ret
  }
  get_origin () {
    let ret = new Vector2()
    ret.opaque = _call_builtin_method_ptr_ret(
      Transform2D._bindings.method_get_origin,
      this,
      Variant.Type.VECTOR2,
      []
    )
    return ret
  }
  get_scale () {
    let ret = new Vector2()
    ret.opaque = _call_builtin_method_ptr_ret(
      Transform2D._bindings.method_get_scale,
      this,
      Variant.Type.VECTOR2,
      []
    )
    return ret
  }
  get_skew () {
    let ret
    ret = _call_builtin_method_ptr_ret(
      Transform2D._bindings.method_get_skew,
      this,
      Variant.Type.FLOAT,
      []
    )
    return ret
  }
  orthonormalized () {
    let ret = new Transform2D()
    ret.opaque = _call_builtin_method_ptr_ret(
      Transform2D._bindings.method_orthonormalized,
      this,
      Variant.Type.TRANSFORM2D,
      []
    )
    return ret
  }
  rotated (_angle) {
    let ret = new Transform2D()
    ret.opaque = _call_builtin_method_ptr_ret(
      Transform2D._bindings.method_rotated,
      this,
      Variant.Type.TRANSFORM2D,
      [_angle]
    )
    return ret
  }
  rotated_local (_angle) {
    let ret = new Transform2D()
    ret.opaque = _call_builtin_method_ptr_ret(
      Transform2D._bindings.method_rotated_local,
      this,
      Variant.Type.TRANSFORM2D,
      [_angle]
    )
    return ret
  }
  scaled (_scale) {
    let ret = new Transform2D()
    ret.opaque = _call_builtin_method_ptr_ret(
      Transform2D._bindings.method_scaled,
      this,
      Variant.Type.TRANSFORM2D,
      [_scale]
    )
    return ret
  }
  scaled_local (_scale) {
    let ret = new Transform2D()
    ret.opaque = _call_builtin_method_ptr_ret(
      Transform2D._bindings.method_scaled_local,
      this,
      Variant.Type.TRANSFORM2D,
      [_scale]
    )
    return ret
  }
  translated (_offset) {
    let ret = new Transform2D()
    ret.opaque = _call_builtin_method_ptr_ret(
      Transform2D._bindings.method_translated,
      this,
      Variant.Type.TRANSFORM2D,
      [_offset]
    )
    return ret
  }
  translated_local (_offset) {
    let ret = new Transform2D()
    ret.opaque = _call_builtin_method_ptr_ret(
      Transform2D._bindings.method_translated_local,
      this,
      Variant.Type.TRANSFORM2D,
      [_offset]
    )
    return ret
  }
  determinant () {
    let ret
    ret = _call_builtin_method_ptr_ret(
      Transform2D._bindings.method_determinant,
      this,
      Variant.Type.FLOAT,
      []
    )
    return ret
  }
  basis_xform (_v) {
    let ret = new Vector2()
    ret.opaque = _call_builtin_method_ptr_ret(
      Transform2D._bindings.method_basis_xform,
      this,
      Variant.Type.VECTOR2,
      [_v]
    )
    return ret
  }
  basis_xform_inv (_v) {
    let ret = new Vector2()
    ret.opaque = _call_builtin_method_ptr_ret(
      Transform2D._bindings.method_basis_xform_inv,
      this,
      Variant.Type.VECTOR2,
      [_v]
    )
    return ret
  }
  interpolate_with (_xform, _weight) {
    let ret = new Transform2D()
    ret.opaque = _call_builtin_method_ptr_ret(
      Transform2D._bindings.method_interpolate_with,
      this,
      Variant.Type.TRANSFORM2D,
      [_xform, _weight]
    )
    return ret
  }
  is_conformal () {
    let ret
    ret = _call_builtin_method_ptr_ret(
      Transform2D._bindings.method_is_conformal,
      this,
      Variant.Type.BOOL,
      []
    )
    return ret
  }
  is_equal_approx (_xform) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      Transform2D._bindings.method_is_equal_approx,
      this,
      Variant.Type.BOOL,
      [_xform]
    )
    return ret
  }
  is_finite () {
    let ret
    ret = _call_builtin_method_ptr_ret(
      Transform2D._bindings.method_is_finite,
      this,
      Variant.Type.BOOL,
      []
    )
    return ret
  }
  looking_at (_target) {
    let ret = new Transform2D()
    ret.opaque = _call_builtin_method_ptr_ret(
      Transform2D._bindings.method_looking_at,
      this,
      Variant.Type.TRANSFORM2D,
      [_target]
    )
    return ret
  }
}