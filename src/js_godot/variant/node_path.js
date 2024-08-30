import * as internal from '__internal__'
import {
  _call_builtin_constructor,
  _call_builtin_method_ptr_ret,
  _call_builtin_method_ptr_no_ret
} from 'src/js_godot/core/builtin_ptrcall'
import { GDString } from 'src/js_godot/variant/gd_string'
import { Variant } from 'src/js_godot/variant/variant'
import { StringName } from 'src/js_godot/variant/string_name'

class _MethodBindings {
  from_variant_constructor
  destructor
  constructor_0
  constructor_1
  constructor_2
  method_is_absolute
  method_get_name_count
  method_get_name
  method_get_subname_count
  method_hash
  method_get_subname
  method_get_concatenated_names
  method_get_concatenated_subnames
  method_slice
  method_get_as_property_path
  method_is_empty
  operator_equal_Variant
  operator_not_equal_Variant
  operator_not_
  operator_equal_NodePath
  operator_not_equal_NodePath
  operator_in_Dictionary
  operator_in_Array
}

export class NodePath {
  static #SIZE = 8
  opaque = new Uint8Array(NodePath.#SIZE)

  static _bindings = new _MethodBindings()

  constructor (from) {
    if (!from) {
      _call_builtin_constructor(NodePath._bindings.constructor_0, this)
    }else if (from instanceof NodePath) {
      _call_builtin_constructor(NodePath._bindings.constructor_1, this, [
        from
      ])
    }else if (from instanceof GDString) {
      _call_builtin_constructor(NodePath._bindings.constructor_2, this, [
        from
      ])
    } else if (from instanceof Variant) {
      NodePath._bindings.from_variant_constructor(this.opaque, from.opaque)
    } else if (typeof from == 'string') {
      _call_builtin_constructor(NodePath._bindings.constructor_2, this, [
        new GDString(from).opaque
      ])
    } 
  }
  
  static __init_bindings_constructors_destructor () {
    this._bindings.from_variant_constructor = internal.get_variant_to_type_constructor(
      Variant.Type.NODE_PATH
    )
    this._bindings.constructor_0 = internal.variant_get_ptr_constructor(
      Variant.Type.NODE_PATH,
      0
    )
    this._bindings.constructor_1 = internal.variant_get_ptr_constructor(
      Variant.Type.NODE_PATH,
      1
    )
    this._bindings.constructor_2 = internal.variant_get_ptr_constructor(
      Variant.Type.NODE_PATH,
      2
    )
    this._bindings.destructor = internal.variant_get_ptr_destructor(
      Variant.Type.NODE_PATH
    )
  }
  
  static _init_bindings () {
    this.__init_bindings_constructors_destructor()
    {
      let _gde_name = new StringName('is_absolute')
      this._bindings.method_is_absolute = internal.variant_get_ptr_builtin_method(
        Variant.Type.NODE_PATH,
        _gde_name.opaque,
        3918633141
      )
    }
    {
      let _gde_name = new StringName('get_name_count')
      this._bindings.method_get_name_count = internal.variant_get_ptr_builtin_method(
        Variant.Type.NODE_PATH,
        _gde_name.opaque,
        3173160232
      )
    }
    {
      let _gde_name = new StringName('get_name')
      this._bindings.method_get_name = internal.variant_get_ptr_builtin_method(
        Variant.Type.NODE_PATH,
        _gde_name.opaque,
        2948586938
      )
    }
    {
      let _gde_name = new StringName('get_subname_count')
      this._bindings.method_get_subname_count = internal.variant_get_ptr_builtin_method(
        Variant.Type.NODE_PATH,
        _gde_name.opaque,
        3173160232
      )
    }
    {
      let _gde_name = new StringName('hash')
      this._bindings.method_hash = internal.variant_get_ptr_builtin_method(
        Variant.Type.NODE_PATH,
        _gde_name.opaque,
        3173160232
      )
    }
    {
      let _gde_name = new StringName('get_subname')
      this._bindings.method_get_subname = internal.variant_get_ptr_builtin_method(
        Variant.Type.NODE_PATH,
        _gde_name.opaque,
        2948586938
      )
    }
    {
      let _gde_name = new StringName('get_concatenated_names')
      this._bindings.method_get_concatenated_names = internal.variant_get_ptr_builtin_method(
        Variant.Type.NODE_PATH,
        _gde_name.opaque,
        1825232092
      )
    }
    {
      let _gde_name = new StringName('get_concatenated_subnames')
      this._bindings.method_get_concatenated_subnames = internal.variant_get_ptr_builtin_method(
        Variant.Type.NODE_PATH,
        _gde_name.opaque,
        1825232092
      )
    }
    {
      let _gde_name = new StringName('slice')
      this._bindings.method_slice = internal.variant_get_ptr_builtin_method(
        Variant.Type.NODE_PATH,
        _gde_name.opaque,
        421628484
      )
    }
    {
      let _gde_name = new StringName('get_as_property_path')
      this._bindings.method_get_as_property_path = internal.variant_get_ptr_builtin_method(
        Variant.Type.NODE_PATH,
        _gde_name.opaque,
        1598598043
      )
    }
    {
      let _gde_name = new StringName('is_empty')
      this._bindings.method_is_empty = internal.variant_get_ptr_builtin_method(
        Variant.Type.NODE_PATH,
        _gde_name.opaque,
        3918633141
      )
    }
  }

  
  is_absolute () {
    let ret
    ret = _call_builtin_method_ptr_ret(
      NodePath._bindings.method_is_absolute,
      this,
      Variant.Type.BOOL,
      []
    )
    return ret
  }
  get_name_count () {
    let ret
    ret = _call_builtin_method_ptr_ret(
      NodePath._bindings.method_get_name_count,
      this,
      Variant.Type.INT,
      []
    )
    return ret
  }
  get_name (_idx) {
    let ret = new StringName()
    ret.opaque = _call_builtin_method_ptr_ret(
      NodePath._bindings.method_get_name,
      this,
      Variant.Type.STRING_NAME,
      [_idx]
    )
    return ret
  }
  get_subname_count () {
    let ret
    ret = _call_builtin_method_ptr_ret(
      NodePath._bindings.method_get_subname_count,
      this,
      Variant.Type.INT,
      []
    )
    return ret
  }
  hash () {
    let ret
    ret = _call_builtin_method_ptr_ret(
      NodePath._bindings.method_hash,
      this,
      Variant.Type.INT,
      []
    )
    return ret
  }
  get_subname (_idx) {
    let ret = new StringName()
    ret.opaque = _call_builtin_method_ptr_ret(
      NodePath._bindings.method_get_subname,
      this,
      Variant.Type.STRING_NAME,
      [_idx]
    )
    return ret
  }
  get_concatenated_names () {
    let ret = new StringName()
    ret.opaque = _call_builtin_method_ptr_ret(
      NodePath._bindings.method_get_concatenated_names,
      this,
      Variant.Type.STRING_NAME,
      []
    )
    return ret
  }
  get_concatenated_subnames () {
    let ret = new StringName()
    ret.opaque = _call_builtin_method_ptr_ret(
      NodePath._bindings.method_get_concatenated_subnames,
      this,
      Variant.Type.STRING_NAME,
      []
    )
    return ret
  }
  slice (_begin, _end) {
    let ret = new NodePath()
    ret.opaque = _call_builtin_method_ptr_ret(
      NodePath._bindings.method_slice,
      this,
      Variant.Type.NODE_PATH,
      [_begin, _end]
    )
    return ret
  }
  get_as_property_path () {
    let ret = new NodePath()
    ret.opaque = _call_builtin_method_ptr_ret(
      NodePath._bindings.method_get_as_property_path,
      this,
      Variant.Type.NODE_PATH,
      []
    )
    return ret
  }
  is_empty () {
    let ret
    ret = _call_builtin_method_ptr_ret(
      NodePath._bindings.method_is_empty,
      this,
      Variant.Type.BOOL,
      []
    )
    return ret
  }
}