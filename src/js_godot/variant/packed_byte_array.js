import * as internal from '__internal__'
import {
  _call_builtin_constructor,
  _call_builtin_method_ptr_ret,
  _call_builtin_method_ptr_no_ret
} from '@js_godot/core/builtin_ptrcall'
import { PackedFloat64Array } from '@js_godot/variant/packed_float64_array'
import { PackedInt32Array } from '@js_godot/variant/packed_int32_array'
import { GDArray } from '@js_godot/variant/gd_array'
import { PackedFloat32Array } from '@js_godot/variant/packed_float32_array'
import { Variant } from '@js_godot/variant/variant'
import { PackedInt64Array } from '@js_godot/variant/packed_int64_array'
import { StringName } from '@js_godot/variant/string_name'
import { GDString } from '@js_godot/variant/gd_string'

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
  method_sort
  method_bsearch
  method_duplicate
  method_find
  method_rfind
  method_count
  method_get_string_from_ascii
  method_get_string_from_utf8
  method_get_string_from_utf16
  method_get_string_from_utf32
  method_get_string_from_wchar
  method_hex_encode
  method_compress
  method_decompress
  method_decompress_dynamic
  method_decode_u8
  method_decode_s8
  method_decode_u16
  method_decode_s16
  method_decode_u32
  method_decode_s32
  method_decode_u64
  method_decode_s64
  method_decode_half
  method_decode_float
  method_decode_double
  method_has_encoded_var
  method_decode_var
  method_decode_var_size
  method_to_int32_array
  method_to_int64_array
  method_to_float32_array
  method_to_float64_array
  method_encode_u8
  method_encode_s8
  method_encode_u16
  method_encode_s16
  method_encode_u32
  method_encode_s32
  method_encode_u64
  method_encode_s64
  method_encode_half
  method_encode_float
  method_encode_double
  method_encode_var
  operator_equal_Variant
  operator_not_equal_Variant
  operator_not_
  operator_in_Dictionary
  operator_in_Array
  operator_equal_PackedByteArray
  operator_not_equal_PackedByteArray
  operator_add_PackedByteArray
}

