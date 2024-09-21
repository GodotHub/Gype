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
var _a, _Dictionary_SIZE, _Dictionary__bindings, _Dictionary_initialized;
import * as internal from '__internal__';
import { _call_builtin_constructor, _call_builtin_method_ptr_ret, _call_builtin_method_ptr_no_ret, _call_builtin_method_ptr_obj_ret, } from '@js_godot/core/builtin_ptrcall';
import { StringName } from '@js_godot/variant/string_name';
import { Variant } from '@js_godot/variant/variant';
import { GDArray } from '@js_godot/variant/gd_array';
import { GodotObject } from "@js_godot/classes/godot_object";
class _MethodBindings {
}
export class Dictionary {
    constructor(value) {
        this.opaque = new Uint8Array(__classPrivateFieldGet(_a, _a, "f", _Dictionary_SIZE));
        if (!value) {
            _call_builtin_constructor(__classPrivateFieldGet(_a, _a, "f", _Dictionary__bindings).constructor_0, this);
        }
        else if (arguments.length == 1 && arguments[0] instanceof _a) {
            let from = arguments[0];
            _call_builtin_constructor(__classPrivateFieldGet(_a, _a, "f", _Dictionary__bindings).constructor_1, this, [
                from
            ]);
        }
        else if (value.constructor.name === "Variant") {
            __classPrivateFieldGet(_a, _a, "f", _Dictionary__bindings).from_variant_constructor(this.opaque, value.opaque);
        }
        else if (value instanceof Uint8Array) {
            this.opaque = value;
        }
    }
    static __init_bindings_constructors_destructor() {
        __classPrivateFieldGet(this, _a, "f", _Dictionary__bindings).from_variant_constructor = internal.get_variant_to_type_constructor(27);
        __classPrivateFieldGet(this, _a, "f", _Dictionary__bindings).constructor_0 = internal.variant_get_ptr_constructor(27, 0);
        __classPrivateFieldGet(this, _a, "f", _Dictionary__bindings).constructor_1 = internal.variant_get_ptr_constructor(27, 1);
        __classPrivateFieldGet(this, _a, "f", _Dictionary__bindings).destructor = internal.variant_get_ptr_destructor(27);
    }
    static async _init_bindings() {
        if (__classPrivateFieldGet(this, _a, "f", _Dictionary_initialized)) {
            return;
        }
        __classPrivateFieldSet(this, _a, true, "f", _Dictionary_initialized);
        this.__init_bindings_constructors_destructor();
        {
            let _gde_name = new StringName('size');
            __classPrivateFieldGet(this, _a, "f", _Dictionary__bindings).method_size = internal.variant_get_ptr_builtin_method(27, _gde_name.opaque, 3173160232);
        }
        {
            let _gde_name = new StringName('is_empty');
            __classPrivateFieldGet(this, _a, "f", _Dictionary__bindings).method_is_empty = internal.variant_get_ptr_builtin_method(27, _gde_name.opaque, 3918633141);
        }
        {
            let _gde_name = new StringName('clear');
            __classPrivateFieldGet(this, _a, "f", _Dictionary__bindings).method_clear = internal.variant_get_ptr_builtin_method(27, _gde_name.opaque, 3218959716);
        }
        {
            let _gde_name = new StringName('merge');
            __classPrivateFieldGet(this, _a, "f", _Dictionary__bindings).method_merge = internal.variant_get_ptr_builtin_method(27, _gde_name.opaque, 2079548978);
        }
        {
            let _gde_name = new StringName('merged');
            __classPrivateFieldGet(this, _a, "f", _Dictionary__bindings).method_merged = internal.variant_get_ptr_builtin_method(27, _gde_name.opaque, 2271165639);
        }
        {
            let _gde_name = new StringName('has');
            __classPrivateFieldGet(this, _a, "f", _Dictionary__bindings).method_has = internal.variant_get_ptr_builtin_method(27, _gde_name.opaque, 3680194679);
        }
        {
            let _gde_name = new StringName('has_all');
            __classPrivateFieldGet(this, _a, "f", _Dictionary__bindings).method_has_all = internal.variant_get_ptr_builtin_method(27, _gde_name.opaque, 2988181878);
        }
        {
            let _gde_name = new StringName('find_key');
            __classPrivateFieldGet(this, _a, "f", _Dictionary__bindings).method_find_key = internal.variant_get_ptr_builtin_method(27, _gde_name.opaque, 1988825835);
        }
        {
            let _gde_name = new StringName('erase');
            __classPrivateFieldGet(this, _a, "f", _Dictionary__bindings).method_erase = internal.variant_get_ptr_builtin_method(27, _gde_name.opaque, 1776646889);
        }
        {
            let _gde_name = new StringName('hash');
            __classPrivateFieldGet(this, _a, "f", _Dictionary__bindings).method_hash = internal.variant_get_ptr_builtin_method(27, _gde_name.opaque, 3173160232);
        }
        {
            let _gde_name = new StringName('keys');
            __classPrivateFieldGet(this, _a, "f", _Dictionary__bindings).method_keys = internal.variant_get_ptr_builtin_method(27, _gde_name.opaque, 4144163970);
        }
        {
            let _gde_name = new StringName('values');
            __classPrivateFieldGet(this, _a, "f", _Dictionary__bindings).method_values = internal.variant_get_ptr_builtin_method(27, _gde_name.opaque, 4144163970);
        }
        {
            let _gde_name = new StringName('duplicate');
            __classPrivateFieldGet(this, _a, "f", _Dictionary__bindings).method_duplicate = internal.variant_get_ptr_builtin_method(27, _gde_name.opaque, 830099069);
        }
        {
            let _gde_name = new StringName('get');
            __classPrivateFieldGet(this, _a, "f", _Dictionary__bindings).method_get = internal.variant_get_ptr_builtin_method(27, _gde_name.opaque, 2205440559);
        }
        {
            let _gde_name = new StringName('get_or_add');
            __classPrivateFieldGet(this, _a, "f", _Dictionary__bindings).method_get_or_add = internal.variant_get_ptr_builtin_method(27, _gde_name.opaque, 1052551076);
        }
        {
            let _gde_name = new StringName('make_read_only');
            __classPrivateFieldGet(this, _a, "f", _Dictionary__bindings).method_make_read_only = internal.variant_get_ptr_builtin_method(27, _gde_name.opaque, 3218959716);
        }
        {
            let _gde_name = new StringName('is_read_only');
            __classPrivateFieldGet(this, _a, "f", _Dictionary__bindings).method_is_read_only = internal.variant_get_ptr_builtin_method(27, _gde_name.opaque, 3918633141);
        }
        {
            let _gde_name = new StringName('recursive_equal');
            __classPrivateFieldGet(this, _a, "f", _Dictionary__bindings).method_recursive_equal = internal.variant_get_ptr_builtin_method(27, _gde_name.opaque, 1404404751);
        }
    }
    size() {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Dictionary__bindings).method_size, this, 2, []);
        return ret;
    }
    is_empty() {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Dictionary__bindings).method_is_empty, this, 1, []);
        return ret;
    }
    clear() {
        _call_builtin_method_ptr_no_ret(__classPrivateFieldGet(_a, _a, "f", _Dictionary__bindings).method_clear, this, []);
    }
    merge(_dictionary, _overwrite) {
        _call_builtin_method_ptr_no_ret(__classPrivateFieldGet(_a, _a, "f", _Dictionary__bindings).method_merge, this, [_dictionary, _overwrite]);
    }
    merged(_dictionary, _overwrite) {
        let ret = new _a();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Dictionary__bindings).method_merged, this, 27, [_dictionary, _overwrite]);
        return ret;
    }
    has(_key) {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Dictionary__bindings).method_has, this, 1, [_key]);
        return ret;
    }
    has_all(_keys) {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Dictionary__bindings).method_has_all, this, 1, [_keys]);
        return ret;
    }
    find_key(_value) {
        let ret = new Variant();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Dictionary__bindings).method_find_key, this, 39, [_value]);
        return ret;
    }
    erase(_key) {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Dictionary__bindings).method_erase, this, 1, [_key]);
        return ret;
    }
    hash() {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Dictionary__bindings).method_hash, this, 2, []);
        return ret;
    }
    keys() {
        let ret = new GDArray();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Dictionary__bindings).method_keys, this, 28, []);
        return ret;
    }
    values() {
        let ret = new GDArray();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Dictionary__bindings).method_values, this, 28, []);
        return ret;
    }
    duplicate(_deep) {
        let ret = new _a();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Dictionary__bindings).method_duplicate, this, 27, [_deep]);
        return ret;
    }
    get(_key, _default) {
        let ret = new Variant();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Dictionary__bindings).method_get, this, 39, [_key, _default]);
        return ret;
    }
    get_or_add(_key, _default) {
        let ret = new Variant();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Dictionary__bindings).method_get_or_add, this, 39, [_key, _default]);
        return ret;
    }
    make_read_only() {
        _call_builtin_method_ptr_no_ret(__classPrivateFieldGet(_a, _a, "f", _Dictionary__bindings).method_make_read_only, this, []);
    }
    is_read_only() {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Dictionary__bindings).method_is_read_only, this, 1, []);
        return ret;
    }
    recursive_equal(_dictionary, _recursion_count) {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Dictionary__bindings).method_recursive_equal, this, 1, [_dictionary, _recursion_count]);
        return ret;
    }
}
_a = Dictionary;
_Dictionary_SIZE = { value: 8 };
_Dictionary__bindings = { value: new _MethodBindings() };
_Dictionary_initialized = { value: false };
(() => {
    _a._init_bindings();
})();
