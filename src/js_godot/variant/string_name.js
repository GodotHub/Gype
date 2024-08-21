import {
  get_variant_to_type_constructor,
  variant_get_ptr_constructor,
  string_name_new_with_latin1_chars,
  variant_get_ptr_builtin_method,
  variant_get_ptr_destructor
} from '__internal__'
import { GDExtensionVariantType } from 'src/js_godot/gde/gde'
import {
  _call_builtin_constructor,
  _call_builtin_method_ptr_ret
} from 'src/js_godot/core/builtin_ptrcall'
import { Variant } from 'src/js_godot/variant/variant'
import { GDString } from 'src/js_godot/variant/gdstring'

class _MethodBindings {
  from_variant_constructor
  constructor_0
  constructor_1
  constructor_2
  constructor_3
  destructor
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
  indexed_setter
  indexed_getter
  operator_equal_Variant
  operator_not_equal_Variant
  operator_module_Variant
  operator_not
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

export class StringName {
  static STRING_NAME_SIZE = 8
  opaque = new Uint8Array(StringName.STRING_NAME_SIZE)

  static _bindings = new _MethodBindings()

  constructor (value) {
    if (!value) {
      _call_builtin_constructor(StringName._bindings.constructor_0, this.opaque)
    } else if (value instanceof StringName) {
      _call_builtin_constructor(StringName._bindings.constructor_1, this.opaque)
    } else if (value instanceof GDString) {
      _call_builtin_constructor(StringName._bindings.constructor_2, this.opaque)
    } else if (value instanceof Variant) {
      StringName._bindings.from_variant_constructor(this.opaque, value.opaque)
    } else if (typeof value == 'string') {
      string_name_new_with_latin1_chars(this.opaque, value, true)
    }
  }

  static _init_bindings () {
    GDString.__init_bindings_constructors_destructor()
    this.__init_bindings_constructors_destructor()

    let _gde_name = new StringName('length')
    this._bindings.method_length = variant_get_ptr_builtin_method(
      GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_STRING_NAME,
      _gde_name.opaque,
      3173160232
    )
  }

  static __init_bindings_constructors_destructor () {
    this._bindings.from_variant_constructor = get_variant_to_type_constructor(
      GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_STRING_NAME
    )
    this._bindings.constructor_0 = variant_get_ptr_constructor(
      GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_STRING_NAME,
      0
    )
    this._bindings.constructor_1 = variant_get_ptr_constructor(
      GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_STRING_NAME,
      1
    )
    this._bindings.constructor_2 = variant_get_ptr_constructor(
      GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_STRING_NAME,
      2
    )
    this._bindings.destructor = variant_get_ptr_destructor(
      GDExtensionVariantType.GDEXTENSION_VARIANT_TYPE_STRING_NAME
    )
  }

  cast (type) {
    switch (type) {
      case Variant.Type.STRING:
        return new GDString(this)
      default:
        break
    }
  }

  length () {
    return _call_builtin_method_ptr_ret(
      StringName._bindings.method_length,
      this.opaque,
      'int'
    )
  }
}
