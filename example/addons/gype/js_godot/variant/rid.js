import * as internal from '__internal__'
import {
  _call_builtin_constructor,
  _call_builtin_method_ptr_ret,
  _call_builtin_method_ptr_no_ret
} from '@js_godot/core/builtin_ptrcall'
import { StringName } from '@js_godot/variant/string_name'

class _MethodBindings {
  from_variant_constructor
  constructor_0
  constructor_1
  method_is_valid
  method_get_id
  operator_equal_Variant
  operator_not_equal_Variant
  operator_not_
  operator_equal_RID
  operator_not_equal_RID
  operator_less_RID
  operator_less_equal_RID
  operator_greater_RID
  operator_greater_equal_RID
}

export class RID {
  static #SIZE = 8
  opaque = new Uint8Array(RID.#SIZE)

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor (from) {
    if (!from) {
      _call_builtin_constructor(RID._bindings.constructor_0, this)
    }else if (from instanceof RID) {
      _call_builtin_constructor(RID._bindings.constructor_1, this, [
        from
      ])
    } else if (from.constructor.name === "Variant") {
      RID._bindings.from_variant_constructor(this.opaque, from.opaque)
    } 
  }
  
  static __init_bindings_constructors_destructor () {
    this._bindings.from_variant_constructor = internal.get_variant_to_type_constructor(
      23
    )
    this._bindings.constructor_0 = internal.variant_get_ptr_constructor(
      23,
      0
    )
    this._bindings.constructor_1 = internal.variant_get_ptr_constructor(
      23,
      1
    )
  }
  
  static async _init_bindings () {
    if (this.#initialized) {
      return;
    }
    this.#initialized = true;
    this.__init_bindings_constructors_destructor()
    {
      let _gde_name = new StringName('is_valid')
      this._bindings.method_is_valid = internal.variant_get_ptr_builtin_method(
        23,
        _gde_name.opaque,
        3918633141
      )
    }
    {
      let _gde_name = new StringName('get_id')
      this._bindings.method_get_id = internal.variant_get_ptr_builtin_method(
        23,
        _gde_name.opaque,
        3173160232
      )
    }
  }

  
  is_valid () {
    let ret
    ret = _call_builtin_method_ptr_ret(
      RID._bindings.method_is_valid,
      this,
      1,
      []
    )
    return ret
  }
  get_id () {
    let ret
    ret = _call_builtin_method_ptr_ret(
      RID._bindings.method_get_id,
      this,
      2,
      []
    )
    return ret
  }
static {
    this._init_bindings();
  }
}