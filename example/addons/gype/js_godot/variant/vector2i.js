import * as internal from '__internal__'
import {
  _call_builtin_constructor,
  _call_builtin_method_ptr_ret,
  _call_builtin_method_ptr_no_ret,
  _call_builtin_method_ptr_obj_ret,
} from '@js_godot/core/builtin_ptrcall'
import { StringName } from '@js_godot/variant/string_name'
import { Vector2 } from '@js_godot/variant/vector2'
import { GodotObject } from "@js_godot/classes/godot_object";

class _MethodBindings {
  from_variant_constructor
  constructor_0
  constructor_1
  constructor_2
  constructor_3
  method_aspect
  method_max_axis_index
  method_min_axis_index
  method_distance_to
  method_distance_squared_to
  method_length
  method_length_squared
  method_sign
  method_abs
  method_clamp
  method_clampi
  method_snapped
  method_snappedi
  method_min
  method_mini
  method_max
  method_maxi
  operator_equal_Variant
  operator_not_equal_Variant
  operator_negate_
  operator_positive_
  operator_not_
  operator_multiply_int
  operator_divide_int
  operator_module_int
  operator_multiply_float
  operator_divide_float
  operator_equal_Vector2i
  operator_not_equal_Vector2i
  operator_less_Vector2i
  operator_less_equal_Vector2i
  operator_greater_Vector2i
  operator_greater_equal_Vector2i
  operator_add_Vector2i
  operator_subtract_Vector2i
  operator_multiply_Vector2i
  operator_divide_Vector2i
  operator_module_Vector2i
  operator_in_Dictionary
  operator_in_Array
}

