import * as internal from '__internal__'
import {
  _call_builtin_constructor,
  _call_builtin_method_ptr_ret,
  _call_builtin_method_ptr_no_ret
} from 'src/js_godot/core/builtin_ptrcall'
import { PackedInt64Array } from 'src/js_godot/variant/packed_int64_array'
import { PackedInt32Array } from 'src/js_godot/variant/packed_int32_array'
import { PackedVector3Array } from 'src/js_godot/variant/packed_vector3_array'
import { Variant } from 'src/js_godot/variant/variant'
import { PackedByteArray } from 'src/js_godot/variant/packed_byte_array'
import { StringName } from 'src/js_godot/variant/string_name'
import { Callable } from 'src/js_godot/variant/callable'
import { PackedVector2Array } from 'src/js_godot/variant/packed_vector2_array'
import { PackedColorArray } from 'src/js_godot/variant/packed_color_array'
import { PackedFloat64Array } from 'src/js_godot/variant/packed_float64_array'
import { PackedStringArray } from 'src/js_godot/variant/packed_string_array'
import { PackedVector4Array } from 'src/js_godot/variant/packed_vector4_array'
import { PackedFloat32Array } from 'src/js_godot/variant/packed_float32_array'

class _MethodBindings {
  from_variant_constructor
  destructor
  constructor_0
  constructor_1
  constructor_2
  constructor_3
  constructor_4
  constructor_5
  constructor_6
  constructor_7
  constructor_8
  constructor_9
  constructor_10
  constructor_11
  constructor_12
  method_size
  method_is_empty
  method_clear
  method_hash
  method_assign
  method_push_back
  method_push_front
  method_append
  method_append_array
  method_resize
  method_insert
  method_remove_at
  method_fill
  method_erase
  method_front
  method_back
  method_pick_random
  method_find
  method_rfind
  method_count
  method_has
  method_pop_back
  method_pop_front
  method_pop_at
  method_sort
  method_sort_custom
  method_shuffle
  method_bsearch
  method_bsearch_custom
  method_reverse
  method_duplicate
  method_slice
  method_filter
  method_map
  method_reduce
  method_any
  method_all
  method_max
  method_min
  method_is_typed
  method_is_same_typed
  method_get_typed_builtin
  method_get_typed_class_name
  method_get_typed_script
  method_make_read_only
  method_is_read_only
  operator_equal_Variant
  operator_not_equal_Variant
  operator_not_
  operator_in_Dictionary
  operator_equal_Array
  operator_not_equal_Array
  operator_less_Array
  operator_less_equal_Array
  operator_greater_Array
  operator_greater_equal_Array
  operator_add_Array
  operator_in_Array
}

