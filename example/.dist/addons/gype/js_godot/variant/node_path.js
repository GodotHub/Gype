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
var _a, _NodePath_SIZE, _NodePath__bindings, _NodePath_initialized;
import * as internal from '__internal__';
import { _call_builtin_constructor, _call_builtin_method_ptr_ret, _call_builtin_method_ptr_no_ret, _call_builtin_method_ptr_obj_ret, } from '@js_godot/core/builtin_ptrcall';
import { GDString } from '@js_godot/variant/gd_string';
import { StringName } from '@js_godot/variant/string_name';
import { GodotObject } from "@js_godot/classes/godot_object";
class _MethodBindings {
}
export class NodePath {
    constructor(value) {
        this.opaque = new Uint8Array(__classPrivateFieldGet(_a, _a, "f", _NodePath_SIZE));
        if (!value) {
            _call_builtin_constructor(__classPrivateFieldGet(_a, _a, "f", _NodePath__bindings).constructor_0, this);
        }
        else if (arguments.length == 1 && arguments[0] instanceof _a) {
            let from = arguments[0];
            _call_builtin_constructor(__classPrivateFieldGet(_a, _a, "f", _NodePath__bindings).constructor_1, this, [
                from
            ]);
        }
        else if (arguments.length == 1 && arguments[0] instanceof GDString) {
            let from = arguments[0];
            _call_builtin_constructor(__classPrivateFieldGet(_a, _a, "f", _NodePath__bindings).constructor_2, this, [
                from
            ]);
        }
        else if (value.constructor.name === "Variant") {
            __classPrivateFieldGet(_a, _a, "f", _NodePath__bindings).from_variant_constructor(this.opaque, value.opaque);
        }
        else if (value instanceof Uint8Array) {
            this.opaque = value;
        }
        else if (typeof value == 'string') {
            _call_builtin_constructor(__classPrivateFieldGet(_a, _a, "f", _NodePath__bindings).constructor_2, this, [
                new GDString(value).opaque
            ]);
        }
    }
    static __init_bindings_constructors_destructor() {
        __classPrivateFieldGet(this, _a, "f", _NodePath__bindings).from_variant_constructor = internal.get_variant_to_type_constructor(22);
        __classPrivateFieldGet(this, _a, "f", _NodePath__bindings).constructor_0 = internal.variant_get_ptr_constructor(22, 0);
        __classPrivateFieldGet(this, _a, "f", _NodePath__bindings).constructor_1 = internal.variant_get_ptr_constructor(22, 1);
        __classPrivateFieldGet(this, _a, "f", _NodePath__bindings).constructor_2 = internal.variant_get_ptr_constructor(22, 2);
        __classPrivateFieldGet(this, _a, "f", _NodePath__bindings).destructor = internal.variant_get_ptr_destructor(22);
    }
    static async _init_bindings() {
        if (__classPrivateFieldGet(this, _a, "f", _NodePath_initialized)) {
            return;
        }
        __classPrivateFieldSet(this, _a, true, "f", _NodePath_initialized);
        this.__init_bindings_constructors_destructor();
        {
            let _gde_name = new StringName('is_absolute');
            __classPrivateFieldGet(this, _a, "f", _NodePath__bindings).method_is_absolute = internal.variant_get_ptr_builtin_method(22, _gde_name.opaque, 3918633141);
        }
        {
            let _gde_name = new StringName('get_name_count');
            __classPrivateFieldGet(this, _a, "f", _NodePath__bindings).method_get_name_count = internal.variant_get_ptr_builtin_method(22, _gde_name.opaque, 3173160232);
        }
        {
            let _gde_name = new StringName('get_name');
            __classPrivateFieldGet(this, _a, "f", _NodePath__bindings).method_get_name = internal.variant_get_ptr_builtin_method(22, _gde_name.opaque, 2948586938);
        }
        {
            let _gde_name = new StringName('get_subname_count');
            __classPrivateFieldGet(this, _a, "f", _NodePath__bindings).method_get_subname_count = internal.variant_get_ptr_builtin_method(22, _gde_name.opaque, 3173160232);
        }
        {
            let _gde_name = new StringName('hash');
            __classPrivateFieldGet(this, _a, "f", _NodePath__bindings).method_hash = internal.variant_get_ptr_builtin_method(22, _gde_name.opaque, 3173160232);
        }
        {
            let _gde_name = new StringName('get_subname');
            __classPrivateFieldGet(this, _a, "f", _NodePath__bindings).method_get_subname = internal.variant_get_ptr_builtin_method(22, _gde_name.opaque, 2948586938);
        }
        {
            let _gde_name = new StringName('get_concatenated_names');
            __classPrivateFieldGet(this, _a, "f", _NodePath__bindings).method_get_concatenated_names = internal.variant_get_ptr_builtin_method(22, _gde_name.opaque, 1825232092);
        }
        {
            let _gde_name = new StringName('get_concatenated_subnames');
            __classPrivateFieldGet(this, _a, "f", _NodePath__bindings).method_get_concatenated_subnames = internal.variant_get_ptr_builtin_method(22, _gde_name.opaque, 1825232092);
        }
        {
            let _gde_name = new StringName('slice');
            __classPrivateFieldGet(this, _a, "f", _NodePath__bindings).method_slice = internal.variant_get_ptr_builtin_method(22, _gde_name.opaque, 421628484);
        }
        {
            let _gde_name = new StringName('get_as_property_path');
            __classPrivateFieldGet(this, _a, "f", _NodePath__bindings).method_get_as_property_path = internal.variant_get_ptr_builtin_method(22, _gde_name.opaque, 1598598043);
        }
        {
            let _gde_name = new StringName('is_empty');
            __classPrivateFieldGet(this, _a, "f", _NodePath__bindings).method_is_empty = internal.variant_get_ptr_builtin_method(22, _gde_name.opaque, 3918633141);
        }
    }
    is_absolute() {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _NodePath__bindings).method_is_absolute, this, 1, []);
        return ret;
    }
    get_name_count() {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _NodePath__bindings).method_get_name_count, this, 2, []);
        return ret;
    }
    get_name(_idx) {
        let ret = new StringName();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _NodePath__bindings).method_get_name, this, 21, [_idx]);
        return ret;
    }
    get_subname_count() {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _NodePath__bindings).method_get_subname_count, this, 2, []);
        return ret;
    }
    hash() {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _NodePath__bindings).method_hash, this, 2, []);
        return ret;
    }
    get_subname(_idx) {
        let ret = new StringName();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _NodePath__bindings).method_get_subname, this, 21, [_idx]);
        return ret;
    }
    get_concatenated_names() {
        let ret = new StringName();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _NodePath__bindings).method_get_concatenated_names, this, 21, []);
        return ret;
    }
    get_concatenated_subnames() {
        let ret = new StringName();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _NodePath__bindings).method_get_concatenated_subnames, this, 21, []);
        return ret;
    }
    slice(_begin, _end) {
        let ret = new _a();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _NodePath__bindings).method_slice, this, 22, [_begin, _end]);
        return ret;
    }
    get_as_property_path() {
        let ret = new _a();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _NodePath__bindings).method_get_as_property_path, this, 22, []);
        return ret;
    }
    is_empty() {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _NodePath__bindings).method_is_empty, this, 1, []);
        return ret;
    }
}
_a = NodePath;
_NodePath_SIZE = { value: 8 };
_NodePath__bindings = { value: new _MethodBindings() };
_NodePath_initialized = { value: false };
(() => {
    _a._init_bindings();
})();
