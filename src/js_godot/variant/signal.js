import * as internal from '__internal__'
import {
  _call_builtin_constructor,
  _call_builtin_method_ptr_ret,
  _call_builtin_method_ptr_no_ret
} from 'src/js_godot/core/builtin_ptrcall'
import { StringName } from 'src/js_godot/variant/string_name'
import { Callable } from 'src/js_godot/variant/callable'
import { GDArray } from 'src/js_godot/variant/gd_array'
import { Variant } from 'src/js_godot/variant/variant'

class _MethodBindings {
  from_variant_constructor
  destructor
  constructor_0
  constructor_1
  constructor_2
  method_is_null
  method_get_object
  method_get_object_id
  method_get_name
  method_connect
  method_disconnect
  method_is_connected
  method_get_connections
  method_emit
  operator_equal_Variant
  operator_not_equal_Variant
  operator_not_
  operator_equal_Signal
  operator_not_equal_Signal
  operator_in_Dictionary
  operator_in_Array
}

export class Signal {
  static #SIZE = 16
  opaque = new Uint8Array(Signal.#SIZE)

  static _bindings = new _MethodBindings()

  constructor (from) {
    if (!from) {
      _call_builtin_constructor(Signal._bindings.constructor_0, this)
    }else if (from instanceof Signal) {
      _call_builtin_constructor(Signal._bindings.constructor_1, this, [
        from
      ])
    } else if (arguments.length == 2&& arguments[0] instanceof GodotObject&& arguments[1] instanceof StringName) {
      let object = arguments[0];
      let signal = arguments[1];
      _call_builtin_constructor(Signal._bindings.constructor_2, this, [
        object, signal
      ])
    } else if (from instanceof Variant) {
      Signal._bindings.from_variant_constructor(this.opaque, from.opaque)
    } 
  }
  
  static __init_bindings_constructors_destructor () {
    this._bindings.from_variant_constructor = internal.get_variant_to_type_constructor(
      Variant.Type.SIGNAL
    )
    this._bindings.constructor_0 = internal.variant_get_ptr_constructor(
      Variant.Type.SIGNAL,
      0
    )
    this._bindings.constructor_1 = internal.variant_get_ptr_constructor(
      Variant.Type.SIGNAL,
      1
    )
    this._bindings.constructor_2 = internal.variant_get_ptr_constructor(
      Variant.Type.SIGNAL,
      2
    )
    this._bindings.destructor = internal.variant_get_ptr_destructor(
      Variant.Type.SIGNAL
    )
  }
  
  static _init_bindings () {
    this.__init_bindings_constructors_destructor()
    {
      let _gde_name = new StringName('is_null')
      this._bindings.method_is_null = internal.variant_get_ptr_builtin_method(
        Variant.Type.SIGNAL,
        _gde_name.opaque,
        3918633141
      )
    }
    {
      let _gde_name = new StringName('get_object')
      this._bindings.method_get_object = internal.variant_get_ptr_builtin_method(
        Variant.Type.SIGNAL,
        _gde_name.opaque,
        4008621732
      )
    }
    {
      let _gde_name = new StringName('get_object_id')
      this._bindings.method_get_object_id = internal.variant_get_ptr_builtin_method(
        Variant.Type.SIGNAL,
        _gde_name.opaque,
        3173160232
      )
    }
    {
      let _gde_name = new StringName('get_name')
      this._bindings.method_get_name = internal.variant_get_ptr_builtin_method(
        Variant.Type.SIGNAL,
        _gde_name.opaque,
        1825232092
      )
    }
    {
      let _gde_name = new StringName('connect')
      this._bindings.method_connect = internal.variant_get_ptr_builtin_method(
        Variant.Type.SIGNAL,
        _gde_name.opaque,
        979702392
      )
    }
    {
      let _gde_name = new StringName('disconnect')
      this._bindings.method_disconnect = internal.variant_get_ptr_builtin_method(
        Variant.Type.SIGNAL,
        _gde_name.opaque,
        3470848906
      )
    }
    {
      let _gde_name = new StringName('is_connected')
      this._bindings.method_is_connected = internal.variant_get_ptr_builtin_method(
        Variant.Type.SIGNAL,
        _gde_name.opaque,
        4129521963
      )
    }
    {
      let _gde_name = new StringName('get_connections')
      this._bindings.method_get_connections = internal.variant_get_ptr_builtin_method(
        Variant.Type.SIGNAL,
        _gde_name.opaque,
        4144163970
      )
    }
    {
      let _gde_name = new StringName('emit')
      this._bindings.method_emit = internal.variant_get_ptr_builtin_method(
        Variant.Type.SIGNAL,
        _gde_name.opaque,
        3286317445
      )
    }
  }

  
  is_null () {
    let ret
    ret = _call_builtin_method_ptr_ret(
      Signal._bindings.method_is_null,
      this,
      Variant.Type.BOOL,
      []
    )
    return ret
  }
  get_object () {
    let ret
    ret = _call_builtin_method_ptr_obj_ret(
      Signal._bindings.method_get_object,
      this,
      Variant.Type.OBJECT,
      []
    )
    return ret
  }
  get_object_id () {
    let ret
    ret = _call_builtin_method_ptr_ret(
      Signal._bindings.method_get_object_id,
      this,
      Variant.Type.INT,
      []
    )
    return ret
  }
  get_name () {
    let ret = new StringName()
    ret.opaque = _call_builtin_method_ptr_ret(
      Signal._bindings.method_get_name,
      this,
      Variant.Type.STRING_NAME,
      []
    )
    return ret
  }
  connect (_callable, _flags) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      Signal._bindings.method_connect,
      this,
      Variant.Type.INT,
      [_callable, _flags]
    )
    return ret
  }
  disconnect (_callable) {
    _call_builtin_method_ptr_no_ret(
      Signal._bindings.method_disconnect,
      this,
      [_callable]
    )
  }
  is_connected (_callable) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      Signal._bindings.method_is_connected,
      this,
      Variant.Type.BOOL,
      [_callable]
    )
    return ret
  }
  get_connections () {
    let ret = new GDArray()
    ret.opaque = _call_builtin_method_ptr_ret(
      Signal._bindings.method_get_connections,
      this,
      Variant.Type.ARRAY,
      []
    )
    return ret
  }
  emit () {
    _call_builtin_method_ptr_no_ret(
      Signal._bindings.method_emit,
      this,
      []
    )
  }
}