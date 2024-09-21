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
var _a, _GDArray_SIZE, _GDArray__bindings, _GDArray_initialized;
import * as internal from '__internal__';
import { _call_builtin_constructor, _call_builtin_method_ptr_ret, _call_builtin_method_ptr_no_ret, _call_builtin_method_ptr_obj_ret, } from '@js_godot/core/builtin_ptrcall';
import { Callable } from '@js_godot/variant/callable';
import { PackedFloat32Array } from '@js_godot/variant/packed_float32_array';
import { PackedVector3Array } from '@js_godot/variant/packed_vector3_array';
import { PackedVector2Array } from '@js_godot/variant/packed_vector2_array';
import { PackedColorArray } from '@js_godot/variant/packed_color_array';
import { StringName } from '@js_godot/variant/string_name';
import { PackedFloat64Array } from '@js_godot/variant/packed_float64_array';
import { PackedByteArray } from '@js_godot/variant/packed_byte_array';
import { Variant } from '@js_godot/variant/variant';
import { PackedVector4Array } from '@js_godot/variant/packed_vector4_array';
import { PackedStringArray } from '@js_godot/variant/packed_string_array';
import { PackedInt32Array } from '@js_godot/variant/packed_int32_array';
import { PackedInt64Array } from '@js_godot/variant/packed_int64_array';
import { GodotObject } from "@js_godot/classes/godot_object";
class _MethodBindings {
}
export class GDArray {
    constructor(value) {
        this.opaque = new Uint8Array(__classPrivateFieldGet(_a, _a, "f", _GDArray_SIZE));
        if (!value) {
            _call_builtin_constructor(__classPrivateFieldGet(_a, _a, "f", _GDArray__bindings).constructor_0, this);
        }
        else if (arguments.length == 1 && arguments[0] instanceof _a) {
            let from = arguments[0];
            _call_builtin_constructor(__classPrivateFieldGet(_a, _a, "f", _GDArray__bindings).constructor_1, this, [
                from
            ]);
        }
        else if (arguments.length == 4 && arguments[0] instanceof _a && typeof arguments[1] == "number" && arguments[2] instanceof StringName && arguments[3] instanceof Variant) {
            let base = arguments[0];
            let type = arguments[1];
            let class_name = arguments[2];
            let script = arguments[3];
            _call_builtin_constructor(__classPrivateFieldGet(_a, _a, "f", _GDArray__bindings).constructor_2, this, [
                base, type, class_name, script
            ]);
        }
        else if (arguments.length == 1 && arguments[0] instanceof PackedByteArray) {
            let from = arguments[0];
            _call_builtin_constructor(__classPrivateFieldGet(_a, _a, "f", _GDArray__bindings).constructor_3, this, [
                from
            ]);
        }
        else if (arguments.length == 1 && arguments[0] instanceof PackedInt32Array) {
            let from = arguments[0];
            _call_builtin_constructor(__classPrivateFieldGet(_a, _a, "f", _GDArray__bindings).constructor_4, this, [
                from
            ]);
        }
        else if (arguments.length == 1 && arguments[0] instanceof PackedInt64Array) {
            let from = arguments[0];
            _call_builtin_constructor(__classPrivateFieldGet(_a, _a, "f", _GDArray__bindings).constructor_5, this, [
                from
            ]);
        }
        else if (arguments.length == 1 && arguments[0] instanceof PackedFloat32Array) {
            let from = arguments[0];
            _call_builtin_constructor(__classPrivateFieldGet(_a, _a, "f", _GDArray__bindings).constructor_6, this, [
                from
            ]);
        }
        else if (arguments.length == 1 && arguments[0] instanceof PackedFloat64Array) {
            let from = arguments[0];
            _call_builtin_constructor(__classPrivateFieldGet(_a, _a, "f", _GDArray__bindings).constructor_7, this, [
                from
            ]);
        }
        else if (arguments.length == 1 && arguments[0] instanceof PackedStringArray) {
            let from = arguments[0];
            _call_builtin_constructor(__classPrivateFieldGet(_a, _a, "f", _GDArray__bindings).constructor_8, this, [
                from
            ]);
        }
        else if (arguments.length == 1 && arguments[0] instanceof PackedVector2Array) {
            let from = arguments[0];
            _call_builtin_constructor(__classPrivateFieldGet(_a, _a, "f", _GDArray__bindings).constructor_9, this, [
                from
            ]);
        }
        else if (arguments.length == 1 && arguments[0] instanceof PackedVector3Array) {
            let from = arguments[0];
            _call_builtin_constructor(__classPrivateFieldGet(_a, _a, "f", _GDArray__bindings).constructor_10, this, [
                from
            ]);
        }
        else if (arguments.length == 1 && arguments[0] instanceof PackedColorArray) {
            let from = arguments[0];
            _call_builtin_constructor(__classPrivateFieldGet(_a, _a, "f", _GDArray__bindings).constructor_11, this, [
                from
            ]);
        }
        else if (arguments.length == 1 && arguments[0] instanceof PackedVector4Array) {
            let from = arguments[0];
            _call_builtin_constructor(__classPrivateFieldGet(_a, _a, "f", _GDArray__bindings).constructor_12, this, [
                from
            ]);
        }
        else if (value.constructor.name === "Variant") {
            __classPrivateFieldGet(_a, _a, "f", _GDArray__bindings).from_variant_constructor(this.opaque, value.opaque);
        }
        else if (value instanceof Uint8Array) {
            this.opaque = value;
        }
        else if (value instanceof Array) {
            for (let i = 0; i < value.length; i++) {
                this.append(value[i]);
            }
        }
    }
    static __init_bindings_constructors_destructor() {
        __classPrivateFieldGet(this, _a, "f", _GDArray__bindings).from_variant_constructor = internal.get_variant_to_type_constructor(28);
        __classPrivateFieldGet(this, _a, "f", _GDArray__bindings).constructor_0 = internal.variant_get_ptr_constructor(28, 0);
        __classPrivateFieldGet(this, _a, "f", _GDArray__bindings).constructor_1 = internal.variant_get_ptr_constructor(28, 1);
        __classPrivateFieldGet(this, _a, "f", _GDArray__bindings).constructor_2 = internal.variant_get_ptr_constructor(28, 2);
        __classPrivateFieldGet(this, _a, "f", _GDArray__bindings).constructor_3 = internal.variant_get_ptr_constructor(28, 3);
        __classPrivateFieldGet(this, _a, "f", _GDArray__bindings).constructor_4 = internal.variant_get_ptr_constructor(28, 4);
        __classPrivateFieldGet(this, _a, "f", _GDArray__bindings).constructor_5 = internal.variant_get_ptr_constructor(28, 5);
        __classPrivateFieldGet(this, _a, "f", _GDArray__bindings).constructor_6 = internal.variant_get_ptr_constructor(28, 6);
        __classPrivateFieldGet(this, _a, "f", _GDArray__bindings).constructor_7 = internal.variant_get_ptr_constructor(28, 7);
        __classPrivateFieldGet(this, _a, "f", _GDArray__bindings).constructor_8 = internal.variant_get_ptr_constructor(28, 8);
        __classPrivateFieldGet(this, _a, "f", _GDArray__bindings).constructor_9 = internal.variant_get_ptr_constructor(28, 9);
        __classPrivateFieldGet(this, _a, "f", _GDArray__bindings).constructor_10 = internal.variant_get_ptr_constructor(28, 10);
        __classPrivateFieldGet(this, _a, "f", _GDArray__bindings).constructor_11 = internal.variant_get_ptr_constructor(28, 11);
        __classPrivateFieldGet(this, _a, "f", _GDArray__bindings).constructor_12 = internal.variant_get_ptr_constructor(28, 12);
        __classPrivateFieldGet(this, _a, "f", _GDArray__bindings).destructor = internal.variant_get_ptr_destructor(28);
    }
    static async _init_bindings() {
        if (__classPrivateFieldGet(this, _a, "f", _GDArray_initialized)) {
            return;
        }
        __classPrivateFieldSet(this, _a, true, "f", _GDArray_initialized);
        this.__init_bindings_constructors_destructor();
        {
            let _gde_name = new StringName('size');
            __classPrivateFieldGet(this, _a, "f", _GDArray__bindings).method_size = internal.variant_get_ptr_builtin_method(28, _gde_name.opaque, 3173160232);
        }
        {
            let _gde_name = new StringName('is_empty');
            __classPrivateFieldGet(this, _a, "f", _GDArray__bindings).method_is_empty = internal.variant_get_ptr_builtin_method(28, _gde_name.opaque, 3918633141);
        }
        {
            let _gde_name = new StringName('clear');
            __classPrivateFieldGet(this, _a, "f", _GDArray__bindings).method_clear = internal.variant_get_ptr_builtin_method(28, _gde_name.opaque, 3218959716);
        }
        {
            let _gde_name = new StringName('hash');
            __classPrivateFieldGet(this, _a, "f", _GDArray__bindings).method_hash = internal.variant_get_ptr_builtin_method(28, _gde_name.opaque, 3173160232);
        }
        {
            let _gde_name = new StringName('assign');
            __classPrivateFieldGet(this, _a, "f", _GDArray__bindings).method_assign = internal.variant_get_ptr_builtin_method(28, _gde_name.opaque, 2307260970);
        }
        {
            let _gde_name = new StringName('push_back');
            __classPrivateFieldGet(this, _a, "f", _GDArray__bindings).method_push_back = internal.variant_get_ptr_builtin_method(28, _gde_name.opaque, 3316032543);
        }
        {
            let _gde_name = new StringName('push_front');
            __classPrivateFieldGet(this, _a, "f", _GDArray__bindings).method_push_front = internal.variant_get_ptr_builtin_method(28, _gde_name.opaque, 3316032543);
        }
        {
            let _gde_name = new StringName('append');
            __classPrivateFieldGet(this, _a, "f", _GDArray__bindings).method_append = internal.variant_get_ptr_builtin_method(28, _gde_name.opaque, 3316032543);
        }
        {
            let _gde_name = new StringName('append_array');
            __classPrivateFieldGet(this, _a, "f", _GDArray__bindings).method_append_array = internal.variant_get_ptr_builtin_method(28, _gde_name.opaque, 2307260970);
        }
        {
            let _gde_name = new StringName('resize');
            __classPrivateFieldGet(this, _a, "f", _GDArray__bindings).method_resize = internal.variant_get_ptr_builtin_method(28, _gde_name.opaque, 848867239);
        }
        {
            let _gde_name = new StringName('insert');
            __classPrivateFieldGet(this, _a, "f", _GDArray__bindings).method_insert = internal.variant_get_ptr_builtin_method(28, _gde_name.opaque, 3176316662);
        }
        {
            let _gde_name = new StringName('remove_at');
            __classPrivateFieldGet(this, _a, "f", _GDArray__bindings).method_remove_at = internal.variant_get_ptr_builtin_method(28, _gde_name.opaque, 2823966027);
        }
        {
            let _gde_name = new StringName('fill');
            __classPrivateFieldGet(this, _a, "f", _GDArray__bindings).method_fill = internal.variant_get_ptr_builtin_method(28, _gde_name.opaque, 3316032543);
        }
        {
            let _gde_name = new StringName('erase');
            __classPrivateFieldGet(this, _a, "f", _GDArray__bindings).method_erase = internal.variant_get_ptr_builtin_method(28, _gde_name.opaque, 3316032543);
        }
        {
            let _gde_name = new StringName('front');
            __classPrivateFieldGet(this, _a, "f", _GDArray__bindings).method_front = internal.variant_get_ptr_builtin_method(28, _gde_name.opaque, 1460142086);
        }
        {
            let _gde_name = new StringName('back');
            __classPrivateFieldGet(this, _a, "f", _GDArray__bindings).method_back = internal.variant_get_ptr_builtin_method(28, _gde_name.opaque, 1460142086);
        }
        {
            let _gde_name = new StringName('pick_random');
            __classPrivateFieldGet(this, _a, "f", _GDArray__bindings).method_pick_random = internal.variant_get_ptr_builtin_method(28, _gde_name.opaque, 1460142086);
        }
        {
            let _gde_name = new StringName('find');
            __classPrivateFieldGet(this, _a, "f", _GDArray__bindings).method_find = internal.variant_get_ptr_builtin_method(28, _gde_name.opaque, 2336346817);
        }
        {
            let _gde_name = new StringName('rfind');
            __classPrivateFieldGet(this, _a, "f", _GDArray__bindings).method_rfind = internal.variant_get_ptr_builtin_method(28, _gde_name.opaque, 2336346817);
        }
        {
            let _gde_name = new StringName('count');
            __classPrivateFieldGet(this, _a, "f", _GDArray__bindings).method_count = internal.variant_get_ptr_builtin_method(28, _gde_name.opaque, 1481661226);
        }
        {
            let _gde_name = new StringName('has');
            __classPrivateFieldGet(this, _a, "f", _GDArray__bindings).method_has = internal.variant_get_ptr_builtin_method(28, _gde_name.opaque, 3680194679);
        }
        {
            let _gde_name = new StringName('pop_back');
            __classPrivateFieldGet(this, _a, "f", _GDArray__bindings).method_pop_back = internal.variant_get_ptr_builtin_method(28, _gde_name.opaque, 1321915136);
        }
        {
            let _gde_name = new StringName('pop_front');
            __classPrivateFieldGet(this, _a, "f", _GDArray__bindings).method_pop_front = internal.variant_get_ptr_builtin_method(28, _gde_name.opaque, 1321915136);
        }
        {
            let _gde_name = new StringName('pop_at');
            __classPrivateFieldGet(this, _a, "f", _GDArray__bindings).method_pop_at = internal.variant_get_ptr_builtin_method(28, _gde_name.opaque, 3518259424);
        }
        {
            let _gde_name = new StringName('sort');
            __classPrivateFieldGet(this, _a, "f", _GDArray__bindings).method_sort = internal.variant_get_ptr_builtin_method(28, _gde_name.opaque, 3218959716);
        }
        {
            let _gde_name = new StringName('sort_custom');
            __classPrivateFieldGet(this, _a, "f", _GDArray__bindings).method_sort_custom = internal.variant_get_ptr_builtin_method(28, _gde_name.opaque, 3470848906);
        }
        {
            let _gde_name = new StringName('shuffle');
            __classPrivateFieldGet(this, _a, "f", _GDArray__bindings).method_shuffle = internal.variant_get_ptr_builtin_method(28, _gde_name.opaque, 3218959716);
        }
        {
            let _gde_name = new StringName('bsearch');
            __classPrivateFieldGet(this, _a, "f", _GDArray__bindings).method_bsearch = internal.variant_get_ptr_builtin_method(28, _gde_name.opaque, 3372222236);
        }
        {
            let _gde_name = new StringName('bsearch_custom');
            __classPrivateFieldGet(this, _a, "f", _GDArray__bindings).method_bsearch_custom = internal.variant_get_ptr_builtin_method(28, _gde_name.opaque, 161317131);
        }
        {
            let _gde_name = new StringName('reverse');
            __classPrivateFieldGet(this, _a, "f", _GDArray__bindings).method_reverse = internal.variant_get_ptr_builtin_method(28, _gde_name.opaque, 3218959716);
        }
        {
            let _gde_name = new StringName('duplicate');
            __classPrivateFieldGet(this, _a, "f", _GDArray__bindings).method_duplicate = internal.variant_get_ptr_builtin_method(28, _gde_name.opaque, 636440122);
        }
        {
            let _gde_name = new StringName('slice');
            __classPrivateFieldGet(this, _a, "f", _GDArray__bindings).method_slice = internal.variant_get_ptr_builtin_method(28, _gde_name.opaque, 1393718243);
        }
        {
            let _gde_name = new StringName('filter');
            __classPrivateFieldGet(this, _a, "f", _GDArray__bindings).method_filter = internal.variant_get_ptr_builtin_method(28, _gde_name.opaque, 4075186556);
        }
        {
            let _gde_name = new StringName('map');
            __classPrivateFieldGet(this, _a, "f", _GDArray__bindings).method_map = internal.variant_get_ptr_builtin_method(28, _gde_name.opaque, 4075186556);
        }
        {
            let _gde_name = new StringName('reduce');
            __classPrivateFieldGet(this, _a, "f", _GDArray__bindings).method_reduce = internal.variant_get_ptr_builtin_method(28, _gde_name.opaque, 4272450342);
        }
        {
            let _gde_name = new StringName('any');
            __classPrivateFieldGet(this, _a, "f", _GDArray__bindings).method_any = internal.variant_get_ptr_builtin_method(28, _gde_name.opaque, 4129521963);
        }
        {
            let _gde_name = new StringName('all');
            __classPrivateFieldGet(this, _a, "f", _GDArray__bindings).method_all = internal.variant_get_ptr_builtin_method(28, _gde_name.opaque, 4129521963);
        }
        {
            let _gde_name = new StringName('max');
            __classPrivateFieldGet(this, _a, "f", _GDArray__bindings).method_max = internal.variant_get_ptr_builtin_method(28, _gde_name.opaque, 1460142086);
        }
        {
            let _gde_name = new StringName('min');
            __classPrivateFieldGet(this, _a, "f", _GDArray__bindings).method_min = internal.variant_get_ptr_builtin_method(28, _gde_name.opaque, 1460142086);
        }
        {
            let _gde_name = new StringName('is_typed');
            __classPrivateFieldGet(this, _a, "f", _GDArray__bindings).method_is_typed = internal.variant_get_ptr_builtin_method(28, _gde_name.opaque, 3918633141);
        }
        {
            let _gde_name = new StringName('is_same_typed');
            __classPrivateFieldGet(this, _a, "f", _GDArray__bindings).method_is_same_typed = internal.variant_get_ptr_builtin_method(28, _gde_name.opaque, 2988181878);
        }
        {
            let _gde_name = new StringName('get_typed_builtin');
            __classPrivateFieldGet(this, _a, "f", _GDArray__bindings).method_get_typed_builtin = internal.variant_get_ptr_builtin_method(28, _gde_name.opaque, 3173160232);
        }
        {
            let _gde_name = new StringName('get_typed_class_name');
            __classPrivateFieldGet(this, _a, "f", _GDArray__bindings).method_get_typed_class_name = internal.variant_get_ptr_builtin_method(28, _gde_name.opaque, 1825232092);
        }
        {
            let _gde_name = new StringName('get_typed_script');
            __classPrivateFieldGet(this, _a, "f", _GDArray__bindings).method_get_typed_script = internal.variant_get_ptr_builtin_method(28, _gde_name.opaque, 1460142086);
        }
        {
            let _gde_name = new StringName('make_read_only');
            __classPrivateFieldGet(this, _a, "f", _GDArray__bindings).method_make_read_only = internal.variant_get_ptr_builtin_method(28, _gde_name.opaque, 3218959716);
        }
        {
            let _gde_name = new StringName('is_read_only');
            __classPrivateFieldGet(this, _a, "f", _GDArray__bindings).method_is_read_only = internal.variant_get_ptr_builtin_method(28, _gde_name.opaque, 3918633141);
        }
    }
    size() {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _GDArray__bindings).method_size, this, 2, []);
        return ret;
    }
    is_empty() {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _GDArray__bindings).method_is_empty, this, 1, []);
        return ret;
    }
    clear() {
        _call_builtin_method_ptr_no_ret(__classPrivateFieldGet(_a, _a, "f", _GDArray__bindings).method_clear, this, []);
    }
    hash() {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _GDArray__bindings).method_hash, this, 2, []);
        return ret;
    }
    assign(_array) {
        _call_builtin_method_ptr_no_ret(__classPrivateFieldGet(_a, _a, "f", _GDArray__bindings).method_assign, this, [_array]);
    }
    push_back(_value) {
        _call_builtin_method_ptr_no_ret(__classPrivateFieldGet(_a, _a, "f", _GDArray__bindings).method_push_back, this, [_value]);
    }
    push_front(_value) {
        _call_builtin_method_ptr_no_ret(__classPrivateFieldGet(_a, _a, "f", _GDArray__bindings).method_push_front, this, [_value]);
    }
    append(_value) {
        _call_builtin_method_ptr_no_ret(__classPrivateFieldGet(_a, _a, "f", _GDArray__bindings).method_append, this, [_value]);
    }
    append_array(_array) {
        _call_builtin_method_ptr_no_ret(__classPrivateFieldGet(_a, _a, "f", _GDArray__bindings).method_append_array, this, [_array]);
    }
    resize(_size) {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _GDArray__bindings).method_resize, this, 2, [_size]);
        return ret;
    }
    insert(_position, _value) {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _GDArray__bindings).method_insert, this, 2, [_position, _value]);
        return ret;
    }
    remove_at(_position) {
        _call_builtin_method_ptr_no_ret(__classPrivateFieldGet(_a, _a, "f", _GDArray__bindings).method_remove_at, this, [_position]);
    }
    fill(_value) {
        _call_builtin_method_ptr_no_ret(__classPrivateFieldGet(_a, _a, "f", _GDArray__bindings).method_fill, this, [_value]);
    }
    erase(_value) {
        _call_builtin_method_ptr_no_ret(__classPrivateFieldGet(_a, _a, "f", _GDArray__bindings).method_erase, this, [_value]);
    }
    front() {
        let ret = new Variant();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _GDArray__bindings).method_front, this, 39, []);
        return ret;
    }
    back() {
        let ret = new Variant();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _GDArray__bindings).method_back, this, 39, []);
        return ret;
    }
    pick_random() {
        let ret = new Variant();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _GDArray__bindings).method_pick_random, this, 39, []);
        return ret;
    }
    find(_what, _from) {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _GDArray__bindings).method_find, this, 2, [_what, _from]);
        return ret;
    }
    rfind(_what, _from) {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _GDArray__bindings).method_rfind, this, 2, [_what, _from]);
        return ret;
    }
    count(_value) {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _GDArray__bindings).method_count, this, 2, [_value]);
        return ret;
    }
    has(_value) {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _GDArray__bindings).method_has, this, 1, [_value]);
        return ret;
    }
    pop_back() {
        let ret = new Variant();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _GDArray__bindings).method_pop_back, this, 39, []);
        return ret;
    }
    pop_front() {
        let ret = new Variant();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _GDArray__bindings).method_pop_front, this, 39, []);
        return ret;
    }
    pop_at(_position) {
        let ret = new Variant();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _GDArray__bindings).method_pop_at, this, 39, [_position]);
        return ret;
    }
    sort() {
        _call_builtin_method_ptr_no_ret(__classPrivateFieldGet(_a, _a, "f", _GDArray__bindings).method_sort, this, []);
    }
    sort_custom(_func) {
        _call_builtin_method_ptr_no_ret(__classPrivateFieldGet(_a, _a, "f", _GDArray__bindings).method_sort_custom, this, [_func]);
    }
    shuffle() {
        _call_builtin_method_ptr_no_ret(__classPrivateFieldGet(_a, _a, "f", _GDArray__bindings).method_shuffle, this, []);
    }
    bsearch(_value, _before) {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _GDArray__bindings).method_bsearch, this, 2, [_value, _before]);
        return ret;
    }
    bsearch_custom(_value, _func, _before) {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _GDArray__bindings).method_bsearch_custom, this, 2, [_value, _func, _before]);
        return ret;
    }
    reverse() {
        _call_builtin_method_ptr_no_ret(__classPrivateFieldGet(_a, _a, "f", _GDArray__bindings).method_reverse, this, []);
    }
    duplicate(_deep) {
        let ret = new _a();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _GDArray__bindings).method_duplicate, this, 28, [_deep]);
        return ret;
    }
    slice(_begin, _end, _step, _deep) {
        let ret = new _a();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _GDArray__bindings).method_slice, this, 28, [_begin, _end, _step, _deep]);
        return ret;
    }
    filter(_method) {
        let ret = new _a();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _GDArray__bindings).method_filter, this, 28, [_method]);
        return ret;
    }
    map(_method) {
        let ret = new _a();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _GDArray__bindings).method_map, this, 28, [_method]);
        return ret;
    }
    reduce(_method, _accum) {
        let ret = new Variant();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _GDArray__bindings).method_reduce, this, 39, [_method, _accum]);
        return ret;
    }
    any(_method) {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _GDArray__bindings).method_any, this, 1, [_method]);
        return ret;
    }
    all(_method) {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _GDArray__bindings).method_all, this, 1, [_method]);
        return ret;
    }
    max() {
        let ret = new Variant();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _GDArray__bindings).method_max, this, 39, []);
        return ret;
    }
    min() {
        let ret = new Variant();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _GDArray__bindings).method_min, this, 39, []);
        return ret;
    }
    is_typed() {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _GDArray__bindings).method_is_typed, this, 1, []);
        return ret;
    }
    is_same_typed(_array) {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _GDArray__bindings).method_is_same_typed, this, 1, [_array]);
        return ret;
    }
    get_typed_builtin() {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _GDArray__bindings).method_get_typed_builtin, this, 2, []);
        return ret;
    }
    get_typed_class_name() {
        let ret = new StringName();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _GDArray__bindings).method_get_typed_class_name, this, 21, []);
        return ret;
    }
    get_typed_script() {
        let ret = new Variant();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _GDArray__bindings).method_get_typed_script, this, 39, []);
        return ret;
    }
    make_read_only() {
        _call_builtin_method_ptr_no_ret(__classPrivateFieldGet(_a, _a, "f", _GDArray__bindings).method_make_read_only, this, []);
    }
    is_read_only() {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _GDArray__bindings).method_is_read_only, this, 1, []);
        return ret;
    }
}
_a = GDArray;
_GDArray_SIZE = { value: 8 };
_GDArray__bindings = { value: new _MethodBindings() };
_GDArray_initialized = { value: false };
(() => {
    _a._init_bindings();
})();