export class Vector2i {
  static #SIZE = 8
  opaque = new Uint8Array(Vector2i.#SIZE)

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor (value) {
    if (!value) {
      _call_builtin_constructor(Vector2i.#_bindings.constructor_0, this)
    } else if (arguments.length == 1&& arguments[0] instanceof Vector2i) {
      let from = arguments[0];
      _call_builtin_constructor(Vector2i.#_bindings.constructor_1, this, [
        from
      ])
    } else if (arguments.length == 1&& arguments[0] instanceof Vector2) {
      let from = arguments[0];
      _call_builtin_constructor(Vector2i.#_bindings.constructor_2, this, [
        from
      ])
    } else if (arguments.length == 2&& typeof arguments[0] == "number"&& typeof arguments[1] == "number") {
      let x = arguments[0];
      let y = arguments[1];
      _call_builtin_constructor(Vector2i.#_bindings.constructor_3, this, [
        x, y
      ])
    } else if (value.constructor.name === "Variant") {
      Vector2i.#_bindings.from_variant_constructor(this.opaque, value.opaque)
    } else if (value instanceof Uint8Array) {
      this.opaque = value;
    } 
  }
  
  static __init_bindings_constructors_destructor () {
    this.#_bindings.from_variant_constructor = internal.get_variant_to_type_constructor(
      6
    )
    this.#_bindings.constructor_0 = internal.variant_get_ptr_constructor(
      6,
      0
    )
    this.#_bindings.constructor_1 = internal.variant_get_ptr_constructor(
      6,
      1
    )
    this.#_bindings.constructor_2 = internal.variant_get_ptr_constructor(
      6,
      2
    )
    this.#_bindings.constructor_3 = internal.variant_get_ptr_constructor(
      6,
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
      let _gde_name = new StringName('aspect')
      this.#_bindings.method_aspect = internal.variant_get_ptr_builtin_method(
        6,
        _gde_name.opaque,
        466405837
      )
    }
    {
      let _gde_name = new StringName('max_axis_index')
      this.#_bindings.method_max_axis_index = internal.variant_get_ptr_builtin_method(
        6,
        _gde_name.opaque,
        3173160232
      )
    }
    {
      let _gde_name = new StringName('min_axis_index')
      this.#_bindings.method_min_axis_index = internal.variant_get_ptr_builtin_method(
        6,
        _gde_name.opaque,
        3173160232
      )
    }
    {
      let _gde_name = new StringName('distance_to')
      this.#_bindings.method_distance_to = internal.variant_get_ptr_builtin_method(
        6,
        _gde_name.opaque,
        707501214
      )
    }
    {
      let _gde_name = new StringName('distance_squared_to')
      this.#_bindings.method_distance_squared_to = internal.variant_get_ptr_builtin_method(
        6,
        _gde_name.opaque,
        1130029528
      )
    }
    {
      let _gde_name = new StringName('length')
      this.#_bindings.method_length = internal.variant_get_ptr_builtin_method(
        6,
        _gde_name.opaque,
        466405837
      )
    }
    {
      let _gde_name = new StringName('length_squared')
      this.#_bindings.method_length_squared = internal.variant_get_ptr_builtin_method(
        6,
        _gde_name.opaque,
        3173160232
      )
    }
    {
      let _gde_name = new StringName('sign')
      this.#_bindings.method_sign = internal.variant_get_ptr_builtin_method(
        6,
        _gde_name.opaque,
        3444277866
      )
    }
    {
      let _gde_name = new StringName('abs')
      this.#_bindings.method_abs = internal.variant_get_ptr_builtin_method(
        6,
        _gde_name.opaque,
        3444277866
      )
    }
    {
      let _gde_name = new StringName('clamp')
      this.#_bindings.method_clamp = internal.variant_get_ptr_builtin_method(
        6,
        _gde_name.opaque,
        186568249
      )
    }
    {
      let _gde_name = new StringName('clampi')
      this.#_bindings.method_clampi = internal.variant_get_ptr_builtin_method(
        6,
        _gde_name.opaque,
        3686769569
      )
    }
    {
      let _gde_name = new StringName('snapped')
      this.#_bindings.method_snapped = internal.variant_get_ptr_builtin_method(
        6,
        _gde_name.opaque,
        1735278196
      )
    }
    {
      let _gde_name = new StringName('snappedi')
      this.#_bindings.method_snappedi = internal.variant_get_ptr_builtin_method(
        6,
        _gde_name.opaque,
        2161988953
      )
    }
    {
      let _gde_name = new StringName('min')
      this.#_bindings.method_min = internal.variant_get_ptr_builtin_method(
        6,
        _gde_name.opaque,
        1735278196
      )
    }
    {
      let _gde_name = new StringName('mini')
      this.#_bindings.method_mini = internal.variant_get_ptr_builtin_method(
        6,
        _gde_name.opaque,
        2161988953
      )
    }
    {
      let _gde_name = new StringName('max')
      this.#_bindings.method_max = internal.variant_get_ptr_builtin_method(
        6,
        _gde_name.opaque,
        1735278196
      )
    }
    {
      let _gde_name = new StringName('maxi')
      this.#_bindings.method_maxi = internal.variant_get_ptr_builtin_method(
        6,
        _gde_name.opaque,
        2161988953
      )
    }
  }

  
  aspect () {
    let ret
    ret = _call_builtin_method_ptr_ret(
      Vector2i.#_bindings.method_aspect,
      this,
      3,
      []
    )
    return ret
  }
  max_axis_index () {
    let ret
    ret = _call_builtin_method_ptr_ret(
      Vector2i.#_bindings.method_max_axis_index,
      this,
      2,
      []
    )
    return ret
  }
  min_axis_index () {
    let ret
    ret = _call_builtin_method_ptr_ret(
      Vector2i.#_bindings.method_min_axis_index,
      this,
      2,
      []
    )
    return ret
  }
  distance_to (_to) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      Vector2i.#_bindings.method_distance_to,
      this,
      3,
      [_to]
    )
    return ret
  }
  distance_squared_to (_to) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      Vector2i.#_bindings.method_distance_squared_to,
      this,
      2,
      [_to]
    )
    return ret
  }
  length () {
    let ret
    ret = _call_builtin_method_ptr_ret(
      Vector2i.#_bindings.method_length,
      this,
      3,
      []
    )
    return ret
  }
  length_squared () {
    let ret
    ret = _call_builtin_method_ptr_ret(
      Vector2i.#_bindings.method_length_squared,
      this,
      2,
      []
    )
    return ret
  }
  sign () {
    let ret = new Vector2i()
    ret.opaque = _call_builtin_method_ptr_ret(
      Vector2i.#_bindings.method_sign,
      this,
      6,
      []
    )
    return ret
  }
  abs () {
    let ret = new Vector2i()
    ret.opaque = _call_builtin_method_ptr_ret(
      Vector2i.#_bindings.method_abs,
      this,
      6,
      []
    )
    return ret
  }
  clamp (_min, _max) {
    let ret = new Vector2i()
    ret.opaque = _call_builtin_method_ptr_ret(
      Vector2i.#_bindings.method_clamp,
      this,
      6,
      [_min, _max]
    )
    return ret
  }
  clampi (_min, _max) {
    let ret = new Vector2i()
    ret.opaque = _call_builtin_method_ptr_ret(
      Vector2i.#_bindings.method_clampi,
      this,
      6,
      [_min, _max]
    )
    return ret
  }
  snapped (_step) {
    let ret = new Vector2i()
    ret.opaque = _call_builtin_method_ptr_ret(
      Vector2i.#_bindings.method_snapped,
      this,
      6,
      [_step]
    )
    return ret
  }
  snappedi (_step) {
    let ret = new Vector2i()
    ret.opaque = _call_builtin_method_ptr_ret(
      Vector2i.#_bindings.method_snappedi,
      this,
      6,
      [_step]
    )
    return ret
  }
  min (_with) {
    let ret = new Vector2i()
    ret.opaque = _call_builtin_method_ptr_ret(
      Vector2i.#_bindings.method_min,
      this,
      6,
      [_with]
    )
    return ret
  }
  mini (_with) {
    let ret = new Vector2i()
    ret.opaque = _call_builtin_method_ptr_ret(
      Vector2i.#_bindings.method_mini,
      this,
      6,
      [_with]
    )
    return ret
  }
  max (_with) {
    let ret = new Vector2i()
    ret.opaque = _call_builtin_method_ptr_ret(
      Vector2i.#_bindings.method_max,
      this,
      6,
      [_with]
    )
    return ret
  }
  maxi (_with) {
    let ret = new Vector2i()
    ret.opaque = _call_builtin_method_ptr_ret(
      Vector2i.#_bindings.method_maxi,
      this,
      6,
      [_with]
    )
    return ret
  }
static {
    this._init_bindings();
  }
}