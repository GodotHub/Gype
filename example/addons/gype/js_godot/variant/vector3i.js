import * as internal from '__internal__'
import {
  _call_builtin_constructor,
  _call_builtin_method_ptr_ret,
  _call_builtin_method_ptr_no_ret,
  _call_builtin_method_ptr_obj_ret,
} from '@js_godot/core/builtin_ptrcall'
import { Vector3 } from '@js_godot/variant/vector3'
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
  operator_equal_Vector3i
  operator_not_equal_Vector3i
  operator_less_Vector3i
  operator_less_equal_Vector3i
  operator_greater_Vector3i
  operator_greater_equal_Vector3i
  operator_add_Vector3i
  operator_subtract_Vector3i
  operator_multiply_Vector3i
  operator_divide_Vector3i
  operator_module_Vector3i
  operator_in_Dictionary
  operator_in_Array
}

export class Vector3i {
  static #SIZE = 12
  opaque = new Uint8Array(Vector3i.#SIZE)

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor (value) {
    if (!value) {
      _call_builtin_constructor(Vector3i.#_bindings.constructor_0, this)
    } else if (arguments.length == 1&& arguments[0] instanceof Vector3i) {
      let from = arguments[0];
      _call_builtin_constructor(Vector3i.#_bindings.constructor_1, this, [
        from
      ])
    } else if (arguments.length == 1&& arguments[0] instanceof Vector3) {
      let from = arguments[0];
      _call_builtin_constructor(Vector3i.#_bindings.constructor_2, this, [
        from
      ])
    } else if (arguments.length == 3&& typeof arguments[0] == "number"&& typeof arguments[1] == "number"&& typeof arguments[2] == "number") {
      let x = arguments[0];
      let y = arguments[1];
      let z = arguments[2];
      _call_builtin_constructor(Vector3i.#_bindings.constructor_3, this, [
        x, y, z
      ])
    } else if (value.constructor.name === "Variant") {
      Vector3i.#_bindings.from_variant_constructor(this.opaque, value.opaque)
    } else if (value instanceof Uint8Array) {
      this.opaque = value;
    } 
  }
  
  static __init_bindings_constructors_destructor () {
    this.#_bindings.from_variant_constructor = internal.get_variant_to_type_constructor(
      10
    )
    this.#_bindings.constructor_0 = internal.variant_get_ptr_constructor(
      10,
      0
    )
    this.#_bindings.constructor_1 = internal.variant_get_ptr_constructor(
      10,
      1
    )
    this.#_bindings.constructor_2 = internal.variant_get_ptr_constructor(
      10,
      2
    )
    this.#_bindings.constructor_3 = internal.variant_get_ptr_constructor(
      10,
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
        10,
        _gde_name.opaque,
        3173160232
      )
    }
    {
      let _gde_name = new StringName('max_axis_index')
      this.#_bindings.method_max_axis_index = internal.variant_get_ptr_builtin_method(
        10,
        _gde_name.opaque,
        3173160232
      )
    }
    {
      let _gde_name = new StringName('distance_to')
      this.#_bindings.method_distance_to = internal.variant_get_ptr_builtin_method(
        10,
        _gde_name.opaque,
        1975170430
      )
    }
    {
      let _gde_name = new StringName('distance_squared_to')
      this.#_bindings.method_distance_squared_to = internal.variant_get_ptr_builtin_method(
        10,
        _gde_name.opaque,
        2947717320
      )
    }
    {
      let _gde_name = new StringName('length')
      this.#_bindings.method_length = internal.variant_get_ptr_builtin_method(
        10,
        _gde_name.opaque,
        466405837
      )
    }
    {
      let _gde_name = new StringName('length_squared')
      this.#_bindings.method_length_squared = internal.variant_get_ptr_builtin_method(
        10,
        _gde_name.opaque,
        3173160232
      )
    }
    {
      let _gde_name = new StringName('sign')
      this.#_bindings.method_sign = internal.variant_get_ptr_builtin_method(
        10,
        _gde_name.opaque,
        3729604559
      )
    }
    {
      let _gde_name = new StringName('abs')
      this.#_bindings.method_abs = internal.variant_get_ptr_builtin_method(
        10,
        _gde_name.opaque,
        3729604559
      )
    }
    {
      let _gde_name = new StringName('clamp')
      this.#_bindings.method_clamp = internal.variant_get_ptr_builtin_method(
        10,
        _gde_name.opaque,
        1086892323
      )
    }
    {
      let _gde_name = new StringName('clampi')
      this.#_bindings.method_clampi = internal.variant_get_ptr_builtin_method(
        10,
        _gde_name.opaque,
        1077216921
      )
    }
    {
      let _gde_name = new StringName('snapped')
      this.#_bindings.method_snapped = internal.variant_get_ptr_builtin_method(
        10,
        _gde_name.opaque,
        1989319750
      )
    }
    {
      let _gde_name = new StringName('snappedi')
      this.#_bindings.method_snappedi = internal.variant_get_ptr_builtin_method(
        10,
        _gde_name.opaque,
        2377625641
      )
    }
    {
      let _gde_name = new StringName('min')
      this.#_bindings.method_min = internal.variant_get_ptr_builtin_method(
        10,
        _gde_name.opaque,
        1989319750
      )
    }
    {
      let _gde_name = new StringName('mini')
      this.#_bindings.method_mini = internal.variant_get_ptr_builtin_method(
        10,
        _gde_name.opaque,
        2377625641
      )
    }
    {
      let _gde_name = new StringName('max')
      this.#_bindings.method_max = internal.variant_get_ptr_builtin_method(
        10,
        _gde_name.opaque,
        1989319750
      )
    }
    {
      let _gde_name = new StringName('maxi')
      this.#_bindings.method_maxi = internal.variant_get_ptr_builtin_method(
        10,
        _gde_name.opaque,
        2377625641
      )
    }
  }

  
  min_axis_index () {
    let ret
    ret = _call_builtin_method_ptr_ret(
      Vector3i.#_bindings.method_min_axis_index,
      this,
      2,
      []
    )
    return ret
  }
  max_axis_index () {
    let ret
    ret = _call_builtin_method_ptr_ret(
      Vector3i.#_bindings.method_max_axis_index,
      this,
      2,
      []
    )
    return ret
  }
  distance_to (_to) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      Vector3i.#_bindings.method_distance_to,
      this,
      3,
      [_to]
    )
    return ret
  }
  distance_squared_to (_to) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      Vector3i.#_bindings.method_distance_squared_to,
      this,
      2,
      [_to]
    )
    return ret
  }
  length () {
    let ret
    ret = _call_builtin_method_ptr_ret(
      Vector3i.#_bindings.method_length,
      this,
      3,
      []
    )
    return ret
  }
  length_squared () {
    let ret
    ret = _call_builtin_method_ptr_ret(
      Vector3i.#_bindings.method_length_squared,
      this,
      2,
      []
    )
    return ret
  }
  sign () {
    let ret = new Vector3i()
    ret.opaque = _call_builtin_method_ptr_ret(
      Vector3i.#_bindings.method_sign,
      this,
      10,
      []
    )
    return ret
  }
  abs () {
    let ret = new Vector3i()
    ret.opaque = _call_builtin_method_ptr_ret(
      Vector3i.#_bindings.method_abs,
      this,
      10,
      []
    )
    return ret
  }
  clamp (_min, _max) {
    let ret = new Vector3i()
    ret.opaque = _call_builtin_method_ptr_ret(
      Vector3i.#_bindings.method_clamp,
      this,
      10,
      [_min, _max]
    )
    return ret
  }
  clampi (_min, _max) {
    let ret = new Vector3i()
    ret.opaque = _call_builtin_method_ptr_ret(
      Vector3i.#_bindings.method_clampi,
      this,
      10,
      [_min, _max]
    )
    return ret
  }
  snapped (_step) {
    let ret = new Vector3i()
    ret.opaque = _call_builtin_method_ptr_ret(
      Vector3i.#_bindings.method_snapped,
      this,
      10,
      [_step]
    )
    return ret
  }
  snappedi (_step) {
    let ret = new Vector3i()
    ret.opaque = _call_builtin_method_ptr_ret(
      Vector3i.#_bindings.method_snappedi,
      this,
      10,
      [_step]
    )
    return ret
  }
  min (_with) {
    let ret = new Vector3i()
    ret.opaque = _call_builtin_method_ptr_ret(
      Vector3i.#_bindings.method_min,
      this,
      10,
      [_with]
    )
    return ret
  }
  mini (_with) {
    let ret = new Vector3i()
    ret.opaque = _call_builtin_method_ptr_ret(
      Vector3i.#_bindings.method_mini,
      this,
      10,
      [_with]
    )
    return ret
  }
  max (_with) {
    let ret = new Vector3i()
    ret.opaque = _call_builtin_method_ptr_ret(
      Vector3i.#_bindings.method_max,
      this,
      10,
      [_with]
    )
    return ret
  }
  maxi (_with) {
    let ret = new Vector3i()
    ret.opaque = _call_builtin_method_ptr_ret(
      Vector3i.#_bindings.method_maxi,
      this,
      10,
      [_with]
    )
    return ret
  }
static {
    this._init_bindings();
  }
}