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
var _a, _Vector4i_SIZE, _Vector4i__bindings, _Vector4i_initialized;
import * as internal from '__internal__';
import { _call_builtin_constructor, _call_builtin_method_ptr_ret, _call_builtin_method_ptr_no_ret, _call_builtin_method_ptr_obj_ret, } from '@js_godot/core/builtin_ptrcall';
import { StringName } from '@js_godot/variant/string_name';
import { Vector4 } from '@js_godot/variant/vector4';
import { GodotObject } from "@js_godot/classes/godot_object";
class _MethodBindings {
}
export class Vector4i {
    constructor(value) {
        this.opaque = new Uint8Array(__classPrivateFieldGet(_a, _a, "f", _Vector4i_SIZE));
        if (!value) {
            _call_builtin_constructor(__classPrivateFieldGet(_a, _a, "f", _Vector4i__bindings).constructor_0, this);
        }
        else if (arguments.length == 1 && arguments[0] instanceof _a) {
            let from = arguments[0];
            _call_builtin_constructor(__classPrivateFieldGet(_a, _a, "f", _Vector4i__bindings).constructor_1, this, [
                from
            ]);
        }
        else if (arguments.length == 1 && arguments[0] instanceof Vector4) {
            let from = arguments[0];
            _call_builtin_constructor(__classPrivateFieldGet(_a, _a, "f", _Vector4i__bindings).constructor_2, this, [
                from
            ]);
        }
        else if (arguments.length == 4 && typeof arguments[0] == "number" && typeof arguments[1] == "number" && typeof arguments[2] == "number" && typeof arguments[3] == "number") {
            let x = arguments[0];
            let y = arguments[1];
            let z = arguments[2];
            let w = arguments[3];
            _call_builtin_constructor(__classPrivateFieldGet(_a, _a, "f", _Vector4i__bindings).constructor_3, this, [
                x, y, z, w
            ]);
        }
        else if (value.constructor.name === "Variant") {
            __classPrivateFieldGet(_a, _a, "f", _Vector4i__bindings).from_variant_constructor(this.opaque, value.opaque);
        }
        else if (value instanceof Uint8Array) {
            this.opaque = value;
        }
    }
    static __init_bindings_constructors_destructor() {
        __classPrivateFieldGet(this, _a, "f", _Vector4i__bindings).from_variant_constructor = internal.get_variant_to_type_constructor(13);
        __classPrivateFieldGet(this, _a, "f", _Vector4i__bindings).constructor_0 = internal.variant_get_ptr_constructor(13, 0);
        __classPrivateFieldGet(this, _a, "f", _Vector4i__bindings).constructor_1 = internal.variant_get_ptr_constructor(13, 1);
        __classPrivateFieldGet(this, _a, "f", _Vector4i__bindings).constructor_2 = internal.variant_get_ptr_constructor(13, 2);
        __classPrivateFieldGet(this, _a, "f", _Vector4i__bindings).constructor_3 = internal.variant_get_ptr_constructor(13, 3);
    }
    static async _init_bindings() {
        if (__classPrivateFieldGet(this, _a, "f", _Vector4i_initialized)) {
            return;
        }
        __classPrivateFieldSet(this, _a, true, "f", _Vector4i_initialized);
        this.__init_bindings_constructors_destructor();
        {
            let _gde_name = new StringName('min_axis_index');
            __classPrivateFieldGet(this, _a, "f", _Vector4i__bindings).method_min_axis_index = internal.variant_get_ptr_builtin_method(13, _gde_name.opaque, 3173160232);
        }
        {
            let _gde_name = new StringName('max_axis_index');
            __classPrivateFieldGet(this, _a, "f", _Vector4i__bindings).method_max_axis_index = internal.variant_get_ptr_builtin_method(13, _gde_name.opaque, 3173160232);
        }
        {
            let _gde_name = new StringName('length');
            __classPrivateFieldGet(this, _a, "f", _Vector4i__bindings).method_length = internal.variant_get_ptr_builtin_method(13, _gde_name.opaque, 466405837);
        }
        {
            let _gde_name = new StringName('length_squared');
            __classPrivateFieldGet(this, _a, "f", _Vector4i__bindings).method_length_squared = internal.variant_get_ptr_builtin_method(13, _gde_name.opaque, 3173160232);
        }
        {
            let _gde_name = new StringName('sign');
            __classPrivateFieldGet(this, _a, "f", _Vector4i__bindings).method_sign = internal.variant_get_ptr_builtin_method(13, _gde_name.opaque, 4134919947);
        }
        {
            let _gde_name = new StringName('abs');
            __classPrivateFieldGet(this, _a, "f", _Vector4i__bindings).method_abs = internal.variant_get_ptr_builtin_method(13, _gde_name.opaque, 4134919947);
        }
        {
            let _gde_name = new StringName('clamp');
            __classPrivateFieldGet(this, _a, "f", _Vector4i__bindings).method_clamp = internal.variant_get_ptr_builtin_method(13, _gde_name.opaque, 3046490913);
        }
        {
            let _gde_name = new StringName('clampi');
            __classPrivateFieldGet(this, _a, "f", _Vector4i__bindings).method_clampi = internal.variant_get_ptr_builtin_method(13, _gde_name.opaque, 2994578256);
        }
        {
            let _gde_name = new StringName('snapped');
            __classPrivateFieldGet(this, _a, "f", _Vector4i__bindings).method_snapped = internal.variant_get_ptr_builtin_method(13, _gde_name.opaque, 1181693102);
        }
        {
            let _gde_name = new StringName('snappedi');
            __classPrivateFieldGet(this, _a, "f", _Vector4i__bindings).method_snappedi = internal.variant_get_ptr_builtin_method(13, _gde_name.opaque, 1476494415);
        }
        {
            let _gde_name = new StringName('min');
            __classPrivateFieldGet(this, _a, "f", _Vector4i__bindings).method_min = internal.variant_get_ptr_builtin_method(13, _gde_name.opaque, 1181693102);
        }
        {
            let _gde_name = new StringName('mini');
            __classPrivateFieldGet(this, _a, "f", _Vector4i__bindings).method_mini = internal.variant_get_ptr_builtin_method(13, _gde_name.opaque, 1476494415);
        }
        {
            let _gde_name = new StringName('max');
            __classPrivateFieldGet(this, _a, "f", _Vector4i__bindings).method_max = internal.variant_get_ptr_builtin_method(13, _gde_name.opaque, 1181693102);
        }
        {
            let _gde_name = new StringName('maxi');
            __classPrivateFieldGet(this, _a, "f", _Vector4i__bindings).method_maxi = internal.variant_get_ptr_builtin_method(13, _gde_name.opaque, 1476494415);
        }
        {
            let _gde_name = new StringName('distance_to');
            __classPrivateFieldGet(this, _a, "f", _Vector4i__bindings).method_distance_to = internal.variant_get_ptr_builtin_method(13, _gde_name.opaque, 3446086573);
        }
        {
            let _gde_name = new StringName('distance_squared_to');
            __classPrivateFieldGet(this, _a, "f", _Vector4i__bindings).method_distance_squared_to = internal.variant_get_ptr_builtin_method(13, _gde_name.opaque, 346708794);
        }
    }
    min_axis_index() {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Vector4i__bindings).method_min_axis_index, this, 2, []);
        return ret;
    }
    max_axis_index() {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Vector4i__bindings).method_max_axis_index, this, 2, []);
        return ret;
    }
    length() {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Vector4i__bindings).method_length, this, 3, []);
        return ret;
    }
    length_squared() {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Vector4i__bindings).method_length_squared, this, 2, []);
        return ret;
    }
    sign() {
        let ret = new _a();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Vector4i__bindings).method_sign, this, 13, []);
        return ret;
    }
    abs() {
        let ret = new _a();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Vector4i__bindings).method_abs, this, 13, []);
        return ret;
    }
    clamp(_min, _max) {
        let ret = new _a();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Vector4i__bindings).method_clamp, this, 13, [_min, _max]);
        return ret;
    }
    clampi(_min, _max) {
        let ret = new _a();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Vector4i__bindings).method_clampi, this, 13, [_min, _max]);
        return ret;
    }
    snapped(_step) {
        let ret = new _a();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Vector4i__bindings).method_snapped, this, 13, [_step]);
        return ret;
    }
    snappedi(_step) {
        let ret = new _a();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Vector4i__bindings).method_snappedi, this, 13, [_step]);
        return ret;
    }
    min(_with) {
        let ret = new _a();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Vector4i__bindings).method_min, this, 13, [_with]);
        return ret;
    }
    mini(_with) {
        let ret = new _a();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Vector4i__bindings).method_mini, this, 13, [_with]);
        return ret;
    }
    max(_with) {
        let ret = new _a();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Vector4i__bindings).method_max, this, 13, [_with]);
        return ret;
    }
    maxi(_with) {
        let ret = new _a();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Vector4i__bindings).method_maxi, this, 13, [_with]);
        return ret;
    }
    distance_to(_to) {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Vector4i__bindings).method_distance_to, this, 3, [_to]);
        return ret;
    }
    distance_squared_to(_to) {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Vector4i__bindings).method_distance_squared_to, this, 2, [_to]);
        return ret;
    }
}
_a = Vector4i;
_Vector4i_SIZE = { value: 16 };
_Vector4i__bindings = { value: new _MethodBindings() };
_Vector4i_initialized = { value: false };
(() => {
    _a._init_bindings();
})();