export class GDArray {
  static #SIZE = 8
  opaque = new Uint8Array(GDArray.#SIZE)

  static _bindings = new _MethodBindings()

  constructor (from) {
    if (!from) {
      _call_builtin_constructor(GDArray._bindings.constructor_0, this)
    } else if (arguments[0] instanceof GDArray) {
      let from = arguments[0];
      _call_builtin_constructor(GDArray._bindings.constructor_1, this, [
        from
      ])
    } else if (arguments[0] instanceof GDArray) {
      let base = arguments[0];
      let type = arguments[1];
      let class_name = arguments[2];
      let script = arguments[3];
      _call_builtin_constructor(GDArray._bindings.constructor_2, this, [
        base, type, class_name, script
      ])
    } else if (arguments[0] instanceof PackedByteArray) {
      let from = arguments[0];
      _call_builtin_constructor(GDArray._bindings.constructor_3, this, [
        from
      ])
    } else if (arguments[0] instanceof PackedInt32Array) {
      let from = arguments[0];
      _call_builtin_constructor(GDArray._bindings.constructor_4, this, [
        from
      ])
    } else if (arguments[0] instanceof PackedInt64Array) {
      let from = arguments[0];
      _call_builtin_constructor(GDArray._bindings.constructor_5, this, [
        from
      ])
    } else if (arguments[0] instanceof PackedFloat32Array) {
      let from = arguments[0];
      _call_builtin_constructor(GDArray._bindings.constructor_6, this, [
        from
      ])
    } else if (arguments[0] instanceof PackedFloat64Array) {
      let from = arguments[0];
      _call_builtin_constructor(GDArray._bindings.constructor_7, this, [
        from
      ])
    } else if (arguments[0] instanceof PackedStringArray) {
      let from = arguments[0];
      _call_builtin_constructor(GDArray._bindings.constructor_8, this, [
        from
      ])
    } else if (arguments[0] instanceof PackedVector2Array) {
      let from = arguments[0];
      _call_builtin_constructor(GDArray._bindings.constructor_9, this, [
        from
      ])
    } else if (arguments[0] instanceof PackedVector3Array) {
      let from = arguments[0];
      _call_builtin_constructor(GDArray._bindings.constructor_10, this, [
        from
      ])
    } else if (arguments[0] instanceof PackedColorArray) {
      let from = arguments[0];
      _call_builtin_constructor(GDArray._bindings.constructor_11, this, [
        from
      ])
    } else if (arguments[0] instanceof PackedVector4Array) {
      let from = arguments[0];
      _call_builtin_constructor(GDArray._bindings.constructor_12, this, [
        from
      ])
    } else if (from instanceof Variant) {
      GDArray._bindings.from_variant_constructor(this.opaque, from.opaque)
    } 
  }
  
  static __init_bindings_constructors_destructor () {
    this._bindings.from_variant_constructor = internal.get_variant_to_type_constructor(
      Variant.Type.ARRAY
    )
    this._bindings.constructor_0 = internal.variant_get_ptr_constructor(
      Variant.Type.ARRAY,
      0
    )
    this._bindings.constructor_1 = internal.variant_get_ptr_constructor(
      Variant.Type.ARRAY,
      1
    )
    this._bindings.constructor_2 = internal.variant_get_ptr_constructor(
      Variant.Type.ARRAY,
      2
    )
    this._bindings.constructor_3 = internal.variant_get_ptr_constructor(
      Variant.Type.ARRAY,
      3
    )
    this._bindings.constructor_4 = internal.variant_get_ptr_constructor(
      Variant.Type.ARRAY,
      4
    )
    this._bindings.constructor_5 = internal.variant_get_ptr_constructor(
      Variant.Type.ARRAY,
      5
    )
    this._bindings.constructor_6 = internal.variant_get_ptr_constructor(
      Variant.Type.ARRAY,
      6
    )
    this._bindings.constructor_7 = internal.variant_get_ptr_constructor(
      Variant.Type.ARRAY,
      7
    )
    this._bindings.constructor_8 = internal.variant_get_ptr_constructor(
      Variant.Type.ARRAY,
      8
    )
    this._bindings.constructor_9 = internal.variant_get_ptr_constructor(
      Variant.Type.ARRAY,
      9
    )
    this._bindings.constructor_10 = internal.variant_get_ptr_constructor(
      Variant.Type.ARRAY,
      10
    )
    this._bindings.constructor_11 = internal.variant_get_ptr_constructor(
      Variant.Type.ARRAY,
      11
    )
    this._bindings.constructor_12 = internal.variant_get_ptr_constructor(
      Variant.Type.ARRAY,
      12
    )
    this._bindings.destructor = internal.variant_get_ptr_destructor(
      Variant.Type.ARRAY
    )
  }
  
  static _init_bindings () {
    this.__init_bindings_constructors_destructor()
    {
      let _gde_name = new StringName('size')
      this._bindings.method_size = internal.variant_get_ptr_builtin_method(
        Variant.Type.ARRAY,
        _gde_name.opaque,
        3173160232
      )
    }
    {
      let _gde_name = new StringName('is_empty')
      this._bindings.method_is_empty = internal.variant_get_ptr_builtin_method(
        Variant.Type.ARRAY,
        _gde_name.opaque,
        3918633141
      )
    }
    {
      let _gde_name = new StringName('clear')
      this._bindings.method_clear = internal.variant_get_ptr_builtin_method(
        Variant.Type.ARRAY,
        _gde_name.opaque,
        3218959716
      )
    }
    {
      let _gde_name = new StringName('hash')
      this._bindings.method_hash = internal.variant_get_ptr_builtin_method(
        Variant.Type.ARRAY,
        _gde_name.opaque,
        3173160232
      )
    }
    {
      let _gde_name = new StringName('assign')
      this._bindings.method_assign = internal.variant_get_ptr_builtin_method(
        Variant.Type.ARRAY,
        _gde_name.opaque,
        2307260970
      )
    }
    {
      let _gde_name = new StringName('push_back')
      this._bindings.method_push_back = internal.variant_get_ptr_builtin_method(
        Variant.Type.ARRAY,
        _gde_name.opaque,
        3316032543
      )
    }
    {
      let _gde_name = new StringName('push_front')
      this._bindings.method_push_front = internal.variant_get_ptr_builtin_method(
        Variant.Type.ARRAY,
        _gde_name.opaque,
        3316032543
      )
    }
    {
      let _gde_name = new StringName('append')
      this._bindings.method_append = internal.variant_get_ptr_builtin_method(
        Variant.Type.ARRAY,
        _gde_name.opaque,
        3316032543
      )
    }
    {
      let _gde_name = new StringName('append_array')
      this._bindings.method_append_array = internal.variant_get_ptr_builtin_method(
        Variant.Type.ARRAY,
        _gde_name.opaque,
        2307260970
      )
    }
    {
      let _gde_name = new StringName('resize')
      this._bindings.method_resize = internal.variant_get_ptr_builtin_method(
        Variant.Type.ARRAY,
        _gde_name.opaque,
        848867239
      )
    }
    {
      let _gde_name = new StringName('insert')
      this._bindings.method_insert = internal.variant_get_ptr_builtin_method(
        Variant.Type.ARRAY,
        _gde_name.opaque,
        3176316662
      )
    }
    {
      let _gde_name = new StringName('remove_at')
      this._bindings.method_remove_at = internal.variant_get_ptr_builtin_method(
        Variant.Type.ARRAY,
        _gde_name.opaque,
        2823966027
      )
    }
    {
      let _gde_name = new StringName('fill')
      this._bindings.method_fill = internal.variant_get_ptr_builtin_method(
        Variant.Type.ARRAY,
        _gde_name.opaque,
        3316032543
      )
    }
    {
      let _gde_name = new StringName('erase')
      this._bindings.method_erase = internal.variant_get_ptr_builtin_method(
        Variant.Type.ARRAY,
        _gde_name.opaque,
        3316032543
      )
    }
    {
      let _gde_name = new StringName('front')
      this._bindings.method_front = internal.variant_get_ptr_builtin_method(
        Variant.Type.ARRAY,
        _gde_name.opaque,
        1460142086
      )
    }
    {
      let _gde_name = new StringName('back')
      this._bindings.method_back = internal.variant_get_ptr_builtin_method(
        Variant.Type.ARRAY,
        _gde_name.opaque,
        1460142086
      )
    }
    {
      let _gde_name = new StringName('pick_random')
      this._bindings.method_pick_random = internal.variant_get_ptr_builtin_method(
        Variant.Type.ARRAY,
        _gde_name.opaque,
        1460142086
      )
    }
    {
      let _gde_name = new StringName('find')
      this._bindings.method_find = internal.variant_get_ptr_builtin_method(
        Variant.Type.ARRAY,
        _gde_name.opaque,
        2336346817
      )
    }
    {
      let _gde_name = new StringName('rfind')
      this._bindings.method_rfind = internal.variant_get_ptr_builtin_method(
        Variant.Type.ARRAY,
        _gde_name.opaque,
        2336346817
      )
    }
    {
      let _gde_name = new StringName('count')
      this._bindings.method_count = internal.variant_get_ptr_builtin_method(
        Variant.Type.ARRAY,
        _gde_name.opaque,
        1481661226
      )
    }
    {
      let _gde_name = new StringName('has')
      this._bindings.method_has = internal.variant_get_ptr_builtin_method(
        Variant.Type.ARRAY,
        _gde_name.opaque,
        3680194679
      )
    }
    {
      let _gde_name = new StringName('pop_back')
      this._bindings.method_pop_back = internal.variant_get_ptr_builtin_method(
        Variant.Type.ARRAY,
        _gde_name.opaque,
        1321915136
      )
    }
    {
      let _gde_name = new StringName('pop_front')
      this._bindings.method_pop_front = internal.variant_get_ptr_builtin_method(
        Variant.Type.ARRAY,
        _gde_name.opaque,
        1321915136
      )
    }
    {
      let _gde_name = new StringName('pop_at')
      this._bindings.method_pop_at = internal.variant_get_ptr_builtin_method(
        Variant.Type.ARRAY,
        _gde_name.opaque,
        3518259424
      )
    }
    {
      let _gde_name = new StringName('sort')
      this._bindings.method_sort = internal.variant_get_ptr_builtin_method(
        Variant.Type.ARRAY,
        _gde_name.opaque,
        3218959716
      )
    }
    {
      let _gde_name = new StringName('sort_custom')
      this._bindings.method_sort_custom = internal.variant_get_ptr_builtin_method(
        Variant.Type.ARRAY,
        _gde_name.opaque,
        3470848906
      )
    }
    {
      let _gde_name = new StringName('shuffle')
      this._bindings.method_shuffle = internal.variant_get_ptr_builtin_method(
        Variant.Type.ARRAY,
        _gde_name.opaque,
        3218959716
      )
    }
    {
      let _gde_name = new StringName('bsearch')
      this._bindings.method_bsearch = internal.variant_get_ptr_builtin_method(
        Variant.Type.ARRAY,
        _gde_name.opaque,
        3372222236
      )
    }
    {
      let _gde_name = new StringName('bsearch_custom')
      this._bindings.method_bsearch_custom = internal.variant_get_ptr_builtin_method(
        Variant.Type.ARRAY,
        _gde_name.opaque,
        161317131
      )
    }
    {
      let _gde_name = new StringName('reverse')
      this._bindings.method_reverse = internal.variant_get_ptr_builtin_method(
        Variant.Type.ARRAY,
        _gde_name.opaque,
        3218959716
      )
    }
    {
      let _gde_name = new StringName('duplicate')
      this._bindings.method_duplicate = internal.variant_get_ptr_builtin_method(
        Variant.Type.ARRAY,
        _gde_name.opaque,
        636440122
      )
    }
    {
      let _gde_name = new StringName('slice')
      this._bindings.method_slice = internal.variant_get_ptr_builtin_method(
        Variant.Type.ARRAY,
        _gde_name.opaque,
        1393718243
      )
    }
    {
      let _gde_name = new StringName('filter')
      this._bindings.method_filter = internal.variant_get_ptr_builtin_method(
        Variant.Type.ARRAY,
        _gde_name.opaque,
        4075186556
      )
    }
    {
      let _gde_name = new StringName('map')
      this._bindings.method_map = internal.variant_get_ptr_builtin_method(
        Variant.Type.ARRAY,
        _gde_name.opaque,
        4075186556
      )
    }
    {
      let _gde_name = new StringName('reduce')
      this._bindings.method_reduce = internal.variant_get_ptr_builtin_method(
        Variant.Type.ARRAY,
        _gde_name.opaque,
        4272450342
      )
    }
    {
      let _gde_name = new StringName('any')
      this._bindings.method_any = internal.variant_get_ptr_builtin_method(
        Variant.Type.ARRAY,
        _gde_name.opaque,
        4129521963
      )
    }
    {
      let _gde_name = new StringName('all')
      this._bindings.method_all = internal.variant_get_ptr_builtin_method(
        Variant.Type.ARRAY,
        _gde_name.opaque,
        4129521963
      )
    }
    {
      let _gde_name = new StringName('max')
      this._bindings.method_max = internal.variant_get_ptr_builtin_method(
        Variant.Type.ARRAY,
        _gde_name.opaque,
        1460142086
      )
    }
    {
      let _gde_name = new StringName('min')
      this._bindings.method_min = internal.variant_get_ptr_builtin_method(
        Variant.Type.ARRAY,
        _gde_name.opaque,
        1460142086
      )
    }
    {
      let _gde_name = new StringName('is_typed')
      this._bindings.method_is_typed = internal.variant_get_ptr_builtin_method(
        Variant.Type.ARRAY,
        _gde_name.opaque,
        3918633141
      )
    }
    {
      let _gde_name = new StringName('is_same_typed')
      this._bindings.method_is_same_typed = internal.variant_get_ptr_builtin_method(
        Variant.Type.ARRAY,
        _gde_name.opaque,
        2988181878
      )
    }
    {
      let _gde_name = new StringName('get_typed_builtin')
      this._bindings.method_get_typed_builtin = internal.variant_get_ptr_builtin_method(
        Variant.Type.ARRAY,
        _gde_name.opaque,
        3173160232
      )
    }
    {
      let _gde_name = new StringName('get_typed_class_name')
      this._bindings.method_get_typed_class_name = internal.variant_get_ptr_builtin_method(
        Variant.Type.ARRAY,
        _gde_name.opaque,
        1825232092
      )
    }
    {
      let _gde_name = new StringName('get_typed_script')
      this._bindings.method_get_typed_script = internal.variant_get_ptr_builtin_method(
        Variant.Type.ARRAY,
        _gde_name.opaque,
        1460142086
      )
    }
    {
      let _gde_name = new StringName('make_read_only')
      this._bindings.method_make_read_only = internal.variant_get_ptr_builtin_method(
        Variant.Type.ARRAY,
        _gde_name.opaque,
        3218959716
      )
    }
    {
      let _gde_name = new StringName('is_read_only')
      this._bindings.method_is_read_only = internal.variant_get_ptr_builtin_method(
        Variant.Type.ARRAY,
        _gde_name.opaque,
        3918633141
      )
    }
  }

  
  size () {
    let ret
    ret = _call_builtin_method_ptr_ret(
      GDArray._bindings.method_size,
      this,
      Variant.Type.INT,
      []
    )
    return ret
  }
  is_empty () {
    let ret
    ret = _call_builtin_method_ptr_ret(
      GDArray._bindings.method_is_empty,
      this,
      Variant.Type.BOOL,
      []
    )
    return ret
  }
  clear () {
    _call_builtin_method_ptr_no_ret(
      GDArray._bindings.method_clear,
      this,
      []
    )
  }
  hash () {
    let ret
    ret = _call_builtin_method_ptr_ret(
      GDArray._bindings.method_hash,
      this,
      Variant.Type.INT,
      []
    )
    return ret
  }
  assign (_array) {
    _call_builtin_method_ptr_no_ret(
      GDArray._bindings.method_assign,
      this,
      [_array]
    )
  }
  push_back (_value) {
    _call_builtin_method_ptr_no_ret(
      GDArray._bindings.method_push_back,
      this,
      [_value]
    )
  }
  push_front (_value) {
    _call_builtin_method_ptr_no_ret(
      GDArray._bindings.method_push_front,
      this,
      [_value]
    )
  }
  append (_value) {
    _call_builtin_method_ptr_no_ret(
      GDArray._bindings.method_append,
      this,
      [_value]
    )
  }
  append_array (_array) {
    _call_builtin_method_ptr_no_ret(
      GDArray._bindings.method_append_array,
      this,
      [_array]
    )
  }
  resize (_size) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      GDArray._bindings.method_resize,
      this,
      Variant.Type.INT,
      [_size]
    )
    return ret
  }
  insert (_position, _value) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      GDArray._bindings.method_insert,
      this,
      Variant.Type.INT,
      [_position, _value]
    )
    return ret
  }
  remove_at (_position) {
    _call_builtin_method_ptr_no_ret(
      GDArray._bindings.method_remove_at,
      this,
      [_position]
    )
  }
  fill (_value) {
    _call_builtin_method_ptr_no_ret(
      GDArray._bindings.method_fill,
      this,
      [_value]
    )
  }
  erase (_value) {
    _call_builtin_method_ptr_no_ret(
      GDArray._bindings.method_erase,
      this,
      [_value]
    )
  }
  front () {
    let ret = new Variant()
    ret.opaque = _call_builtin_method_ptr_ret(
      GDArray._bindings.method_front,
      this,
      Variant.Type.VARIANT,
      []
    )
    return ret
  }
  back () {
    let ret = new Variant()
    ret.opaque = _call_builtin_method_ptr_ret(
      GDArray._bindings.method_back,
      this,
      Variant.Type.VARIANT,
      []
    )
    return ret
  }
  pick_random () {
    let ret = new Variant()
    ret.opaque = _call_builtin_method_ptr_ret(
      GDArray._bindings.method_pick_random,
      this,
      Variant.Type.VARIANT,
      []
    )
    return ret
  }
  find (_what, _from) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      GDArray._bindings.method_find,
      this,
      Variant.Type.INT,
      [_what, _from]
    )
    return ret
  }
  rfind (_what, _from) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      GDArray._bindings.method_rfind,
      this,
      Variant.Type.INT,
      [_what, _from]
    )
    return ret
  }
  count (_value) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      GDArray._bindings.method_count,
      this,
      Variant.Type.INT,
      [_value]
    )
    return ret
  }
  has (_value) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      GDArray._bindings.method_has,
      this,
      Variant.Type.BOOL,
      [_value]
    )
    return ret
  }
  pop_back () {
    let ret = new Variant()
    ret.opaque = _call_builtin_method_ptr_ret(
      GDArray._bindings.method_pop_back,
      this,
      Variant.Type.VARIANT,
      []
    )
    return ret
  }
  pop_front () {
    let ret = new Variant()
    ret.opaque = _call_builtin_method_ptr_ret(
      GDArray._bindings.method_pop_front,
      this,
      Variant.Type.VARIANT,
      []
    )
    return ret
  }
  pop_at (_position) {
    let ret = new Variant()
    ret.opaque = _call_builtin_method_ptr_ret(
      GDArray._bindings.method_pop_at,
      this,
      Variant.Type.VARIANT,
      [_position]
    )
    return ret
  }
  sort () {
    _call_builtin_method_ptr_no_ret(
      GDArray._bindings.method_sort,
      this,
      []
    )
  }
  sort_custom (_func) {
    _call_builtin_method_ptr_no_ret(
      GDArray._bindings.method_sort_custom,
      this,
      [_func]
    )
  }
  shuffle () {
    _call_builtin_method_ptr_no_ret(
      GDArray._bindings.method_shuffle,
      this,
      []
    )
  }
  bsearch (_value, _before) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      GDArray._bindings.method_bsearch,
      this,
      Variant.Type.INT,
      [_value, _before]
    )
    return ret
  }
  bsearch_custom (_value, _func, _before) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      GDArray._bindings.method_bsearch_custom,
      this,
      Variant.Type.INT,
      [_value, _func, _before]
    )
    return ret
  }
  reverse () {
    _call_builtin_method_ptr_no_ret(
      GDArray._bindings.method_reverse,
      this,
      []
    )
  }
  duplicate (_deep) {
    let ret = new GDArray()
    ret.opaque = _call_builtin_method_ptr_ret(
      GDArray._bindings.method_duplicate,
      this,
      Variant.Type.ARRAY,
      [_deep]
    )
    return ret
  }
  slice (_begin, _end, _step, _deep) {
    let ret = new GDArray()
    ret.opaque = _call_builtin_method_ptr_ret(
      GDArray._bindings.method_slice,
      this,
      Variant.Type.ARRAY,
      [_begin, _end, _step, _deep]
    )
    return ret
  }
  filter (_method) {
    let ret = new GDArray()
    ret.opaque = _call_builtin_method_ptr_ret(
      GDArray._bindings.method_filter,
      this,
      Variant.Type.ARRAY,
      [_method]
    )
    return ret
  }
  map (_method) {
    let ret = new GDArray()
    ret.opaque = _call_builtin_method_ptr_ret(
      GDArray._bindings.method_map,
      this,
      Variant.Type.ARRAY,
      [_method]
    )
    return ret
  }
  reduce (_method, _accum) {
    let ret = new Variant()
    ret.opaque = _call_builtin_method_ptr_ret(
      GDArray._bindings.method_reduce,
      this,
      Variant.Type.VARIANT,
      [_method, _accum]
    )
    return ret
  }
  any (_method) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      GDArray._bindings.method_any,
      this,
      Variant.Type.BOOL,
      [_method]
    )
    return ret
  }
  all (_method) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      GDArray._bindings.method_all,
      this,
      Variant.Type.BOOL,
      [_method]
    )
    return ret
  }
  max () {
    let ret = new Variant()
    ret.opaque = _call_builtin_method_ptr_ret(
      GDArray._bindings.method_max,
      this,
      Variant.Type.VARIANT,
      []
    )
    return ret
  }
  min () {
    let ret = new Variant()
    ret.opaque = _call_builtin_method_ptr_ret(
      GDArray._bindings.method_min,
      this,
      Variant.Type.VARIANT,
      []
    )
    return ret
  }
  is_typed () {
    let ret
    ret = _call_builtin_method_ptr_ret(
      GDArray._bindings.method_is_typed,
      this,
      Variant.Type.BOOL,
      []
    )
    return ret
  }
  is_same_typed (_array) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      GDArray._bindings.method_is_same_typed,
      this,
      Variant.Type.BOOL,
      [_array]
    )
    return ret
  }
  get_typed_builtin () {
    let ret
    ret = _call_builtin_method_ptr_ret(
      GDArray._bindings.method_get_typed_builtin,
      this,
      Variant.Type.INT,
      []
    )
    return ret
  }
  get_typed_class_name () {
    let ret = new StringName()
    ret.opaque = _call_builtin_method_ptr_ret(
      GDArray._bindings.method_get_typed_class_name,
      this,
      Variant.Type.STRING_NAME,
      []
    )
    return ret
  }
  get_typed_script () {
    let ret = new Variant()
    ret.opaque = _call_builtin_method_ptr_ret(
      GDArray._bindings.method_get_typed_script,
      this,
      Variant.Type.VARIANT,
      []
    )
    return ret
  }
  make_read_only () {
    _call_builtin_method_ptr_no_ret(
      GDArray._bindings.method_make_read_only,
      this,
      []
    )
  }
  is_read_only () {
    let ret
    ret = _call_builtin_method_ptr_ret(
      GDArray._bindings.method_is_read_only,
      this,
      Variant.Type.BOOL,
      []
    )
    return ret
  }
}