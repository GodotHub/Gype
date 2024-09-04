import * as internal from '__internal__'
import {
  _call_builtin_constructor,
  _call_builtin_method_ptr_ret,
  _call_builtin_method_ptr_no_ret
} from '@js_godot/core/builtin_ptrcall'
import { Variant } from '@js_godot/variant/variant'
import { PackedByteArray } from '@js_godot/variant/packed_byte_array'
import { PackedFloat64Array } from '@js_godot/variant/packed_float64_array'
import { PackedStringArray } from '@js_godot/variant/packed_string_array'
import { GDString } from '@js_godot/variant/gd_string'

class _MethodBindings {
  from_variant_constructor
  destructor
  constructor_0
  constructor_1
  constructor_2
  method_casecmp_to
  method_nocasecmp_to
  method_naturalcasecmp_to
  method_naturalnocasecmp_to
  method_filecasecmp_to
  method_filenocasecmp_to
  method_length
  method_substr
  method_get_slice
  method_get_slicec
  method_get_slice_count
  method_find
  method_findn
  method_count
  method_countn
  method_rfind
  method_rfindn
  method_match
  method_matchn
  method_begins_with
  method_ends_with
  method_is_subsequence_of
  method_is_subsequence_ofn
  method_bigrams
  method_similarity
  method_format
  method_replace
  method_replacen
  method_repeat
  method_reverse
  method_insert
  method_erase
  method_capitalize
  method_to_camel_case
  method_to_pascal_case
  method_to_snake_case
  method_split
  method_rsplit
  method_split_floats
  method_join
  method_to_upper
  method_to_lower
  method_left
  method_right
  method_strip_edges
  method_strip_escapes
  method_lstrip
  method_rstrip
  method_get_extension
  method_get_basename
  method_path_join
  method_unicode_at
  method_indent
  method_dedent
  method_md5_text
  method_sha1_text
  method_sha256_text
  method_md5_buffer
  method_sha1_buffer
  method_sha256_buffer
  method_is_empty
  method_contains
  method_containsn
  method_is_absolute_path
  method_is_relative_path
  method_simplify_path
  method_get_base_dir
  method_get_file
  method_xml_escape
  method_xml_unescape
  method_uri_encode
  method_uri_decode
  method_c_escape
  method_c_unescape
  method_json_escape
  method_validate_node_name
  method_validate_filename
  method_is_valid_identifier
  method_is_valid_int
  method_is_valid_float
  method_is_valid_hex_number
  method_is_valid_html_color
  method_is_valid_ip_address
  method_is_valid_filename
  method_to_int
  method_to_float
  method_hex_to_int
  method_bin_to_int
  method_lpad
  method_rpad
  method_pad_decimals
  method_pad_zeros
  method_trim_prefix
  method_trim_suffix
  method_to_ascii_buffer
  method_to_utf8_buffer
  method_to_utf16_buffer
  method_to_utf32_buffer
  method_hex_decode
  method_to_wchar_buffer
  method_hash
  operator_equal_Variant
  operator_not_equal_Variant
  operator_module_Variant
  operator_not_
  operator_module_bool
  operator_module_int
  operator_module_float
  operator_equal_String
  operator_not_equal_String
  operator_add_String
  operator_module_String
  operator_in_String
  operator_module_Vector2
  operator_module_Vector2i
  operator_module_Rect2
  operator_module_Rect2i
  operator_module_Vector3
  operator_module_Vector3i
  operator_module_Transform2D
  operator_module_Vector4
  operator_module_Vector4i
  operator_module_Plane
  operator_module_Quaternion
  operator_module_AABB
  operator_module_Basis
  operator_module_Transform3D
  operator_module_Projection
  operator_module_Color
  operator_equal_StringName
  operator_not_equal_StringName
  operator_less_StringName
  operator_less_equal_StringName
  operator_greater_StringName
  operator_greater_equal_StringName
  operator_add_StringName
  operator_module_StringName
  operator_in_StringName
  operator_module_NodePath
  operator_module_Object
  operator_in_Object
  operator_module_Callable
  operator_module_Signal
  operator_module_Dictionary
  operator_in_Dictionary
  operator_module_Array
  operator_in_Array
  operator_module_PackedByteArray
  operator_module_PackedInt32Array
  operator_module_PackedInt64Array
  operator_module_PackedFloat32Array
  operator_module_PackedFloat64Array
  operator_module_PackedStringArray
  operator_in_PackedStringArray
  operator_module_PackedVector2Array
  operator_module_PackedVector3Array
  operator_module_PackedColorArray
  operator_module_PackedVector4Array
}