export class PackedByteArray {
  static #SIZE = 16
  opaque = new Uint8Array(PackedByteArray.#SIZE)

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor (from) {
    if (!from) {
      _call_builtin_constructor(PackedByteArray._bindings.constructor_0, this)
    }else if (from instanceof PackedByteArray) {
      _call_builtin_constructor(PackedByteArray._bindings.constructor_1, this, [
        from
      ])
    }else if (from instanceof GDArray) {
      _call_builtin_constructor(PackedByteArray._bindings.constructor_2, this, [
        from
      ])
    } else if (from.constructor.name === "Variant") {
      PackedByteArray._bindings.from_variant_constructor(this.opaque, from.opaque)
    } 
  }
  
  static __init_bindings_constructors_destructor () {
    this._bindings.from_variant_constructor = internal.get_variant_to_type_constructor(
      29
    )
    this._bindings.constructor_0 = internal.variant_get_ptr_constructor(
      29,
      0
    )
    this._bindings.constructor_1 = internal.variant_get_ptr_constructor(
      29,
      1
    )
    this._bindings.constructor_2 = internal.variant_get_ptr_constructor(
      29,
      2
    )
    this._bindings.destructor = internal.variant_get_ptr_destructor(
      29
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
      this._bindings.method_size = internal.variant_get_ptr_builtin_method(
        29,
        _gde_name.opaque,
        3173160232
      )
    }
    {
      let _gde_name = new StringName('is_empty')
      this._bindings.method_is_empty = internal.variant_get_ptr_builtin_method(
        29,
        _gde_name.opaque,
        3918633141
      )
    }
    {
      let _gde_name = new StringName('set')
      this._bindings.method_set = internal.variant_get_ptr_builtin_method(
        29,
        _gde_name.opaque,
        3638975848
      )
    }
    {
      let _gde_name = new StringName('push_back')
      this._bindings.method_push_back = internal.variant_get_ptr_builtin_method(
        29,
        _gde_name.opaque,
        694024632
      )
    }
    {
      let _gde_name = new StringName('append')
      this._bindings.method_append = internal.variant_get_ptr_builtin_method(
        29,
        _gde_name.opaque,
        694024632
      )
    }
    {
      let _gde_name = new StringName('append_array')
      this._bindings.method_append_array = internal.variant_get_ptr_builtin_method(
        29,
        _gde_name.opaque,
        791097111
      )
    }
    {
      let _gde_name = new StringName('remove_at')
      this._bindings.method_remove_at = internal.variant_get_ptr_builtin_method(
        29,
        _gde_name.opaque,
        2823966027
      )
    }
    {
      let _gde_name = new StringName('insert')
      this._bindings.method_insert = internal.variant_get_ptr_builtin_method(
        29,
        _gde_name.opaque,
        1487112728
      )
    }
    {
      let _gde_name = new StringName('fill')
      this._bindings.method_fill = internal.variant_get_ptr_builtin_method(
        29,
        _gde_name.opaque,
        2823966027
      )
    }
    {
      let _gde_name = new StringName('resize')
      this._bindings.method_resize = internal.variant_get_ptr_builtin_method(
        29,
        _gde_name.opaque,
        848867239
      )
    }
    {
      let _gde_name = new StringName('clear')
      this._bindings.method_clear = internal.variant_get_ptr_builtin_method(
        29,
        _gde_name.opaque,
        3218959716
      )
    }
    {
      let _gde_name = new StringName('has')
      this._bindings.method_has = internal.variant_get_ptr_builtin_method(
        29,
        _gde_name.opaque,
        931488181
      )
    }
    {
      let _gde_name = new StringName('reverse')
      this._bindings.method_reverse = internal.variant_get_ptr_builtin_method(
        29,
        _gde_name.opaque,
        3218959716
      )
    }
    {
      let _gde_name = new StringName('slice')
      this._bindings.method_slice = internal.variant_get_ptr_builtin_method(
        29,
        _gde_name.opaque,
        2278869132
      )
    }
    {
      let _gde_name = new StringName('sort')
      this._bindings.method_sort = internal.variant_get_ptr_builtin_method(
        29,
        _gde_name.opaque,
        3218959716
      )
    }
    {
      let _gde_name = new StringName('bsearch')
      this._bindings.method_bsearch = internal.variant_get_ptr_builtin_method(
        29,
        _gde_name.opaque,
        3380005890
      )
    }
    {
      let _gde_name = new StringName('duplicate')
      this._bindings.method_duplicate = internal.variant_get_ptr_builtin_method(
        29,
        _gde_name.opaque,
        851781288
      )
    }
    {
      let _gde_name = new StringName('find')
      this._bindings.method_find = internal.variant_get_ptr_builtin_method(
        29,
        _gde_name.opaque,
        2984303840
      )
    }
    {
      let _gde_name = new StringName('rfind')
      this._bindings.method_rfind = internal.variant_get_ptr_builtin_method(
        29,
        _gde_name.opaque,
        2984303840
      )
    }
    {
      let _gde_name = new StringName('count')
      this._bindings.method_count = internal.variant_get_ptr_builtin_method(
        29,
        _gde_name.opaque,
        4103005248
      )
    }
    {
      let _gde_name = new StringName('get_string_from_ascii')
      this._bindings.method_get_string_from_ascii = internal.variant_get_ptr_builtin_method(
        29,
        _gde_name.opaque,
        3942272618
      )
    }
    {
      let _gde_name = new StringName('get_string_from_utf8')
      this._bindings.method_get_string_from_utf8 = internal.variant_get_ptr_builtin_method(
        29,
        _gde_name.opaque,
        3942272618
      )
    }
    {
      let _gde_name = new StringName('get_string_from_utf16')
      this._bindings.method_get_string_from_utf16 = internal.variant_get_ptr_builtin_method(
        29,
        _gde_name.opaque,
        3942272618
      )
    }
    {
      let _gde_name = new StringName('get_string_from_utf32')
      this._bindings.method_get_string_from_utf32 = internal.variant_get_ptr_builtin_method(
        29,
        _gde_name.opaque,
        3942272618
      )
    }
    {
      let _gde_name = new StringName('get_string_from_wchar')
      this._bindings.method_get_string_from_wchar = internal.variant_get_ptr_builtin_method(
        29,
        _gde_name.opaque,
        3942272618
      )
    }
    {
      let _gde_name = new StringName('hex_encode')
      this._bindings.method_hex_encode = internal.variant_get_ptr_builtin_method(
        29,
        _gde_name.opaque,
        3942272618
      )
    }
    {
      let _gde_name = new StringName('compress')
      this._bindings.method_compress = internal.variant_get_ptr_builtin_method(
        29,
        _gde_name.opaque,
        1845905913
      )
    }
    {
      let _gde_name = new StringName('decompress')
      this._bindings.method_decompress = internal.variant_get_ptr_builtin_method(
        29,
        _gde_name.opaque,
        2278869132
      )
    }
    {
      let _gde_name = new StringName('decompress_dynamic')
      this._bindings.method_decompress_dynamic = internal.variant_get_ptr_builtin_method(
        29,
        _gde_name.opaque,
        2278869132
      )
    }
    {
      let _gde_name = new StringName('decode_u8')
      this._bindings.method_decode_u8 = internal.variant_get_ptr_builtin_method(
        29,
        _gde_name.opaque,
        4103005248
      )
    }
    {
      let _gde_name = new StringName('decode_s8')
      this._bindings.method_decode_s8 = internal.variant_get_ptr_builtin_method(
        29,
        _gde_name.opaque,
        4103005248
      )
    }
    {
      let _gde_name = new StringName('decode_u16')
      this._bindings.method_decode_u16 = internal.variant_get_ptr_builtin_method(
        29,
        _gde_name.opaque,
        4103005248
      )
    }
    {
      let _gde_name = new StringName('decode_s16')
      this._bindings.method_decode_s16 = internal.variant_get_ptr_builtin_method(
        29,
        _gde_name.opaque,
        4103005248
      )
    }
    {
      let _gde_name = new StringName('decode_u32')
      this._bindings.method_decode_u32 = internal.variant_get_ptr_builtin_method(
        29,
        _gde_name.opaque,
        4103005248
      )
    }
    {
      let _gde_name = new StringName('decode_s32')
      this._bindings.method_decode_s32 = internal.variant_get_ptr_builtin_method(
        29,
        _gde_name.opaque,
        4103005248
      )
    }
    {
      let _gde_name = new StringName('decode_u64')
      this._bindings.method_decode_u64 = internal.variant_get_ptr_builtin_method(
        29,
        _gde_name.opaque,
        4103005248
      )
    }
    {
      let _gde_name = new StringName('decode_s64')
      this._bindings.method_decode_s64 = internal.variant_get_ptr_builtin_method(
        29,
        _gde_name.opaque,
        4103005248
      )
    }
    {
      let _gde_name = new StringName('decode_half')
      this._bindings.method_decode_half = internal.variant_get_ptr_builtin_method(
        29,
        _gde_name.opaque,
        1401583798
      )
    }
    {
      let _gde_name = new StringName('decode_float')
      this._bindings.method_decode_float = internal.variant_get_ptr_builtin_method(
        29,
        _gde_name.opaque,
        1401583798
      )
    }
    {
      let _gde_name = new StringName('decode_double')
      this._bindings.method_decode_double = internal.variant_get_ptr_builtin_method(
        29,
        _gde_name.opaque,
        1401583798
      )
    }
    {
      let _gde_name = new StringName('has_encoded_var')
      this._bindings.method_has_encoded_var = internal.variant_get_ptr_builtin_method(
        29,
        _gde_name.opaque,
        2914632957
      )
    }
    {
      let _gde_name = new StringName('decode_var')
      this._bindings.method_decode_var = internal.variant_get_ptr_builtin_method(
        29,
        _gde_name.opaque,
        1740420038
      )
    }
    {
      let _gde_name = new StringName('decode_var_size')
      this._bindings.method_decode_var_size = internal.variant_get_ptr_builtin_method(
        29,
        _gde_name.opaque,
        954237325
      )
    }
    {
      let _gde_name = new StringName('to_int32_array')
      this._bindings.method_to_int32_array = internal.variant_get_ptr_builtin_method(
        29,
        _gde_name.opaque,
        3158844420
      )
    }
    {
      let _gde_name = new StringName('to_int64_array')
      this._bindings.method_to_int64_array = internal.variant_get_ptr_builtin_method(
        29,
        _gde_name.opaque,
        1961294120
      )
    }
    {
      let _gde_name = new StringName('to_float32_array')
      this._bindings.method_to_float32_array = internal.variant_get_ptr_builtin_method(
        29,
        _gde_name.opaque,
        3575107827
      )
    }
    {
      let _gde_name = new StringName('to_float64_array')
      this._bindings.method_to_float64_array = internal.variant_get_ptr_builtin_method(
        29,
        _gde_name.opaque,
        1627308337
      )
    }
    {
      let _gde_name = new StringName('encode_u8')
      this._bindings.method_encode_u8 = internal.variant_get_ptr_builtin_method(
        29,
        _gde_name.opaque,
        3638975848
      )
    }
    {
      let _gde_name = new StringName('encode_s8')
      this._bindings.method_encode_s8 = internal.variant_get_ptr_builtin_method(
        29,
        _gde_name.opaque,
        3638975848
      )
    }
    {
      let _gde_name = new StringName('encode_u16')
      this._bindings.method_encode_u16 = internal.variant_get_ptr_builtin_method(
        29,
        _gde_name.opaque,
        3638975848
      )
    }
    {
      let _gde_name = new StringName('encode_s16')
      this._bindings.method_encode_s16 = internal.variant_get_ptr_builtin_method(
        29,
        _gde_name.opaque,
        3638975848
      )
    }
    {
      let _gde_name = new StringName('encode_u32')
      this._bindings.method_encode_u32 = internal.variant_get_ptr_builtin_method(
        29,
        _gde_name.opaque,
        3638975848
      )
    }
    {
      let _gde_name = new StringName('encode_s32')
      this._bindings.method_encode_s32 = internal.variant_get_ptr_builtin_method(
        29,
        _gde_name.opaque,
        3638975848
      )
    }
    {
      let _gde_name = new StringName('encode_u64')
      this._bindings.method_encode_u64 = internal.variant_get_ptr_builtin_method(
        29,
        _gde_name.opaque,
        3638975848
      )
    }
    {
      let _gde_name = new StringName('encode_s64')
      this._bindings.method_encode_s64 = internal.variant_get_ptr_builtin_method(
        29,
        _gde_name.opaque,
        3638975848
      )
    }
    {
      let _gde_name = new StringName('encode_half')
      this._bindings.method_encode_half = internal.variant_get_ptr_builtin_method(
        29,
        _gde_name.opaque,
        1113000516
      )
    }
    {
      let _gde_name = new StringName('encode_float')
      this._bindings.method_encode_float = internal.variant_get_ptr_builtin_method(
        29,
        _gde_name.opaque,
        1113000516
      )
    }
    {
      let _gde_name = new StringName('encode_double')
      this._bindings.method_encode_double = internal.variant_get_ptr_builtin_method(
        29,
        _gde_name.opaque,
        1113000516
      )
    }
    {
      let _gde_name = new StringName('encode_var')
      this._bindings.method_encode_var = internal.variant_get_ptr_builtin_method(
        29,
        _gde_name.opaque,
        2604460497
      )
    }
  }

  
  size () {
    let ret
    ret = _call_builtin_method_ptr_ret(
      PackedByteArray._bindings.method_size,
      this,
      2,
      []
    )
    return ret
  }
  is_empty () {
    let ret
    ret = _call_builtin_method_ptr_ret(
      PackedByteArray._bindings.method_is_empty,
      this,
      1,
      []
    )
    return ret
  }
  set (_index, _value) {
    _call_builtin_method_ptr_no_ret(
      PackedByteArray._bindings.method_set,
      this,
      [_index, _value]
    )
  }
  push_back (_value) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      PackedByteArray._bindings.method_push_back,
      this,
      1,
      [_value]
    )
    return ret
  }
  append (_value) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      PackedByteArray._bindings.method_append,
      this,
      1,
      [_value]
    )
    return ret
  }
  append_array (_array) {
    _call_builtin_method_ptr_no_ret(
      PackedByteArray._bindings.method_append_array,
      this,
      [_array]
    )
  }
  remove_at (_index) {
    _call_builtin_method_ptr_no_ret(
      PackedByteArray._bindings.method_remove_at,
      this,
      [_index]
    )
  }
  insert (_at_index, _value) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      PackedByteArray._bindings.method_insert,
      this,
      2,
      [_at_index, _value]
    )
    return ret
  }
  fill (_value) {
    _call_builtin_method_ptr_no_ret(
      PackedByteArray._bindings.method_fill,
      this,
      [_value]
    )
  }
  resize (_new_size) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      PackedByteArray._bindings.method_resize,
      this,
      2,
      [_new_size]
    )
    return ret
  }
  clear () {
    _call_builtin_method_ptr_no_ret(
      PackedByteArray._bindings.method_clear,
      this,
      []
    )
  }
  has (_value) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      PackedByteArray._bindings.method_has,
      this,
      1,
      [_value]
    )
    return ret
  }
  reverse () {
    _call_builtin_method_ptr_no_ret(
      PackedByteArray._bindings.method_reverse,
      this,
      []
    )
  }
  slice (_begin, _end) {
    let ret = new PackedByteArray()
    ret.opaque = _call_builtin_method_ptr_ret(
      PackedByteArray._bindings.method_slice,
      this,
      29,
      [_begin, _end]
    )
    return ret
  }
  sort () {
    _call_builtin_method_ptr_no_ret(
      PackedByteArray._bindings.method_sort,
      this,
      []
    )
  }
  bsearch (_value, _before) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      PackedByteArray._bindings.method_bsearch,
      this,
      2,
      [_value, _before]
    )
    return ret
  }
  duplicate () {
    let ret = new PackedByteArray()
    ret.opaque = _call_builtin_method_ptr_ret(
      PackedByteArray._bindings.method_duplicate,
      this,
      29,
      []
    )
    return ret
  }
  find (_value, _from) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      PackedByteArray._bindings.method_find,
      this,
      2,
      [_value, _from]
    )
    return ret
  }
  rfind (_value, _from) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      PackedByteArray._bindings.method_rfind,
      this,
      2,
      [_value, _from]
    )
    return ret
  }
  count (_value) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      PackedByteArray._bindings.method_count,
      this,
      2,
      [_value]
    )
    return ret
  }
  get_string_from_ascii () {
    let ret = new GDString()
    ret.opaque = _call_builtin_method_ptr_ret(
      PackedByteArray._bindings.method_get_string_from_ascii,
      this,
      4,
      []
    )
    return ret
  }
  get_string_from_utf8 () {
    let ret = new GDString()
    ret.opaque = _call_builtin_method_ptr_ret(
      PackedByteArray._bindings.method_get_string_from_utf8,
      this,
      4,
      []
    )
    return ret
  }
  get_string_from_utf16 () {
    let ret = new GDString()
    ret.opaque = _call_builtin_method_ptr_ret(
      PackedByteArray._bindings.method_get_string_from_utf16,
      this,
      4,
      []
    )
    return ret
  }
  get_string_from_utf32 () {
    let ret = new GDString()
    ret.opaque = _call_builtin_method_ptr_ret(
      PackedByteArray._bindings.method_get_string_from_utf32,
      this,
      4,
      []
    )
    return ret
  }
  get_string_from_wchar () {
    let ret = new GDString()
    ret.opaque = _call_builtin_method_ptr_ret(
      PackedByteArray._bindings.method_get_string_from_wchar,
      this,
      4,
      []
    )
    return ret
  }
  hex_encode () {
    let ret = new GDString()
    ret.opaque = _call_builtin_method_ptr_ret(
      PackedByteArray._bindings.method_hex_encode,
      this,
      4,
      []
    )
    return ret
  }
  compress (_compression_mode) {
    let ret = new PackedByteArray()
    ret.opaque = _call_builtin_method_ptr_ret(
      PackedByteArray._bindings.method_compress,
      this,
      29,
      [_compression_mode]
    )
    return ret
  }
  decompress (_buffer_size, _compression_mode) {
    let ret = new PackedByteArray()
    ret.opaque = _call_builtin_method_ptr_ret(
      PackedByteArray._bindings.method_decompress,
      this,
      29,
      [_buffer_size, _compression_mode]
    )
    return ret
  }
  decompress_dynamic (_max_output_size, _compression_mode) {
    let ret = new PackedByteArray()
    ret.opaque = _call_builtin_method_ptr_ret(
      PackedByteArray._bindings.method_decompress_dynamic,
      this,
      29,
      [_max_output_size, _compression_mode]
    )
    return ret
  }
  decode_u8 (_byte_offset) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      PackedByteArray._bindings.method_decode_u8,
      this,
      2,
      [_byte_offset]
    )
    return ret
  }
  decode_s8 (_byte_offset) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      PackedByteArray._bindings.method_decode_s8,
      this,
      2,
      [_byte_offset]
    )
    return ret
  }
  decode_u16 (_byte_offset) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      PackedByteArray._bindings.method_decode_u16,
      this,
      2,
      [_byte_offset]
    )
    return ret
  }
  decode_s16 (_byte_offset) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      PackedByteArray._bindings.method_decode_s16,
      this,
      2,
      [_byte_offset]
    )
    return ret
  }
  decode_u32 (_byte_offset) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      PackedByteArray._bindings.method_decode_u32,
      this,
      2,
      [_byte_offset]
    )
    return ret
  }
  decode_s32 (_byte_offset) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      PackedByteArray._bindings.method_decode_s32,
      this,
      2,
      [_byte_offset]
    )
    return ret
  }
  decode_u64 (_byte_offset) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      PackedByteArray._bindings.method_decode_u64,
      this,
      2,
      [_byte_offset]
    )
    return ret
  }
  decode_s64 (_byte_offset) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      PackedByteArray._bindings.method_decode_s64,
      this,
      2,
      [_byte_offset]
    )
    return ret
  }
  decode_half (_byte_offset) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      PackedByteArray._bindings.method_decode_half,
      this,
      3,
      [_byte_offset]
    )
    return ret
  }
  decode_float (_byte_offset) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      PackedByteArray._bindings.method_decode_float,
      this,
      3,
      [_byte_offset]
    )
    return ret
  }
  decode_double (_byte_offset) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      PackedByteArray._bindings.method_decode_double,
      this,
      3,
      [_byte_offset]
    )
    return ret
  }
  has_encoded_var (_byte_offset, _allow_objects) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      PackedByteArray._bindings.method_has_encoded_var,
      this,
      1,
      [_byte_offset, _allow_objects]
    )
    return ret
  }
  decode_var (_byte_offset, _allow_objects) {
    let ret = new Variant()
    ret.opaque = _call_builtin_method_ptr_ret(
      PackedByteArray._bindings.method_decode_var,
      this,
      39,
      [_byte_offset, _allow_objects]
    )
    return ret
  }
  decode_var_size (_byte_offset, _allow_objects) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      PackedByteArray._bindings.method_decode_var_size,
      this,
      2,
      [_byte_offset, _allow_objects]
    )
    return ret
  }
  to_int32_array () {
    let ret = new PackedInt32Array()
    ret.opaque = _call_builtin_method_ptr_ret(
      PackedByteArray._bindings.method_to_int32_array,
      this,
      30,
      []
    )
    return ret
  }
  to_int64_array () {
    let ret = new PackedInt64Array()
    ret.opaque = _call_builtin_method_ptr_ret(
      PackedByteArray._bindings.method_to_int64_array,
      this,
      31,
      []
    )
    return ret
  }
  to_float32_array () {
    let ret = new PackedFloat32Array()
    ret.opaque = _call_builtin_method_ptr_ret(
      PackedByteArray._bindings.method_to_float32_array,
      this,
      32,
      []
    )
    return ret
  }
  to_float64_array () {
    let ret = new PackedFloat64Array()
    ret.opaque = _call_builtin_method_ptr_ret(
      PackedByteArray._bindings.method_to_float64_array,
      this,
      33,
      []
    )
    return ret
  }
  encode_u8 (_byte_offset, _value) {
    _call_builtin_method_ptr_no_ret(
      PackedByteArray._bindings.method_encode_u8,
      this,
      [_byte_offset, _value]
    )
  }
  encode_s8 (_byte_offset, _value) {
    _call_builtin_method_ptr_no_ret(
      PackedByteArray._bindings.method_encode_s8,
      this,
      [_byte_offset, _value]
    )
  }
  encode_u16 (_byte_offset, _value) {
    _call_builtin_method_ptr_no_ret(
      PackedByteArray._bindings.method_encode_u16,
      this,
      [_byte_offset, _value]
    )
  }
  encode_s16 (_byte_offset, _value) {
    _call_builtin_method_ptr_no_ret(
      PackedByteArray._bindings.method_encode_s16,
      this,
      [_byte_offset, _value]
    )
  }
  encode_u32 (_byte_offset, _value) {
    _call_builtin_method_ptr_no_ret(
      PackedByteArray._bindings.method_encode_u32,
      this,
      [_byte_offset, _value]
    )
  }
  encode_s32 (_byte_offset, _value) {
    _call_builtin_method_ptr_no_ret(
      PackedByteArray._bindings.method_encode_s32,
      this,
      [_byte_offset, _value]
    )
  }
  encode_u64 (_byte_offset, _value) {
    _call_builtin_method_ptr_no_ret(
      PackedByteArray._bindings.method_encode_u64,
      this,
      [_byte_offset, _value]
    )
  }
  encode_s64 (_byte_offset, _value) {
    _call_builtin_method_ptr_no_ret(
      PackedByteArray._bindings.method_encode_s64,
      this,
      [_byte_offset, _value]
    )
  }
  encode_half (_byte_offset, _value) {
    _call_builtin_method_ptr_no_ret(
      PackedByteArray._bindings.method_encode_half,
      this,
      [_byte_offset, _value]
    )
  }
  encode_float (_byte_offset, _value) {
    _call_builtin_method_ptr_no_ret(
      PackedByteArray._bindings.method_encode_float,
      this,
      [_byte_offset, _value]
    )
  }
  encode_double (_byte_offset, _value) {
    _call_builtin_method_ptr_no_ret(
      PackedByteArray._bindings.method_encode_double,
      this,
      [_byte_offset, _value]
    )
  }
  encode_var (_byte_offset, _value, _allow_objects) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      PackedByteArray._bindings.method_encode_var,
      this,
      2,
      [_byte_offset, _value, _allow_objects]
    )
    return ret
  }
static {
    this._init_bindings();
  }
}