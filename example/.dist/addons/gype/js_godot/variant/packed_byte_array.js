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
var _a, _PackedByteArray_SIZE, _PackedByteArray__bindings, _PackedByteArray_initialized;
import * as internal from '__internal__';
import { _call_builtin_constructor, _call_builtin_method_ptr_ret, _call_builtin_method_ptr_no_ret, _call_builtin_method_ptr_obj_ret, } from '@js_godot/core/builtin_ptrcall';
import { PackedFloat32Array } from '@js_godot/variant/packed_float32_array';
import { GDString } from '@js_godot/variant/gd_string';
import { PackedFloat64Array } from '@js_godot/variant/packed_float64_array';
import { StringName } from '@js_godot/variant/string_name';
import { GDArray } from '@js_godot/variant/gd_array';
import { Variant } from '@js_godot/variant/variant';
import { PackedInt32Array } from '@js_godot/variant/packed_int32_array';
import { PackedInt64Array } from '@js_godot/variant/packed_int64_array';
import { GodotObject } from "@js_godot/classes/godot_object";
class _MethodBindings {
}
export class PackedByteArray {
    constructor(value) {
        this.opaque = new Uint8Array(__classPrivateFieldGet(_a, _a, "f", _PackedByteArray_SIZE));
        if (!value) {
            _call_builtin_constructor(__classPrivateFieldGet(_a, _a, "f", _PackedByteArray__bindings).constructor_0, this);
        }
        else if (arguments.length == 1 && arguments[0] instanceof _a) {
            let from = arguments[0];
            _call_builtin_constructor(__classPrivateFieldGet(_a, _a, "f", _PackedByteArray__bindings).constructor_1, this, [
                from
            ]);
        }
        else if (arguments.length == 1 && arguments[0] instanceof GDArray) {
            let from = arguments[0];
            _call_builtin_constructor(__classPrivateFieldGet(_a, _a, "f", _PackedByteArray__bindings).constructor_2, this, [
                from
            ]);
        }
        else if (value.constructor.name === "Variant") {
            __classPrivateFieldGet(_a, _a, "f", _PackedByteArray__bindings).from_variant_constructor(this.opaque, value.opaque);
        }
        else if (value instanceof Uint8Array) {
            this.opaque = value;
        }
    }
    static __init_bindings_constructors_destructor() {
        __classPrivateFieldGet(this, _a, "f", _PackedByteArray__bindings).from_variant_constructor = internal.get_variant_to_type_constructor(29);
        __classPrivateFieldGet(this, _a, "f", _PackedByteArray__bindings).constructor_0 = internal.variant_get_ptr_constructor(29, 0);
        __classPrivateFieldGet(this, _a, "f", _PackedByteArray__bindings).constructor_1 = internal.variant_get_ptr_constructor(29, 1);
        __classPrivateFieldGet(this, _a, "f", _PackedByteArray__bindings).constructor_2 = internal.variant_get_ptr_constructor(29, 2);
        __classPrivateFieldGet(this, _a, "f", _PackedByteArray__bindings).destructor = internal.variant_get_ptr_destructor(29);
    }
    static async _init_bindings() {
        if (__classPrivateFieldGet(this, _a, "f", _PackedByteArray_initialized)) {
            return;
        }
        __classPrivateFieldSet(this, _a, true, "f", _PackedByteArray_initialized);
        this.__init_bindings_constructors_destructor();
        {
            let _gde_name = new StringName('size');
            __classPrivateFieldGet(this, _a, "f", _PackedByteArray__bindings).method_size = internal.variant_get_ptr_builtin_method(29, _gde_name.opaque, 3173160232);
        }
        {
            let _gde_name = new StringName('is_empty');
            __classPrivateFieldGet(this, _a, "f", _PackedByteArray__bindings).method_is_empty = internal.variant_get_ptr_builtin_method(29, _gde_name.opaque, 3918633141);
        }
        {
            let _gde_name = new StringName('set');
            __classPrivateFieldGet(this, _a, "f", _PackedByteArray__bindings).method_set = internal.variant_get_ptr_builtin_method(29, _gde_name.opaque, 3638975848);
        }
        {
            let _gde_name = new StringName('push_back');
            __classPrivateFieldGet(this, _a, "f", _PackedByteArray__bindings).method_push_back = internal.variant_get_ptr_builtin_method(29, _gde_name.opaque, 694024632);
        }
        {
            let _gde_name = new StringName('append');
            __classPrivateFieldGet(this, _a, "f", _PackedByteArray__bindings).method_append = internal.variant_get_ptr_builtin_method(29, _gde_name.opaque, 694024632);
        }
        {
            let _gde_name = new StringName('append_array');
            __classPrivateFieldGet(this, _a, "f", _PackedByteArray__bindings).method_append_array = internal.variant_get_ptr_builtin_method(29, _gde_name.opaque, 791097111);
        }
        {
            let _gde_name = new StringName('remove_at');
            __classPrivateFieldGet(this, _a, "f", _PackedByteArray__bindings).method_remove_at = internal.variant_get_ptr_builtin_method(29, _gde_name.opaque, 2823966027);
        }
        {
            let _gde_name = new StringName('insert');
            __classPrivateFieldGet(this, _a, "f", _PackedByteArray__bindings).method_insert = internal.variant_get_ptr_builtin_method(29, _gde_name.opaque, 1487112728);
        }
        {
            let _gde_name = new StringName('fill');
            __classPrivateFieldGet(this, _a, "f", _PackedByteArray__bindings).method_fill = internal.variant_get_ptr_builtin_method(29, _gde_name.opaque, 2823966027);
        }
        {
            let _gde_name = new StringName('resize');
            __classPrivateFieldGet(this, _a, "f", _PackedByteArray__bindings).method_resize = internal.variant_get_ptr_builtin_method(29, _gde_name.opaque, 848867239);
        }
        {
            let _gde_name = new StringName('clear');
            __classPrivateFieldGet(this, _a, "f", _PackedByteArray__bindings).method_clear = internal.variant_get_ptr_builtin_method(29, _gde_name.opaque, 3218959716);
        }
        {
            let _gde_name = new StringName('has');
            __classPrivateFieldGet(this, _a, "f", _PackedByteArray__bindings).method_has = internal.variant_get_ptr_builtin_method(29, _gde_name.opaque, 931488181);
        }
        {
            let _gde_name = new StringName('reverse');
            __classPrivateFieldGet(this, _a, "f", _PackedByteArray__bindings).method_reverse = internal.variant_get_ptr_builtin_method(29, _gde_name.opaque, 3218959716);
        }
        {
            let _gde_name = new StringName('slice');
            __classPrivateFieldGet(this, _a, "f", _PackedByteArray__bindings).method_slice = internal.variant_get_ptr_builtin_method(29, _gde_name.opaque, 2278869132);
        }
        {
            let _gde_name = new StringName('sort');
            __classPrivateFieldGet(this, _a, "f", _PackedByteArray__bindings).method_sort = internal.variant_get_ptr_builtin_method(29, _gde_name.opaque, 3218959716);
        }
        {
            let _gde_name = new StringName('bsearch');
            __classPrivateFieldGet(this, _a, "f", _PackedByteArray__bindings).method_bsearch = internal.variant_get_ptr_builtin_method(29, _gde_name.opaque, 3380005890);
        }
        {
            let _gde_name = new StringName('duplicate');
            __classPrivateFieldGet(this, _a, "f", _PackedByteArray__bindings).method_duplicate = internal.variant_get_ptr_builtin_method(29, _gde_name.opaque, 851781288);
        }
        {
            let _gde_name = new StringName('find');
            __classPrivateFieldGet(this, _a, "f", _PackedByteArray__bindings).method_find = internal.variant_get_ptr_builtin_method(29, _gde_name.opaque, 2984303840);
        }
        {
            let _gde_name = new StringName('rfind');
            __classPrivateFieldGet(this, _a, "f", _PackedByteArray__bindings).method_rfind = internal.variant_get_ptr_builtin_method(29, _gde_name.opaque, 2984303840);
        }
        {
            let _gde_name = new StringName('count');
            __classPrivateFieldGet(this, _a, "f", _PackedByteArray__bindings).method_count = internal.variant_get_ptr_builtin_method(29, _gde_name.opaque, 4103005248);
        }
        {
            let _gde_name = new StringName('get_string_from_ascii');
            __classPrivateFieldGet(this, _a, "f", _PackedByteArray__bindings).method_get_string_from_ascii = internal.variant_get_ptr_builtin_method(29, _gde_name.opaque, 3942272618);
        }
        {
            let _gde_name = new StringName('get_string_from_utf8');
            __classPrivateFieldGet(this, _a, "f", _PackedByteArray__bindings).method_get_string_from_utf8 = internal.variant_get_ptr_builtin_method(29, _gde_name.opaque, 3942272618);
        }
        {
            let _gde_name = new StringName('get_string_from_utf16');
            __classPrivateFieldGet(this, _a, "f", _PackedByteArray__bindings).method_get_string_from_utf16 = internal.variant_get_ptr_builtin_method(29, _gde_name.opaque, 3942272618);
        }
        {
            let _gde_name = new StringName('get_string_from_utf32');
            __classPrivateFieldGet(this, _a, "f", _PackedByteArray__bindings).method_get_string_from_utf32 = internal.variant_get_ptr_builtin_method(29, _gde_name.opaque, 3942272618);
        }
        {
            let _gde_name = new StringName('get_string_from_wchar');
            __classPrivateFieldGet(this, _a, "f", _PackedByteArray__bindings).method_get_string_from_wchar = internal.variant_get_ptr_builtin_method(29, _gde_name.opaque, 3942272618);
        }
        {
            let _gde_name = new StringName('hex_encode');
            __classPrivateFieldGet(this, _a, "f", _PackedByteArray__bindings).method_hex_encode = internal.variant_get_ptr_builtin_method(29, _gde_name.opaque, 3942272618);
        }
        {
            let _gde_name = new StringName('compress');
            __classPrivateFieldGet(this, _a, "f", _PackedByteArray__bindings).method_compress = internal.variant_get_ptr_builtin_method(29, _gde_name.opaque, 1845905913);
        }
        {
            let _gde_name = new StringName('decompress');
            __classPrivateFieldGet(this, _a, "f", _PackedByteArray__bindings).method_decompress = internal.variant_get_ptr_builtin_method(29, _gde_name.opaque, 2278869132);
        }
        {
            let _gde_name = new StringName('decompress_dynamic');
            __classPrivateFieldGet(this, _a, "f", _PackedByteArray__bindings).method_decompress_dynamic = internal.variant_get_ptr_builtin_method(29, _gde_name.opaque, 2278869132);
        }
        {
            let _gde_name = new StringName('decode_u8');
            __classPrivateFieldGet(this, _a, "f", _PackedByteArray__bindings).method_decode_u8 = internal.variant_get_ptr_builtin_method(29, _gde_name.opaque, 4103005248);
        }
        {
            let _gde_name = new StringName('decode_s8');
            __classPrivateFieldGet(this, _a, "f", _PackedByteArray__bindings).method_decode_s8 = internal.variant_get_ptr_builtin_method(29, _gde_name.opaque, 4103005248);
        }
        {
            let _gde_name = new StringName('decode_u16');
            __classPrivateFieldGet(this, _a, "f", _PackedByteArray__bindings).method_decode_u16 = internal.variant_get_ptr_builtin_method(29, _gde_name.opaque, 4103005248);
        }
        {
            let _gde_name = new StringName('decode_s16');
            __classPrivateFieldGet(this, _a, "f", _PackedByteArray__bindings).method_decode_s16 = internal.variant_get_ptr_builtin_method(29, _gde_name.opaque, 4103005248);
        }
        {
            let _gde_name = new StringName('decode_u32');
            __classPrivateFieldGet(this, _a, "f", _PackedByteArray__bindings).method_decode_u32 = internal.variant_get_ptr_builtin_method(29, _gde_name.opaque, 4103005248);
        }
        {
            let _gde_name = new StringName('decode_s32');
            __classPrivateFieldGet(this, _a, "f", _PackedByteArray__bindings).method_decode_s32 = internal.variant_get_ptr_builtin_method(29, _gde_name.opaque, 4103005248);
        }
        {
            let _gde_name = new StringName('decode_u64');
            __classPrivateFieldGet(this, _a, "f", _PackedByteArray__bindings).method_decode_u64 = internal.variant_get_ptr_builtin_method(29, _gde_name.opaque, 4103005248);
        }
        {
            let _gde_name = new StringName('decode_s64');
            __classPrivateFieldGet(this, _a, "f", _PackedByteArray__bindings).method_decode_s64 = internal.variant_get_ptr_builtin_method(29, _gde_name.opaque, 4103005248);
        }
        {
            let _gde_name = new StringName('decode_half');
            __classPrivateFieldGet(this, _a, "f", _PackedByteArray__bindings).method_decode_half = internal.variant_get_ptr_builtin_method(29, _gde_name.opaque, 1401583798);
        }
        {
            let _gde_name = new StringName('decode_float');
            __classPrivateFieldGet(this, _a, "f", _PackedByteArray__bindings).method_decode_float = internal.variant_get_ptr_builtin_method(29, _gde_name.opaque, 1401583798);
        }
        {
            let _gde_name = new StringName('decode_double');
            __classPrivateFieldGet(this, _a, "f", _PackedByteArray__bindings).method_decode_double = internal.variant_get_ptr_builtin_method(29, _gde_name.opaque, 1401583798);
        }
        {
            let _gde_name = new StringName('has_encoded_var');
            __classPrivateFieldGet(this, _a, "f", _PackedByteArray__bindings).method_has_encoded_var = internal.variant_get_ptr_builtin_method(29, _gde_name.opaque, 2914632957);
        }
        {
            let _gde_name = new StringName('decode_var');
            __classPrivateFieldGet(this, _a, "f", _PackedByteArray__bindings).method_decode_var = internal.variant_get_ptr_builtin_method(29, _gde_name.opaque, 1740420038);
        }
        {
            let _gde_name = new StringName('decode_var_size');
            __classPrivateFieldGet(this, _a, "f", _PackedByteArray__bindings).method_decode_var_size = internal.variant_get_ptr_builtin_method(29, _gde_name.opaque, 954237325);
        }
        {
            let _gde_name = new StringName('to_int32_array');
            __classPrivateFieldGet(this, _a, "f", _PackedByteArray__bindings).method_to_int32_array = internal.variant_get_ptr_builtin_method(29, _gde_name.opaque, 3158844420);
        }
        {
            let _gde_name = new StringName('to_int64_array');
            __classPrivateFieldGet(this, _a, "f", _PackedByteArray__bindings).method_to_int64_array = internal.variant_get_ptr_builtin_method(29, _gde_name.opaque, 1961294120);
        }
        {
            let _gde_name = new StringName('to_float32_array');
            __classPrivateFieldGet(this, _a, "f", _PackedByteArray__bindings).method_to_float32_array = internal.variant_get_ptr_builtin_method(29, _gde_name.opaque, 3575107827);
        }
        {
            let _gde_name = new StringName('to_float64_array');
            __classPrivateFieldGet(this, _a, "f", _PackedByteArray__bindings).method_to_float64_array = internal.variant_get_ptr_builtin_method(29, _gde_name.opaque, 1627308337);
        }
        {
            let _gde_name = new StringName('encode_u8');
            __classPrivateFieldGet(this, _a, "f", _PackedByteArray__bindings).method_encode_u8 = internal.variant_get_ptr_builtin_method(29, _gde_name.opaque, 3638975848);
        }
        {
            let _gde_name = new StringName('encode_s8');
            __classPrivateFieldGet(this, _a, "f", _PackedByteArray__bindings).method_encode_s8 = internal.variant_get_ptr_builtin_method(29, _gde_name.opaque, 3638975848);
        }
        {
            let _gde_name = new StringName('encode_u16');
            __classPrivateFieldGet(this, _a, "f", _PackedByteArray__bindings).method_encode_u16 = internal.variant_get_ptr_builtin_method(29, _gde_name.opaque, 3638975848);
        }
        {
            let _gde_name = new StringName('encode_s16');
            __classPrivateFieldGet(this, _a, "f", _PackedByteArray__bindings).method_encode_s16 = internal.variant_get_ptr_builtin_method(29, _gde_name.opaque, 3638975848);
        }
        {
            let _gde_name = new StringName('encode_u32');
            __classPrivateFieldGet(this, _a, "f", _PackedByteArray__bindings).method_encode_u32 = internal.variant_get_ptr_builtin_method(29, _gde_name.opaque, 3638975848);
        }
        {
            let _gde_name = new StringName('encode_s32');
            __classPrivateFieldGet(this, _a, "f", _PackedByteArray__bindings).method_encode_s32 = internal.variant_get_ptr_builtin_method(29, _gde_name.opaque, 3638975848);
        }
        {
            let _gde_name = new StringName('encode_u64');
            __classPrivateFieldGet(this, _a, "f", _PackedByteArray__bindings).method_encode_u64 = internal.variant_get_ptr_builtin_method(29, _gde_name.opaque, 3638975848);
        }
        {
            let _gde_name = new StringName('encode_s64');
            __classPrivateFieldGet(this, _a, "f", _PackedByteArray__bindings).method_encode_s64 = internal.variant_get_ptr_builtin_method(29, _gde_name.opaque, 3638975848);
        }
        {
            let _gde_name = new StringName('encode_half');
            __classPrivateFieldGet(this, _a, "f", _PackedByteArray__bindings).method_encode_half = internal.variant_get_ptr_builtin_method(29, _gde_name.opaque, 1113000516);
        }
        {
            let _gde_name = new StringName('encode_float');
            __classPrivateFieldGet(this, _a, "f", _PackedByteArray__bindings).method_encode_float = internal.variant_get_ptr_builtin_method(29, _gde_name.opaque, 1113000516);
        }
        {
            let _gde_name = new StringName('encode_double');
            __classPrivateFieldGet(this, _a, "f", _PackedByteArray__bindings).method_encode_double = internal.variant_get_ptr_builtin_method(29, _gde_name.opaque, 1113000516);
        }
        {
            let _gde_name = new StringName('encode_var');
            __classPrivateFieldGet(this, _a, "f", _PackedByteArray__bindings).method_encode_var = internal.variant_get_ptr_builtin_method(29, _gde_name.opaque, 2604460497);
        }
    }
    size() {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _PackedByteArray__bindings).method_size, this, 2, []);
        return ret;
    }
    is_empty() {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _PackedByteArray__bindings).method_is_empty, this, 1, []);
        return ret;
    }
    set(_index, _value) {
        _call_builtin_method_ptr_no_ret(__classPrivateFieldGet(_a, _a, "f", _PackedByteArray__bindings).method_set, this, [_index, _value]);
    }
    push_back(_value) {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _PackedByteArray__bindings).method_push_back, this, 1, [_value]);
        return ret;
    }
    append(_value) {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _PackedByteArray__bindings).method_append, this, 1, [_value]);
        return ret;
    }
    append_array(_array) {
        _call_builtin_method_ptr_no_ret(__classPrivateFieldGet(_a, _a, "f", _PackedByteArray__bindings).method_append_array, this, [_array]);
    }
    remove_at(_index) {
        _call_builtin_method_ptr_no_ret(__classPrivateFieldGet(_a, _a, "f", _PackedByteArray__bindings).method_remove_at, this, [_index]);
    }
    insert(_at_index, _value) {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _PackedByteArray__bindings).method_insert, this, 2, [_at_index, _value]);
        return ret;
    }
    fill(_value) {
        _call_builtin_method_ptr_no_ret(__classPrivateFieldGet(_a, _a, "f", _PackedByteArray__bindings).method_fill, this, [_value]);
    }
    resize(_new_size) {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _PackedByteArray__bindings).method_resize, this, 2, [_new_size]);
        return ret;
    }
    clear() {
        _call_builtin_method_ptr_no_ret(__classPrivateFieldGet(_a, _a, "f", _PackedByteArray__bindings).method_clear, this, []);
    }
    has(_value) {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _PackedByteArray__bindings).method_has, this, 1, [_value]);
        return ret;
    }
    reverse() {
        _call_builtin_method_ptr_no_ret(__classPrivateFieldGet(_a, _a, "f", _PackedByteArray__bindings).method_reverse, this, []);
    }
    slice(_begin, _end) {
        let ret = new _a();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _PackedByteArray__bindings).method_slice, this, 29, [_begin, _end]);
        return ret;
    }
    sort() {
        _call_builtin_method_ptr_no_ret(__classPrivateFieldGet(_a, _a, "f", _PackedByteArray__bindings).method_sort, this, []);
    }
    bsearch(_value, _before) {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _PackedByteArray__bindings).method_bsearch, this, 2, [_value, _before]);
        return ret;
    }
    duplicate() {
        let ret = new _a();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _PackedByteArray__bindings).method_duplicate, this, 29, []);
        return ret;
    }
    find(_value, _from) {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _PackedByteArray__bindings).method_find, this, 2, [_value, _from]);
        return ret;
    }
    rfind(_value, _from) {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _PackedByteArray__bindings).method_rfind, this, 2, [_value, _from]);
        return ret;
    }
    count(_value) {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _PackedByteArray__bindings).method_count, this, 2, [_value]);
        return ret;
    }
    get_string_from_ascii() {
        let ret = new GDString();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _PackedByteArray__bindings).method_get_string_from_ascii, this, 4, []);
        return ret;
    }
    get_string_from_utf8() {
        let ret = new GDString();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _PackedByteArray__bindings).method_get_string_from_utf8, this, 4, []);
        return ret;
    }
    get_string_from_utf16() {
        let ret = new GDString();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _PackedByteArray__bindings).method_get_string_from_utf16, this, 4, []);
        return ret;
    }
    get_string_from_utf32() {
        let ret = new GDString();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _PackedByteArray__bindings).method_get_string_from_utf32, this, 4, []);
        return ret;
    }
    get_string_from_wchar() {
        let ret = new GDString();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _PackedByteArray__bindings).method_get_string_from_wchar, this, 4, []);
        return ret;
    }
    hex_encode() {
        let ret = new GDString();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _PackedByteArray__bindings).method_hex_encode, this, 4, []);
        return ret;
    }
    compress(_compression_mode) {
        let ret = new _a();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _PackedByteArray__bindings).method_compress, this, 29, [_compression_mode]);
        return ret;
    }
    decompress(_buffer_size, _compression_mode) {
        let ret = new _a();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _PackedByteArray__bindings).method_decompress, this, 29, [_buffer_size, _compression_mode]);
        return ret;
    }
    decompress_dynamic(_max_output_size, _compression_mode) {
        let ret = new _a();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _PackedByteArray__bindings).method_decompress_dynamic, this, 29, [_max_output_size, _compression_mode]);
        return ret;
    }
    decode_u8(_byte_offset) {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _PackedByteArray__bindings).method_decode_u8, this, 2, [_byte_offset]);
        return ret;
    }
    decode_s8(_byte_offset) {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _PackedByteArray__bindings).method_decode_s8, this, 2, [_byte_offset]);
        return ret;
    }
    decode_u16(_byte_offset) {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _PackedByteArray__bindings).method_decode_u16, this, 2, [_byte_offset]);
        return ret;
    }
    decode_s16(_byte_offset) {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _PackedByteArray__bindings).method_decode_s16, this, 2, [_byte_offset]);
        return ret;
    }
    decode_u32(_byte_offset) {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _PackedByteArray__bindings).method_decode_u32, this, 2, [_byte_offset]);
        return ret;
    }
    decode_s32(_byte_offset) {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _PackedByteArray__bindings).method_decode_s32, this, 2, [_byte_offset]);
        return ret;
    }
    decode_u64(_byte_offset) {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _PackedByteArray__bindings).method_decode_u64, this, 2, [_byte_offset]);
        return ret;
    }
    decode_s64(_byte_offset) {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _PackedByteArray__bindings).method_decode_s64, this, 2, [_byte_offset]);
        return ret;
    }
    decode_half(_byte_offset) {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _PackedByteArray__bindings).method_decode_half, this, 3, [_byte_offset]);
        return ret;
    }
    decode_float(_byte_offset) {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _PackedByteArray__bindings).method_decode_float, this, 3, [_byte_offset]);
        return ret;
    }
    decode_double(_byte_offset) {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _PackedByteArray__bindings).method_decode_double, this, 3, [_byte_offset]);
        return ret;
    }
    has_encoded_var(_byte_offset, _allow_objects) {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _PackedByteArray__bindings).method_has_encoded_var, this, 1, [_byte_offset, _allow_objects]);
        return ret;
    }
    decode_var(_byte_offset, _allow_objects) {
        let ret = new Variant();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _PackedByteArray__bindings).method_decode_var, this, 39, [_byte_offset, _allow_objects]);
        return ret;
    }
    decode_var_size(_byte_offset, _allow_objects) {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _PackedByteArray__bindings).method_decode_var_size, this, 2, [_byte_offset, _allow_objects]);
        return ret;
    }
    to_int32_array() {
        let ret = new PackedInt32Array();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _PackedByteArray__bindings).method_to_int32_array, this, 30, []);
        return ret;
    }
    to_int64_array() {
        let ret = new PackedInt64Array();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _PackedByteArray__bindings).method_to_int64_array, this, 31, []);
        return ret;
    }
    to_float32_array() {
        let ret = new PackedFloat32Array();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _PackedByteArray__bindings).method_to_float32_array, this, 32, []);
        return ret;
    }
    to_float64_array() {
        let ret = new PackedFloat64Array();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _PackedByteArray__bindings).method_to_float64_array, this, 33, []);
        return ret;
    }
    encode_u8(_byte_offset, _value) {
        _call_builtin_method_ptr_no_ret(__classPrivateFieldGet(_a, _a, "f", _PackedByteArray__bindings).method_encode_u8, this, [_byte_offset, _value]);
    }
    encode_s8(_byte_offset, _value) {
        _call_builtin_method_ptr_no_ret(__classPrivateFieldGet(_a, _a, "f", _PackedByteArray__bindings).method_encode_s8, this, [_byte_offset, _value]);
    }
    encode_u16(_byte_offset, _value) {
        _call_builtin_method_ptr_no_ret(__classPrivateFieldGet(_a, _a, "f", _PackedByteArray__bindings).method_encode_u16, this, [_byte_offset, _value]);
    }
    encode_s16(_byte_offset, _value) {
        _call_builtin_method_ptr_no_ret(__classPrivateFieldGet(_a, _a, "f", _PackedByteArray__bindings).method_encode_s16, this, [_byte_offset, _value]);
    }
    encode_u32(_byte_offset, _value) {
        _call_builtin_method_ptr_no_ret(__classPrivateFieldGet(_a, _a, "f", _PackedByteArray__bindings).method_encode_u32, this, [_byte_offset, _value]);
    }
    encode_s32(_byte_offset, _value) {
        _call_builtin_method_ptr_no_ret(__classPrivateFieldGet(_a, _a, "f", _PackedByteArray__bindings).method_encode_s32, this, [_byte_offset, _value]);
    }
    encode_u64(_byte_offset, _value) {
        _call_builtin_method_ptr_no_ret(__classPrivateFieldGet(_a, _a, "f", _PackedByteArray__bindings).method_encode_u64, this, [_byte_offset, _value]);
    }
    encode_s64(_byte_offset, _value) {
        _call_builtin_method_ptr_no_ret(__classPrivateFieldGet(_a, _a, "f", _PackedByteArray__bindings).method_encode_s64, this, [_byte_offset, _value]);
    }
    encode_half(_byte_offset, _value) {
        _call_builtin_method_ptr_no_ret(__classPrivateFieldGet(_a, _a, "f", _PackedByteArray__bindings).method_encode_half, this, [_byte_offset, _value]);
    }
    encode_float(_byte_offset, _value) {
        _call_builtin_method_ptr_no_ret(__classPrivateFieldGet(_a, _a, "f", _PackedByteArray__bindings).method_encode_float, this, [_byte_offset, _value]);
    }
    encode_double(_byte_offset, _value) {
        _call_builtin_method_ptr_no_ret(__classPrivateFieldGet(_a, _a, "f", _PackedByteArray__bindings).method_encode_double, this, [_byte_offset, _value]);
    }
    encode_var(_byte_offset, _value, _allow_objects) {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _PackedByteArray__bindings).method_encode_var, this, 2, [_byte_offset, _value, _allow_objects]);
        return ret;
    }
}
_a = PackedByteArray;
_PackedByteArray_SIZE = { value: 16 };
_PackedByteArray__bindings = { value: new _MethodBindings() };
_PackedByteArray_initialized = { value: false };
(() => {
    _a._init_bindings();
})();
