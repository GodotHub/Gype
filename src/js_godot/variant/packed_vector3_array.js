import * as internal from '__internal__'
import {
  _call_builtin_constructor,
  _call_builtin_method_ptr_ret,
  _call_builtin_method_ptr_no_ret
} from 'src/js_godot/core/builtin_ptrcall'
import { StringName } from 'src/js_godot/variant/string_name'
import { GDArray } from 'src/js_godot/variant/gd_array'
import { Vector3 } from 'src/js_godot/variant/vector3'
import { Variant } from 'src/js_godot/variant/variant'
import { PackedByteArray } from 'src/js_godot/variant/packed_byte_array'

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
  operator_multiply_Transform3D
  operator_in_Dictionary
  operator_in_Array
  operator_equal_PackedVector3Array
  operator_not_equal_PackedVector3Array
  operator_add_PackedVector3Array
}

export class PackedVector3Array {
  static #SIZE = 16
  opaque = new Uint8Array(PackedVector3Array.#SIZE)

  static _bindings = new _MethodBindings()

  constructor (from) {
    if (!from) {
      _call_builtin_constructor(PackedVector3Array._bindings.constructor_0, this)
    }else if (from instanceof PackedVector3Array) {
      _call_builtin_constructor(PackedVector3Array._bindings.constructor_1, this, [
        from
      ])
    }else if (from instanceof GDArray) {
      _call_builtin_constructor(PackedVector3Array._bindings.constructor_2, this, [
        from
      ])
    } else if (from instanceof Variant) {
      PackedVector3Array._bindings.from_variant_constructor(this.opaque, from.opaque)
    } 
  }
  
  static __init_bindings_constructors_destructor () {
    this._bindings.from_variant_constructor = internal.get_variant_to_type_constructor(
      Variant.Type.PACKED_VECTOR3_ARRAY
    )
    this._bindings.constructor_0 = internal.variant_get_ptr_constructor(
      Variant.Type.PACKED_VECTOR3_ARRAY,
      0
    )
    this._bindings.constructor_1 = internal.variant_get_ptr_constructor(
      Variant.Type.PACKED_VECTOR3_ARRAY,
      1
    )
    this._bindings.constructor_2 = internal.variant_get_ptr_constructor(
      Variant.Type.PACKED_VECTOR3_ARRAY,
      2
    )
    this._bindings.destructor = internal.variant_get_ptr_destructor(
      Variant.Type.PACKED_VECTOR3_ARRAY
    )
  }
  
  static _init_bindings () {
    this.__init_bindings_constructors_destructor()
    {
      let _gde_name = new StringName('size')
      this._bindings.method_size = internal.variant_get_ptr_builtin_method(
        Variant.Type.PACKED_VECTOR3_ARRAY,
        _gde_name.opaque,
        3173160232
      )
    }
    {
      let _gde_name = new StringName('is_empty')
      this._bindings.method_is_empty = internal.variant_get_ptr_builtin_method(
        Variant.Type.PACKED_VECTOR3_ARRAY,
        _gde_name.opaque,
        3918633141
      )
    }
    {
      let _gde_name = new StringName('set')
      this._bindings.method_set = internal.variant_get_ptr_builtin_method(
        Variant.Type.PACKED_VECTOR3_ARRAY,
        _gde_name.opaque,
        3975343409
      )
    }
    {
      let _gde_name = new StringName('push_back')
      this._bindings.method_push_back = internal.variant_get_ptr_builtin_method(
        Variant.Type.PACKED_VECTOR3_ARRAY,
        _gde_name.opaque,
        3295363524
      )
    }
    {
      let _gde_name = new StringName('append')
      this._bindings.method_append = internal.variant_get_ptr_builtin_method(
        Variant.Type.PACKED_VECTOR3_ARRAY,
        _gde_name.opaque,
        3295363524
      )
    }
    {
      let _gde_name = new StringName('append_array')
      this._bindings.method_append_array = internal.variant_get_ptr_builtin_method(
        Variant.Type.PACKED_VECTOR3_ARRAY,
        _gde_name.opaque,
        203538016
      )
    }
    {
      let _gde_name = new StringName('remove_at')
      this._bindings.method_remove_at = internal.variant_get_ptr_builtin_method(
        Variant.Type.PACKED_VECTOR3_ARRAY,
        _gde_name.opaque,
        2823966027
      )
    }
    {
      let _gde_name = new StringName('insert')
      this._bindings.method_insert = internal.variant_get_ptr_builtin_method(
        Variant.Type.PACKED_VECTOR3_ARRAY,
        _gde_name.opaque,
        3892262309
      )
    }
    {
      let _gde_name = new StringName('fill')
      this._bindings.method_fill = internal.variant_get_ptr_builtin_method(
        Variant.Type.PACKED_VECTOR3_ARRAY,
        _gde_name.opaque,
        3726392409
      )
    }
    {
      let _gde_name = new StringName('resize')
      this._bindings.method_resize = internal.variant_get_ptr_builtin_method(
        Variant.Type.PACKED_VECTOR3_ARRAY,
        _gde_name.opaque,
        848867239
      )
    }
    {
      let _gde_name = new StringName('clear')
      this._bindings.method_clear = internal.variant_get_ptr_builtin_method(
        Variant.Type.PACKED_VECTOR3_ARRAY,
        _gde_name.opaque,
        3218959716
      )
    }
    {
      let _gde_name = new StringName('has')
      this._bindings.method_has = internal.variant_get_ptr_builtin_method(
        Variant.Type.PACKED_VECTOR3_ARRAY,
        _gde_name.opaque,
        1749054343
      )
    }
    {
      let _gde_name = new StringName('reverse')
      this._bindings.method_reverse = internal.variant_get_ptr_builtin_method(
        Variant.Type.PACKED_VECTOR3_ARRAY,
        _gde_name.opaque,
        3218959716
      )
    }
    {
      let _gde_name = new StringName('slice')
      this._bindings.method_slice = internal.variant_get_ptr_builtin_method(
        Variant.Type.PACKED_VECTOR3_ARRAY,
        _gde_name.opaque,
        2086131305
      )
    }
    {
      let _gde_name = new StringName('to_byte_array')
      this._bindings.method_to_byte_array = internal.variant_get_ptr_builtin_method(
        Variant.Type.PACKED_VECTOR3_ARRAY,
        _gde_name.opaque,
        247621236
      )
    }
    {
      let _gde_name = new StringName('sort')
      this._bindings.method_sort = internal.variant_get_ptr_builtin_method(
        Variant.Type.PACKED_VECTOR3_ARRAY,
        _gde_name.opaque,
        3218959716
      )
    }
    {
      let _gde_name = new StringName('bsearch')
      this._bindings.method_bsearch = internal.variant_get_ptr_builtin_method(
        Variant.Type.PACKED_VECTOR3_ARRAY,
        _gde_name.opaque,
        219263630
      )
    }
    {
      let _gde_name = new StringName('duplicate')
      this._bindings.method_duplicate = internal.variant_get_ptr_builtin_method(
        Variant.Type.PACKED_VECTOR3_ARRAY,
        _gde_name.opaque,
        2754175465
      )
    }
    {
      let _gde_name = new StringName('find')
      this._bindings.method_find = internal.variant_get_ptr_builtin_method(
        Variant.Type.PACKED_VECTOR3_ARRAY,
        _gde_name.opaque,
        3718155780
      )
    }
    {
      let _gde_name = new StringName('rfind')
      this._bindings.method_rfind = internal.variant_get_ptr_builtin_method(
        Variant.Type.PACKED_VECTOR3_ARRAY,
        _gde_name.opaque,
        3718155780
      )
    }
    {
      let _gde_name = new StringName('count')
      this._bindings.method_count = internal.variant_get_ptr_builtin_method(
        Variant.Type.PACKED_VECTOR3_ARRAY,
        _gde_name.opaque,
        194580386
      )
    }
  }

  
  size () {
    let ret
    ret = _call_builtin_method_ptr_ret(
      PackedVector3Array._bindings.method_size,
      this,
      Variant.Type.INT,
      []
    )
    return ret
  }
  is_empty () {
    let ret
    ret = _call_builtin_method_ptr_ret(
      PackedVector3Array._bindings.method_is_empty,
      this,
      Variant.Type.BOOL,
      []
    )
    return ret
  }
  set (_index, _value) {
    _call_builtin_method_ptr_no_ret(
      PackedVector3Array._bindings.method_set,
      this,
      [_index, _value]
    )
  }
  push_back (_value) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      PackedVector3Array._bindings.method_push_back,
      this,
      Variant.Type.BOOL,
      [_value]
    )
    return ret
  }
  append (_value) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      PackedVector3Array._bindings.method_append,
      this,
      Variant.Type.BOOL,
      [_value]
    )
    return ret
  }
  append_array (_array) {
    _call_builtin_method_ptr_no_ret(
      PackedVector3Array._bindings.method_append_array,
      this,
      [_array]
    )
  }
  remove_at (_index) {
    _call_builtin_method_ptr_no_ret(
      PackedVector3Array._bindings.method_remove_at,
      this,
      [_index]
    )
  }
  insert (_at_index, _value) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      PackedVector3Array._bindings.method_insert,
      this,
      Variant.Type.INT,
      [_at_index, _value]
    )
    return ret
  }
  fill (_value) {
    _call_builtin_method_ptr_no_ret(
      PackedVector3Array._bindings.method_fill,
      this,
      [_value]
    )
  }
  resize (_new_size) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      PackedVector3Array._bindings.method_resize,
      this,
      Variant.Type.INT,
      [_new_size]
    )
    return ret
  }
  clear () {
    _call_builtin_method_ptr_no_ret(
      PackedVector3Array._bindings.method_clear,
      this,
      []
    )
  }
  has (_value) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      PackedVector3Array._bindings.method_has,
      this,
      Variant.Type.BOOL,
      [_value]
    )
    return ret
  }
  reverse () {
    _call_builtin_method_ptr_no_ret(
      PackedVector3Array._bindings.method_reverse,
      this,
      []
    )
  }
  slice (_begin, _end) {
    let ret = new PackedVector3Array()
    ret.opaque = _call_builtin_method_ptr_ret(
      PackedVector3Array._bindings.method_slice,
      this,
      Variant.Type.PACKED_VECTOR3_ARRAY,
      [_begin, _end]
    )
    return ret
  }
  to_byte_array () {
    let ret = new PackedByteArray()
    ret.opaque = _call_builtin_method_ptr_ret(
      PackedVector3Array._bindings.method_to_byte_array,
      this,
      Variant.Type.PACKED_BYTE_ARRAY,
      []
    )
    return ret
  }
  sort () {
    _call_builtin_method_ptr_no_ret(
      PackedVector3Array._bindings.method_sort,
      this,
      []
    )
  }
  bsearch (_value, _before) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      PackedVector3Array._bindings.method_bsearch,
      this,
      Variant.Type.INT,
      [_value, _before]
    )
    return ret
  }
  duplicate () {
    let ret = new PackedVector3Array()
    ret.opaque = _call_builtin_method_ptr_ret(
      PackedVector3Array._bindings.method_duplicate,
      this,
      Variant.Type.PACKED_VECTOR3_ARRAY,
      []
    )
    return ret
  }
  find (_value, _from) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      PackedVector3Array._bindings.method_find,
      this,
      Variant.Type.INT,
      [_value, _from]
    )
    return ret
  }
  rfind (_value, _from) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      PackedVector3Array._bindings.method_rfind,
      this,
      Variant.Type.INT,
      [_value, _from]
    )
    return ret
  }
  count (_value) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      PackedVector3Array._bindings.method_count,
      this,
      Variant.Type.INT,
      [_value]
    )
    return ret
  }
}