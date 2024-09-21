var __classPrivateFieldGet = (this && this.__classPrivateFieldGet) || function (receiver, state, kind, f) {
    if (kind === "a" && !f) throw new TypeError("Private accessor was defined without a getter");
    if (typeof state === "function" ? receiver !== state || !f : !state.has(receiver)) throw new TypeError("Cannot read private member from an object whose class did not declare it");
    return kind === "m" ? f : kind === "a" ? f.call(receiver) : f ? f.value : state.get(receiver);
};
var __classPrivateFieldSet = (this && this.__classPrivateFieldSet) || function (receiver, state, value, kind, f) {
    if (kind === "m") throw new TypeError("Private method is not writable");
    if (kind === "a" && !f) throw new TypeError("Private accessor was defined without a setter");
    if (typeof state === "function" ? receiver !== state || !f : !state.has(receiver)) throw new TypeError("Cannot write private member to an object whose class did not declare it");
    return (kind === "a" ? f.call(receiver, value) : f ? f.value = value : state.set(receiver, value)), value;
};
var _a, _StringName_SIZE, _StringName__bindings, _StringName_initialized;
import * as internal from '__internal__';
import { _call_builtin_constructor, _call_builtin_method_ptr_ret, _call_builtin_method_ptr_no_ret, _call_builtin_method_ptr_obj_ret, } from '@js_godot/core/builtin_ptrcall';
import { GDString } from '@js_godot/variant/gd_string';
import { PackedFloat64Array } from '@js_godot/variant/packed_float64_array';
import { PackedByteArray } from '@js_godot/variant/packed_byte_array';
import { Variant } from '@js_godot/variant/variant';
import { PackedStringArray } from '@js_godot/variant/packed_string_array';
import { GodotObject } from "@js_godot/classes/godot_object";
class _MethodBindings {
}
export class StringName {
    constructor(value) {
        this.opaque = new Uint8Array(__classPrivateFieldGet(_a, _a, "f", _StringName_SIZE));
        if (!value) {
            _call_builtin_constructor(__classPrivateFieldGet(_a, _a, "f", _StringName__bindings).constructor_0, this);
        }
        else if (arguments.length == 1 && arguments[0] instanceof _a) {
            let from = arguments[0];
            _call_builtin_constructor(__classPrivateFieldGet(_a, _a, "f", _StringName__bindings).constructor_1, this, [
                from
            ]);
        }
        else if (arguments.length == 1 && arguments[0] instanceof GDString) {
            let from = arguments[0];
            _call_builtin_constructor(__classPrivateFieldGet(_a, _a, "f", _StringName__bindings).constructor_2, this, [
                from
            ]);
        }
        else if (value.constructor.name === "Variant") {
            __classPrivateFieldGet(_a, _a, "f", _StringName__bindings).from_variant_constructor(this.opaque, value.opaque);
        }
        else if (value instanceof Uint8Array) {
            this.opaque = value;
        }
        else if (typeof value == 'string') {
            internal.string_name_new_with_latin1_chars(this.opaque, value, false);
        }
        else if (typeof value == 'number' || typeof value == "boolean") {
            internal.string_name_new_with_latin1_chars(this.opaque, value.toString(), false);
        }
    }
    static __init_bindings_constructors_destructor() {
        __classPrivateFieldGet(this, _a, "f", _StringName__bindings).from_variant_constructor = internal.get_variant_to_type_constructor(21);
        __classPrivateFieldGet(this, _a, "f", _StringName__bindings).constructor_0 = internal.variant_get_ptr_constructor(21, 0);
        __classPrivateFieldGet(this, _a, "f", _StringName__bindings).constructor_1 = internal.variant_get_ptr_constructor(21, 1);
        __classPrivateFieldGet(this, _a, "f", _StringName__bindings).constructor_2 = internal.variant_get_ptr_constructor(21, 2);
        __classPrivateFieldGet(this, _a, "f", _StringName__bindings).destructor = internal.variant_get_ptr_destructor(21);
    }
    static async _init_bindings() {
        if (__classPrivateFieldGet(this, _a, "f", _StringName_initialized)) {
            return;
        }
        __classPrivateFieldSet(this, _a, true, "f", _StringName_initialized);
        this.__init_bindings_constructors_destructor();
        {
            let _gde_name = new _a('casecmp_to');
            __classPrivateFieldGet(this, _a, "f", _StringName__bindings).method_casecmp_to = internal.variant_get_ptr_builtin_method(21, _gde_name.opaque, 2920860731);
        }
        {
            let _gde_name = new _a('nocasecmp_to');
            __classPrivateFieldGet(this, _a, "f", _StringName__bindings).method_nocasecmp_to = internal.variant_get_ptr_builtin_method(21, _gde_name.opaque, 2920860731);
        }
        {
            let _gde_name = new _a('naturalcasecmp_to');
            __classPrivateFieldGet(this, _a, "f", _StringName__bindings).method_naturalcasecmp_to = internal.variant_get_ptr_builtin_method(21, _gde_name.opaque, 2920860731);
        }
        {
            let _gde_name = new _a('naturalnocasecmp_to');
            __classPrivateFieldGet(this, _a, "f", _StringName__bindings).method_naturalnocasecmp_to = internal.variant_get_ptr_builtin_method(21, _gde_name.opaque, 2920860731);
        }
        {
            let _gde_name = new _a('filecasecmp_to');
            __classPrivateFieldGet(this, _a, "f", _StringName__bindings).method_filecasecmp_to = internal.variant_get_ptr_builtin_method(21, _gde_name.opaque, 2920860731);
        }
        {
            let _gde_name = new _a('filenocasecmp_to');
            __classPrivateFieldGet(this, _a, "f", _StringName__bindings).method_filenocasecmp_to = internal.variant_get_ptr_builtin_method(21, _gde_name.opaque, 2920860731);
        }
        {
            let _gde_name = new _a('length');
            __classPrivateFieldGet(this, _a, "f", _StringName__bindings).method_length = internal.variant_get_ptr_builtin_method(21, _gde_name.opaque, 3173160232);
        }
        {
            let _gde_name = new _a('substr');
            __classPrivateFieldGet(this, _a, "f", _StringName__bindings).method_substr = internal.variant_get_ptr_builtin_method(21, _gde_name.opaque, 787537301);
        }
        {
            let _gde_name = new _a('get_slice');
            __classPrivateFieldGet(this, _a, "f", _StringName__bindings).method_get_slice = internal.variant_get_ptr_builtin_method(21, _gde_name.opaque, 3535100402);
        }
        {
            let _gde_name = new _a('get_slicec');
            __classPrivateFieldGet(this, _a, "f", _StringName__bindings).method_get_slicec = internal.variant_get_ptr_builtin_method(21, _gde_name.opaque, 787537301);
        }
        {
            let _gde_name = new _a('get_slice_count');
            __classPrivateFieldGet(this, _a, "f", _StringName__bindings).method_get_slice_count = internal.variant_get_ptr_builtin_method(21, _gde_name.opaque, 2920860731);
        }
        {
            let _gde_name = new _a('find');
            __classPrivateFieldGet(this, _a, "f", _StringName__bindings).method_find = internal.variant_get_ptr_builtin_method(21, _gde_name.opaque, 1760645412);
        }
        {
            let _gde_name = new _a('findn');
            __classPrivateFieldGet(this, _a, "f", _StringName__bindings).method_findn = internal.variant_get_ptr_builtin_method(21, _gde_name.opaque, 1760645412);
        }
        {
            let _gde_name = new _a('count');
            __classPrivateFieldGet(this, _a, "f", _StringName__bindings).method_count = internal.variant_get_ptr_builtin_method(21, _gde_name.opaque, 2343087891);
        }
        {
            let _gde_name = new _a('countn');
            __classPrivateFieldGet(this, _a, "f", _StringName__bindings).method_countn = internal.variant_get_ptr_builtin_method(21, _gde_name.opaque, 2343087891);
        }
        {
            let _gde_name = new _a('rfind');
            __classPrivateFieldGet(this, _a, "f", _StringName__bindings).method_rfind = internal.variant_get_ptr_builtin_method(21, _gde_name.opaque, 1760645412);
        }
        {
            let _gde_name = new _a('rfindn');
            __classPrivateFieldGet(this, _a, "f", _StringName__bindings).method_rfindn = internal.variant_get_ptr_builtin_method(21, _gde_name.opaque, 1760645412);
        }
        {
            let _gde_name = new _a('match');
            __classPrivateFieldGet(this, _a, "f", _StringName__bindings).method_match = internal.variant_get_ptr_builtin_method(21, _gde_name.opaque, 2566493496);
        }
        {
            let _gde_name = new _a('matchn');
            __classPrivateFieldGet(this, _a, "f", _StringName__bindings).method_matchn = internal.variant_get_ptr_builtin_method(21, _gde_name.opaque, 2566493496);
        }
        {
            let _gde_name = new _a('begins_with');
            __classPrivateFieldGet(this, _a, "f", _StringName__bindings).method_begins_with = internal.variant_get_ptr_builtin_method(21, _gde_name.opaque, 2566493496);
        }
        {
            let _gde_name = new _a('ends_with');
            __classPrivateFieldGet(this, _a, "f", _StringName__bindings).method_ends_with = internal.variant_get_ptr_builtin_method(21, _gde_name.opaque, 2566493496);
        }
        {
            let _gde_name = new _a('is_subsequence_of');
            __classPrivateFieldGet(this, _a, "f", _StringName__bindings).method_is_subsequence_of = internal.variant_get_ptr_builtin_method(21, _gde_name.opaque, 2566493496);
        }
        {
            let _gde_name = new _a('is_subsequence_ofn');
            __classPrivateFieldGet(this, _a, "f", _StringName__bindings).method_is_subsequence_ofn = internal.variant_get_ptr_builtin_method(21, _gde_name.opaque, 2566493496);
        }
        {
            let _gde_name = new _a('bigrams');
            __classPrivateFieldGet(this, _a, "f", _StringName__bindings).method_bigrams = internal.variant_get_ptr_builtin_method(21, _gde_name.opaque, 747180633);
        }
        {
            let _gde_name = new _a('similarity');
            __classPrivateFieldGet(this, _a, "f", _StringName__bindings).method_similarity = internal.variant_get_ptr_builtin_method(21, _gde_name.opaque, 2697460964);
        }
        {
            let _gde_name = new _a('format');
            __classPrivateFieldGet(this, _a, "f", _StringName__bindings).method_format = internal.variant_get_ptr_builtin_method(21, _gde_name.opaque, 3212199029);
        }
        {
            let _gde_name = new _a('replace');
            __classPrivateFieldGet(this, _a, "f", _StringName__bindings).method_replace = internal.variant_get_ptr_builtin_method(21, _gde_name.opaque, 1340436205);
        }
        {
            let _gde_name = new _a('replacen');
            __classPrivateFieldGet(this, _a, "f", _StringName__bindings).method_replacen = internal.variant_get_ptr_builtin_method(21, _gde_name.opaque, 1340436205);
        }
        {
            let _gde_name = new _a('repeat');
            __classPrivateFieldGet(this, _a, "f", _StringName__bindings).method_repeat = internal.variant_get_ptr_builtin_method(21, _gde_name.opaque, 2162347432);
        }
        {
            let _gde_name = new _a('reverse');
            __classPrivateFieldGet(this, _a, "f", _StringName__bindings).method_reverse = internal.variant_get_ptr_builtin_method(21, _gde_name.opaque, 3942272618);
        }
        {
            let _gde_name = new _a('insert');
            __classPrivateFieldGet(this, _a, "f", _StringName__bindings).method_insert = internal.variant_get_ptr_builtin_method(21, _gde_name.opaque, 248737229);
        }
        {
            let _gde_name = new _a('erase');
            __classPrivateFieldGet(this, _a, "f", _StringName__bindings).method_erase = internal.variant_get_ptr_builtin_method(21, _gde_name.opaque, 787537301);
        }
        {
            let _gde_name = new _a('capitalize');
            __classPrivateFieldGet(this, _a, "f", _StringName__bindings).method_capitalize = internal.variant_get_ptr_builtin_method(21, _gde_name.opaque, 3942272618);
        }
        {
            let _gde_name = new _a('to_camel_case');
            __classPrivateFieldGet(this, _a, "f", _StringName__bindings).method_to_camel_case = internal.variant_get_ptr_builtin_method(21, _gde_name.opaque, 3942272618);
        }
        {
            let _gde_name = new _a('to_pascal_case');
            __classPrivateFieldGet(this, _a, "f", _StringName__bindings).method_to_pascal_case = internal.variant_get_ptr_builtin_method(21, _gde_name.opaque, 3942272618);
        }
        {
            let _gde_name = new _a('to_snake_case');
            __classPrivateFieldGet(this, _a, "f", _StringName__bindings).method_to_snake_case = internal.variant_get_ptr_builtin_method(21, _gde_name.opaque, 3942272618);
        }
        {
            let _gde_name = new _a('split');
            __classPrivateFieldGet(this, _a, "f", _StringName__bindings).method_split = internal.variant_get_ptr_builtin_method(21, _gde_name.opaque, 1252735785);
        }
        {
            let _gde_name = new _a('rsplit');
            __classPrivateFieldGet(this, _a, "f", _StringName__bindings).method_rsplit = internal.variant_get_ptr_builtin_method(21, _gde_name.opaque, 1252735785);
        }
        {
            let _gde_name = new _a('split_floats');
            __classPrivateFieldGet(this, _a, "f", _StringName__bindings).method_split_floats = internal.variant_get_ptr_builtin_method(21, _gde_name.opaque, 2092079095);
        }
        {
            let _gde_name = new _a('join');
            __classPrivateFieldGet(this, _a, "f", _StringName__bindings).method_join = internal.variant_get_ptr_builtin_method(21, _gde_name.opaque, 3595973238);
        }
        {
            let _gde_name = new _a('to_upper');
            __classPrivateFieldGet(this, _a, "f", _StringName__bindings).method_to_upper = internal.variant_get_ptr_builtin_method(21, _gde_name.opaque, 3942272618);
        }
        {
            let _gde_name = new _a('to_lower');
            __classPrivateFieldGet(this, _a, "f", _StringName__bindings).method_to_lower = internal.variant_get_ptr_builtin_method(21, _gde_name.opaque, 3942272618);
        }
        {
            let _gde_name = new _a('left');
            __classPrivateFieldGet(this, _a, "f", _StringName__bindings).method_left = internal.variant_get_ptr_builtin_method(21, _gde_name.opaque, 2162347432);
        }
        {
            let _gde_name = new _a('right');
            __classPrivateFieldGet(this, _a, "f", _StringName__bindings).method_right = internal.variant_get_ptr_builtin_method(21, _gde_name.opaque, 2162347432);
        }
        {
            let _gde_name = new _a('strip_edges');
            __classPrivateFieldGet(this, _a, "f", _StringName__bindings).method_strip_edges = internal.variant_get_ptr_builtin_method(21, _gde_name.opaque, 907855311);
        }
        {
            let _gde_name = new _a('strip_escapes');
            __classPrivateFieldGet(this, _a, "f", _StringName__bindings).method_strip_escapes = internal.variant_get_ptr_builtin_method(21, _gde_name.opaque, 3942272618);
        }
        {
            let _gde_name = new _a('lstrip');
            __classPrivateFieldGet(this, _a, "f", _StringName__bindings).method_lstrip = internal.variant_get_ptr_builtin_method(21, _gde_name.opaque, 3134094431);
        }
        {
            let _gde_name = new _a('rstrip');
            __classPrivateFieldGet(this, _a, "f", _StringName__bindings).method_rstrip = internal.variant_get_ptr_builtin_method(21, _gde_name.opaque, 3134094431);
        }
        {
            let _gde_name = new _a('get_extension');
            __classPrivateFieldGet(this, _a, "f", _StringName__bindings).method_get_extension = internal.variant_get_ptr_builtin_method(21, _gde_name.opaque, 3942272618);
        }
        {
            let _gde_name = new _a('get_basename');
            __classPrivateFieldGet(this, _a, "f", _StringName__bindings).method_get_basename = internal.variant_get_ptr_builtin_method(21, _gde_name.opaque, 3942272618);
        }
        {
            let _gde_name = new _a('path_join');
            __classPrivateFieldGet(this, _a, "f", _StringName__bindings).method_path_join = internal.variant_get_ptr_builtin_method(21, _gde_name.opaque, 3134094431);
        }
        {
            let _gde_name = new _a('unicode_at');
            __classPrivateFieldGet(this, _a, "f", _StringName__bindings).method_unicode_at = internal.variant_get_ptr_builtin_method(21, _gde_name.opaque, 4103005248);
        }
        {
            let _gde_name = new _a('indent');
            __classPrivateFieldGet(this, _a, "f", _StringName__bindings).method_indent = internal.variant_get_ptr_builtin_method(21, _gde_name.opaque, 3134094431);
        }
        {
            let _gde_name = new _a('dedent');
            __classPrivateFieldGet(this, _a, "f", _StringName__bindings).method_dedent = internal.variant_get_ptr_builtin_method(21, _gde_name.opaque, 3942272618);
        }
        {
            let _gde_name = new _a('md5_text');
            __classPrivateFieldGet(this, _a, "f", _StringName__bindings).method_md5_text = internal.variant_get_ptr_builtin_method(21, _gde_name.opaque, 3942272618);
        }
        {
            let _gde_name = new _a('sha1_text');
            __classPrivateFieldGet(this, _a, "f", _StringName__bindings).method_sha1_text = internal.variant_get_ptr_builtin_method(21, _gde_name.opaque, 3942272618);
        }
        {
            let _gde_name = new _a('sha256_text');
            __classPrivateFieldGet(this, _a, "f", _StringName__bindings).method_sha256_text = internal.variant_get_ptr_builtin_method(21, _gde_name.opaque, 3942272618);
        }
        {
            let _gde_name = new _a('md5_buffer');
            __classPrivateFieldGet(this, _a, "f", _StringName__bindings).method_md5_buffer = internal.variant_get_ptr_builtin_method(21, _gde_name.opaque, 247621236);
        }
        {
            let _gde_name = new _a('sha1_buffer');
            __classPrivateFieldGet(this, _a, "f", _StringName__bindings).method_sha1_buffer = internal.variant_get_ptr_builtin_method(21, _gde_name.opaque, 247621236);
        }
        {
            let _gde_name = new _a('sha256_buffer');
            __classPrivateFieldGet(this, _a, "f", _StringName__bindings).method_sha256_buffer = internal.variant_get_ptr_builtin_method(21, _gde_name.opaque, 247621236);
        }
        {
            let _gde_name = new _a('is_empty');
            __classPrivateFieldGet(this, _a, "f", _StringName__bindings).method_is_empty = internal.variant_get_ptr_builtin_method(21, _gde_name.opaque, 3918633141);
        }
        {
            let _gde_name = new _a('contains');
            __classPrivateFieldGet(this, _a, "f", _StringName__bindings).method_contains = internal.variant_get_ptr_builtin_method(21, _gde_name.opaque, 2566493496);
        }
        {
            let _gde_name = new _a('containsn');
            __classPrivateFieldGet(this, _a, "f", _StringName__bindings).method_containsn = internal.variant_get_ptr_builtin_method(21, _gde_name.opaque, 2566493496);
        }
        {
            let _gde_name = new _a('is_absolute_path');
            __classPrivateFieldGet(this, _a, "f", _StringName__bindings).method_is_absolute_path = internal.variant_get_ptr_builtin_method(21, _gde_name.opaque, 3918633141);
        }
        {
            let _gde_name = new _a('is_relative_path');
            __classPrivateFieldGet(this, _a, "f", _StringName__bindings).method_is_relative_path = internal.variant_get_ptr_builtin_method(21, _gde_name.opaque, 3918633141);
        }
        {
            let _gde_name = new _a('simplify_path');
            __classPrivateFieldGet(this, _a, "f", _StringName__bindings).method_simplify_path = internal.variant_get_ptr_builtin_method(21, _gde_name.opaque, 3942272618);
        }
        {
            let _gde_name = new _a('get_base_dir');
            __classPrivateFieldGet(this, _a, "f", _StringName__bindings).method_get_base_dir = internal.variant_get_ptr_builtin_method(21, _gde_name.opaque, 3942272618);
        }
        {
            let _gde_name = new _a('get_file');
            __classPrivateFieldGet(this, _a, "f", _StringName__bindings).method_get_file = internal.variant_get_ptr_builtin_method(21, _gde_name.opaque, 3942272618);
        }
        {
            let _gde_name = new _a('xml_escape');
            __classPrivateFieldGet(this, _a, "f", _StringName__bindings).method_xml_escape = internal.variant_get_ptr_builtin_method(21, _gde_name.opaque, 3429816538);
        }
        {
            let _gde_name = new _a('xml_unescape');
            __classPrivateFieldGet(this, _a, "f", _StringName__bindings).method_xml_unescape = internal.variant_get_ptr_builtin_method(21, _gde_name.opaque, 3942272618);
        }
        {
            let _gde_name = new _a('uri_encode');
            __classPrivateFieldGet(this, _a, "f", _StringName__bindings).method_uri_encode = internal.variant_get_ptr_builtin_method(21, _gde_name.opaque, 3942272618);
        }
        {
            let _gde_name = new _a('uri_decode');
            __classPrivateFieldGet(this, _a, "f", _StringName__bindings).method_uri_decode = internal.variant_get_ptr_builtin_method(21, _gde_name.opaque, 3942272618);
        }
        {
            let _gde_name = new _a('c_escape');
            __classPrivateFieldGet(this, _a, "f", _StringName__bindings).method_c_escape = internal.variant_get_ptr_builtin_method(21, _gde_name.opaque, 3942272618);
        }
        {
            let _gde_name = new _a('c_unescape');
            __classPrivateFieldGet(this, _a, "f", _StringName__bindings).method_c_unescape = internal.variant_get_ptr_builtin_method(21, _gde_name.opaque, 3942272618);
        }
        {
            let _gde_name = new _a('json_escape');
            __classPrivateFieldGet(this, _a, "f", _StringName__bindings).method_json_escape = internal.variant_get_ptr_builtin_method(21, _gde_name.opaque, 3942272618);
        }
        {
            let _gde_name = new _a('validate_node_name');
            __classPrivateFieldGet(this, _a, "f", _StringName__bindings).method_validate_node_name = internal.variant_get_ptr_builtin_method(21, _gde_name.opaque, 3942272618);
        }
        {
            let _gde_name = new _a('validate_filename');
            __classPrivateFieldGet(this, _a, "f", _StringName__bindings).method_validate_filename = internal.variant_get_ptr_builtin_method(21, _gde_name.opaque, 3942272618);
        }
        {
            let _gde_name = new _a('is_valid_identifier');
            __classPrivateFieldGet(this, _a, "f", _StringName__bindings).method_is_valid_identifier = internal.variant_get_ptr_builtin_method(21, _gde_name.opaque, 3918633141);
        }
        {
            let _gde_name = new _a('is_valid_int');
            __classPrivateFieldGet(this, _a, "f", _StringName__bindings).method_is_valid_int = internal.variant_get_ptr_builtin_method(21, _gde_name.opaque, 3918633141);
        }
        {
            let _gde_name = new _a('is_valid_float');
            __classPrivateFieldGet(this, _a, "f", _StringName__bindings).method_is_valid_float = internal.variant_get_ptr_builtin_method(21, _gde_name.opaque, 3918633141);
        }
        {
            let _gde_name = new _a('is_valid_hex_number');
            __classPrivateFieldGet(this, _a, "f", _StringName__bindings).method_is_valid_hex_number = internal.variant_get_ptr_builtin_method(21, _gde_name.opaque, 593672999);
        }
        {
            let _gde_name = new _a('is_valid_html_color');
            __classPrivateFieldGet(this, _a, "f", _StringName__bindings).method_is_valid_html_color = internal.variant_get_ptr_builtin_method(21, _gde_name.opaque, 3918633141);
        }
        {
            let _gde_name = new _a('is_valid_ip_address');
            __classPrivateFieldGet(this, _a, "f", _StringName__bindings).method_is_valid_ip_address = internal.variant_get_ptr_builtin_method(21, _gde_name.opaque, 3918633141);
        }
        {
            let _gde_name = new _a('is_valid_filename');
            __classPrivateFieldGet(this, _a, "f", _StringName__bindings).method_is_valid_filename = internal.variant_get_ptr_builtin_method(21, _gde_name.opaque, 3918633141);
        }
        {
            let _gde_name = new _a('to_int');
            __classPrivateFieldGet(this, _a, "f", _StringName__bindings).method_to_int = internal.variant_get_ptr_builtin_method(21, _gde_name.opaque, 3173160232);
        }
        {
            let _gde_name = new _a('to_float');
            __classPrivateFieldGet(this, _a, "f", _StringName__bindings).method_to_float = internal.variant_get_ptr_builtin_method(21, _gde_name.opaque, 466405837);
        }
        {
            let _gde_name = new _a('hex_to_int');
            __classPrivateFieldGet(this, _a, "f", _StringName__bindings).method_hex_to_int = internal.variant_get_ptr_builtin_method(21, _gde_name.opaque, 3173160232);
        }
        {
            let _gde_name = new _a('bin_to_int');
            __classPrivateFieldGet(this, _a, "f", _StringName__bindings).method_bin_to_int = internal.variant_get_ptr_builtin_method(21, _gde_name.opaque, 3173160232);
        }
        {
            let _gde_name = new _a('lpad');
            __classPrivateFieldGet(this, _a, "f", _StringName__bindings).method_lpad = internal.variant_get_ptr_builtin_method(21, _gde_name.opaque, 248737229);
        }
        {
            let _gde_name = new _a('rpad');
            __classPrivateFieldGet(this, _a, "f", _StringName__bindings).method_rpad = internal.variant_get_ptr_builtin_method(21, _gde_name.opaque, 248737229);
        }
        {
            let _gde_name = new _a('pad_decimals');
            __classPrivateFieldGet(this, _a, "f", _StringName__bindings).method_pad_decimals = internal.variant_get_ptr_builtin_method(21, _gde_name.opaque, 2162347432);
        }
        {
            let _gde_name = new _a('pad_zeros');
            __classPrivateFieldGet(this, _a, "f", _StringName__bindings).method_pad_zeros = internal.variant_get_ptr_builtin_method(21, _gde_name.opaque, 2162347432);
        }
        {
            let _gde_name = new _a('trim_prefix');
            __classPrivateFieldGet(this, _a, "f", _StringName__bindings).method_trim_prefix = internal.variant_get_ptr_builtin_method(21, _gde_name.opaque, 3134094431);
        }
        {
            let _gde_name = new _a('trim_suffix');
            __classPrivateFieldGet(this, _a, "f", _StringName__bindings).method_trim_suffix = internal.variant_get_ptr_builtin_method(21, _gde_name.opaque, 3134094431);
        }
        {
            let _gde_name = new _a('to_ascii_buffer');
            __classPrivateFieldGet(this, _a, "f", _StringName__bindings).method_to_ascii_buffer = internal.variant_get_ptr_builtin_method(21, _gde_name.opaque, 247621236);
        }
        {
            let _gde_name = new _a('to_utf8_buffer');
            __classPrivateFieldGet(this, _a, "f", _StringName__bindings).method_to_utf8_buffer = internal.variant_get_ptr_builtin_method(21, _gde_name.opaque, 247621236);
        }
        {
            let _gde_name = new _a('to_utf16_buffer');
            __classPrivateFieldGet(this, _a, "f", _StringName__bindings).method_to_utf16_buffer = internal.variant_get_ptr_builtin_method(21, _gde_name.opaque, 247621236);
        }
        {
            let _gde_name = new _a('to_utf32_buffer');
            __classPrivateFieldGet(this, _a, "f", _StringName__bindings).method_to_utf32_buffer = internal.variant_get_ptr_builtin_method(21, _gde_name.opaque, 247621236);
        }
        {
            let _gde_name = new _a('hex_decode');
            __classPrivateFieldGet(this, _a, "f", _StringName__bindings).method_hex_decode = internal.variant_get_ptr_builtin_method(21, _gde_name.opaque, 247621236);
        }
        {
            let _gde_name = new _a('to_wchar_buffer');
            __classPrivateFieldGet(this, _a, "f", _StringName__bindings).method_to_wchar_buffer = internal.variant_get_ptr_builtin_method(21, _gde_name.opaque, 247621236);
        }
        {
            let _gde_name = new _a('hash');
            __classPrivateFieldGet(this, _a, "f", _StringName__bindings).method_hash = internal.variant_get_ptr_builtin_method(21, _gde_name.opaque, 3173160232);
        }
    }
    casecmp_to(_to) {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _StringName__bindings).method_casecmp_to, this, 2, [_to]);
        return ret;
    }
    nocasecmp_to(_to) {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _StringName__bindings).method_nocasecmp_to, this, 2, [_to]);
        return ret;
    }
    naturalcasecmp_to(_to) {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _StringName__bindings).method_naturalcasecmp_to, this, 2, [_to]);
        return ret;
    }
    naturalnocasecmp_to(_to) {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _StringName__bindings).method_naturalnocasecmp_to, this, 2, [_to]);
        return ret;
    }
    filecasecmp_to(_to) {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _StringName__bindings).method_filecasecmp_to, this, 2, [_to]);
        return ret;
    }
    filenocasecmp_to(_to) {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _StringName__bindings).method_filenocasecmp_to, this, 2, [_to]);
        return ret;
    }
    length() {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _StringName__bindings).method_length, this, 2, []);
        return ret;
    }
    substr(_from, _len) {
        let ret = new GDString();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _StringName__bindings).method_substr, this, 4, [_from, _len]);
        return ret;
    }
    get_slice(_delimiter, _slice) {
        let ret = new GDString();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _StringName__bindings).method_get_slice, this, 4, [_delimiter, _slice]);
        return ret;
    }
    get_slicec(_delimiter, _slice) {
        let ret = new GDString();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _StringName__bindings).method_get_slicec, this, 4, [_delimiter, _slice]);
        return ret;
    }
    get_slice_count(_delimiter) {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _StringName__bindings).method_get_slice_count, this, 2, [_delimiter]);
        return ret;
    }
    find(_what, _from) {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _StringName__bindings).method_find, this, 2, [_what, _from]);
        return ret;
    }
    findn(_what, _from) {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _StringName__bindings).method_findn, this, 2, [_what, _from]);
        return ret;
    }
    count(_what, _from, _to) {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _StringName__bindings).method_count, this, 2, [_what, _from, _to]);
        return ret;
    }
    countn(_what, _from, _to) {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _StringName__bindings).method_countn, this, 2, [_what, _from, _to]);
        return ret;
    }
    rfind(_what, _from) {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _StringName__bindings).method_rfind, this, 2, [_what, _from]);
        return ret;
    }
    rfindn(_what, _from) {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _StringName__bindings).method_rfindn, this, 2, [_what, _from]);
        return ret;
    }
    match(_expr) {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _StringName__bindings).method_match, this, 1, [_expr]);
        return ret;
    }
    matchn(_expr) {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _StringName__bindings).method_matchn, this, 1, [_expr]);
        return ret;
    }
    begins_with(_text) {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _StringName__bindings).method_begins_with, this, 1, [_text]);
        return ret;
    }
    ends_with(_text) {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _StringName__bindings).method_ends_with, this, 1, [_text]);
        return ret;
    }
    is_subsequence_of(_text) {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _StringName__bindings).method_is_subsequence_of, this, 1, [_text]);
        return ret;
    }
    is_subsequence_ofn(_text) {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _StringName__bindings).method_is_subsequence_ofn, this, 1, [_text]);
        return ret;
    }
    bigrams() {
        let ret = new PackedStringArray();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _StringName__bindings).method_bigrams, this, 34, []);
        return ret;
    }
    similarity(_text) {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _StringName__bindings).method_similarity, this, 3, [_text]);
        return ret;
    }
    format(_values, _placeholder) {
        let ret = new GDString();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _StringName__bindings).method_format, this, 4, [_values, _placeholder]);
        return ret;
    }
    replace(_what, _forwhat) {
        let ret = new GDString();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _StringName__bindings).method_replace, this, 4, [_what, _forwhat]);
        return ret;
    }
    replacen(_what, _forwhat) {
        let ret = new GDString();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _StringName__bindings).method_replacen, this, 4, [_what, _forwhat]);
        return ret;
    }
    repeat(_count) {
        let ret = new GDString();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _StringName__bindings).method_repeat, this, 4, [_count]);
        return ret;
    }
    reverse() {
        let ret = new GDString();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _StringName__bindings).method_reverse, this, 4, []);
        return ret;
    }
    insert(_position, _what) {
        let ret = new GDString();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _StringName__bindings).method_insert, this, 4, [_position, _what]);
        return ret;
    }
    erase(_position, _chars) {
        let ret = new GDString();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _StringName__bindings).method_erase, this, 4, [_position, _chars]);
        return ret;
    }
    capitalize() {
        let ret = new GDString();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _StringName__bindings).method_capitalize, this, 4, []);
        return ret;
    }
    to_camel_case() {
        let ret = new GDString();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _StringName__bindings).method_to_camel_case, this, 4, []);
        return ret;
    }
    to_pascal_case() {
        let ret = new GDString();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _StringName__bindings).method_to_pascal_case, this, 4, []);
        return ret;
    }
    to_snake_case() {
        let ret = new GDString();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _StringName__bindings).method_to_snake_case, this, 4, []);
        return ret;
    }
    split(_delimiter, _allow_empty, _maxsplit) {
        let ret = new PackedStringArray();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _StringName__bindings).method_split, this, 34, [_delimiter, _allow_empty, _maxsplit]);
        return ret;
    }
    rsplit(_delimiter, _allow_empty, _maxsplit) {
        let ret = new PackedStringArray();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _StringName__bindings).method_rsplit, this, 34, [_delimiter, _allow_empty, _maxsplit]);
        return ret;
    }
    split_floats(_delimiter, _allow_empty) {
        let ret = new PackedFloat64Array();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _StringName__bindings).method_split_floats, this, 33, [_delimiter, _allow_empty]);
        return ret;
    }
    join(_parts) {
        let ret = new GDString();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _StringName__bindings).method_join, this, 4, [_parts]);
        return ret;
    }
    to_upper() {
        let ret = new GDString();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _StringName__bindings).method_to_upper, this, 4, []);
        return ret;
    }
    to_lower() {
        let ret = new GDString();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _StringName__bindings).method_to_lower, this, 4, []);
        return ret;
    }
    left(_length) {
        let ret = new GDString();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _StringName__bindings).method_left, this, 4, [_length]);
        return ret;
    }
    right(_length) {
        let ret = new GDString();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _StringName__bindings).method_right, this, 4, [_length]);
        return ret;
    }
    strip_edges(_left, _right) {
        let ret = new GDString();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _StringName__bindings).method_strip_edges, this, 4, [_left, _right]);
        return ret;
    }
    strip_escapes() {
        let ret = new GDString();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _StringName__bindings).method_strip_escapes, this, 4, []);
        return ret;
    }
    lstrip(_chars) {
        let ret = new GDString();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _StringName__bindings).method_lstrip, this, 4, [_chars]);
        return ret;
    }
    rstrip(_chars) {
        let ret = new GDString();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _StringName__bindings).method_rstrip, this, 4, [_chars]);
        return ret;
    }
    get_extension() {
        let ret = new GDString();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _StringName__bindings).method_get_extension, this, 4, []);
        return ret;
    }
    get_basename() {
        let ret = new GDString();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _StringName__bindings).method_get_basename, this, 4, []);
        return ret;
    }
    path_join(_file) {
        let ret = new GDString();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _StringName__bindings).method_path_join, this, 4, [_file]);
        return ret;
    }
    unicode_at(_at) {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _StringName__bindings).method_unicode_at, this, 2, [_at]);
        return ret;
    }
    indent(_prefix) {
        let ret = new GDString();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _StringName__bindings).method_indent, this, 4, [_prefix]);
        return ret;
    }
    dedent() {
        let ret = new GDString();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _StringName__bindings).method_dedent, this, 4, []);
        return ret;
    }
    md5_text() {
        let ret = new GDString();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _StringName__bindings).method_md5_text, this, 4, []);
        return ret;
    }
    sha1_text() {
        let ret = new GDString();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _StringName__bindings).method_sha1_text, this, 4, []);
        return ret;
    }
    sha256_text() {
        let ret = new GDString();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _StringName__bindings).method_sha256_text, this, 4, []);
        return ret;
    }
    md5_buffer() {
        let ret = new PackedByteArray();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _StringName__bindings).method_md5_buffer, this, 29, []);
        return ret;
    }
    sha1_buffer() {
        let ret = new PackedByteArray();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _StringName__bindings).method_sha1_buffer, this, 29, []);
        return ret;
    }
    sha256_buffer() {
        let ret = new PackedByteArray();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _StringName__bindings).method_sha256_buffer, this, 29, []);
        return ret;
    }
    is_empty() {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _StringName__bindings).method_is_empty, this, 1, []);
        return ret;
    }
    contains(_what) {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _StringName__bindings).method_contains, this, 1, [_what]);
        return ret;
    }
    containsn(_what) {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _StringName__bindings).method_containsn, this, 1, [_what]);
        return ret;
    }
    is_absolute_path() {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _StringName__bindings).method_is_absolute_path, this, 1, []);
        return ret;
    }
    is_relative_path() {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _StringName__bindings).method_is_relative_path, this, 1, []);
        return ret;
    }
    simplify_path() {
        let ret = new GDString();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _StringName__bindings).method_simplify_path, this, 4, []);
        return ret;
    }
    get_base_dir() {
        let ret = new GDString();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _StringName__bindings).method_get_base_dir, this, 4, []);
        return ret;
    }
    get_file() {
        let ret = new GDString();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _StringName__bindings).method_get_file, this, 4, []);
        return ret;
    }
    xml_escape(_escape_quotes) {
        let ret = new GDString();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _StringName__bindings).method_xml_escape, this, 4, [_escape_quotes]);
        return ret;
    }
    xml_unescape() {
        let ret = new GDString();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _StringName__bindings).method_xml_unescape, this, 4, []);
        return ret;
    }
    uri_encode() {
        let ret = new GDString();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _StringName__bindings).method_uri_encode, this, 4, []);
        return ret;
    }
    uri_decode() {
        let ret = new GDString();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _StringName__bindings).method_uri_decode, this, 4, []);
        return ret;
    }
    c_escape() {
        let ret = new GDString();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _StringName__bindings).method_c_escape, this, 4, []);
        return ret;
    }
    c_unescape() {
        let ret = new GDString();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _StringName__bindings).method_c_unescape, this, 4, []);
        return ret;
    }
    json_escape() {
        let ret = new GDString();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _StringName__bindings).method_json_escape, this, 4, []);
        return ret;
    }
    validate_node_name() {
        let ret = new GDString();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _StringName__bindings).method_validate_node_name, this, 4, []);
        return ret;
    }
    validate_filename() {
        let ret = new GDString();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _StringName__bindings).method_validate_filename, this, 4, []);
        return ret;
    }
    is_valid_identifier() {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _StringName__bindings).method_is_valid_identifier, this, 1, []);
        return ret;
    }
    is_valid_int() {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _StringName__bindings).method_is_valid_int, this, 1, []);
        return ret;
    }
    is_valid_float() {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _StringName__bindings).method_is_valid_float, this, 1, []);
        return ret;
    }
    is_valid_hex_number(_with_prefix) {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _StringName__bindings).method_is_valid_hex_number, this, 1, [_with_prefix]);
        return ret;
    }
    is_valid_html_color() {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _StringName__bindings).method_is_valid_html_color, this, 1, []);
        return ret;
    }
    is_valid_ip_address() {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _StringName__bindings).method_is_valid_ip_address, this, 1, []);
        return ret;
    }
    is_valid_filename() {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _StringName__bindings).method_is_valid_filename, this, 1, []);
        return ret;
    }
    to_int() {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _StringName__bindings).method_to_int, this, 2, []);
        return ret;
    }
    to_float() {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _StringName__bindings).method_to_float, this, 3, []);
        return ret;
    }
    hex_to_int() {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _StringName__bindings).method_hex_to_int, this, 2, []);
        return ret;
    }
    bin_to_int() {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _StringName__bindings).method_bin_to_int, this, 2, []);
        return ret;
    }
    lpad(_min_length, _character) {
        let ret = new GDString();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _StringName__bindings).method_lpad, this, 4, [_min_length, _character]);
        return ret;
    }
    rpad(_min_length, _character) {
        let ret = new GDString();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _StringName__bindings).method_rpad, this, 4, [_min_length, _character]);
        return ret;
    }
    pad_decimals(_digits) {
        let ret = new GDString();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _StringName__bindings).method_pad_decimals, this, 4, [_digits]);
        return ret;
    }
    pad_zeros(_digits) {
        let ret = new GDString();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _StringName__bindings).method_pad_zeros, this, 4, [_digits]);
        return ret;
    }
    trim_prefix(_prefix) {
        let ret = new GDString();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _StringName__bindings).method_trim_prefix, this, 4, [_prefix]);
        return ret;
    }
    trim_suffix(_suffix) {
        let ret = new GDString();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _StringName__bindings).method_trim_suffix, this, 4, [_suffix]);
        return ret;
    }
    to_ascii_buffer() {
        let ret = new PackedByteArray();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _StringName__bindings).method_to_ascii_buffer, this, 29, []);
        return ret;
    }
    to_utf8_buffer() {
        let ret = new PackedByteArray();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _StringName__bindings).method_to_utf8_buffer, this, 29, []);
        return ret;
    }
    to_utf16_buffer() {
        let ret = new PackedByteArray();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _StringName__bindings).method_to_utf16_buffer, this, 29, []);
        return ret;
    }
    to_utf32_buffer() {
        let ret = new PackedByteArray();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _StringName__bindings).method_to_utf32_buffer, this, 29, []);
        return ret;
    }
    hex_decode() {
        let ret = new PackedByteArray();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _StringName__bindings).method_hex_decode, this, 29, []);
        return ret;
    }
    to_wchar_buffer() {
        let ret = new PackedByteArray();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _StringName__bindings).method_to_wchar_buffer, this, 29, []);
        return ret;
    }
    hash() {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _StringName__bindings).method_hash, this, 2, []);
        return ret;
    }
}
_a = StringName;
_StringName_SIZE = { value: 8 };
_StringName__bindings = { value: new _MethodBindings() };
_StringName_initialized = { value: false };
(() => {
    _a._init_bindings();
})();
