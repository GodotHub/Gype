import {
  get_variant_to_type_constructor,
  variant_get_ptr_constructor,
  string_new_with_latin1_chars,
  variant_get_ptr_builtin_method,
  variant_get_ptr_destructor,
  string_name_new_with_latin1_chars
} from '__internal__'
import { GDExtensionVariantType } from 'src/js_godot/gde/gde'
import {
  _call_builtin_constructor,
  _call_builtin_method_ptr_ret
} from 'src/js_godot/core/builtin_ptrcall'
import { StringName } from 'src/js_godot/variant/string_name'
import { NodePath } from 'src/js_godot/variant/node_path'
import { Variant } from 'src/js_godot/variant/variant'

class _MethodBindings {
  from_variant_constructor
  destructor
  constructor_0
  constructor_1
  constructor_2
  constructor_3
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
  method_hash
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
  method_num_scientific
  method_num
  method_num_int64
  method_num_uint64
  method_chr
  method_humanize_size
  operator_equal_Variant
  operator_not_equal_Variant
  operator_module_Variant
  operator_not_
  operator_module_bool
  operator_module_int
  operator_module_float
  operator_equal_String
  operator_not_equal_String
  operator_less_String
  operator_less_equal_String
  operator_greater_String
  operator_greater_equal_String
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

export class GDString {
  static #SIZE = 8
  opaque = new Uint8Array(GDString.#SIZE)

  static _bindings = new _MethodBindings()

  constructor (from) {
    if (!from) {
      _call_builtin_constructor(GDString._bindings.constructor_0, this)
    } else if (from instanceof GDString) {
      _call_builtin_constructor(GDString._bindings.constructor_1, this, [
        from
      ])
    } else if (from instanceof StringName) {
      _call_builtin_constructor(GDString._bindings.constructor_2, this, [
        from
      ])
    } else if (from instanceof NodePath) {
      _call_builtin_constructor(GDString._bindings.constructor_3, this, [
        from
      ])
    } else if (from instanceof Variant) {
      GDString._bindings.from_variant_constructor(this.opaque, from.opaque)
    } else if (typeof from == 'string') {
      string_new_with_latin1_chars(this.opaque, from)
    } else if (typeof from == 'number' || typeof from == "boolean") {
      string_new_with_latin1_chars(this.opaque, from.toString())
    }}
  
  static __init_bindings_constructors_destructor () {
    this._bindings.from_variant_constructor = get_variant_to_type_constructor(
      GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_STRING
    )
    this._bindings.constructor_0 = variant_get_ptr_constructor(
      GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_STRING,
      0
    )
    this._bindings.constructor_1 = variant_get_ptr_constructor(
      GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_STRING,
      1
    )
    this._bindings.constructor_2 = variant_get_ptr_constructor(
      GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_STRING,
      2
    )
    this._bindings.constructor_3 = variant_get_ptr_constructor(
      GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_STRING,
      3
    )
    this._bindings.destructor = variant_get_ptr_destructor(
      GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_STRING
    )
  }
  
  static _init_bindings () {
    this.__init_bindings_constructors_destructor()
    {
      let _gde_name = new StringName('casecmp_to')
      this._bindings.method_casecmp_to = variant_get_ptr_builtin_method(
        GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_STRING,
        _gde_name.opaque,
        2920860731
      )
    }
    {
      let _gde_name = new StringName('nocasecmp_to')
      this._bindings.method_nocasecmp_to = variant_get_ptr_builtin_method(
        GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_STRING,
        _gde_name.opaque,
        2920860731
      )
    }
    {
      let _gde_name = new StringName('naturalcasecmp_to')
      this._bindings.method_naturalcasecmp_to = variant_get_ptr_builtin_method(
        GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_STRING,
        _gde_name.opaque,
        2920860731
      )
    }
    {
      let _gde_name = new StringName('naturalnocasecmp_to')
      this._bindings.method_naturalnocasecmp_to = variant_get_ptr_builtin_method(
        GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_STRING,
        _gde_name.opaque,
        2920860731
      )
    }
    {
      let _gde_name = new StringName('filecasecmp_to')
      this._bindings.method_filecasecmp_to = variant_get_ptr_builtin_method(
        GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_STRING,
        _gde_name.opaque,
        2920860731
      )
    }
    {
      let _gde_name = new StringName('filenocasecmp_to')
      this._bindings.method_filenocasecmp_to = variant_get_ptr_builtin_method(
        GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_STRING,
        _gde_name.opaque,
        2920860731
      )
    }
    {
      let _gde_name = new StringName('length')
      this._bindings.method_length = variant_get_ptr_builtin_method(
        GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_STRING,
        _gde_name.opaque,
        3173160232
      )
    }
    {
      let _gde_name = new StringName('substr')
      this._bindings.method_substr = variant_get_ptr_builtin_method(
        GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_STRING,
        _gde_name.opaque,
        787537301
      )
    }
    {
      let _gde_name = new StringName('get_slice')
      this._bindings.method_get_slice = variant_get_ptr_builtin_method(
        GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_STRING,
        _gde_name.opaque,
        3535100402
      )
    }
    {
      let _gde_name = new StringName('get_slicec')
      this._bindings.method_get_slicec = variant_get_ptr_builtin_method(
        GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_STRING,
        _gde_name.opaque,
        787537301
      )
    }
    {
      let _gde_name = new StringName('get_slice_count')
      this._bindings.method_get_slice_count = variant_get_ptr_builtin_method(
        GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_STRING,
        _gde_name.opaque,
        2920860731
      )
    }
    {
      let _gde_name = new StringName('find')
      this._bindings.method_find = variant_get_ptr_builtin_method(
        GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_STRING,
        _gde_name.opaque,
        1760645412
      )
    }
    {
      let _gde_name = new StringName('findn')
      this._bindings.method_findn = variant_get_ptr_builtin_method(
        GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_STRING,
        _gde_name.opaque,
        1760645412
      )
    }
    {
      let _gde_name = new StringName('count')
      this._bindings.method_count = variant_get_ptr_builtin_method(
        GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_STRING,
        _gde_name.opaque,
        2343087891
      )
    }
    {
      let _gde_name = new StringName('countn')
      this._bindings.method_countn = variant_get_ptr_builtin_method(
        GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_STRING,
        _gde_name.opaque,
        2343087891
      )
    }
    {
      let _gde_name = new StringName('rfind')
      this._bindings.method_rfind = variant_get_ptr_builtin_method(
        GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_STRING,
        _gde_name.opaque,
        1760645412
      )
    }
    {
      let _gde_name = new StringName('rfindn')
      this._bindings.method_rfindn = variant_get_ptr_builtin_method(
        GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_STRING,
        _gde_name.opaque,
        1760645412
      )
    }
    {
      let _gde_name = new StringName('match')
      this._bindings.method_match = variant_get_ptr_builtin_method(
        GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_STRING,
        _gde_name.opaque,
        2566493496
      )
    }
    {
      let _gde_name = new StringName('matchn')
      this._bindings.method_matchn = variant_get_ptr_builtin_method(
        GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_STRING,
        _gde_name.opaque,
        2566493496
      )
    }
    {
      let _gde_name = new StringName('begins_with')
      this._bindings.method_begins_with = variant_get_ptr_builtin_method(
        GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_STRING,
        _gde_name.opaque,
        2566493496
      )
    }
    {
      let _gde_name = new StringName('ends_with')
      this._bindings.method_ends_with = variant_get_ptr_builtin_method(
        GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_STRING,
        _gde_name.opaque,
        2566493496
      )
    }
    {
      let _gde_name = new StringName('is_subsequence_of')
      this._bindings.method_is_subsequence_of = variant_get_ptr_builtin_method(
        GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_STRING,
        _gde_name.opaque,
        2566493496
      )
    }
    {
      let _gde_name = new StringName('is_subsequence_ofn')
      this._bindings.method_is_subsequence_ofn = variant_get_ptr_builtin_method(
        GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_STRING,
        _gde_name.opaque,
        2566493496
      )
    }
    {
      let _gde_name = new StringName('bigrams')
      this._bindings.method_bigrams = variant_get_ptr_builtin_method(
        GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_STRING,
        _gde_name.opaque,
        747180633
      )
    }
    {
      let _gde_name = new StringName('similarity')
      this._bindings.method_similarity = variant_get_ptr_builtin_method(
        GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_STRING,
        _gde_name.opaque,
        2697460964
      )
    }
    {
      let _gde_name = new StringName('format')
      this._bindings.method_format = variant_get_ptr_builtin_method(
        GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_STRING,
        _gde_name.opaque,
        3212199029
      )
    }
    {
      let _gde_name = new StringName('replace')
      this._bindings.method_replace = variant_get_ptr_builtin_method(
        GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_STRING,
        _gde_name.opaque,
        1340436205
      )
    }
    {
      let _gde_name = new StringName('replacen')
      this._bindings.method_replacen = variant_get_ptr_builtin_method(
        GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_STRING,
        _gde_name.opaque,
        1340436205
      )
    }
    {
      let _gde_name = new StringName('repeat')
      this._bindings.method_repeat = variant_get_ptr_builtin_method(
        GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_STRING,
        _gde_name.opaque,
        2162347432
      )
    }
    {
      let _gde_name = new StringName('reverse')
      this._bindings.method_reverse = variant_get_ptr_builtin_method(
        GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_STRING,
        _gde_name.opaque,
        3942272618
      )
    }
    {
      let _gde_name = new StringName('insert')
      this._bindings.method_insert = variant_get_ptr_builtin_method(
        GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_STRING,
        _gde_name.opaque,
        248737229
      )
    }
    {
      let _gde_name = new StringName('erase')
      this._bindings.method_erase = variant_get_ptr_builtin_method(
        GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_STRING,
        _gde_name.opaque,
        787537301
      )
    }
    {
      let _gde_name = new StringName('capitalize')
      this._bindings.method_capitalize = variant_get_ptr_builtin_method(
        GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_STRING,
        _gde_name.opaque,
        3942272618
      )
    }
    {
      let _gde_name = new StringName('to_camel_case')
      this._bindings.method_to_camel_case = variant_get_ptr_builtin_method(
        GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_STRING,
        _gde_name.opaque,
        3942272618
      )
    }
    {
      let _gde_name = new StringName('to_pascal_case')
      this._bindings.method_to_pascal_case = variant_get_ptr_builtin_method(
        GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_STRING,
        _gde_name.opaque,
        3942272618
      )
    }
    {
      let _gde_name = new StringName('to_snake_case')
      this._bindings.method_to_snake_case = variant_get_ptr_builtin_method(
        GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_STRING,
        _gde_name.opaque,
        3942272618
      )
    }
    {
      let _gde_name = new StringName('split')
      this._bindings.method_split = variant_get_ptr_builtin_method(
        GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_STRING,
        _gde_name.opaque,
        1252735785
      )
    }
    {
      let _gde_name = new StringName('rsplit')
      this._bindings.method_rsplit = variant_get_ptr_builtin_method(
        GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_STRING,
        _gde_name.opaque,
        1252735785
      )
    }
    {
      let _gde_name = new StringName('split_floats')
      this._bindings.method_split_floats = variant_get_ptr_builtin_method(
        GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_STRING,
        _gde_name.opaque,
        2092079095
      )
    }
    {
      let _gde_name = new StringName('join')
      this._bindings.method_join = variant_get_ptr_builtin_method(
        GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_STRING,
        _gde_name.opaque,
        3595973238
      )
    }
    {
      let _gde_name = new StringName('to_upper')
      this._bindings.method_to_upper = variant_get_ptr_builtin_method(
        GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_STRING,
        _gde_name.opaque,
        3942272618
      )
    }
    {
      let _gde_name = new StringName('to_lower')
      this._bindings.method_to_lower = variant_get_ptr_builtin_method(
        GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_STRING,
        _gde_name.opaque,
        3942272618
      )
    }
    {
      let _gde_name = new StringName('left')
      this._bindings.method_left = variant_get_ptr_builtin_method(
        GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_STRING,
        _gde_name.opaque,
        2162347432
      )
    }
    {
      let _gde_name = new StringName('right')
      this._bindings.method_right = variant_get_ptr_builtin_method(
        GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_STRING,
        _gde_name.opaque,
        2162347432
      )
    }
    {
      let _gde_name = new StringName('strip_edges')
      this._bindings.method_strip_edges = variant_get_ptr_builtin_method(
        GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_STRING,
        _gde_name.opaque,
        907855311
      )
    }
    {
      let _gde_name = new StringName('strip_escapes')
      this._bindings.method_strip_escapes = variant_get_ptr_builtin_method(
        GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_STRING,
        _gde_name.opaque,
        3942272618
      )
    }
    {
      let _gde_name = new StringName('lstrip')
      this._bindings.method_lstrip = variant_get_ptr_builtin_method(
        GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_STRING,
        _gde_name.opaque,
        3134094431
      )
    }
    {
      let _gde_name = new StringName('rstrip')
      this._bindings.method_rstrip = variant_get_ptr_builtin_method(
        GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_STRING,
        _gde_name.opaque,
        3134094431
      )
    }
    {
      let _gde_name = new StringName('get_extension')
      this._bindings.method_get_extension = variant_get_ptr_builtin_method(
        GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_STRING,
        _gde_name.opaque,
        3942272618
      )
    }
    {
      let _gde_name = new StringName('get_basename')
      this._bindings.method_get_basename = variant_get_ptr_builtin_method(
        GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_STRING,
        _gde_name.opaque,
        3942272618
      )
    }
    {
      let _gde_name = new StringName('path_join')
      this._bindings.method_path_join = variant_get_ptr_builtin_method(
        GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_STRING,
        _gde_name.opaque,
        3134094431
      )
    }
    {
      let _gde_name = new StringName('unicode_at')
      this._bindings.method_unicode_at = variant_get_ptr_builtin_method(
        GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_STRING,
        _gde_name.opaque,
        4103005248
      )
    }
    {
      let _gde_name = new StringName('indent')
      this._bindings.method_indent = variant_get_ptr_builtin_method(
        GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_STRING,
        _gde_name.opaque,
        3134094431
      )
    }
    {
      let _gde_name = new StringName('dedent')
      this._bindings.method_dedent = variant_get_ptr_builtin_method(
        GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_STRING,
        _gde_name.opaque,
        3942272618
      )
    }
    {
      let _gde_name = new StringName('hash')
      this._bindings.method_hash = variant_get_ptr_builtin_method(
        GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_STRING,
        _gde_name.opaque,
        3173160232
      )
    }
    {
      let _gde_name = new StringName('md5_text')
      this._bindings.method_md5_text = variant_get_ptr_builtin_method(
        GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_STRING,
        _gde_name.opaque,
        3942272618
      )
    }
    {
      let _gde_name = new StringName('sha1_text')
      this._bindings.method_sha1_text = variant_get_ptr_builtin_method(
        GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_STRING,
        _gde_name.opaque,
        3942272618
      )
    }
    {
      let _gde_name = new StringName('sha256_text')
      this._bindings.method_sha256_text = variant_get_ptr_builtin_method(
        GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_STRING,
        _gde_name.opaque,
        3942272618
      )
    }
    {
      let _gde_name = new StringName('md5_buffer')
      this._bindings.method_md5_buffer = variant_get_ptr_builtin_method(
        GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_STRING,
        _gde_name.opaque,
        247621236
      )
    }
    {
      let _gde_name = new StringName('sha1_buffer')
      this._bindings.method_sha1_buffer = variant_get_ptr_builtin_method(
        GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_STRING,
        _gde_name.opaque,
        247621236
      )
    }
    {
      let _gde_name = new StringName('sha256_buffer')
      this._bindings.method_sha256_buffer = variant_get_ptr_builtin_method(
        GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_STRING,
        _gde_name.opaque,
        247621236
      )
    }
    {
      let _gde_name = new StringName('is_empty')
      this._bindings.method_is_empty = variant_get_ptr_builtin_method(
        GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_STRING,
        _gde_name.opaque,
        3918633141
      )
    }
    {
      let _gde_name = new StringName('contains')
      this._bindings.method_contains = variant_get_ptr_builtin_method(
        GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_STRING,
        _gde_name.opaque,
        2566493496
      )
    }
    {
      let _gde_name = new StringName('containsn')
      this._bindings.method_containsn = variant_get_ptr_builtin_method(
        GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_STRING,
        _gde_name.opaque,
        2566493496
      )
    }
    {
      let _gde_name = new StringName('is_absolute_path')
      this._bindings.method_is_absolute_path = variant_get_ptr_builtin_method(
        GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_STRING,
        _gde_name.opaque,
        3918633141
      )
    }
    {
      let _gde_name = new StringName('is_relative_path')
      this._bindings.method_is_relative_path = variant_get_ptr_builtin_method(
        GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_STRING,
        _gde_name.opaque,
        3918633141
      )
    }
    {
      let _gde_name = new StringName('simplify_path')
      this._bindings.method_simplify_path = variant_get_ptr_builtin_method(
        GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_STRING,
        _gde_name.opaque,
        3942272618
      )
    }
    {
      let _gde_name = new StringName('get_base_dir')
      this._bindings.method_get_base_dir = variant_get_ptr_builtin_method(
        GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_STRING,
        _gde_name.opaque,
        3942272618
      )
    }
    {
      let _gde_name = new StringName('get_file')
      this._bindings.method_get_file = variant_get_ptr_builtin_method(
        GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_STRING,
        _gde_name.opaque,
        3942272618
      )
    }
    {
      let _gde_name = new StringName('xml_escape')
      this._bindings.method_xml_escape = variant_get_ptr_builtin_method(
        GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_STRING,
        _gde_name.opaque,
        3429816538
      )
    }
    {
      let _gde_name = new StringName('xml_unescape')
      this._bindings.method_xml_unescape = variant_get_ptr_builtin_method(
        GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_STRING,
        _gde_name.opaque,
        3942272618
      )
    }
    {
      let _gde_name = new StringName('uri_encode')
      this._bindings.method_uri_encode = variant_get_ptr_builtin_method(
        GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_STRING,
        _gde_name.opaque,
        3942272618
      )
    }
    {
      let _gde_name = new StringName('uri_decode')
      this._bindings.method_uri_decode = variant_get_ptr_builtin_method(
        GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_STRING,
        _gde_name.opaque,
        3942272618
      )
    }
    {
      let _gde_name = new StringName('c_escape')
      this._bindings.method_c_escape = variant_get_ptr_builtin_method(
        GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_STRING,
        _gde_name.opaque,
        3942272618
      )
    }
    {
      let _gde_name = new StringName('c_unescape')
      this._bindings.method_c_unescape = variant_get_ptr_builtin_method(
        GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_STRING,
        _gde_name.opaque,
        3942272618
      )
    }
    {
      let _gde_name = new StringName('json_escape')
      this._bindings.method_json_escape = variant_get_ptr_builtin_method(
        GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_STRING,
        _gde_name.opaque,
        3942272618
      )
    }
    {
      let _gde_name = new StringName('validate_node_name')
      this._bindings.method_validate_node_name = variant_get_ptr_builtin_method(
        GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_STRING,
        _gde_name.opaque,
        3942272618
      )
    }
    {
      let _gde_name = new StringName('validate_filename')
      this._bindings.method_validate_filename = variant_get_ptr_builtin_method(
        GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_STRING,
        _gde_name.opaque,
        3942272618
      )
    }
    {
      let _gde_name = new StringName('is_valid_identifier')
      this._bindings.method_is_valid_identifier = variant_get_ptr_builtin_method(
        GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_STRING,
        _gde_name.opaque,
        3918633141
      )
    }
    {
      let _gde_name = new StringName('is_valid_int')
      this._bindings.method_is_valid_int = variant_get_ptr_builtin_method(
        GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_STRING,
        _gde_name.opaque,
        3918633141
      )
    }
    {
      let _gde_name = new StringName('is_valid_float')
      this._bindings.method_is_valid_float = variant_get_ptr_builtin_method(
        GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_STRING,
        _gde_name.opaque,
        3918633141
      )
    }
    {
      let _gde_name = new StringName('is_valid_hex_number')
      this._bindings.method_is_valid_hex_number = variant_get_ptr_builtin_method(
        GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_STRING,
        _gde_name.opaque,
        593672999
      )
    }
    {
      let _gde_name = new StringName('is_valid_html_color')
      this._bindings.method_is_valid_html_color = variant_get_ptr_builtin_method(
        GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_STRING,
        _gde_name.opaque,
        3918633141
      )
    }
    {
      let _gde_name = new StringName('is_valid_ip_address')
      this._bindings.method_is_valid_ip_address = variant_get_ptr_builtin_method(
        GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_STRING,
        _gde_name.opaque,
        3918633141
      )
    }
    {
      let _gde_name = new StringName('is_valid_filename')
      this._bindings.method_is_valid_filename = variant_get_ptr_builtin_method(
        GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_STRING,
        _gde_name.opaque,
        3918633141
      )
    }
    {
      let _gde_name = new StringName('to_int')
      this._bindings.method_to_int = variant_get_ptr_builtin_method(
        GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_STRING,
        _gde_name.opaque,
        3173160232
      )
    }
    {
      let _gde_name = new StringName('to_float')
      this._bindings.method_to_float = variant_get_ptr_builtin_method(
        GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_STRING,
        _gde_name.opaque,
        466405837
      )
    }
    {
      let _gde_name = new StringName('hex_to_int')
      this._bindings.method_hex_to_int = variant_get_ptr_builtin_method(
        GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_STRING,
        _gde_name.opaque,
        3173160232
      )
    }
    {
      let _gde_name = new StringName('bin_to_int')
      this._bindings.method_bin_to_int = variant_get_ptr_builtin_method(
        GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_STRING,
        _gde_name.opaque,
        3173160232
      )
    }
    {
      let _gde_name = new StringName('lpad')
      this._bindings.method_lpad = variant_get_ptr_builtin_method(
        GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_STRING,
        _gde_name.opaque,
        248737229
      )
    }
    {
      let _gde_name = new StringName('rpad')
      this._bindings.method_rpad = variant_get_ptr_builtin_method(
        GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_STRING,
        _gde_name.opaque,
        248737229
      )
    }
    {
      let _gde_name = new StringName('pad_decimals')
      this._bindings.method_pad_decimals = variant_get_ptr_builtin_method(
        GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_STRING,
        _gde_name.opaque,
        2162347432
      )
    }
    {
      let _gde_name = new StringName('pad_zeros')
      this._bindings.method_pad_zeros = variant_get_ptr_builtin_method(
        GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_STRING,
        _gde_name.opaque,
        2162347432
      )
    }
    {
      let _gde_name = new StringName('trim_prefix')
      this._bindings.method_trim_prefix = variant_get_ptr_builtin_method(
        GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_STRING,
        _gde_name.opaque,
        3134094431
      )
    }
    {
      let _gde_name = new StringName('trim_suffix')
      this._bindings.method_trim_suffix = variant_get_ptr_builtin_method(
        GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_STRING,
        _gde_name.opaque,
        3134094431
      )
    }
    {
      let _gde_name = new StringName('to_ascii_buffer')
      this._bindings.method_to_ascii_buffer = variant_get_ptr_builtin_method(
        GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_STRING,
        _gde_name.opaque,
        247621236
      )
    }
    {
      let _gde_name = new StringName('to_utf8_buffer')
      this._bindings.method_to_utf8_buffer = variant_get_ptr_builtin_method(
        GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_STRING,
        _gde_name.opaque,
        247621236
      )
    }
    {
      let _gde_name = new StringName('to_utf16_buffer')
      this._bindings.method_to_utf16_buffer = variant_get_ptr_builtin_method(
        GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_STRING,
        _gde_name.opaque,
        247621236
      )
    }
    {
      let _gde_name = new StringName('to_utf32_buffer')
      this._bindings.method_to_utf32_buffer = variant_get_ptr_builtin_method(
        GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_STRING,
        _gde_name.opaque,
        247621236
      )
    }
    {
      let _gde_name = new StringName('hex_decode')
      this._bindings.method_hex_decode = variant_get_ptr_builtin_method(
        GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_STRING,
        _gde_name.opaque,
        247621236
      )
    }
    {
      let _gde_name = new StringName('to_wchar_buffer')
      this._bindings.method_to_wchar_buffer = variant_get_ptr_builtin_method(
        GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_STRING,
        _gde_name.opaque,
        247621236
      )
    }
    {
      let _gde_name = new StringName('num_scientific')
      this._bindings.method_num_scientific = variant_get_ptr_builtin_method(
        GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_STRING,
        _gde_name.opaque,
        2710373411
      )
    }
    {
      let _gde_name = new StringName('num')
      this._bindings.method_num = variant_get_ptr_builtin_method(
        GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_STRING,
        _gde_name.opaque,
        1555901022
      )
    }
    {
      let _gde_name = new StringName('num_int64')
      this._bindings.method_num_int64 = variant_get_ptr_builtin_method(
        GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_STRING,
        _gde_name.opaque,
        2111271071
      )
    }
    {
      let _gde_name = new StringName('num_uint64')
      this._bindings.method_num_uint64 = variant_get_ptr_builtin_method(
        GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_STRING,
        _gde_name.opaque,
        2111271071
      )
    }
    {
      let _gde_name = new StringName('chr')
      this._bindings.method_chr = variant_get_ptr_builtin_method(
        GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_STRING,
        _gde_name.opaque,
        897497541
      )
    }
    {
      let _gde_name = new StringName('humanize_size')
      this._bindings.method_humanize_size = variant_get_ptr_builtin_method(
        GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_STRING,
        _gde_name.opaque,
        897497541
      )
    }
  }

  casecmp_to (to) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      GDString._bindings.method_casecmp_to,
      this,
      'int',
      [to]
    )
    return ret
  }
  nocasecmp_to (to) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      GDString._bindings.method_nocasecmp_to,
      this,
      'int',
      [to]
    )
    return ret
  }
  naturalcasecmp_to (to) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      GDString._bindings.method_naturalcasecmp_to,
      this,
      'int',
      [to]
    )
    return ret
  }
  naturalnocasecmp_to (to) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      GDString._bindings.method_naturalnocasecmp_to,
      this,
      'int',
      [to]
    )
    return ret
  }
  filecasecmp_to (to) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      GDString._bindings.method_filecasecmp_to,
      this,
      'int',
      [to]
    )
    return ret
  }
  filenocasecmp_to (to) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      GDString._bindings.method_filenocasecmp_to,
      this,
      'int',
      [to]
    )
    return ret
  }
  length () {
    let ret
    ret = _call_builtin_method_ptr_ret(
      GDString._bindings.method_length,
      this,
      'int',
      []
    )
    return ret
  }
  substr (from, len) {
    let ret = new GDString()
    ret.opaque = _call_builtin_method_ptr_ret(
      GDString._bindings.method_substr,
      this,
      'GDString',
      [from, len]
    )
    return ret
  }
  get_slice (delimiter, slice) {
    let ret = new GDString()
    ret.opaque = _call_builtin_method_ptr_ret(
      GDString._bindings.method_get_slice,
      this,
      'GDString',
      [delimiter, slice]
    )
    return ret
  }
  get_slicec (delimiter, slice) {
    let ret = new GDString()
    ret.opaque = _call_builtin_method_ptr_ret(
      GDString._bindings.method_get_slicec,
      this,
      'GDString',
      [delimiter, slice]
    )
    return ret
  }
  get_slice_count (delimiter) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      GDString._bindings.method_get_slice_count,
      this,
      'int',
      [delimiter]
    )
    return ret
  }
  find (what, from) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      GDString._bindings.method_find,
      this,
      'int',
      [what, from]
    )
    return ret
  }
  findn (what, from) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      GDString._bindings.method_findn,
      this,
      'int',
      [what, from]
    )
    return ret
  }
  count (what, from, to) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      GDString._bindings.method_count,
      this,
      'int',
      [what, from, to]
    )
    return ret
  }
  countn (what, from, to) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      GDString._bindings.method_countn,
      this,
      'int',
      [what, from, to]
    )
    return ret
  }
  rfind (what, from) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      GDString._bindings.method_rfind,
      this,
      'int',
      [what, from]
    )
    return ret
  }
  rfindn (what, from) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      GDString._bindings.method_rfindn,
      this,
      'int',
      [what, from]
    )
    return ret
  }
  match (expr) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      GDString._bindings.method_match,
      this,
      'bool',
      [expr]
    )
    return ret
  }
  matchn (expr) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      GDString._bindings.method_matchn,
      this,
      'bool',
      [expr]
    )
    return ret
  }
  begins_with (text) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      GDString._bindings.method_begins_with,
      this,
      'bool',
      [text]
    )
    return ret
  }
  ends_with (text) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      GDString._bindings.method_ends_with,
      this,
      'bool',
      [text]
    )
    return ret
  }
  is_subsequence_of (text) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      GDString._bindings.method_is_subsequence_of,
      this,
      'bool',
      [text]
    )
    return ret
  }
  is_subsequence_ofn (text) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      GDString._bindings.method_is_subsequence_ofn,
      this,
      'bool',
      [text]
    )
    return ret
  }
  bigrams () {
    let ret = new PackedStringArray()
    ret.opaque = _call_builtin_method_ptr_ret(
      GDString._bindings.method_bigrams,
      this,
      'PackedStringArray',
      []
    )
    return ret
  }
  similarity (text) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      GDString._bindings.method_similarity,
      this,
      'float',
      [text]
    )
    return ret
  }
  format (values, placeholder) {
    let ret = new GDString()
    ret.opaque = _call_builtin_method_ptr_ret(
      GDString._bindings.method_format,
      this,
      'GDString',
      [values, placeholder]
    )
    return ret
  }
  replace (what, forwhat) {
    let ret = new GDString()
    ret.opaque = _call_builtin_method_ptr_ret(
      GDString._bindings.method_replace,
      this,
      'GDString',
      [what, forwhat]
    )
    return ret
  }
  replacen (what, forwhat) {
    let ret = new GDString()
    ret.opaque = _call_builtin_method_ptr_ret(
      GDString._bindings.method_replacen,
      this,
      'GDString',
      [what, forwhat]
    )
    return ret
  }
  repeat (count) {
    let ret = new GDString()
    ret.opaque = _call_builtin_method_ptr_ret(
      GDString._bindings.method_repeat,
      this,
      'GDString',
      [count]
    )
    return ret
  }
  reverse () {
    let ret = new GDString()
    ret.opaque = _call_builtin_method_ptr_ret(
      GDString._bindings.method_reverse,
      this,
      'GDString',
      []
    )
    return ret
  }
  insert (position, what) {
    let ret = new GDString()
    ret.opaque = _call_builtin_method_ptr_ret(
      GDString._bindings.method_insert,
      this,
      'GDString',
      [position, what]
    )
    return ret
  }
  erase (position, chars) {
    let ret = new GDString()
    ret.opaque = _call_builtin_method_ptr_ret(
      GDString._bindings.method_erase,
      this,
      'GDString',
      [position, chars]
    )
    return ret
  }
  capitalize () {
    let ret = new GDString()
    ret.opaque = _call_builtin_method_ptr_ret(
      GDString._bindings.method_capitalize,
      this,
      'GDString',
      []
    )
    return ret
  }
  to_camel_case () {
    let ret = new GDString()
    ret.opaque = _call_builtin_method_ptr_ret(
      GDString._bindings.method_to_camel_case,
      this,
      'GDString',
      []
    )
    return ret
  }
  to_pascal_case () {
    let ret = new GDString()
    ret.opaque = _call_builtin_method_ptr_ret(
      GDString._bindings.method_to_pascal_case,
      this,
      'GDString',
      []
    )
    return ret
  }
  to_snake_case () {
    let ret = new GDString()
    ret.opaque = _call_builtin_method_ptr_ret(
      GDString._bindings.method_to_snake_case,
      this,
      'GDString',
      []
    )
    return ret
  }
  split (delimiter, allow_empty, maxsplit) {
    let ret = new PackedStringArray()
    ret.opaque = _call_builtin_method_ptr_ret(
      GDString._bindings.method_split,
      this,
      'PackedStringArray',
      [delimiter, allow_empty, maxsplit]
    )
    return ret
  }
  rsplit (delimiter, allow_empty, maxsplit) {
    let ret = new PackedStringArray()
    ret.opaque = _call_builtin_method_ptr_ret(
      GDString._bindings.method_rsplit,
      this,
      'PackedStringArray',
      [delimiter, allow_empty, maxsplit]
    )
    return ret
  }
  split_floats (delimiter, allow_empty) {
    let ret = new PackedFloat64Array()
    ret.opaque = _call_builtin_method_ptr_ret(
      GDString._bindings.method_split_floats,
      this,
      'PackedFloat64Array',
      [delimiter, allow_empty]
    )
    return ret
  }
  join (parts) {
    let ret = new GDString()
    ret.opaque = _call_builtin_method_ptr_ret(
      GDString._bindings.method_join,
      this,
      'GDString',
      [parts]
    )
    return ret
  }
  to_upper () {
    let ret = new GDString()
    ret.opaque = _call_builtin_method_ptr_ret(
      GDString._bindings.method_to_upper,
      this,
      'GDString',
      []
    )
    return ret
  }
  to_lower () {
    let ret = new GDString()
    ret.opaque = _call_builtin_method_ptr_ret(
      GDString._bindings.method_to_lower,
      this,
      'GDString',
      []
    )
    return ret
  }
  left (length) {
    let ret = new GDString()
    ret.opaque = _call_builtin_method_ptr_ret(
      GDString._bindings.method_left,
      this,
      'GDString',
      [length]
    )
    return ret
  }
  right (length) {
    let ret = new GDString()
    ret.opaque = _call_builtin_method_ptr_ret(
      GDString._bindings.method_right,
      this,
      'GDString',
      [length]
    )
    return ret
  }
  strip_edges (left, right) {
    let ret = new GDString()
    ret.opaque = _call_builtin_method_ptr_ret(
      GDString._bindings.method_strip_edges,
      this,
      'GDString',
      [left, right]
    )
    return ret
  }
  strip_escapes () {
    let ret = new GDString()
    ret.opaque = _call_builtin_method_ptr_ret(
      GDString._bindings.method_strip_escapes,
      this,
      'GDString',
      []
    )
    return ret
  }
  lstrip (chars) {
    let ret = new GDString()
    ret.opaque = _call_builtin_method_ptr_ret(
      GDString._bindings.method_lstrip,
      this,
      'GDString',
      [chars]
    )
    return ret
  }
  rstrip (chars) {
    let ret = new GDString()
    ret.opaque = _call_builtin_method_ptr_ret(
      GDString._bindings.method_rstrip,
      this,
      'GDString',
      [chars]
    )
    return ret
  }
  get_extension () {
    let ret = new GDString()
    ret.opaque = _call_builtin_method_ptr_ret(
      GDString._bindings.method_get_extension,
      this,
      'GDString',
      []
    )
    return ret
  }
  get_basename () {
    let ret = new GDString()
    ret.opaque = _call_builtin_method_ptr_ret(
      GDString._bindings.method_get_basename,
      this,
      'GDString',
      []
    )
    return ret
  }
  path_join (file) {
    let ret = new GDString()
    ret.opaque = _call_builtin_method_ptr_ret(
      GDString._bindings.method_path_join,
      this,
      'GDString',
      [file]
    )
    return ret
  }
  unicode_at (at) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      GDString._bindings.method_unicode_at,
      this,
      'int',
      [at]
    )
    return ret
  }
  indent (prefix) {
    let ret = new GDString()
    ret.opaque = _call_builtin_method_ptr_ret(
      GDString._bindings.method_indent,
      this,
      'GDString',
      [prefix]
    )
    return ret
  }
  dedent () {
    let ret = new GDString()
    ret.opaque = _call_builtin_method_ptr_ret(
      GDString._bindings.method_dedent,
      this,
      'GDString',
      []
    )
    return ret
  }
  hash () {
    let ret
    ret = _call_builtin_method_ptr_ret(
      GDString._bindings.method_hash,
      this,
      'int',
      []
    )
    return ret
  }
  md5_text () {
    let ret = new GDString()
    ret.opaque = _call_builtin_method_ptr_ret(
      GDString._bindings.method_md5_text,
      this,
      'GDString',
      []
    )
    return ret
  }
  sha1_text () {
    let ret = new GDString()
    ret.opaque = _call_builtin_method_ptr_ret(
      GDString._bindings.method_sha1_text,
      this,
      'GDString',
      []
    )
    return ret
  }
  sha256_text () {
    let ret = new GDString()
    ret.opaque = _call_builtin_method_ptr_ret(
      GDString._bindings.method_sha256_text,
      this,
      'GDString',
      []
    )
    return ret
  }
  md5_buffer () {
    let ret = new PackedByteArray()
    ret.opaque = _call_builtin_method_ptr_ret(
      GDString._bindings.method_md5_buffer,
      this,
      'PackedByteArray',
      []
    )
    return ret
  }
  sha1_buffer () {
    let ret = new PackedByteArray()
    ret.opaque = _call_builtin_method_ptr_ret(
      GDString._bindings.method_sha1_buffer,
      this,
      'PackedByteArray',
      []
    )
    return ret
  }
  sha256_buffer () {
    let ret = new PackedByteArray()
    ret.opaque = _call_builtin_method_ptr_ret(
      GDString._bindings.method_sha256_buffer,
      this,
      'PackedByteArray',
      []
    )
    return ret
  }
  is_empty () {
    let ret
    ret = _call_builtin_method_ptr_ret(
      GDString._bindings.method_is_empty,
      this,
      'bool',
      []
    )
    return ret
  }
  contains (what) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      GDString._bindings.method_contains,
      this,
      'bool',
      [what]
    )
    return ret
  }
  containsn (what) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      GDString._bindings.method_containsn,
      this,
      'bool',
      [what]
    )
    return ret
  }
  is_absolute_path () {
    let ret
    ret = _call_builtin_method_ptr_ret(
      GDString._bindings.method_is_absolute_path,
      this,
      'bool',
      []
    )
    return ret
  }
  is_relative_path () {
    let ret
    ret = _call_builtin_method_ptr_ret(
      GDString._bindings.method_is_relative_path,
      this,
      'bool',
      []
    )
    return ret
  }
  simplify_path () {
    let ret = new GDString()
    ret.opaque = _call_builtin_method_ptr_ret(
      GDString._bindings.method_simplify_path,
      this,
      'GDString',
      []
    )
    return ret
  }
  get_base_dir () {
    let ret = new GDString()
    ret.opaque = _call_builtin_method_ptr_ret(
      GDString._bindings.method_get_base_dir,
      this,
      'GDString',
      []
    )
    return ret
  }
  get_file () {
    let ret = new GDString()
    ret.opaque = _call_builtin_method_ptr_ret(
      GDString._bindings.method_get_file,
      this,
      'GDString',
      []
    )
    return ret
  }
  xml_escape (escape_quotes) {
    let ret = new GDString()
    ret.opaque = _call_builtin_method_ptr_ret(
      GDString._bindings.method_xml_escape,
      this,
      'GDString',
      [escape_quotes]
    )
    return ret
  }
  xml_unescape () {
    let ret = new GDString()
    ret.opaque = _call_builtin_method_ptr_ret(
      GDString._bindings.method_xml_unescape,
      this,
      'GDString',
      []
    )
    return ret
  }
  uri_encode () {
    let ret = new GDString()
    ret.opaque = _call_builtin_method_ptr_ret(
      GDString._bindings.method_uri_encode,
      this,
      'GDString',
      []
    )
    return ret
  }
  uri_decode () {
    let ret = new GDString()
    ret.opaque = _call_builtin_method_ptr_ret(
      GDString._bindings.method_uri_decode,
      this,
      'GDString',
      []
    )
    return ret
  }
  c_escape () {
    let ret = new GDString()
    ret.opaque = _call_builtin_method_ptr_ret(
      GDString._bindings.method_c_escape,
      this,
      'GDString',
      []
    )
    return ret
  }
  c_unescape () {
    let ret = new GDString()
    ret.opaque = _call_builtin_method_ptr_ret(
      GDString._bindings.method_c_unescape,
      this,
      'GDString',
      []
    )
    return ret
  }
  json_escape () {
    let ret = new GDString()
    ret.opaque = _call_builtin_method_ptr_ret(
      GDString._bindings.method_json_escape,
      this,
      'GDString',
      []
    )
    return ret
  }
  validate_node_name () {
    let ret = new GDString()
    ret.opaque = _call_builtin_method_ptr_ret(
      GDString._bindings.method_validate_node_name,
      this,
      'GDString',
      []
    )
    return ret
  }
  validate_filename () {
    let ret = new GDString()
    ret.opaque = _call_builtin_method_ptr_ret(
      GDString._bindings.method_validate_filename,
      this,
      'GDString',
      []
    )
    return ret
  }
  is_valid_identifier () {
    let ret
    ret = _call_builtin_method_ptr_ret(
      GDString._bindings.method_is_valid_identifier,
      this,
      'bool',
      []
    )
    return ret
  }
  is_valid_int () {
    let ret
    ret = _call_builtin_method_ptr_ret(
      GDString._bindings.method_is_valid_int,
      this,
      'bool',
      []
    )
    return ret
  }
  is_valid_float () {
    let ret
    ret = _call_builtin_method_ptr_ret(
      GDString._bindings.method_is_valid_float,
      this,
      'bool',
      []
    )
    return ret
  }
  is_valid_hex_number (with_prefix) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      GDString._bindings.method_is_valid_hex_number,
      this,
      'bool',
      [with_prefix]
    )
    return ret
  }
  is_valid_html_color () {
    let ret
    ret = _call_builtin_method_ptr_ret(
      GDString._bindings.method_is_valid_html_color,
      this,
      'bool',
      []
    )
    return ret
  }
  is_valid_ip_address () {
    let ret
    ret = _call_builtin_method_ptr_ret(
      GDString._bindings.method_is_valid_ip_address,
      this,
      'bool',
      []
    )
    return ret
  }
  is_valid_filename () {
    let ret
    ret = _call_builtin_method_ptr_ret(
      GDString._bindings.method_is_valid_filename,
      this,
      'bool',
      []
    )
    return ret
  }
  to_int () {
    let ret
    ret = _call_builtin_method_ptr_ret(
      GDString._bindings.method_to_int,
      this,
      'int',
      []
    )
    return ret
  }
  to_float () {
    let ret
    ret = _call_builtin_method_ptr_ret(
      GDString._bindings.method_to_float,
      this,
      'float',
      []
    )
    return ret
  }
  hex_to_int () {
    let ret
    ret = _call_builtin_method_ptr_ret(
      GDString._bindings.method_hex_to_int,
      this,
      'int',
      []
    )
    return ret
  }
  bin_to_int () {
    let ret
    ret = _call_builtin_method_ptr_ret(
      GDString._bindings.method_bin_to_int,
      this,
      'int',
      []
    )
    return ret
  }
  lpad (min_length, character) {
    let ret = new GDString()
    ret.opaque = _call_builtin_method_ptr_ret(
      GDString._bindings.method_lpad,
      this,
      'GDString',
      [min_length, character]
    )
    return ret
  }
  rpad (min_length, character) {
    let ret = new GDString()
    ret.opaque = _call_builtin_method_ptr_ret(
      GDString._bindings.method_rpad,
      this,
      'GDString',
      [min_length, character]
    )
    return ret
  }
  pad_decimals (digits) {
    let ret = new GDString()
    ret.opaque = _call_builtin_method_ptr_ret(
      GDString._bindings.method_pad_decimals,
      this,
      'GDString',
      [digits]
    )
    return ret
  }
  pad_zeros (digits) {
    let ret = new GDString()
    ret.opaque = _call_builtin_method_ptr_ret(
      GDString._bindings.method_pad_zeros,
      this,
      'GDString',
      [digits]
    )
    return ret
  }
  trim_prefix (prefix) {
    let ret = new GDString()
    ret.opaque = _call_builtin_method_ptr_ret(
      GDString._bindings.method_trim_prefix,
      this,
      'GDString',
      [prefix]
    )
    return ret
  }
  trim_suffix (suffix) {
    let ret = new GDString()
    ret.opaque = _call_builtin_method_ptr_ret(
      GDString._bindings.method_trim_suffix,
      this,
      'GDString',
      [suffix]
    )
    return ret
  }
  to_ascii_buffer () {
    let ret = new PackedByteArray()
    ret.opaque = _call_builtin_method_ptr_ret(
      GDString._bindings.method_to_ascii_buffer,
      this,
      'PackedByteArray',
      []
    )
    return ret
  }
  to_utf8_buffer () {
    let ret = new PackedByteArray()
    ret.opaque = _call_builtin_method_ptr_ret(
      GDString._bindings.method_to_utf8_buffer,
      this,
      'PackedByteArray',
      []
    )
    return ret
  }
  to_utf16_buffer () {
    let ret = new PackedByteArray()
    ret.opaque = _call_builtin_method_ptr_ret(
      GDString._bindings.method_to_utf16_buffer,
      this,
      'PackedByteArray',
      []
    )
    return ret
  }
  to_utf32_buffer () {
    let ret = new PackedByteArray()
    ret.opaque = _call_builtin_method_ptr_ret(
      GDString._bindings.method_to_utf32_buffer,
      this,
      'PackedByteArray',
      []
    )
    return ret
  }
  hex_decode () {
    let ret = new PackedByteArray()
    ret.opaque = _call_builtin_method_ptr_ret(
      GDString._bindings.method_hex_decode,
      this,
      'PackedByteArray',
      []
    )
    return ret
  }
  to_wchar_buffer () {
    let ret = new PackedByteArray()
    ret.opaque = _call_builtin_method_ptr_ret(
      GDString._bindings.method_to_wchar_buffer,
      this,
      'PackedByteArray',
      []
    )
    return ret
  }
  num_scientific (number) {
    let ret = new GDString()
    ret.opaque = _call_builtin_method_ptr_ret(
      GDString._bindings.method_num_scientific,
      this,
      'GDString',
      [number]
    )
    return ret
  }
  num (number, decimals) {
    let ret = new GDString()
    ret.opaque = _call_builtin_method_ptr_ret(
      GDString._bindings.method_num,
      this,
      'GDString',
      [number, decimals]
    )
    return ret
  }
  num_int64 (number, base, capitalize_hex) {
    let ret = new GDString()
    ret.opaque = _call_builtin_method_ptr_ret(
      GDString._bindings.method_num_int64,
      this,
      'GDString',
      [number, base, capitalize_hex]
    )
    return ret
  }
  num_uint64 (number, base, capitalize_hex) {
    let ret = new GDString()
    ret.opaque = _call_builtin_method_ptr_ret(
      GDString._bindings.method_num_uint64,
      this,
      'GDString',
      [number, base, capitalize_hex]
    )
    return ret
  }
  chr (char) {
    let ret = new GDString()
    ret.opaque = _call_builtin_method_ptr_ret(
      GDString._bindings.method_chr,
      this,
      'GDString',
      [char]
    )
    return ret
  }
  humanize_size (size) {
    let ret = new GDString()
    ret.opaque = _call_builtin_method_ptr_ret(
      GDString._bindings.method_humanize_size,
      this,
      'GDString',
      [size]
    )
    return ret
  }
  
}