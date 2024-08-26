import * as internal from '__internal__'
import {
  _call_builtin_constructor,
  _call_builtin_method_ptr_ret,
  _call_builtin_method_ptr_no_ret
} from 'src/js_godot/core/builtin_ptrcall'
import { Variant } from 'src/js_godot/variant/variant'
import { StringName } from 'src/js_godot/variant/string_name'
import { GDArray } from 'src/js_godot/variant/gd_array'

class _MethodBindings {
  from_variant_constructor
  destructor
  constructor_0
  constructor_1
  constructor_2
  method_create
  method_callv
  method_is_null
  method_is_custom
  method_is_standard
  method_is_valid
  method_get_object
  method_get_object_id
  method_get_method
  method_get_argument_count
  method_get_bound_arguments_count
  method_get_bound_arguments
  method_hash
  method_bindv
  method_unbind
  method_call
  method_call_deferred
  method_rpc
  method_rpc_id
  method_bind
  operator_equal_Variant
  operator_not_equal_Variant
  operator_not_
  operator_equal_Callable
  operator_not_equal_Callable
  operator_in_Dictionary
  operator_in_Array
}

export class Callable {
  static #SIZE = 8
  opaque = new Uint8Array(Callable.#SIZE)

  static _bindings = new _MethodBindings()

  constructor (from) {
    if (!from) {
      _call_builtin_constructor(Callable._bindings.constructor_0, this)
    } else if (arguments[0] instanceof Callable) {
      let from = arguments[0];
      _call_builtin_constructor(Callable._bindings.constructor_1, this, [
        from
      ])
    } else if (arguments[0] instanceof GodotObject) {
      let object = arguments[0];
      let method = arguments[1];
      _call_builtin_constructor(Callable._bindings.constructor_2, this, [
        object, method
      ])
    } else if (from instanceof Variant) {
      Callable._bindings.from_variant_constructor(this.opaque, from.opaque)
    } 
  }
  
  static __init_bindings_constructors_destructor () {
    this._bindings.from_variant_constructor = internal.get_variant_to_type_constructor(
      Variant.Type.CALLABLE
    )
    this._bindings.constructor_0 = internal.variant_get_ptr_constructor(
      Variant.Type.CALLABLE,
      0
    )
    this._bindings.constructor_1 = internal.variant_get_ptr_constructor(
      Variant.Type.CALLABLE,
      1
    )
    this._bindings.constructor_2 = internal.variant_get_ptr_constructor(
      Variant.Type.CALLABLE,
      2
    )
    this._bindings.destructor = internal.variant_get_ptr_destructor(
      Variant.Type.CALLABLE
    )
  }
  
  static _init_bindings () {
    this.__init_bindings_constructors_destructor()
    {
      let _gde_name = new StringName('create')
      this._bindings.method_create = internal.variant_get_ptr_builtin_method(
        Variant.Type.CALLABLE,
        _gde_name.opaque,
        1709381114
      )
    }
    {
      let _gde_name = new StringName('callv')
      this._bindings.method_callv = internal.variant_get_ptr_builtin_method(
        Variant.Type.CALLABLE,
        _gde_name.opaque,
        413578926
      )
    }
    {
      let _gde_name = new StringName('is_null')
      this._bindings.method_is_null = internal.variant_get_ptr_builtin_method(
        Variant.Type.CALLABLE,
        _gde_name.opaque,
        3918633141
      )
    }
    {
      let _gde_name = new StringName('is_custom')
      this._bindings.method_is_custom = internal.variant_get_ptr_builtin_method(
        Variant.Type.CALLABLE,
        _gde_name.opaque,
        3918633141
      )
    }
    {
      let _gde_name = new StringName('is_standard')
      this._bindings.method_is_standard = internal.variant_get_ptr_builtin_method(
        Variant.Type.CALLABLE,
        _gde_name.opaque,
        3918633141
      )
    }
    {
      let _gde_name = new StringName('is_valid')
      this._bindings.method_is_valid = internal.variant_get_ptr_builtin_method(
        Variant.Type.CALLABLE,
        _gde_name.opaque,
        3918633141
      )
    }
    {
      let _gde_name = new StringName('get_object')
      this._bindings.method_get_object = internal.variant_get_ptr_builtin_method(
        Variant.Type.CALLABLE,
        _gde_name.opaque,
        4008621732
      )
    }
    {
      let _gde_name = new StringName('get_object_id')
      this._bindings.method_get_object_id = internal.variant_get_ptr_builtin_method(
        Variant.Type.CALLABLE,
        _gde_name.opaque,
        3173160232
      )
    }
    {
      let _gde_name = new StringName('get_method')
      this._bindings.method_get_method = internal.variant_get_ptr_builtin_method(
        Variant.Type.CALLABLE,
        _gde_name.opaque,
        1825232092
      )
    }
    {
      let _gde_name = new StringName('get_argument_count')
      this._bindings.method_get_argument_count = internal.variant_get_ptr_builtin_method(
        Variant.Type.CALLABLE,
        _gde_name.opaque,
        3173160232
      )
    }
    {
      let _gde_name = new StringName('get_bound_arguments_count')
      this._bindings.method_get_bound_arguments_count = internal.variant_get_ptr_builtin_method(
        Variant.Type.CALLABLE,
        _gde_name.opaque,
        3173160232
      )
    }
    {
      let _gde_name = new StringName('get_bound_arguments')
      this._bindings.method_get_bound_arguments = internal.variant_get_ptr_builtin_method(
        Variant.Type.CALLABLE,
        _gde_name.opaque,
        4144163970
      )
    }
    {
      let _gde_name = new StringName('hash')
      this._bindings.method_hash = internal.variant_get_ptr_builtin_method(
        Variant.Type.CALLABLE,
        _gde_name.opaque,
        3173160232
      )
    }
    {
      let _gde_name = new StringName('bindv')
      this._bindings.method_bindv = internal.variant_get_ptr_builtin_method(
        Variant.Type.CALLABLE,
        _gde_name.opaque,
        3564560322
      )
    }
    {
      let _gde_name = new StringName('unbind')
      this._bindings.method_unbind = internal.variant_get_ptr_builtin_method(
        Variant.Type.CALLABLE,
        _gde_name.opaque,
        755001590
      )
    }
    {
      let _gde_name = new StringName('call')
      this._bindings.method_call = internal.variant_get_ptr_builtin_method(
        Variant.Type.CALLABLE,
        _gde_name.opaque,
        3643564216
      )
    }
    {
      let _gde_name = new StringName('call_deferred')
      this._bindings.method_call_deferred = internal.variant_get_ptr_builtin_method(
        Variant.Type.CALLABLE,
        _gde_name.opaque,
        3286317445
      )
    }
    {
      let _gde_name = new StringName('rpc')
      this._bindings.method_rpc = internal.variant_get_ptr_builtin_method(
        Variant.Type.CALLABLE,
        _gde_name.opaque,
        3286317445
      )
    }
    {
      let _gde_name = new StringName('rpc_id')
      this._bindings.method_rpc_id = internal.variant_get_ptr_builtin_method(
        Variant.Type.CALLABLE,
        _gde_name.opaque,
        2270047679
      )
    }
    {
      let _gde_name = new StringName('bind')
      this._bindings.method_bind = internal.variant_get_ptr_builtin_method(
        Variant.Type.CALLABLE,
        _gde_name.opaque,
        3224143119
      )
    }
  }

  
  create (_variant, _method) {
    let ret = new Callable()
    ret.opaque = _call_builtin_method_ptr_ret(
      Callable._bindings.method_create,
      this,
      Variant.Type.CALLABLE,
      [_variant, _method]
    )
    return ret
  }
  callv (_arguments) {
    let ret = new Variant()
    ret.opaque = _call_builtin_method_ptr_ret(
      Callable._bindings.method_callv,
      this,
      Variant.Type.VARIANT,
      [_arguments]
    )
    return ret
  }
  is_null () {
    let ret
    ret = _call_builtin_method_ptr_ret(
      Callable._bindings.method_is_null,
      this,
      Variant.Type.BOOL,
      []
    )
    return ret
  }
  is_custom () {
    let ret
    ret = _call_builtin_method_ptr_ret(
      Callable._bindings.method_is_custom,
      this,
      Variant.Type.BOOL,
      []
    )
    return ret
  }
  is_standard () {
    let ret
    ret = _call_builtin_method_ptr_ret(
      Callable._bindings.method_is_standard,
      this,
      Variant.Type.BOOL,
      []
    )
    return ret
  }
  is_valid () {
    let ret
    ret = _call_builtin_method_ptr_ret(
      Callable._bindings.method_is_valid,
      this,
      Variant.Type.BOOL,
      []
    )
    return ret
  }
  get_object () {
    let ret
    ret = _call_builtin_method_ptr_obj_ret(
      Callable._bindings.method_get_object,
      this,
      Variant.Type.OBJECT,
      []
    )
    return ret
  }
  get_object_id () {
    let ret
    ret = _call_builtin_method_ptr_ret(
      Callable._bindings.method_get_object_id,
      this,
      Variant.Type.INT,
      []
    )
    return ret
  }
  get_method () {
    let ret = new StringName()
    ret.opaque = _call_builtin_method_ptr_ret(
      Callable._bindings.method_get_method,
      this,
      Variant.Type.STRING_NAME,
      []
    )
    return ret
  }
  get_argument_count () {
    let ret
    ret = _call_builtin_method_ptr_ret(
      Callable._bindings.method_get_argument_count,
      this,
      Variant.Type.INT,
      []
    )
    return ret
  }
  get_bound_arguments_count () {
    let ret
    ret = _call_builtin_method_ptr_ret(
      Callable._bindings.method_get_bound_arguments_count,
      this,
      Variant.Type.INT,
      []
    )
    return ret
  }
  get_bound_arguments () {
    let ret = new GDArray()
    ret.opaque = _call_builtin_method_ptr_ret(
      Callable._bindings.method_get_bound_arguments,
      this,
      Variant.Type.ARRAY,
      []
    )
    return ret
  }
  hash () {
    let ret
    ret = _call_builtin_method_ptr_ret(
      Callable._bindings.method_hash,
      this,
      Variant.Type.INT,
      []
    )
    return ret
  }
  bindv (_arguments) {
    let ret = new Callable()
    ret.opaque = _call_builtin_method_ptr_ret(
      Callable._bindings.method_bindv,
      this,
      Variant.Type.CALLABLE,
      [_arguments]
    )
    return ret
  }
  unbind (_argcount) {
    let ret = new Callable()
    ret.opaque = _call_builtin_method_ptr_ret(
      Callable._bindings.method_unbind,
      this,
      Variant.Type.CALLABLE,
      [_argcount]
    )
    return ret
  }
  call () {
    let ret = new Variant()
    ret.opaque = _call_builtin_method_ptr_ret(
      Callable._bindings.method_call,
      this,
      Variant.Type.VARIANT,
      []
    )
    return ret
  }
  call_deferred () {
    _call_builtin_method_ptr_no_ret(
      Callable._bindings.method_call_deferred,
      this,
      []
    )
  }
  rpc () {
    _call_builtin_method_ptr_no_ret(
      Callable._bindings.method_rpc,
      this,
      []
    )
  }
  rpc_id (_peer_id) {
    _call_builtin_method_ptr_no_ret(
      Callable._bindings.method_rpc_id,
      this,
      [_peer_id]
    )
  }
  bind () {
    let ret = new Callable()
    ret.opaque = _call_builtin_method_ptr_ret(
      Callable._bindings.method_bind,
      this,
      Variant.Type.CALLABLE,
      []
    )
    return ret
  }
}