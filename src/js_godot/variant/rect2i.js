import * as internal from '__internal__'
import {
  _call_builtin_constructor,
  _call_builtin_method_ptr_ret,
  _call_builtin_method_ptr_no_ret,
  _call_builtin_method_ptr_obj_ret,
} from '@js_godot/core/builtin_ptrcall'
import { Rect2 } from '@js_godot/variant/rect2'
import { Vector2i } from '@js_godot/variant/vector2i'
import { StringName } from '@js_godot/variant/string_name'
import { GodotObject } from "@js_godot/classes/godot_object";

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
  operator_equal_Rect2i
  operator_not_equal_Rect2i
  operator_in_Dictionary
  operator_in_Array
}

export class Rect2i {
  static #SIZE = 16
  opaque = new Uint8Array(Rect2i.#SIZE)

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor (value) {
    if (!value) {
      _call_builtin_constructor(Rect2i.#_bindings.constructor_0, this)
    } else if (arguments.length == 1&& arguments[0] instanceof Rect2i) {
      let from = arguments[0];
      _call_builtin_constructor(Rect2i.#_bindings.constructor_1, this, [
        from
      ])
    } else if (arguments.length == 1&& arguments[0] instanceof Rect2) {
      let from = arguments[0];
      _call_builtin_constructor(Rect2i.#_bindings.constructor_2, this, [
        from
      ])
    } else if (arguments.length == 2&& arguments[0] instanceof Vector2i&& arguments[1] instanceof Vector2i) {
      let position = arguments[0];
      let size = arguments[1];
      _call_builtin_constructor(Rect2i.#_bindings.constructor_3, this, [
        position, size
      ])
    } else if (arguments.length == 4&& typeof arguments[0] == "number"&& typeof arguments[1] == "number"&& typeof arguments[2] == "number"&& typeof arguments[3] == "number") {
      let x = arguments[0];
      let y = arguments[1];
      let width = arguments[2];
      let height = arguments[3];
      _call_builtin_constructor(Rect2i.#_bindings.constructor_4, this, [
        x, y, width, height
      ])
    } else if (value.constructor.name === "Variant") {
      Rect2i.#_bindings.from_variant_constructor(this.opaque, value.opaque)
    } else if (value instanceof Uint8Array) {
      this.opaque = value;
    } 
  }
  
  static __init_bindings_constructors_destructor () {
    this.#_bindings.from_variant_constructor = internal.get_variant_to_type_constructor(
      8
    )
    this.#_bindings.constructor_0 = internal.variant_get_ptr_constructor(
      8,
      0
    )
    this.#_bindings.constructor_1 = internal.variant_get_ptr_constructor(
      8,
      1
    )
    this.#_bindings.constructor_2 = internal.variant_get_ptr_constructor(
      8,
      2
    )
    this.#_bindings.constructor_3 = internal.variant_get_ptr_constructor(
      8,
      3
    )
    this.#_bindings.constructor_4 = internal.variant_get_ptr_constructor(
      8,
      4
    )
  }
  
  static async _init_bindings () {
    if (this.#initialized) {
      return;
    }
    this.#initialized = true;
    this.__init_bindings_constructors_destructor()
    {
      let _gde_name = new StringName('get_center')
      this.#_bindings.method_get_center = internal.variant_get_ptr_builtin_method(
        8,
        _gde_name.opaque,
        3444277866
      )
    }
    {
      let _gde_name = new StringName('get_area')
      this.#_bindings.method_get_area = internal.variant_get_ptr_builtin_method(
        8,
        _gde_name.opaque,
        3173160232
      )
    }
    {
      let _gde_name = new StringName('has_area')
      this.#_bindings.method_has_area = internal.variant_get_ptr_builtin_method(
        8,
        _gde_name.opaque,
        3918633141
      )
    }
    {
      let _gde_name = new StringName('has_point')
      this.#_bindings.method_has_point = internal.variant_get_ptr_builtin_method(
        8,
        _gde_name.opaque,
        328189994
      )
    }
    {
      let _gde_name = new StringName('intersects')
      this.#_bindings.method_intersects = internal.variant_get_ptr_builtin_method(
        8,
        _gde_name.opaque,
        3434691493
      )
    }
    {
      let _gde_name = new StringName('encloses')
      this.#_bindings.method_encloses = internal.variant_get_ptr_builtin_method(
        8,
        _gde_name.opaque,
        3434691493
      )
    }
    {
      let _gde_name = new StringName('intersection')
      this.#_bindings.method_intersection = internal.variant_get_ptr_builtin_method(
        8,
        _gde_name.opaque,
        717431873
      )
    }
    {
      let _gde_name = new StringName('merge')
      this.#_bindings.method_merge = internal.variant_get_ptr_builtin_method(
        8,
        _gde_name.opaque,
        717431873
      )
    }
    {
      let _gde_name = new StringName('expand')
      this.#_bindings.method_expand = internal.variant_get_ptr_builtin_method(
        8,
        _gde_name.opaque,
        1355196872
      )
    }
    {
      let _gde_name = new StringName('grow')
      this.#_bindings.method_grow = internal.variant_get_ptr_builtin_method(
        8,
        _gde_name.opaque,
        1578070074
      )
    }
    {
      let _gde_name = new StringName('grow_side')
      this.#_bindings.method_grow_side = internal.variant_get_ptr_builtin_method(
        8,
        _gde_name.opaque,
        3191154199
      )
    }
    {
      let _gde_name = new StringName('grow_individual')
      this.#_bindings.method_grow_individual = internal.variant_get_ptr_builtin_method(
        8,
        _gde_name.opaque,
        1893743416
      )
    }
    {
      let _gde_name = new StringName('abs')
      this.#_bindings.method_abs = internal.variant_get_ptr_builtin_method(
        8,
        _gde_name.opaque,
        1469025700
      )
    }
  }

  
  get_center () {
    let ret = new Vector2i()
    ret.opaque = _call_builtin_method_ptr_ret(
      Rect2i.#_bindings.method_get_center,
      this,
      6,
      []
    )
    return ret
  }
  get_area () {
    let ret
    ret = _call_builtin_method_ptr_ret(
      Rect2i.#_bindings.method_get_area,
      this,
      2,
      []
    )
    return ret
  }
  has_area () {
    let ret
    ret = _call_builtin_method_ptr_ret(
      Rect2i.#_bindings.method_has_area,
      this,
      1,
      []
    )
    return ret
  }
  has_point (_point) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      Rect2i.#_bindings.method_has_point,
      this,
      1,
      [_point]
    )
    return ret
  }
  intersects (_b) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      Rect2i.#_bindings.method_intersects,
      this,
      1,
      [_b]
    )
    return ret
  }
  encloses (_b) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      Rect2i.#_bindings.method_encloses,
      this,
      1,
      [_b]
    )
    return ret
  }
  intersection (_b) {
    let ret = new Rect2i()
    ret.opaque = _call_builtin_method_ptr_ret(
      Rect2i.#_bindings.method_intersection,
      this,
      8,
      [_b]
    )
    return ret
  }
  merge (_b) {
    let ret = new Rect2i()
    ret.opaque = _call_builtin_method_ptr_ret(
      Rect2i.#_bindings.method_merge,
      this,
      8,
      [_b]
    )
    return ret
  }
  expand (_to) {
    let ret = new Rect2i()
    ret.opaque = _call_builtin_method_ptr_ret(
      Rect2i.#_bindings.method_expand,
      this,
      8,
      [_to]
    )
    return ret
  }
  grow (_amount) {
    let ret = new Rect2i()
    ret.opaque = _call_builtin_method_ptr_ret(
      Rect2i.#_bindings.method_grow,
      this,
      8,
      [_amount]
    )
    return ret
  }
  grow_side (_side, _amount) {
    let ret = new Rect2i()
    ret.opaque = _call_builtin_method_ptr_ret(
      Rect2i.#_bindings.method_grow_side,
      this,
      8,
      [_side, _amount]
    )
    return ret
  }
  grow_individual (_left, _top, _right, _bottom) {
    let ret = new Rect2i()
    ret.opaque = _call_builtin_method_ptr_ret(
      Rect2i.#_bindings.method_grow_individual,
      this,
      8,
      [_left, _top, _right, _bottom]
    )
    return ret
  }
  abs () {
    let ret = new Rect2i()
    ret.opaque = _call_builtin_method_ptr_ret(
      Rect2i.#_bindings.method_abs,
      this,
      8,
      []
    )
    return ret
  }
static {
    this._init_bindings();
  }
}