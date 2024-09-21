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
var _a, _PackedFloat64Array_SIZE, _PackedFloat64Array__bindings, _PackedFloat64Array_initialized;
import * as internal from '__internal__';
import { _call_builtin_constructor, _call_builtin_method_ptr_ret, _call_builtin_method_ptr_no_ret, _call_builtin_method_ptr_obj_ret, } from '@js_godot/core/builtin_ptrcall';
import { PackedByteArray } from '@js_godot/variant/packed_byte_array';
import { GDArray } from '@js_godot/variant/gd_array';
import { StringName } from '@js_godot/variant/string_name';
import { GodotObject } from "@js_godot/classes/godot_object";
class _MethodBindings {
}
export class PackedFloat64Array {
    constructor(value) {
        this.opaque = new Uint8Array(__classPrivateFieldGet(_a, _a, "f", _PackedFloat64Array_SIZE));
        if (!value) {
            _call_builtin_constructor(__classPrivateFieldGet(_a, _a, "f", _PackedFloat64Array__bindings).constructor_0, this);
        }
        else if (arguments.length == 1 && arguments[0] instanceof _a) {
            let from = arguments[0];
            _call_builtin_constructor(__classPrivateFieldGet(_a, _a, "f", _PackedFloat64Array__bindings).constructor_1, this, [
                from
            ]);
        }
        else if (arguments.length == 1 && arguments[0] instanceof GDArray) {
            let from = arguments[0];
            _call_builtin_constructor(__classPrivateFieldGet(_a, _a, "f", _PackedFloat64Array__bindings).constructor_2, this, [
                from
            ]);
        }
        else if (value.constructor.name === "Variant") {
            __classPrivateFieldGet(_a, _a, "f", _PackedFloat64Array__bindings).from_variant_constructor(this.opaque, value.opaque);
        }
        else if (value instanceof Uint8Array) {
            this.opaque = value;
        }
    }
    static __init_bindings_constructors_destructor() {
        __classPrivateFieldGet(this, _a, "f", _PackedFloat64Array__bindings).from_variant_constructor = internal.get_variant_to_type_constructor(33);
        __classPrivateFieldGet(this, _a, "f", _PackedFloat64Array__bindings).constructor_0 = internal.variant_get_ptr_constructor(33, 0);
        __classPrivateFieldGet(this, _a, "f", _PackedFloat64Array__bindings).constructor_1 = internal.variant_get_ptr_constructor(33, 1);
        __classPrivateFieldGet(this, _a, "f", _PackedFloat64Array__bindings).constructor_2 = internal.variant_get_ptr_constructor(33, 2);
        __classPrivateFieldGet(this, _a, "f", _PackedFloat64Array__bindings).destructor = internal.variant_get_ptr_destructor(33);
    }
    static async _init_bindings() {
        if (__classPrivateFieldGet(this, _a, "f", _PackedFloat64Array_initialized)) {
            return;
        }
        __classPrivateFieldSet(this, _a, true, "f", _PackedFloat64Array_initialized);
        this.__init_bindings_constructors_destructor();
        {
            let _gde_name = new StringName('size');
            __classPrivateFieldGet(this, _a, "f", _PackedFloat64Array__bindings).method_size = internal.variant_get_ptr_builtin_method(33, _gde_name.opaque, 3173160232);
        }
        {
            let _gde_name = new StringName('is_empty');
            __classPrivateFieldGet(this, _a, "f", _PackedFloat64Array__bindings).method_is_empty = internal.variant_get_ptr_builtin_method(33, _gde_name.opaque, 3918633141);
        }
        {
            let _gde_name = new StringName('set');
            __classPrivateFieldGet(this, _a, "f", _PackedFloat64Array__bindings).method_set = internal.variant_get_ptr_builtin_method(33, _gde_name.opaque, 1113000516);
        }
        {
            let _gde_name = new StringName('push_back');
            __classPrivateFieldGet(this, _a, "f", _PackedFloat64Array__bindings).method_push_back = internal.variant_get_ptr_builtin_method(33, _gde_name.opaque, 4094791666);
        }
        {
            let _gde_name = new StringName('append');
            __classPrivateFieldGet(this, _a, "f", _PackedFloat64Array__bindings).method_append = internal.variant_get_ptr_builtin_method(33, _gde_name.opaque, 4094791666);
        }
        {
            let _gde_name = new StringName('append_array');
            __classPrivateFieldGet(this, _a, "f", _PackedFloat64Array__bindings).method_append_array = internal.variant_get_ptr_builtin_method(33, _gde_name.opaque, 792078629);
        }
        {
            let _gde_name = new StringName('remove_at');
            __classPrivateFieldGet(this, _a, "f", _PackedFloat64Array__bindings).method_remove_at = internal.variant_get_ptr_builtin_method(33, _gde_name.opaque, 2823966027);
        }
        {
            let _gde_name = new StringName('insert');
            __classPrivateFieldGet(this, _a, "f", _PackedFloat64Array__bindings).method_insert = internal.variant_get_ptr_builtin_method(33, _gde_name.opaque, 1379903876);
        }
        {
            let _gde_name = new StringName('fill');
            __classPrivateFieldGet(this, _a, "f", _PackedFloat64Array__bindings).method_fill = internal.variant_get_ptr_builtin_method(33, _gde_name.opaque, 833936903);
        }
        {
            let _gde_name = new StringName('resize');
            __classPrivateFieldGet(this, _a, "f", _PackedFloat64Array__bindings).method_resize = internal.variant_get_ptr_builtin_method(33, _gde_name.opaque, 848867239);
        }
        {
            let _gde_name = new StringName('clear');
            __classPrivateFieldGet(this, _a, "f", _PackedFloat64Array__bindings).method_clear = internal.variant_get_ptr_builtin_method(33, _gde_name.opaque, 3218959716);
        }
        {
            let _gde_name = new StringName('has');
            __classPrivateFieldGet(this, _a, "f", _PackedFloat64Array__bindings).method_has = internal.variant_get_ptr_builtin_method(33, _gde_name.opaque, 1296369134);
        }
        {
            let _gde_name = new StringName('reverse');
            __classPrivateFieldGet(this, _a, "f", _PackedFloat64Array__bindings).method_reverse = internal.variant_get_ptr_builtin_method(33, _gde_name.opaque, 3218959716);
        }
        {
            let _gde_name = new StringName('slice');
            __classPrivateFieldGet(this, _a, "f", _PackedFloat64Array__bindings).method_slice = internal.variant_get_ptr_builtin_method(33, _gde_name.opaque, 2192974324);
        }
        {
            let _gde_name = new StringName('to_byte_array');
            __classPrivateFieldGet(this, _a, "f", _PackedFloat64Array__bindings).method_to_byte_array = internal.variant_get_ptr_builtin_method(33, _gde_name.opaque, 247621236);
        }
        {
            let _gde_name = new StringName('sort');
            __classPrivateFieldGet(this, _a, "f", _PackedFloat64Array__bindings).method_sort = internal.variant_get_ptr_builtin_method(33, _gde_name.opaque, 3218959716);
        }
        {
            let _gde_name = new StringName('bsearch');
            __classPrivateFieldGet(this, _a, "f", _PackedFloat64Array__bindings).method_bsearch = internal.variant_get_ptr_builtin_method(33, _gde_name.opaque, 1188816338);
        }
        {
            let _gde_name = new StringName('duplicate');
            __classPrivateFieldGet(this, _a, "f", _PackedFloat64Array__bindings).method_duplicate = internal.variant_get_ptr_builtin_method(33, _gde_name.opaque, 949266573);
        }
        {
            let _gde_name = new StringName('find');
            __classPrivateFieldGet(this, _a, "f", _PackedFloat64Array__bindings).method_find = internal.variant_get_ptr_builtin_method(33, _gde_name.opaque, 1343150241);
        }
        {
            let _gde_name = new StringName('rfind');
            __classPrivateFieldGet(this, _a, "f", _PackedFloat64Array__bindings).method_rfind = internal.variant_get_ptr_builtin_method(33, _gde_name.opaque, 1343150241);
        }
        {
            let _gde_name = new StringName('count');
            __classPrivateFieldGet(this, _a, "f", _PackedFloat64Array__bindings).method_count = internal.variant_get_ptr_builtin_method(33, _gde_name.opaque, 2859915090);
        }
    }
    size() {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _PackedFloat64Array__bindings).method_size, this, 2, []);
        return ret;
    }
    is_empty() {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _PackedFloat64Array__bindings).method_is_empty, this, 1, []);
        return ret;
    }
    set(_index, _value) {
        _call_builtin_method_ptr_no_ret(__classPrivateFieldGet(_a, _a, "f", _PackedFloat64Array__bindings).method_set, this, [_index, _value]);
    }
    push_back(_value) {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _PackedFloat64Array__bindings).method_push_back, this, 1, [_value]);
        return ret;
    }
    append(_value) {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _PackedFloat64Array__bindings).method_append, this, 1, [_value]);
        return ret;
    }
    append_array(_array) {
        _call_builtin_method_ptr_no_ret(__classPrivateFieldGet(_a, _a, "f", _PackedFloat64Array__bindings).method_append_array, this, [_array]);
    }
    remove_at(_index) {
        _call_builtin_method_ptr_no_ret(__classPrivateFieldGet(_a, _a, "f", _PackedFloat64Array__bindings).method_remove_at, this, [_index]);
    }
    insert(_at_index, _value) {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _PackedFloat64Array__bindings).method_insert, this, 2, [_at_index, _value]);
        return ret;
    }
    fill(_value) {
        _call_builtin_method_ptr_no_ret(__classPrivateFieldGet(_a, _a, "f", _PackedFloat64Array__bindings).method_fill, this, [_value]);
    }
    resize(_new_size) {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _PackedFloat64Array__bindings).method_resize, this, 2, [_new_size]);
        return ret;
    }
    clear() {
        _call_builtin_method_ptr_no_ret(__classPrivateFieldGet(_a, _a, "f", _PackedFloat64Array__bindings).method_clear, this, []);
    }
    has(_value) {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _PackedFloat64Array__bindings).method_has, this, 1, [_value]);
        return ret;
    }
    reverse() {
        _call_builtin_method_ptr_no_ret(__classPrivateFieldGet(_a, _a, "f", _PackedFloat64Array__bindings).method_reverse, this, []);
    }
    slice(_begin, _end) {
        let ret = new _a();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _PackedFloat64Array__bindings).method_slice, this, 33, [_begin, _end]);
        return ret;
    }
    to_byte_array() {
        let ret = new PackedByteArray();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _PackedFloat64Array__bindings).method_to_byte_array, this, 29, []);
        return ret;
    }
    sort() {
        _call_builtin_method_ptr_no_ret(__classPrivateFieldGet(_a, _a, "f", _PackedFloat64Array__bindings).method_sort, this, []);
    }
    bsearch(_value, _before) {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _PackedFloat64Array__bindings).method_bsearch, this, 2, [_value, _before]);
        return ret;
    }
    duplicate() {
        let ret = new _a();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _PackedFloat64Array__bindings).method_duplicate, this, 33, []);
        return ret;
    }
    find(_value, _from) {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _PackedFloat64Array__bindings).method_find, this, 2, [_value, _from]);
        return ret;
    }
    rfind(_value, _from) {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _PackedFloat64Array__bindings).method_rfind, this, 2, [_value, _from]);
        return ret;
    }
    count(_value) {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _PackedFloat64Array__bindings).method_count, this, 2, [_value]);
        return ret;
    }
}
_a = PackedFloat64Array;
_PackedFloat64Array_SIZE = { value: 16 };
_PackedFloat64Array__bindings = { value: new _MethodBindings() };
_PackedFloat64Array_initialized = { value: false };
(() => {
    _a._init_bindings();
})();
