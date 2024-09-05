import * as internal from '__internal__'
import {
  _call_builtin_constructor,
  _call_builtin_method_ptr_ret,
  _call_builtin_method_ptr_no_ret
} from '@js_godot/core/builtin_ptrcall'
import { Variant } from '@js_godot/variant/variant'
import { Vector3 } from '@js_godot/variant/vector3'
import { StringName } from '@js_godot/variant/string_name'

class _MethodBindings {
  from_variant_constructor
  constructor_0
  constructor_1
  constructor_2
  constructor_3
  constructor_4
  constructor_5
  constructor_6
  method_normalized
  method_get_center
  method_is_equal_approx
  method_is_finite
  method_is_point_over
  method_distance_to
  method_has_point
  method_project
  method_intersect_3
  method_intersects_ray
  method_intersects_segment
  operator_equal_Variant
  operator_not_equal_Variant
  operator_negate_
  operator_positive_
  operator_not_
  operator_equal_Plane
  operator_not_equal_Plane
  operator_multiply_Transform3D
  operator_in_Dictionary
  operator_in_Array
}

export class Plane {
  static #SIZE = 16
  opaque = new Uint8Array(Plane.#SIZE)

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor (from) {
    if (!from) {
      _call_builtin_constructor(Plane._bindings.constructor_0, this)
    }else if (from instanceof Plane) {
      _call_builtin_constructor(Plane._bindings.constructor_1, this, [
        from
      ])
    }else if (from instanceof Vector3) {
      _call_builtin_constructor(Plane._bindings.constructor_2, this, [
        normal
      ])
    } else if (arguments.length == 2&& arguments[0] instanceof Vector3&& typeof arguments[1] == "number") {
      let normal = arguments[0];
      let d = arguments[1];
      _call_builtin_constructor(Plane._bindings.constructor_3, this, [
        normal, d
      ])
    } else if (arguments.length == 2&& arguments[0] instanceof Vector3&& arguments[1] instanceof Vector3) {
      let normal = arguments[0];
      let point = arguments[1];
      _call_builtin_constructor(Plane._bindings.constructor_4, this, [
        normal, point
      ])
    } else if (arguments.length == 3&& arguments[0] instanceof Vector3&& arguments[1] instanceof Vector3&& arguments[2] instanceof Vector3) {
      let point1 = arguments[0];
      let point2 = arguments[1];
      let point3 = arguments[2];
      _call_builtin_constructor(Plane._bindings.constructor_5, this, [
        point1, point2, point3
      ])
    } else if (arguments.length == 4&& typeof arguments[0] == "number"&& typeof arguments[1] == "number"&& typeof arguments[2] == "number"&& typeof arguments[3] == "number") {
      let a = arguments[0];
      let b = arguments[1];
      let c = arguments[2];
      let d = arguments[3];
      _call_builtin_constructor(Plane._bindings.constructor_6, this, [
        a, b, c, d
      ])
    } else if (from.constructor.name === "Variant") {
      Plane._bindings.from_variant_constructor(this.opaque, from.opaque)
    } 
  }
  
  static __init_bindings_constructors_destructor () {
    this._bindings.from_variant_constructor = internal.get_variant_to_type_constructor(
      14
    )
    this._bindings.constructor_0 = internal.variant_get_ptr_constructor(
      14,
      0
    )
    this._bindings.constructor_1 = internal.variant_get_ptr_constructor(
      14,
      1
    )
    this._bindings.constructor_2 = internal.variant_get_ptr_constructor(
      14,
      2
    )
    this._bindings.constructor_3 = internal.variant_get_ptr_constructor(
      14,
      3
    )
    this._bindings.constructor_4 = internal.variant_get_ptr_constructor(
      14,
      4
    )
    this._bindings.constructor_5 = internal.variant_get_ptr_constructor(
      14,
      5
    )
    this._bindings.constructor_6 = internal.variant_get_ptr_constructor(
      14,
      6
    )
  }
  
  static async _init_bindings () {
    if (this.#initialized) {
      return;
    }
    this.#initialized = true;
    this.__init_bindings_constructors_destructor()
    {
      let _gde_name = new StringName('normalized')
      this._bindings.method_normalized = internal.variant_get_ptr_builtin_method(
        14,
        _gde_name.opaque,
        1051796340
      )
    }
    {
      let _gde_name = new StringName('get_center')
      this._bindings.method_get_center = internal.variant_get_ptr_builtin_method(
        14,
        _gde_name.opaque,
        1776574132
      )
    }
    {
      let _gde_name = new StringName('is_equal_approx')
      this._bindings.method_is_equal_approx = internal.variant_get_ptr_builtin_method(
        14,
        _gde_name.opaque,
        1150170233
      )
    }
    {
      let _gde_name = new StringName('is_finite')
      this._bindings.method_is_finite = internal.variant_get_ptr_builtin_method(
        14,
        _gde_name.opaque,
        3918633141
      )
    }
    {
      let _gde_name = new StringName('is_point_over')
      this._bindings.method_is_point_over = internal.variant_get_ptr_builtin_method(
        14,
        _gde_name.opaque,
        1749054343
      )
    }
    {
      let _gde_name = new StringName('distance_to')
      this._bindings.method_distance_to = internal.variant_get_ptr_builtin_method(
        14,
        _gde_name.opaque,
        1047977935
      )
    }
    {
      let _gde_name = new StringName('has_point')
      this._bindings.method_has_point = internal.variant_get_ptr_builtin_method(
        14,
        _gde_name.opaque,
        1258189072
      )
    }
    {
      let _gde_name = new StringName('project')
      this._bindings.method_project = internal.variant_get_ptr_builtin_method(
        14,
        _gde_name.opaque,
        2923479887
      )
    }
    {
      let _gde_name = new StringName('intersect_3')
      this._bindings.method_intersect_3 = internal.variant_get_ptr_builtin_method(
        14,
        _gde_name.opaque,
        2012052692
      )
    }
    {
      let _gde_name = new StringName('intersects_ray')
      this._bindings.method_intersects_ray = internal.variant_get_ptr_builtin_method(
        14,
        _gde_name.opaque,
        2048133369
      )
    }
    {
      let _gde_name = new StringName('intersects_segment')
      this._bindings.method_intersects_segment = internal.variant_get_ptr_builtin_method(
        14,
        _gde_name.opaque,
        2048133369
      )
    }
  }

  
  normalized () {
    let ret = new Plane()
    ret.opaque = _call_builtin_method_ptr_ret(
      Plane._bindings.method_normalized,
      this,
      14,
      []
    )
    return ret
  }
  get_center () {
    let ret = new Vector3()
    ret.opaque = _call_builtin_method_ptr_ret(
      Plane._bindings.method_get_center,
      this,
      9,
      []
    )
    return ret
  }
  is_equal_approx (_to_plane) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      Plane._bindings.method_is_equal_approx,
      this,
      1,
      [_to_plane]
    )
    return ret
  }
  is_finite () {
    let ret
    ret = _call_builtin_method_ptr_ret(
      Plane._bindings.method_is_finite,
      this,
      1,
      []
    )
    return ret
  }
  is_point_over (_point) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      Plane._bindings.method_is_point_over,
      this,
      1,
      [_point]
    )
    return ret
  }
  distance_to (_point) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      Plane._bindings.method_distance_to,
      this,
      3,
      [_point]
    )
    return ret
  }
  has_point (_point, _tolerance) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      Plane._bindings.method_has_point,
      this,
      1,
      [_point, _tolerance]
    )
    return ret
  }
  project (_point) {
    let ret = new Vector3()
    ret.opaque = _call_builtin_method_ptr_ret(
      Plane._bindings.method_project,
      this,
      9,
      [_point]
    )
    return ret
  }
  intersect_3 (_b, _c) {
    let ret = new Variant()
    ret.opaque = _call_builtin_method_ptr_ret(
      Plane._bindings.method_intersect_3,
      this,
      39,
      [_b, _c]
    )
    return ret
  }
  intersects_ray (_from, _dir) {
    let ret = new Variant()
    ret.opaque = _call_builtin_method_ptr_ret(
      Plane._bindings.method_intersects_ray,
      this,
      39,
      [_from, _dir]
    )
    return ret
  }
  intersects_segment (_from, _to) {
    let ret = new Variant()
    ret.opaque = _call_builtin_method_ptr_ret(
      Plane._bindings.method_intersects_segment,
      this,
      39,
      [_from, _to]
    )
    return ret
  }
static {
    this._init_bindings();
  }
}