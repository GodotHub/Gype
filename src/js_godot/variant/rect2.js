import * as internal from '__internal__'
import {
  _call_builtin_constructor,
  _call_builtin_method_ptr_ret,
  _call_builtin_method_ptr_no_ret
} from 'src/js_godot/core/builtin_ptrcall'
import { Vector2 } from 'src/js_godot/variant/vector2'
import { StringName } from 'src/js_godot/variant/string_name'
import { Rect2i } from 'src/js_godot/variant/rect2i'
import { Variant } from 'src/js_godot/variant/variant'

class _MethodBindings {
  from_variant_constructor
  constructor_0
  constructor_1
  constructor_2
  constructor_3
  constructor_4
  method_get_center
  method_get_area
  method_has_area
  method_has_point
  method_is_equal_approx
  method_is_finite
  method_intersects
  method_encloses
  method_intersection
  method_merge
  method_expand
  method_grow
  method_grow_side
  method_grow_individual
  method_abs
  operator_equal_Variant
  operator_not_equal_Variant
  operator_not_
  operator_equal_Rect2
  operator_not_equal_Rect2
  operator_multiply_Transform2D
  operator_in_Dictionary
  operator_in_Array
}

export class Rect2 {
  static #SIZE = 16
  opaque = new Uint8Array(Rect2.#SIZE)

  static _bindings = new _MethodBindings()

  constructor (from) {
    if (!from) {
      _call_builtin_constructor(Rect2._bindings.constructor_0, this)
    }else if (from instanceof Rect2) {
      _call_builtin_constructor(Rect2._bindings.constructor_1, this, [
        from
      ])
    }else if (from instanceof Rect2i) {
      _call_builtin_constructor(Rect2._bindings.constructor_2, this, [
        from
      ])
    } else if (arguments.length == 2&& arguments[0] instanceof Vector2&& arguments[1] instanceof Vector2) {
      let position = arguments[0];
      let size = arguments[1];
      _call_builtin_constructor(Rect2._bindings.constructor_3, this, [
        position, size
      ])
    } else if (arguments.length == 4&& typeof arguments[0] == "number"&& typeof arguments[1] == "number"&& typeof arguments[2] == "number"&& typeof arguments[3] == "number") {
      let x = arguments[0];
      let y = arguments[1];
      let width = arguments[2];
      let height = arguments[3];
      _call_builtin_constructor(Rect2._bindings.constructor_4, this, [
        x, y, width, height
      ])
    } else if (from instanceof Variant) {
      Rect2._bindings.from_variant_constructor(this.opaque, from.opaque)
    } 
  }
  
  static __init_bindings_constructors_destructor () {
    this._bindings.from_variant_constructor = internal.get_variant_to_type_constructor(
      Variant.Type.RECT2
    )
    this._bindings.constructor_0 = internal.variant_get_ptr_constructor(
      Variant.Type.RECT2,
      0
    )
    this._bindings.constructor_1 = internal.variant_get_ptr_constructor(
      Variant.Type.RECT2,
      1
    )
    this._bindings.constructor_2 = internal.variant_get_ptr_constructor(
      Variant.Type.RECT2,
      2
    )
    this._bindings.constructor_3 = internal.variant_get_ptr_constructor(
      Variant.Type.RECT2,
      3
    )
    this._bindings.constructor_4 = internal.variant_get_ptr_constructor(
      Variant.Type.RECT2,
      4
    )
  }
  
  static _init_bindings () {
    this.__init_bindings_constructors_destructor()
    {
      let _gde_name = new StringName('get_center')
      this._bindings.method_get_center = internal.variant_get_ptr_builtin_method(
        Variant.Type.RECT2,
        _gde_name.opaque,
        2428350749
      )
    }
    {
      let _gde_name = new StringName('get_area')
      this._bindings.method_get_area = internal.variant_get_ptr_builtin_method(
        Variant.Type.RECT2,
        _gde_name.opaque,
        466405837
      )
    }
    {
      let _gde_name = new StringName('has_area')
      this._bindings.method_has_area = internal.variant_get_ptr_builtin_method(
        Variant.Type.RECT2,
        _gde_name.opaque,
        3918633141
      )
    }
    {
      let _gde_name = new StringName('has_point')
      this._bindings.method_has_point = internal.variant_get_ptr_builtin_method(
        Variant.Type.RECT2,
        _gde_name.opaque,
        3190634762
      )
    }
    {
      let _gde_name = new StringName('is_equal_approx')
      this._bindings.method_is_equal_approx = internal.variant_get_ptr_builtin_method(
        Variant.Type.RECT2,
        _gde_name.opaque,
        1908192260
      )
    }
    {
      let _gde_name = new StringName('is_finite')
      this._bindings.method_is_finite = internal.variant_get_ptr_builtin_method(
        Variant.Type.RECT2,
        _gde_name.opaque,
        3918633141
      )
    }
    {
      let _gde_name = new StringName('intersects')
      this._bindings.method_intersects = internal.variant_get_ptr_builtin_method(
        Variant.Type.RECT2,
        _gde_name.opaque,
        819294880
      )
    }
    {
      let _gde_name = new StringName('encloses')
      this._bindings.method_encloses = internal.variant_get_ptr_builtin_method(
        Variant.Type.RECT2,
        _gde_name.opaque,
        1908192260
      )
    }
    {
      let _gde_name = new StringName('intersection')
      this._bindings.method_intersection = internal.variant_get_ptr_builtin_method(
        Variant.Type.RECT2,
        _gde_name.opaque,
        2282977743
      )
    }
    {
      let _gde_name = new StringName('merge')
      this._bindings.method_merge = internal.variant_get_ptr_builtin_method(
        Variant.Type.RECT2,
        _gde_name.opaque,
        2282977743
      )
    }
    {
      let _gde_name = new StringName('expand')
      this._bindings.method_expand = internal.variant_get_ptr_builtin_method(
        Variant.Type.RECT2,
        _gde_name.opaque,
        293272265
      )
    }
    {
      let _gde_name = new StringName('grow')
      this._bindings.method_grow = internal.variant_get_ptr_builtin_method(
        Variant.Type.RECT2,
        _gde_name.opaque,
        39664498
      )
    }
    {
      let _gde_name = new StringName('grow_side')
      this._bindings.method_grow_side = internal.variant_get_ptr_builtin_method(
        Variant.Type.RECT2,
        _gde_name.opaque,
        4177736158
      )
    }
    {
      let _gde_name = new StringName('grow_individual')
      this._bindings.method_grow_individual = internal.variant_get_ptr_builtin_method(
        Variant.Type.RECT2,
        _gde_name.opaque,
        3203390369
      )
    }
    {
      let _gde_name = new StringName('abs')
      this._bindings.method_abs = internal.variant_get_ptr_builtin_method(
        Variant.Type.RECT2,
        _gde_name.opaque,
        3107653634
      )
    }
  }

  
  get_center () {
    let ret = new Vector2()
    ret.opaque = _call_builtin_method_ptr_ret(
      Rect2._bindings.method_get_center,
      this,
      Variant.Type.VECTOR2,
      []
    )
    return ret
  }
  get_area () {
    let ret
    ret = _call_builtin_method_ptr_ret(
      Rect2._bindings.method_get_area,
      this,
      Variant.Type.FLOAT,
      []
    )
    return ret
  }
  has_area () {
    let ret
    ret = _call_builtin_method_ptr_ret(
      Rect2._bindings.method_has_area,
      this,
      Variant.Type.BOOL,
      []
    )
    return ret
  }
  has_point (_point) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      Rect2._bindings.method_has_point,
      this,
      Variant.Type.BOOL,
      [_point]
    )
    return ret
  }
  is_equal_approx (_rect) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      Rect2._bindings.method_is_equal_approx,
      this,
      Variant.Type.BOOL,
      [_rect]
    )
    return ret
  }
  is_finite () {
    let ret
    ret = _call_builtin_method_ptr_ret(
      Rect2._bindings.method_is_finite,
      this,
      Variant.Type.BOOL,
      []
    )
    return ret
  }
  intersects (_b, _include_borders) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      Rect2._bindings.method_intersects,
      this,
      Variant.Type.BOOL,
      [_b, _include_borders]
    )
    return ret
  }
  encloses (_b) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      Rect2._bindings.method_encloses,
      this,
      Variant.Type.BOOL,
      [_b]
    )
    return ret
  }
  intersection (_b) {
    let ret = new Rect2()
    ret.opaque = _call_builtin_method_ptr_ret(
      Rect2._bindings.method_intersection,
      this,
      Variant.Type.RECT2,
      [_b]
    )
    return ret
  }
  merge (_b) {
    let ret = new Rect2()
    ret.opaque = _call_builtin_method_ptr_ret(
      Rect2._bindings.method_merge,
      this,
      Variant.Type.RECT2,
      [_b]
    )
    return ret
  }
  expand (_to) {
    let ret = new Rect2()
    ret.opaque = _call_builtin_method_ptr_ret(
      Rect2._bindings.method_expand,
      this,
      Variant.Type.RECT2,
      [_to]
    )
    return ret
  }
  grow (_amount) {
    let ret = new Rect2()
    ret.opaque = _call_builtin_method_ptr_ret(
      Rect2._bindings.method_grow,
      this,
      Variant.Type.RECT2,
      [_amount]
    )
    return ret
  }
  grow_side (_side, _amount) {
    let ret = new Rect2()
    ret.opaque = _call_builtin_method_ptr_ret(
      Rect2._bindings.method_grow_side,
      this,
      Variant.Type.RECT2,
      [_side, _amount]
    )
    return ret
  }
  grow_individual (_left, _top, _right, _bottom) {
    let ret = new Rect2()
    ret.opaque = _call_builtin_method_ptr_ret(
      Rect2._bindings.method_grow_individual,
      this,
      Variant.Type.RECT2,
      [_left, _top, _right, _bottom]
    )
    return ret
  }
  abs () {
    let ret = new Rect2()
    ret.opaque = _call_builtin_method_ptr_ret(
      Rect2._bindings.method_abs,
      this,
      Variant.Type.RECT2,
      []
    )
    return ret
  }
}