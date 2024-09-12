import * as internal from '__internal__'
import {
  _call_builtin_constructor,
  _call_builtin_method_ptr_ret,
  _call_builtin_method_ptr_no_ret,
  _call_builtin_method_ptr_obj_ret,
} from '@js_godot/core/builtin_ptrcall'
import { GDString } from '@js_godot/variant/gd_string'
import { StringName } from '@js_godot/variant/string_name'
import { GDArray } from '@js_godot/variant/gd_array'
import { PackedByteArray } from '@js_godot/variant/packed_byte_array'
import { GodotObject } from "@js_godot/classes/godot_object";

class _MethodBindings {
  from_variant_constructor
  destructor
  constructor_0
  constructor_1
  constructor_2
  method_size
  method_is_empty
  method_set
  method_push_back
  method_append
  method_append_array
  method_remove_at
  method_insert
  method_fill
  method_resize
  method_clear
  method_has
  method_reverse
  method_slice
  method_to_byte_array
  method_sort
  method_bsearch
  method_duplicate
  method_find
  method_rfind
  method_count
  operator_equal_Variant
  operator_not_equal_Variant
  operator_not_
  operator_in_Dictionary
  operator_in_Array
  operator_equal_PackedStringArray
  operator_not_equal_PackedStringArray
  operator_add_PackedStringArray
}

export class PackedStringArray {
  static #SIZE = 16
  opaque = new Uint8Array(PackedStringArray.#SIZE)

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor (value) {
    if (!value) {
      _call_builtin_constructor(PackedStringArray.#_bindings.constructor_0, this)
    } else if (arguments.length == 1&& arguments[0] instanceof PackedStringArray) {
      let from = arguments[0];
      _call_builtin_constructor(PackedStringArray.#_bindings.constructor_1, this, [
        from
      ])
    } else if (arguments.length == 1&& arguments[0] instanceof GDArray) {
      let from = arguments[0];
      _call_builtin_constructor(PackedStringArray.#_bindings.constructor_2, this, [
        from
      ])
    } else if (value.constructor.name === "Variant") {
      PackedStringArray.#_bindings.from_variant_constructor(this.opaque, value.opaque)
    } else if (value instanceof Uint8Array) {
      this.opaque = value;
    } else if (value instanceof Array) {
      for (let i = 0; i < value.length; i++) {
        this.append(value[i]);
      }
    }
  }
  
