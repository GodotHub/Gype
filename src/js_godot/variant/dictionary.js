import * as internal from '__internal__'
import {
  _call_builtin_constructor,
  _call_builtin_method_ptr_ret,
  _call_builtin_method_ptr_no_ret
} from 'src/js_godot/core/builtin_ptrcall'
import { Variant } from 'src/js_godot/variant/variant'
import { GDArray } from 'src/js_godot/variant/gd_array'

class _MethodBindings {
  from_variant_constructor
  destructor
  constructor_0
  constructor_1
  method_size
  method_is_empty
  method_clear
  method_merge
  method_merged
  method_has
  method_has_all
  method_find_key
  method_erase
  method_hash
  method_keys
  method_values
  method_duplicate
  method_get
  method_get_or_add
  method_make_read_only
  method_is_read_only
  method_recursive_equal
  operator_equal_Variant
  operator_not_equal_Variant
  operator_not_
  operator_equal_Dictionary
  operator_not_equal_Dictionary
  operator_in_Dictionary
  operator_in_Array
}

export class Dictionary {
  static #SIZE = 8
  opaque = new Uint8Array(Dictionary.#SIZE)

  static _bindings = new _MethodBindings()

  constructor (from) {
    if (!from) {
      _call_builtin_constructor(Dictionary._bindings.constructor_0, this)
    } else if (arguments[0] instanceof Dictionary) {
      let from = arguments[0];
      _call_builtin_constructor(Dictionary._bindings.constructor_1, this, [
        from
      ])
    } else if (from instanceof Variant) {
      Dictionary._bindings.from_variant_constructor(this.opaque, from.opaque)
    } 
  }
  
  static __init_bindings_constructors_destructor () {
    this._bindings.from_variant_constructor = internal.get_variant_to_type_constructor(
      Variant.Type.DICTIONARY
    )
    this._bindings.constructor_0 = internal.variant_get_ptr_constructor(
      Variant.Type.DICTIONARY,
      0
    )
    this._bindings.constructor_1 = internal.variant_get_ptr_constructor(
      Variant.Type.DICTIONARY,
      1
    )
    this._bindings.destructor = internal.variant_get_ptr_destructor(
      Variant.Type.DICTIONARY
    )
  }
  
  static _init_bindings () {
    this.__init_bindings_constructors_destructor()
    {
      let _gde_name = new StringName('size')
      this._bindings.method_size = internal.variant_get_ptr_builtin_method(
        Variant.Type.DICTIONARY,
        _gde_name.opaque,
        3173160232
      )
    }
    {
      let _gde_name = new StringName('is_empty')
      this._bindings.method_is_empty = internal.variant_get_ptr_builtin_method(
        Variant.Type.DICTIONARY,
        _gde_name.opaque,
        3918633141
      )
    }
    {
      let _gde_name = new StringName('clear')
      this._bindings.method_clear = internal.variant_get_ptr_builtin_method(
        Variant.Type.DICTIONARY,
        _gde_name.opaque,
        3218959716
      )
    }
    {
      let _gde_name = new StringName('merge')
      this._bindings.method_merge = internal.variant_get_ptr_builtin_method(
        Variant.Type.DICTIONARY,
        _gde_name.opaque,
        2079548978
      )
    }
    {
      let _gde_name = new StringName('merged')
      this._bindings.method_merged = internal.variant_get_ptr_builtin_method(
        Variant.Type.DICTIONARY,
        _gde_name.opaque,
        2271165639
      )
    }
    {
      let _gde_name = new StringName('has')
      this._bindings.method_has = internal.variant_get_ptr_builtin_method(
        Variant.Type.DICTIONARY,
        _gde_name.opaque,
        3680194679
      )
    }
    {
      let _gde_name = new StringName('has_all')
      this._bindings.method_has_all = internal.variant_get_ptr_builtin_method(
        Variant.Type.DICTIONARY,
        _gde_name.opaque,
        2988181878
      )
    }
    {
      let _gde_name = new StringName('find_key')
      this._bindings.method_find_key = internal.variant_get_ptr_builtin_method(
        Variant.Type.DICTIONARY,
        _gde_name.opaque,
        1988825835
      )
    }
    {
      let _gde_name = new StringName('erase')
      this._bindings.method_erase = internal.variant_get_ptr_builtin_method(
        Variant.Type.DICTIONARY,
        _gde_name.opaque,
        1776646889
      )
    }
    {
      let _gde_name = new StringName('hash')
      this._bindings.method_hash = internal.variant_get_ptr_builtin_method(
        Variant.Type.DICTIONARY,
        _gde_name.opaque,
        3173160232
      )
    }
    {
      let _gde_name = new StringName('keys')
      this._bindings.method_keys = internal.variant_get_ptr_builtin_method(
        Variant.Type.DICTIONARY,
        _gde_name.opaque,
        4144163970
      )
    }
    {
      let _gde_name = new StringName('values')
      this._bindings.method_values = internal.variant_get_ptr_builtin_method(
        Variant.Type.DICTIONARY,
        _gde_name.opaque,
        4144163970
      )
    }
    {
      let _gde_name = new StringName('duplicate')
      this._bindings.method_duplicate = internal.variant_get_ptr_builtin_method(
        Variant.Type.DICTIONARY,
        _gde_name.opaque,
        830099069
      )
    }
    {
      let _gde_name = new StringName('get')
      this._bindings.method_get = internal.variant_get_ptr_builtin_method(
        Variant.Type.DICTIONARY,
        _gde_name.opaque,
        2205440559
      )
    }
    {
      let _gde_name = new StringName('get_or_add')
      this._bindings.method_get_or_add = internal.variant_get_ptr_builtin_method(
        Variant.Type.DICTIONARY,
        _gde_name.opaque,
        1052551076
      )
    }
    {
      let _gde_name = new StringName('make_read_only')
      this._bindings.method_make_read_only = internal.variant_get_ptr_builtin_method(
        Variant.Type.DICTIONARY,
        _gde_name.opaque,
        3218959716
      )
    }
    {
      let _gde_name = new StringName('is_read_only')
      this._bindings.method_is_read_only = internal.variant_get_ptr_builtin_method(
        Variant.Type.DICTIONARY,
        _gde_name.opaque,
        3918633141
      )
    }
    {
      let _gde_name = new StringName('recursive_equal')
      this._bindings.method_recursive_equal = internal.variant_get_ptr_builtin_method(
        Variant.Type.DICTIONARY,
        _gde_name.opaque,
        1404404751
      )
    }
  }

  
  size () {
    let ret
    ret = _call_builtin_method_ptr_ret(
      Dictionary._bindings.method_size,
      this,
      Variant.Type.INT,
      []
    )
    return ret
  }
  is_empty () {
    let ret
    ret = _call_builtin_method_ptr_ret(
      Dictionary._bindings.method_is_empty,
      this,
      Variant.Type.BOOL,
      []
    )
    return ret
  }
  clear () {
    _call_builtin_method_ptr_no_ret(
      Dictionary._bindings.method_clear,
      this,
      []
    )
  }
  merge (_dictionary, _overwrite) {
    _call_builtin_method_ptr_no_ret(
      Dictionary._bindings.method_merge,
      this,
      [_dictionary, _overwrite]
    )
  }
  merged (_dictionary, _overwrite) {
    let ret = new Dictionary()
    ret.opaque = _call_builtin_method_ptr_ret(
      Dictionary._bindings.method_merged,
      this,
      Variant.Type.DICTIONARY,
      [_dictionary, _overwrite]
    )
    return ret
  }
  has (_key) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      Dictionary._bindings.method_has,
      this,
      Variant.Type.BOOL,
      [_key]
    )
    return ret
  }
  has_all (_keys) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      Dictionary._bindings.method_has_all,
      this,
      Variant.Type.BOOL,
      [_keys]
    )
    return ret
  }
  find_key (_value) {
    let ret = new Variant()
    ret.opaque = _call_builtin_method_ptr_ret(
      Dictionary._bindings.method_find_key,
      this,
      Variant.Type.VARIANT,
      [_value]
    )
    return ret
  }
  erase (_key) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      Dictionary._bindings.method_erase,
      this,
      Variant.Type.BOOL,
      [_key]
    )
    return ret
  }
  hash () {
    let ret
    ret = _call_builtin_method_ptr_ret(
      Dictionary._bindings.method_hash,
      this,
      Variant.Type.INT,
      []
    )
    return ret
  }
  keys () {
    let ret = new GDArray()
    ret.opaque = _call_builtin_method_ptr_ret(
      Dictionary._bindings.method_keys,
      this,
      Variant.Type.ARRAY,
      []
    )
    return ret
  }
  values () {
    let ret = new GDArray()
    ret.opaque = _call_builtin_method_ptr_ret(
      Dictionary._bindings.method_values,
      this,
      Variant.Type.ARRAY,
      []
    )
    return ret
  }
  duplicate (_deep) {
    let ret = new Dictionary()
    ret.opaque = _call_builtin_method_ptr_ret(
      Dictionary._bindings.method_duplicate,
      this,
      Variant.Type.DICTIONARY,
      [_deep]
    )
    return ret
  }
  get (_key, _default) {
    let ret = new Variant()
    ret.opaque = _call_builtin_method_ptr_ret(
      Dictionary._bindings.method_get,
      this,
      Variant.Type.VARIANT,
      [_key, _default]
    )
    return ret
  }
  get_or_add (_key, _default) {
    let ret = new Variant()
    ret.opaque = _call_builtin_method_ptr_ret(
      Dictionary._bindings.method_get_or_add,
      this,
      Variant.Type.VARIANT,
      [_key, _default]
    )
    return ret
  }
  make_read_only () {
    _call_builtin_method_ptr_no_ret(
      Dictionary._bindings.method_make_read_only,
      this,
      []
    )
  }
  is_read_only () {
    let ret
    ret = _call_builtin_method_ptr_ret(
      Dictionary._bindings.method_is_read_only,
      this,
      Variant.Type.BOOL,
      []
    )
    return ret
  }
  recursive_equal (_dictionary, _recursion_count) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      Dictionary._bindings.method_recursive_equal,
      this,
      Variant.Type.BOOL,
      [_dictionary, _recursion_count]
    )
    return ret
  }
}