export class StringName {
  static #SIZE = 8
  opaque = new Uint8Array(StringName.#SIZE)

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor (from) {
    if (!from) {
      _call_builtin_constructor(StringName._bindings.constructor_0, this)
    }else if (from instanceof StringName) {
      _call_builtin_constructor(StringName._bindings.constructor_1, this, [
        from
      ])
    }else if (from instanceof GDString) {
      _call_builtin_constructor(StringName._bindings.constructor_2, this, [
        from
      ])
    } else if (from.constructor.name === "Variant") {
      StringName._bindings.from_variant_constructor(this.opaque, from.opaque)
    } else if (typeof from == 'string') {
      internal.string_name_new_with_latin1_chars(this.opaque, from, false)
    } else if (typeof from == 'number' || typeof from == "boolean") {
      internal.string_name_new_with_latin1_chars(this.opaque, from.toString(), false)
    }
  }
  
  static __init_bindings_constructors_destructor () {
    this._bindings.from_variant_constructor = internal.get_variant_to_type_constructor(
      21
    )
    this._bindings.constructor_0 = internal.variant_get_ptr_constructor(
      21,
      0
    )
    this._bindings.constructor_1 = internal.variant_get_ptr_constructor(
      21,
      1
    )
    this._bindings.constructor_2 = internal.variant_get_ptr_constructor(
      21,
      2
    )
    this._bindings.destructor = internal.variant_get_ptr_destructor(
      21
    )
  }
  
  static async _init_bindings () {
    if (this.#initialized) {
      return;
    }
    this.#initialized = true;
    this.__init_bindings_constructors_destructor()
    {
      let _gde_name = new StringName('casecmp_to')
      this._bindings.method_casecmp_to = internal.variant_get_ptr_builtin_method(
        21,
        _gde_name.opaque,
        2920860731
      )
    }
    {
      let _gde_name = new StringName('nocasecmp_to')
      this._bindings.method_nocasecmp_to = internal.variant_get_ptr_builtin_method(
        21,
        _gde_name.opaque,
        2920860731
      )
    }
    {
      let _gde_name = new StringName('naturalcasecmp_to')
      this._bindings.method_naturalcasecmp_to = internal.variant_get_ptr_builtin_method(
        21,
        _gde_name.opaque,
        2920860731
      )
    }
    {
      let _gde_name = new StringName('naturalnocasecmp_to')
      this._bindings.method_naturalnocasecmp_to = internal.variant_get_ptr_builtin_method(
        21,
        _gde_name.opaque,
        2920860731
      )
    }
    {
      let _gde_name = new StringName('filecasecmp_to')
      this._bindings.method_filecasecmp_to = internal.variant_get_ptr_builtin_method(
        21,
        _gde_name.opaque,
        2920860731
      )
    }
    {
      let _gde_name = new StringName('filenocasecmp_to')
      this._bindings.method_filenocasecmp_to = internal.variant_get_ptr_builtin_method(
        21,
        _gde_name.opaque,
        2920860731
      )
    }
    {
      let _gde_name = new StringName('length')
      this._bindings.method_length = internal.variant_get_ptr_builtin_method(
        21,
        _gde_name.opaque,
        3173160232
      )
    }
    {
      let _gde_name = new StringName('substr')
      this._bindings.method_substr = internal.variant_get_ptr_builtin_method(
        21,
        _gde_name.opaque,
        787537301
      )
    }
    {
      let _gde_name = new StringName('get_slice')
      this._bindings.method_get_slice = internal.variant_get_ptr_builtin_method(
        21,
        _gde_name.opaque,
        3535100402
      )
    }
    {
      let _gde_name = new StringName('get_slicec')
      this._bindings.method_get_slicec = internal.variant_get_ptr_builtin_method(
        21,
        _gde_name.opaque,
        787537301
      )
    }
    {
      let _gde_name = new StringName('get_slice_count')
      this._bindings.method_get_slice_count = internal.variant_get_ptr_builtin_method(
        21,
        _gde_name.opaque,
        2920860731
      )
    }
    {
      let _gde_name = new StringName('find')
      this._bindings.method_find = internal.variant_get_ptr_builtin_method(
        21,
        _gde_name.opaque,
        1760645412
      )
    }
    {
      let _gde_name = new StringName('findn')
      this._bindings.method_findn = internal.variant_get_ptr_builtin_method(
        21,
        _gde_name.opaque,
        1760645412
      )
    }
    {
      let _gde_name = new StringName('count')
      this._bindings.method_count = internal.variant_get_ptr_builtin_method(
        21,
        _gde_name.opaque,
        2343087891
      )
    }
    {
      let _gde_name = new StringName('countn')
      this._bindings.method_countn = internal.variant_get_ptr_builtin_method(
        21,
        _gde_name.opaque,
        2343087891
      )
    }
    {
      let _gde_name = new StringName('rfind')
      this._bindings.method_rfind = internal.variant_get_ptr_builtin_method(
        21,
        _gde_name.opaque,
        1760645412
      )
    }
    {
      let _gde_name = new StringName('rfindn')
      this._bindings.method_rfindn = internal.variant_get_ptr_builtin_method(
        21,
        _gde_name.opaque,
        1760645412
      )
    }
    {
      let _gde_name = new StringName('match')
      this._bindings.method_match = internal.variant_get_ptr_builtin_method(
        21,
        _gde_name.opaque,
        2566493496
      )
    }
    {
      let _gde_name = new StringName('matchn')
      this._bindings.method_matchn = internal.variant_get_ptr_builtin_method(
        21,
        _gde_name.opaque,
        2566493496
      )
    }
    {
      let _gde_name = new StringName('begins_with')
      this._bindings.method_begins_with = internal.variant_get_ptr_builtin_method(
        21,
        _gde_name.opaque,
        2566493496
      )
    }
    {
      let _gde_name = new StringName('ends_with')
      this._bindings.method_ends_with = internal.variant_get_ptr_builtin_method(
        21,
        _gde_name.opaque,
        2566493496
      )
    }
    {
      let _gde_name = new StringName('is_subsequence_of')
      this._bindings.method_is_subsequence_of = internal.variant_get_ptr_builtin_method(
        21,
        _gde_name.opaque,
        2566493496
      )
    }
    {
      let _gde_name = new StringName('is_subsequence_ofn')
      this._bindings.method_is_subsequence_ofn = internal.variant_get_ptr_builtin_method(
        21,
        _gde_name.opaque,
        2566493496
      )
    }
    {
      let _gde_name = new StringName('bigrams')
      this._bindings.method_bigrams = internal.variant_get_ptr_builtin_method(
        21,
        _gde_name.opaque,
        747180633
      )
    }
    {
      let _gde_name = new StringName('similarity')
      this._bindings.method_similarity = internal.variant_get_ptr_builtin_method(
        21,
        _gde_name.opaque,
        2697460964
      )
    }
    {
      let _gde_name = new StringName('format')
      this._bindings.method_format = internal.variant_get_ptr_builtin_method(
        21,
        _gde_name.opaque,
        3212199029
      )
    }
    {
      let _gde_name = new StringName('replace')
      this._bindings.method_replace = internal.variant_get_ptr_builtin_method(
        21,
        _gde_name.opaque,
        1340436205
      )
    }
    {
      let _gde_name = new StringName('replacen')
      this._bindings.method_replacen = internal.variant_get_ptr_builtin_method(
        21,
        _gde_name.opaque,
        1340436205
      )
    }
    {
      let _gde_name = new StringName('repeat')
      this._bindings.method_repeat = internal.variant_get_ptr_builtin_method(
        21,
        _gde_name.opaque,
        2162347432
      )
    }
    {
      let _gde_name = new StringName('reverse')
      this._bindings.method_reverse = internal.variant_get_ptr_builtin_method(
        21,
        _gde_name.opaque,
        3942272618
      )
    }
    {
      let _gde_name = new StringName('insert')
      this._bindings.method_insert = internal.variant_get_ptr_builtin_method(
        21,
        _gde_name.opaque,
        248737229
      )
    }
    {
      let _gde_name = new StringName('erase')
      this._bindings.method_erase = internal.variant_get_ptr_builtin_method(
        21,
        _gde_name.opaque,
        787537301
      )
    }
    {
      let _gde_name = new StringName('capitalize')
      this._bindings.method_capitalize = internal.variant_get_ptr_builtin_method(
        21,
        _gde_name.opaque,
        3942272618
      )
    }
    {
      let _gde_name = new StringName('to_camel_case')
      this._bindings.method_to_camel_case = internal.variant_get_ptr_builtin_method(
        21,
        _gde_name.opaque,
        3942272618
      )
    }
    {
      let _gde_name = new StringName('to_pascal_case')
      this._bindings.method_to_pascal_case = internal.variant_get_ptr_builtin_method(
        21,
        _gde_name.opaque,
        3942272618
      )
    }
    {
      let _gde_name = new StringName('to_snake_case')
      this._bindings.method_to_snake_case = internal.variant_get_ptr_builtin_method(
        21,
        _gde_name.opaque,
        3942272618
      )
    }
    {
      let _gde_name = new StringName('split')
      this._bindings.method_split = internal.variant_get_ptr_builtin_method(
        21,
        _gde_name.opaque,
        1252735785
      )
    }
    {
      let _gde_name = new StringName('rsplit')
      this._bindings.method_rsplit = internal.variant_get_ptr_builtin_method(
        21,
        _gde_name.opaque,
        1252735785
      )
    }
    {
      let _gde_name = new StringName('split_floats')
      this._bindings.method_split_floats = internal.variant_get_ptr_builtin_method(
        21,
        _gde_name.opaque,
        2092079095
      )
    }
    {
      let _gde_name = new StringName('join')
      this._bindings.method_join = internal.variant_get_ptr_builtin_method(
        21,
        _gde_name.opaque,
        3595973238
      )
    }
    {
      let _gde_name = new StringName('to_upper')
      this._bindings.method_to_upper = internal.variant_get_ptr_builtin_method(
        21,
        _gde_name.opaque,
        3942272618
      )
    }
    {
      let _gde_name = new StringName('to_lower')
      this._bindings.method_to_lower = internal.variant_get_ptr_builtin_method(
        21,
        _gde_name.opaque,
        3942272618
      )
    }
    {
      let _gde_name = new StringName('left')
      this._bindings.method_left = internal.variant_get_ptr_builtin_method(
        21,
        _gde_name.opaque,
        2162347432
      )
    }
    {
      let _gde_name = new StringName('right')
      this._bindings.method_right = internal.variant_get_ptr_builtin_method(
        21,
        _gde_name.opaque,
        2162347432
      )
    }
    {
      let _gde_name = new StringName('strip_edges')
      this._bindings.method_strip_edges = internal.variant_get_ptr_builtin_method(
        21,
        _gde_name.opaque,
        907855311
      )
    }
    {
      let _gde_name = new StringName('strip_escapes')
      this._bindings.method_strip_escapes = internal.variant_get_ptr_builtin_method(
        21,
        _gde_name.opaque,
        3942272618
      )
    }
    {
      let _gde_name = new StringName('lstrip')
      this._bindings.method_lstrip = internal.variant_get_ptr_builtin_method(
        21,
        _gde_name.opaque,
        3134094431
      )
    }
    {
      let _gde_name = new StringName('rstrip')
      this._bindings.method_rstrip = internal.variant_get_ptr_builtin_method(
        21,
        _gde_name.opaque,
        3134094431
      )
    }
    {
      let _gde_name = new StringName('get_extension')
      this._bindings.method_get_extension = internal.variant_get_ptr_builtin_method(
        21,
        _gde_name.opaque,
        3942272618
      )
    }
    {
      let _gde_name = new StringName('get_basename')
      this._bindings.method_get_basename = internal.variant_get_ptr_builtin_method(
        21,
        _gde_name.opaque,
        3942272618
      )
    }
    {
      let _gde_name = new StringName('path_join')
      this._bindings.method_path_join = internal.variant_get_ptr_builtin_method(
        21,
        _gde_name.opaque,
        3134094431
      )
    }
    {
      let _gde_name = new StringName('unicode_at')
      this._bindings.method_unicode_at = internal.variant_get_ptr_builtin_method(
        21,
        _gde_name.opaque,
        4103005248
      )
    }
    {
      let _gde_name = new StringName('indent')
      this._bindings.method_indent = internal.variant_get_ptr_builtin_method(
        21,
        _gde_name.opaque,
        3134094431
      )
    }
    {
      let _gde_name = new StringName('dedent')
      this._bindings.method_dedent = internal.variant_get_ptr_builtin_method(
        21,
        _gde_name.opaque,
        3942272618
      )
    }
    {
      let _gde_name = new StringName('md5_text')
      this._bindings.method_md5_text = internal.variant_get_ptr_builtin_method(
        21,
        _gde_name.opaque,
        3942272618
      )
    }
    {
      let _gde_name = new StringName('sha1_text')
      this._bindings.method_sha1_text = internal.variant_get_ptr_builtin_method(
        21,
        _gde_name.opaque,
        3942272618
      )
    }
    {
      let _gde_name = new StringName('sha256_text')
      this._bindings.method_sha256_text = internal.variant_get_ptr_builtin_method(
        21,
        _gde_name.opaque,
        3942272618
      )
    }
    {
      let _gde_name = new StringName('md5_buffer')
      this._bindings.method_md5_buffer = internal.variant_get_ptr_builtin_method(
        21,
        _gde_name.opaque,
        247621236
      )
    }
    {
      let _gde_name = new StringName('sha1_buffer')
      this._bindings.method_sha1_buffer = internal.variant_get_ptr_builtin_method(
        21,
        _gde_name.opaque,
        247621236
      )
    }
    {
      let _gde_name = new StringName('sha256_buffer')
      this._bindings.method_sha256_buffer = internal.variant_get_ptr_builtin_method(
        21,
        _gde_name.opaque,
        247621236
      )
    }
    {
      let _gde_name = new StringName('is_empty')
      this._bindings.method_is_empty = internal.variant_get_ptr_builtin_method(
        21,
        _gde_name.opaque,
        3918633141
      )
    }
    {
      let _gde_name = new StringName('contains')
      this._bindings.method_contains = internal.variant_get_ptr_builtin_method(
        21,
        _gde_name.opaque,
        2566493496
      )
    }
    {
      let _gde_name = new StringName('containsn')
      this._bindings.method_containsn = internal.variant_get_ptr_builtin_method(
        21,
        _gde_name.opaque,
        2566493496
      )
    }
    {
      let _gde_name = new StringName('is_absolute_path')
      this._bindings.method_is_absolute_path = internal.variant_get_ptr_builtin_method(
        21,
        _gde_name.opaque,
        3918633141
      )
    }
    {
      let _gde_name = new StringName('is_relative_path')
      this._bindings.method_is_relative_path = internal.variant_get_ptr_builtin_method(
        21,
        _gde_name.opaque,
        3918633141
      )
    }
    {
      let _gde_name = new StringName('simplify_path')
      this._bindings.method_simplify_path = internal.variant_get_ptr_builtin_method(
        21,
        _gde_name.opaque,
        3942272618
      )
    }
    {
      let _gde_name = new StringName('get_base_dir')
      this._bindings.method_get_base_dir = internal.variant_get_ptr_builtin_method(
        21,
        _gde_name.opaque,
        3942272618
      )
    }
    {
      let _gde_name = new StringName('get_file')
      this._bindings.method_get_file = internal.variant_get_ptr_builtin_method(
        21,
        _gde_name.opaque,
        3942272618
      )
    }
    {
      let _gde_name = new StringName('xml_escape')
      this._bindings.method_xml_escape = internal.variant_get_ptr_builtin_method(
        21,
        _gde_name.opaque,
        3429816538
      )
    }
    {
      let _gde_name = new StringName('xml_unescape')
      this._bindings.method_xml_unescape = internal.variant_get_ptr_builtin_method(
        21,
        _gde_name.opaque,
        3942272618
      )
    }
    {
      let _gde_name = new StringName('uri_encode')
      this._bindings.method_uri_encode = internal.variant_get_ptr_builtin_method(
        21,
        _gde_name.opaque,
        3942272618
      )
    }
    {
      let _gde_name = new StringName('uri_decode')
      this._bindings.method_uri_decode = internal.variant_get_ptr_builtin_method(
        21,
        _gde_name.opaque,
        3942272618
      )
    }
    {
      let _gde_name = new StringName('c_escape')
      this._bindings.method_c_escape = internal.variant_get_ptr_builtin_method(
        21,
        _gde_name.opaque,
        3942272618
      )
    }
    {
      let _gde_name = new StringName('c_unescape')
      this._bindings.method_c_unescape = internal.variant_get_ptr_builtin_method(
        21,
        _gde_name.opaque,
        3942272618
      )
    }
    {
      let _gde_name = new StringName('json_escape')
      this._bindings.method_json_escape = internal.variant_get_ptr_builtin_method(
        21,
        _gde_name.opaque,
        3942272618
      )
    }
    {
      let _gde_name = new StringName('validate_node_name')
      this._bindings.method_validate_node_name = internal.variant_get_ptr_builtin_method(
        21,
        _gde_name.opaque,
        3942272618
      )
    }
    {
      let _gde_name = new StringName('validate_filename')
      this._bindings.method_validate_filename = internal.variant_get_ptr_builtin_method(
        21,
        _gde_name.opaque,
        3942272618
      )
    }
    {
      let _gde_name = new StringName('is_valid_identifier')
      this._bindings.method_is_valid_identifier = internal.variant_get_ptr_builtin_method(
        21,
        _gde_name.opaque,
        3918633141
      )
    }
    {
      let _gde_name = new StringName('is_valid_int')
      this._bindings.method_is_valid_int = internal.variant_get_ptr_builtin_method(
        21,
        _gde_name.opaque,
        3918633141
      )
    }
    {
      let _gde_name = new StringName('is_valid_float')
      this._bindings.method_is_valid_float = internal.variant_get_ptr_builtin_method(
        21,
        _gde_name.opaque,
        3918633141
      )
    }
    {
      let _gde_name = new StringName('is_valid_hex_number')
      this._bindings.method_is_valid_hex_number = internal.variant_get_ptr_builtin_method(
        21,
        _gde_name.opaque,
        593672999
      )
    }
    {
      let _gde_name = new StringName('is_valid_html_color')
      this._bindings.method_is_valid_html_color = internal.variant_get_ptr_builtin_method(
        21,
        _gde_name.opaque,
        3918633141
      )
    }
    {
      let _gde_name = new StringName('is_valid_ip_address')
      this._bindings.method_is_valid_ip_address = internal.variant_get_ptr_builtin_method(
        21,
        _gde_name.opaque,
        3918633141
      )
    }
    {
      let _gde_name = new StringName('is_valid_filename')
      this._bindings.method_is_valid_filename = internal.variant_get_ptr_builtin_method(
        21,
        _gde_name.opaque,
        3918633141
      )
    }
    {
      let _gde_name = new StringName('to_int')
      this._bindings.method_to_int = internal.variant_get_ptr_builtin_method(
        21,
        _gde_name.opaque,
        3173160232
      )
    }
    {
      let _gde_name = new StringName('to_float')
      this._bindings.method_to_float = internal.variant_get_ptr_builtin_method(
        21,
        _gde_name.opaque,
        466405837
      )
    }
    {
      let _gde_name = new StringName('hex_to_int')
      this._bindings.method_hex_to_int = internal.variant_get_ptr_builtin_method(
        21,
        _gde_name.opaque,
        3173160232
      )
    }
    {
      let _gde_name = new StringName('bin_to_int')
      this._bindings.method_bin_to_int = internal.variant_get_ptr_builtin_method(
        21,
        _gde_name.opaque,
        3173160232
      )
    }
    {
      let _gde_name = new StringName('lpad')
      this._bindings.method_lpad = internal.variant_get_ptr_builtin_method(
        21,
        _gde_name.opaque,
        248737229
      )
    }
    {
      let _gde_name = new StringName('rpad')
      this._bindings.method_rpad = internal.variant_get_ptr_builtin_method(
        21,
        _gde_name.opaque,
        248737229
      )
    }
    {
      let _gde_name = new StringName('pad_decimals')
      this._bindings.method_pad_decimals = internal.variant_get_ptr_builtin_method(
        21,
        _gde_name.opaque,
        2162347432
      )
    }
    {
      let _gde_name = new StringName('pad_zeros')
      this._bindings.method_pad_zeros = internal.variant_get_ptr_builtin_method(
        21,
        _gde_name.opaque,
        2162347432
      )
    }
    {
      let _gde_name = new StringName('trim_prefix')
      this._bindings.method_trim_prefix = internal.variant_get_ptr_builtin_method(
        21,
        _gde_name.opaque,
        3134094431
      )
    }
    {
      let _gde_name = new StringName('trim_suffix')
      this._bindings.method_trim_suffix = internal.variant_get_ptr_builtin_method(
        21,
        _gde_name.opaque,
        3134094431
      )
    }
    {
      let _gde_name = new StringName('to_ascii_buffer')
      this._bindings.method_to_ascii_buffer = internal.variant_get_ptr_builtin_method(
        21,
        _gde_name.opaque,
        247621236
      )
    }
    {
      let _gde_name = new StringName('to_utf8_buffer')
      this._bindings.method_to_utf8_buffer = internal.variant_get_ptr_builtin_method(
        21,
        _gde_name.opaque,
        247621236
      )
    }
    {
      let _gde_name = new StringName('to_utf16_buffer')
      this._bindings.method_to_utf16_buffer = internal.variant_get_ptr_builtin_method(
        21,
        _gde_name.opaque,
        247621236
      )
    }
    {
      let _gde_name = new StringName('to_utf32_buffer')
      this._bindings.method_to_utf32_buffer = internal.variant_get_ptr_builtin_method(
        21,
        _gde_name.opaque,
        247621236
      )
    }
    {
      let _gde_name = new StringName('hex_decode')
      this._bindings.method_hex_decode = internal.variant_get_ptr_builtin_method(
        21,
        _gde_name.opaque,
        247621236
      )
    }
    {
      let _gde_name = new StringName('to_wchar_buffer')
      this._bindings.method_to_wchar_buffer = internal.variant_get_ptr_builtin_method(
        21,
        _gde_name.opaque,
        247621236
      )
    }
    {
      let _gde_name = new StringName('hash')
      this._bindings.method_hash = internal.variant_get_ptr_builtin_method(
        21,
        _gde_name.opaque,
        3173160232
      )
    }
  }

  
  casecmp_to (_to) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      StringName._bindings.method_casecmp_to,
      this,
      2,
      [_to]
    )
    return ret
  }
  nocasecmp_to (_to) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      StringName._bindings.method_nocasecmp_to,
      this,
      2,
      [_to]
    )
    return ret
  }
  naturalcasecmp_to (_to) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      StringName._bindings.method_naturalcasecmp_to,
      this,
      2,
      [_to]
    )
    return ret
  }
  naturalnocasecmp_to (_to) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      StringName._bindings.method_naturalnocasecmp_to,
      this,
      2,
      [_to]
    )
    return ret
  }
  filecasecmp_to (_to) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      StringName._bindings.method_filecasecmp_to,
      this,
      2,
      [_to]
    )
    return ret
  }
  filenocasecmp_to (_to) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      StringName._bindings.method_filenocasecmp_to,
      this,
      2,
      [_to]
    )
    return ret
  }
  length () {
    let ret
    ret = _call_builtin_method_ptr_ret(
      StringName._bindings.method_length,
      this,
      2,
      []
    )
    return ret
  }
  substr (_from, _len) {
    let ret = new GDString()
    ret.opaque = _call_builtin_method_ptr_ret(
      StringName._bindings.method_substr,
      this,
      4,
      [_from, _len]
    )
    return ret
  }
  get_slice (_delimiter, _slice) {
    let ret = new GDString()
    ret.opaque = _call_builtin_method_ptr_ret(
      StringName._bindings.method_get_slice,
      this,
      4,
      [_delimiter, _slice]
    )
    return ret
  }
  get_slicec (_delimiter, _slice) {
    let ret = new GDString()
    ret.opaque = _call_builtin_method_ptr_ret(
      StringName._bindings.method_get_slicec,
      this,
      4,
      [_delimiter, _slice]
    )
    return ret
  }
  get_slice_count (_delimiter) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      StringName._bindings.method_get_slice_count,
      this,
      2,
      [_delimiter]
    )
    return ret
  }
  find (_what, _from) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      StringName._bindings.method_find,
      this,
      2,
      [_what, _from]
    )
    return ret
  }
  findn (_what, _from) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      StringName._bindings.method_findn,
      this,
      2,
      [_what, _from]
    )
    return ret
  }
  count (_what, _from, _to) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      StringName._bindings.method_count,
      this,
      2,
      [_what, _from, _to]
    )
    return ret
  }
  countn (_what, _from, _to) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      StringName._bindings.method_countn,
      this,
      2,
      [_what, _from, _to]
    )
    return ret
  }
  rfind (_what, _from) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      StringName._bindings.method_rfind,
      this,
      2,
      [_what, _from]
    )
    return ret
  }
  rfindn (_what, _from) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      StringName._bindings.method_rfindn,
      this,
      2,
      [_what, _from]
    )
    return ret
  }
  match (_expr) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      StringName._bindings.method_match,
      this,
      1,
      [_expr]
    )
    return ret
  }
  matchn (_expr) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      StringName._bindings.method_matchn,
      this,
      1,
      [_expr]
    )
    return ret
  }
  begins_with (_text) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      StringName._bindings.method_begins_with,
      this,
      1,
      [_text]
    )
    return ret
  }
  ends_with (_text) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      StringName._bindings.method_ends_with,
      this,
      1,
      [_text]
    )
    return ret
  }
  is_subsequence_of (_text) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      StringName._bindings.method_is_subsequence_of,
      this,
      1,
      [_text]
    )
    return ret
  }
  is_subsequence_ofn (_text) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      StringName._bindings.method_is_subsequence_ofn,
      this,
      1,
      [_text]
    )
    return ret
  }
  bigrams () {
    let ret = new PackedStringArray()
    ret.opaque = _call_builtin_method_ptr_ret(
      StringName._bindings.method_bigrams,
      this,
      34,
      []
    )
    return ret
  }
  similarity (_text) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      StringName._bindings.method_similarity,
      this,
      3,
      [_text]
    )
    return ret
  }
  format (_values, _placeholder) {
    let ret = new GDString()
    ret.opaque = _call_builtin_method_ptr_ret(
      StringName._bindings.method_format,
      this,
      4,
      [_values, _placeholder]
    )
    return ret
  }
  replace (_what, _forwhat) {
    let ret = new GDString()
    ret.opaque = _call_builtin_method_ptr_ret(
      StringName._bindings.method_replace,
      this,
      4,
      [_what, _forwhat]
    )
    return ret
  }
  replacen (_what, _forwhat) {
    let ret = new GDString()
    ret.opaque = _call_builtin_method_ptr_ret(
      StringName._bindings.method_replacen,
      this,
      4,
      [_what, _forwhat]
    )
    return ret
  }
  repeat (_count) {
    let ret = new GDString()
    ret.opaque = _call_builtin_method_ptr_ret(
      StringName._bindings.method_repeat,
      this,
      4,
      [_count]
    )
    return ret
  }
  reverse () {
    let ret = new GDString()
    ret.opaque = _call_builtin_method_ptr_ret(
      StringName._bindings.method_reverse,
      this,
      4,
      []
    )
    return ret
  }
  insert (_position, _what) {
    let ret = new GDString()
    ret.opaque = _call_builtin_method_ptr_ret(
      StringName._bindings.method_insert,
      this,
      4,
      [_position, _what]
    )
    return ret
  }
  erase (_position, _chars) {
    let ret = new GDString()
    ret.opaque = _call_builtin_method_ptr_ret(
      StringName._bindings.method_erase,
      this,
      4,
      [_position, _chars]
    )
    return ret
  }
  capitalize () {
    let ret = new GDString()
    ret.opaque = _call_builtin_method_ptr_ret(
      StringName._bindings.method_capitalize,
      this,
      4,
      []
    )
    return ret
  }
  to_camel_case () {
    let ret = new GDString()
    ret.opaque = _call_builtin_method_ptr_ret(
      StringName._bindings.method_to_camel_case,
      this,
      4,
      []
    )
    return ret
  }
  to_pascal_case () {
    let ret = new GDString()
    ret.opaque = _call_builtin_method_ptr_ret(
      StringName._bindings.method_to_pascal_case,
      this,
      4,
      []
    )
    return ret
  }
  to_snake_case () {
    let ret = new GDString()
    ret.opaque = _call_builtin_method_ptr_ret(
      StringName._bindings.method_to_snake_case,
      this,
      4,
      []
    )
    return ret
  }
  split (_delimiter, _allow_empty, _maxsplit) {
    let ret = new PackedStringArray()
    ret.opaque = _call_builtin_method_ptr_ret(
      StringName._bindings.method_split,
      this,
      34,
      [_delimiter, _allow_empty, _maxsplit]
    )
    return ret
  }
  rsplit (_delimiter, _allow_empty, _maxsplit) {
    let ret = new PackedStringArray()
    ret.opaque = _call_builtin_method_ptr_ret(
      StringName._bindings.method_rsplit,
      this,
      34,
      [_delimiter, _allow_empty, _maxsplit]
    )
    return ret
  }
  split_floats (_delimiter, _allow_empty) {
    let ret = new PackedFloat64Array()
    ret.opaque = _call_builtin_method_ptr_ret(
      StringName._bindings.method_split_floats,
      this,
      33,
      [_delimiter, _allow_empty]
    )
    return ret
  }
  join (_parts) {
    let ret = new GDString()
    ret.opaque = _call_builtin_method_ptr_ret(
      StringName._bindings.method_join,
      this,
      4,
      [_parts]
    )
    return ret
  }
  to_upper () {
    let ret = new GDString()
    ret.opaque = _call_builtin_method_ptr_ret(
      StringName._bindings.method_to_upper,
      this,
      4,
      []
    )
    return ret
  }
  to_lower () {
    let ret = new GDString()
    ret.opaque = _call_builtin_method_ptr_ret(
      StringName._bindings.method_to_lower,
      this,
      4,
      []
    )
    return ret
  }
  left (_length) {
    let ret = new GDString()
    ret.opaque = _call_builtin_method_ptr_ret(
      StringName._bindings.method_left,
      this,
      4,
      [_length]
    )
    return ret
  }
  right (_length) {
    let ret = new GDString()
    ret.opaque = _call_builtin_method_ptr_ret(
      StringName._bindings.method_right,
      this,
      4,
      [_length]
    )
    return ret
  }
  strip_edges (_left, _right) {
    let ret = new GDString()
    ret.opaque = _call_builtin_method_ptr_ret(
      StringName._bindings.method_strip_edges,
      this,
      4,
      [_left, _right]
    )
    return ret
  }
  strip_escapes () {
    let ret = new GDString()
    ret.opaque = _call_builtin_method_ptr_ret(
      StringName._bindings.method_strip_escapes,
      this,
      4,
      []
    )
    return ret
  }
  lstrip (_chars) {
    let ret = new GDString()
    ret.opaque = _call_builtin_method_ptr_ret(
      StringName._bindings.method_lstrip,
      this,
      4,
      [_chars]
    )
    return ret
  }
  rstrip (_chars) {
    let ret = new GDString()
    ret.opaque = _call_builtin_method_ptr_ret(
      StringName._bindings.method_rstrip,
      this,
      4,
      [_chars]
    )
    return ret
  }
  get_extension () {
    let ret = new GDString()
    ret.opaque = _call_builtin_method_ptr_ret(
      StringName._bindings.method_get_extension,
      this,
      4,
      []
    )
    return ret
  }
  get_basename () {
    let ret = new GDString()
    ret.opaque = _call_builtin_method_ptr_ret(
      StringName._bindings.method_get_basename,
      this,
      4,
      []
    )
    return ret
  }
  path_join (_file) {
    let ret = new GDString()
    ret.opaque = _call_builtin_method_ptr_ret(
      StringName._bindings.method_path_join,
      this,
      4,
      [_file]
    )
    return ret
  }
  unicode_at (_at) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      StringName._bindings.method_unicode_at,
      this,
      2,
      [_at]
    )
    return ret
  }
  indent (_prefix) {
    let ret = new GDString()
    ret.opaque = _call_builtin_method_ptr_ret(
      StringName._bindings.method_indent,
      this,
      4,
      [_prefix]
    )
    return ret
  }
  dedent () {
    let ret = new GDString()
    ret.opaque = _call_builtin_method_ptr_ret(
      StringName._bindings.method_dedent,
      this,
      4,
      []
    )
    return ret
  }
  md5_text () {
    let ret = new GDString()
    ret.opaque = _call_builtin_method_ptr_ret(
      StringName._bindings.method_md5_text,
      this,
      4,
      []
    )
    return ret
  }
  sha1_text () {
    let ret = new GDString()
    ret.opaque = _call_builtin_method_ptr_ret(
      StringName._bindings.method_sha1_text,
      this,
      4,
      []
    )
    return ret
  }
  sha256_text () {
    let ret = new GDString()
    ret.opaque = _call_builtin_method_ptr_ret(
      StringName._bindings.method_sha256_text,
      this,
      4,
      []
    )
    return ret
  }
  md5_buffer () {
    let ret = new PackedByteArray()
    ret.opaque = _call_builtin_method_ptr_ret(
      StringName._bindings.method_md5_buffer,
      this,
      29,
      []
    )
    return ret
  }
  sha1_buffer () {
    let ret = new PackedByteArray()
    ret.opaque = _call_builtin_method_ptr_ret(
      StringName._bindings.method_sha1_buffer,
      this,
      29,
      []
    )
    return ret
  }
  sha256_buffer () {
    let ret = new PackedByteArray()
    ret.opaque = _call_builtin_method_ptr_ret(
      StringName._bindings.method_sha256_buffer,
      this,
      29,
      []
    )
    return ret
  }
  is_empty () {
    let ret
    ret = _call_builtin_method_ptr_ret(
      StringName._bindings.method_is_empty,
      this,
      1,
      []
    )
    return ret
  }
  contains (_what) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      StringName._bindings.method_contains,
      this,
      1,
      [_what]
    )
    return ret
  }
  containsn (_what) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      StringName._bindings.method_containsn,
      this,
      1,
      [_what]
    )
    return ret
  }
  is_absolute_path () {
    let ret
    ret = _call_builtin_method_ptr_ret(
      StringName._bindings.method_is_absolute_path,
      this,
      1,
      []
    )
    return ret
  }
  is_relative_path () {
    let ret
    ret = _call_builtin_method_ptr_ret(
      StringName._bindings.method_is_relative_path,
      this,
      1,
      []
    )
    return ret
  }
  simplify_path () {
    let ret = new GDString()
    ret.opaque = _call_builtin_method_ptr_ret(
      StringName._bindings.method_simplify_path,
      this,
      4,
      []
    )
    return ret
  }
  get_base_dir () {
    let ret = new GDString()
    ret.opaque = _call_builtin_method_ptr_ret(
      StringName._bindings.method_get_base_dir,
      this,
      4,
      []
    )
    return ret
  }
  get_file () {
    let ret = new GDString()
    ret.opaque = _call_builtin_method_ptr_ret(
      StringName._bindings.method_get_file,
      this,
      4,
      []
    )
    return ret
  }
  xml_escape (_escape_quotes) {
    let ret = new GDString()
    ret.opaque = _call_builtin_method_ptr_ret(
      StringName._bindings.method_xml_escape,
      this,
      4,
      [_escape_quotes]
    )
    return ret
  }
  xml_unescape () {
    let ret = new GDString()
    ret.opaque = _call_builtin_method_ptr_ret(
      StringName._bindings.method_xml_unescape,
      this,
      4,
      []
    )
    return ret
  }
  uri_encode () {
    let ret = new GDString()
    ret.opaque = _call_builtin_method_ptr_ret(
      StringName._bindings.method_uri_encode,
      this,
      4,
      []
    )
    return ret
  }
  uri_decode () {
    let ret = new GDString()
    ret.opaque = _call_builtin_method_ptr_ret(
      StringName._bindings.method_uri_decode,
      this,
      4,
      []
    )
    return ret
  }
  c_escape () {
    let ret = new GDString()
    ret.opaque = _call_builtin_method_ptr_ret(
      StringName._bindings.method_c_escape,
      this,
      4,
      []
    )
    return ret
  }
  c_unescape () {
    let ret = new GDString()
    ret.opaque = _call_builtin_method_ptr_ret(
      StringName._bindings.method_c_unescape,
      this,
      4,
      []
    )
    return ret
  }
  json_escape () {
    let ret = new GDString()
    ret.opaque = _call_builtin_method_ptr_ret(
      StringName._bindings.method_json_escape,
      this,
      4,
      []
    )
    return ret
  }
  validate_node_name () {
    let ret = new GDString()
    ret.opaque = _call_builtin_method_ptr_ret(
      StringName._bindings.method_validate_node_name,
      this,
      4,
      []
    )
    return ret
  }
  validate_filename () {
    let ret = new GDString()
    ret.opaque = _call_builtin_method_ptr_ret(
      StringName._bindings.method_validate_filename,
      this,
      4,
      []
    )
    return ret
  }
  is_valid_identifier () {
    let ret
    ret = _call_builtin_method_ptr_ret(
      StringName._bindings.method_is_valid_identifier,
      this,
      1,
      []
    )
    return ret
  }
  is_valid_int () {
    let ret
    ret = _call_builtin_method_ptr_ret(
      StringName._bindings.method_is_valid_int,
      this,
      1,
      []
    )
    return ret
  }
  is_valid_float () {
    let ret
    ret = _call_builtin_method_ptr_ret(
      StringName._bindings.method_is_valid_float,
      this,
      1,
      []
    )
    return ret
  }
  is_valid_hex_number (_with_prefix) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      StringName._bindings.method_is_valid_hex_number,
      this,
      1,
      [_with_prefix]
    )
    return ret
  }
  is_valid_html_color () {
    let ret
    ret = _call_builtin_method_ptr_ret(
      StringName._bindings.method_is_valid_html_color,
      this,
      1,
      []
    )
    return ret
  }
  is_valid_ip_address () {
    let ret
    ret = _call_builtin_method_ptr_ret(
      StringName._bindings.method_is_valid_ip_address,
      this,
      1,
      []
    )
    return ret
  }
  is_valid_filename () {
    let ret
    ret = _call_builtin_method_ptr_ret(
      StringName._bindings.method_is_valid_filename,
      this,
      1,
      []
    )
    return ret
  }
  to_int () {
    let ret
    ret = _call_builtin_method_ptr_ret(
      StringName._bindings.method_to_int,
      this,
      2,
      []
    )
    return ret
  }
  to_float () {
    let ret
    ret = _call_builtin_method_ptr_ret(
      StringName._bindings.method_to_float,
      this,
      3,
      []
    )
    return ret
  }
  hex_to_int () {
    let ret
    ret = _call_builtin_method_ptr_ret(
      StringName._bindings.method_hex_to_int,
      this,
      2,
      []
    )
    return ret
  }
  bin_to_int () {
    let ret
    ret = _call_builtin_method_ptr_ret(
      StringName._bindings.method_bin_to_int,
      this,
      2,
      []
    )
    return ret
  }
  lpad (_min_length, _character) {
    let ret = new GDString()
    ret.opaque = _call_builtin_method_ptr_ret(
      StringName._bindings.method_lpad,
      this,
      4,
      [_min_length, _character]
    )
    return ret
  }
  rpad (_min_length, _character) {
    let ret = new GDString()
    ret.opaque = _call_builtin_method_ptr_ret(
      StringName._bindings.method_rpad,
      this,
      4,
      [_min_length, _character]
    )
    return ret
  }
  pad_decimals (_digits) {
    let ret = new GDString()
    ret.opaque = _call_builtin_method_ptr_ret(
      StringName._bindings.method_pad_decimals,
      this,
      4,
      [_digits]
    )
    return ret
  }
  pad_zeros (_digits) {
    let ret = new GDString()
    ret.opaque = _call_builtin_method_ptr_ret(
      StringName._bindings.method_pad_zeros,
      this,
      4,
      [_digits]
    )
    return ret
  }
  trim_prefix (_prefix) {
    let ret = new GDString()
    ret.opaque = _call_builtin_method_ptr_ret(
      StringName._bindings.method_trim_prefix,
      this,
      4,
      [_prefix]
    )
    return ret
  }
  trim_suffix (_suffix) {
    let ret = new GDString()
    ret.opaque = _call_builtin_method_ptr_ret(
      StringName._bindings.method_trim_suffix,
      this,
      4,
      [_suffix]
    )
    return ret
  }
  to_ascii_buffer () {
    let ret = new PackedByteArray()
    ret.opaque = _call_builtin_method_ptr_ret(
      StringName._bindings.method_to_ascii_buffer,
      this,
      29,
      []
    )
    return ret
  }
  to_utf8_buffer () {
    let ret = new PackedByteArray()
    ret.opaque = _call_builtin_method_ptr_ret(
      StringName._bindings.method_to_utf8_buffer,
      this,
      29,
      []
    )
    return ret
  }
  to_utf16_buffer () {
    let ret = new PackedByteArray()
    ret.opaque = _call_builtin_method_ptr_ret(
      StringName._bindings.method_to_utf16_buffer,
      this,
      29,
      []
    )
    return ret
  }
  to_utf32_buffer () {
    let ret = new PackedByteArray()
    ret.opaque = _call_builtin_method_ptr_ret(
      StringName._bindings.method_to_utf32_buffer,
      this,
      29,
      []
    )
    return ret
  }
  hex_decode () {
    let ret = new PackedByteArray()
    ret.opaque = _call_builtin_method_ptr_ret(
      StringName._bindings.method_hex_decode,
      this,
      29,
      []
    )
    return ret
  }
  to_wchar_buffer () {
    let ret = new PackedByteArray()
    ret.opaque = _call_builtin_method_ptr_ret(
      StringName._bindings.method_to_wchar_buffer,
      this,
      29,
      []
    )
    return ret
  }
  hash () {
    let ret
    ret = _call_builtin_method_ptr_ret(
      StringName._bindings.method_hash,
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