  static __init_bindings_constructors_destructor () {
    this.#_bindings.from_variant_constructor = internal.get_variant_to_type_constructor(
      34
    )
    this.#_bindings.constructor_0 = internal.variant_get_ptr_constructor(
      34,
      0
    )
    this.#_bindings.constructor_1 = internal.variant_get_ptr_constructor(
      34,
      1
    )
    this.#_bindings.constructor_2 = internal.variant_get_ptr_constructor(
      34,
      2
    )
    this.#_bindings.destructor = internal.variant_get_ptr_destructor(
      34
    )
  }
  
  static async _init_bindings () {
    if (this.#initialized) {
      return;
    }
    this.#initialized = true;
    this.__init_bindings_constructors_destructor()
    {
      let _gde_name = new StringName('size')
      this.#_bindings.method_size = internal.variant_get_ptr_builtin_method(
        34,
        _gde_name.opaque,
        3173160232
      )
    }
    {
      let _gde_name = new StringName('is_empty')
      this.#_bindings.method_is_empty = internal.variant_get_ptr_builtin_method(
        34,
        _gde_name.opaque,
        3918633141
      )
    }
    {
      let _gde_name = new StringName('set')
      this.#_bindings.method_set = internal.variant_get_ptr_builtin_method(
        34,
        _gde_name.opaque,
        725585539
      )
    }
    {
      let _gde_name = new StringName('push_back')
      this.#_bindings.method_push_back = internal.variant_get_ptr_builtin_method(
        34,
        _gde_name.opaque,
        816187996
      )
    }
    {
      let _gde_name = new StringName('append')
      this.#_bindings.method_append = internal.variant_get_ptr_builtin_method(
        34,
        _gde_name.opaque,
        816187996
      )
    }
    {
      let _gde_name = new StringName('append_array')
      this.#_bindings.method_append_array = internal.variant_get_ptr_builtin_method(
        34,
        _gde_name.opaque,
        1120103966
      )
    }
    {
      let _gde_name = new StringName('remove_at')
      this.#_bindings.method_remove_at = internal.variant_get_ptr_builtin_method(
        34,
        _gde_name.opaque,
        2823966027
      )
    }
    {
      let _gde_name = new StringName('insert')
      this.#_bindings.method_insert = internal.variant_get_ptr_builtin_method(
        34,
        _gde_name.opaque,
        2432393153
      )
    }
    {
      let _gde_name = new StringName('fill')
      this.#_bindings.method_fill = internal.variant_get_ptr_builtin_method(
        34,
        _gde_name.opaque,
        3174917410
      )
    }
    {
      let _gde_name = new StringName('resize')
      this.#_bindings.method_resize = internal.variant_get_ptr_builtin_method(
        34,
        _gde_name.opaque,
        848867239
      )
    }
    {
      let _gde_name = new StringName('clear')
      this.#_bindings.method_clear = internal.variant_get_ptr_builtin_method(
        34,
        _gde_name.opaque,
        3218959716
      )
    }
    {
      let _gde_name = new StringName('has')
      this.#_bindings.method_has = internal.variant_get_ptr_builtin_method(
        34,
        _gde_name.opaque,
        2566493496
      )
    }
    {
      let _gde_name = new StringName('reverse')
      this.#_bindings.method_reverse = internal.variant_get_ptr_builtin_method(
        34,
        _gde_name.opaque,
        3218959716
      )
    }
    {
      let _gde_name = new StringName('slice')
      this.#_bindings.method_slice = internal.variant_get_ptr_builtin_method(
        34,
        _gde_name.opaque,
        2094601407
      )
    }
    {
      let _gde_name = new StringName('to_byte_array')
      this.#_bindings.method_to_byte_array = internal.variant_get_ptr_builtin_method(
        34,
        _gde_name.opaque,
        247621236
      )
    }
    {
      let _gde_name = new StringName('sort')
      this.#_bindings.method_sort = internal.variant_get_ptr_builtin_method(
        34,
        _gde_name.opaque,
        3218959716
      )
    }
    {
      let _gde_name = new StringName('bsearch')
      this.#_bindings.method_bsearch = internal.variant_get_ptr_builtin_method(
        34,
        _gde_name.opaque,
        328976671
      )
    }
    {
      let _gde_name = new StringName('duplicate')
      this.#_bindings.method_duplicate = internal.variant_get_ptr_builtin_method(
        34,
        _gde_name.opaque,
        2991231410
      )
    }
    {
      let _gde_name = new StringName('find')
      this.#_bindings.method_find = internal.variant_get_ptr_builtin_method(
        34,
        _gde_name.opaque,
        1760645412
      )
    }
    {
      let _gde_name = new StringName('rfind')
      this.#_bindings.method_rfind = internal.variant_get_ptr_builtin_method(
        34,
        _gde_name.opaque,
        1760645412
      )
    }
    {
      let _gde_name = new StringName('count')
      this.#_bindings.method_count = internal.variant_get_ptr_builtin_method(
        34,
        _gde_name.opaque,
        2920860731
      )
    }
  }

  
  size () {
    let ret
    ret = _call_builtin_method_ptr_ret(
      PackedStringArray.#_bindings.method_size,
      this,
      2,
      []
    )
    return ret
  }
  is_empty () {
    let ret
    ret = _call_builtin_method_ptr_ret(
      PackedStringArray.#_bindings.method_is_empty,
      this,
      1,
      []
    )
    return ret
  }
  set (_index, _value) {
    _call_builtin_method_ptr_no_ret(
      PackedStringArray.#_bindings.method_set,
      this,
      [_index, _value]
    )
  }
  push_back (_value) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      PackedStringArray.#_bindings.method_push_back,
      this,
      1,
      [_value]
    )
    return ret
  }
  append (_value) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      PackedStringArray.#_bindings.method_append,
      this,
      1,
      [_value]
    )
    return ret
  }
  append_array (_array) {
    _call_builtin_method_ptr_no_ret(
      PackedStringArray.#_bindings.method_append_array,
      this,
      [_array]
    )
  }
  remove_at (_index) {
    _call_builtin_method_ptr_no_ret(
      PackedStringArray.#_bindings.method_remove_at,
      this,
      [_index]
    )
  }
  insert (_at_index, _value) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      PackedStringArray.#_bindings.method_insert,
      this,
      2,
      [_at_index, _value]
    )
    return ret
  }
  fill (_value) {
    _call_builtin_method_ptr_no_ret(
      PackedStringArray.#_bindings.method_fill,
      this,
      [_value]
    )
  }
  resize (_new_size) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      PackedStringArray.#_bindings.method_resize,
      this,
      2,
      [_new_size]
    )
    return ret
  }
  clear () {
    _call_builtin_method_ptr_no_ret(
      PackedStringArray.#_bindings.method_clear,
      this,
      []
    )
  }
  has (_value) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      PackedStringArray.#_bindings.method_has,
      this,
      1,
      [_value]
    )
    return ret
  }
  reverse () {
    _call_builtin_method_ptr_no_ret(
      PackedStringArray.#_bindings.method_reverse,
      this,
      []
    )
  }
  slice (_begin, _end) {
    let ret = new PackedStringArray()
    ret.opaque = _call_builtin_method_ptr_ret(
      PackedStringArray.#_bindings.method_slice,
      this,
      34,
      [_begin, _end]
    )
    return ret
  }
  to_byte_array () {
    let ret = new PackedByteArray()
    ret.opaque = _call_builtin_method_ptr_ret(
      PackedStringArray.#_bindings.method_to_byte_array,
      this,
      29,
      []
    )
    return ret
  }
  sort () {
    _call_builtin_method_ptr_no_ret(
      PackedStringArray.#_bindings.method_sort,
      this,
      []
    )
  }
  bsearch (_value, _before) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      PackedStringArray.#_bindings.method_bsearch,
      this,
      2,
      [_value, _before]
    )
    return ret
  }
  duplicate () {
    let ret = new PackedStringArray()
    ret.opaque = _call_builtin_method_ptr_ret(
      PackedStringArray.#_bindings.method_duplicate,
      this,
      34,
      []
    )
    return ret
  }
  find (_value, _from) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      PackedStringArray.#_bindings.method_find,
      this,
      2,
      [_value, _from]
    )
    return ret
  }
  rfind (_value, _from) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      PackedStringArray.#_bindings.method_rfind,
      this,
      2,
      [_value, _from]
    )
    return ret
  }
  count (_value) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      PackedStringArray.#_bindings.method_count,
      this,
      2,
      [_value]
    )
    return ret
  }
static {
    this._init_bindings();
  }
}