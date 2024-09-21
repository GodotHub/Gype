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
var _a, _Signal_SIZE, _Signal__bindings, _Signal_initialized;
import * as internal from '__internal__';
import { _call_builtin_constructor, _call_builtin_method_ptr_ret, _call_builtin_method_ptr_no_ret, _call_builtin_method_ptr_obj_ret, } from '@js_godot/core/builtin_ptrcall';
import { StringName } from '@js_godot/variant/string_name';
import { Callable } from '@js_godot/variant/callable';
import { GDArray } from '@js_godot/variant/gd_array';
import { GodotObject } from "@js_godot/classes/godot_object";
class _MethodBindings {
}
export class Signal {
    constructor(value) {
        this.opaque = new Uint8Array(__classPrivateFieldGet(_a, _a, "f", _Signal_SIZE));
        if (!value) {
            _call_builtin_constructor(__classPrivateFieldGet(_a, _a, "f", _Signal__bindings).constructor_0, this);
        }
        else if (arguments.length == 1 && arguments[0] instanceof _a) {
            let from = arguments[0];
            _call_builtin_constructor(__classPrivateFieldGet(_a, _a, "f", _Signal__bindings).constructor_1, this, [
                from
            ]);
        }
        else if (arguments.length == 2 && arguments[0] instanceof GodotObject && arguments[1] instanceof StringName) {
            let object = arguments[0];
            let signal = arguments[1];
            _call_builtin_constructor(__classPrivateFieldGet(_a, _a, "f", _Signal__bindings).constructor_2, this, [
                object, signal
            ]);
        }
        else if (value.constructor.name === "Variant") {
            __classPrivateFieldGet(_a, _a, "f", _Signal__bindings).from_variant_constructor(this.opaque, value.opaque);
        }
        else if (value instanceof Uint8Array) {
            this.opaque = value;
        }
    }
    static __init_bindings_constructors_destructor() {
        __classPrivateFieldGet(this, _a, "f", _Signal__bindings).from_variant_constructor = internal.get_variant_to_type_constructor(26);
        __classPrivateFieldGet(this, _a, "f", _Signal__bindings).constructor_0 = internal.variant_get_ptr_constructor(26, 0);
        __classPrivateFieldGet(this, _a, "f", _Signal__bindings).constructor_1 = internal.variant_get_ptr_constructor(26, 1);
        __classPrivateFieldGet(this, _a, "f", _Signal__bindings).constructor_2 = internal.variant_get_ptr_constructor(26, 2);
        __classPrivateFieldGet(this, _a, "f", _Signal__bindings).destructor = internal.variant_get_ptr_destructor(26);
    }
    static async _init_bindings() {
        if (__classPrivateFieldGet(this, _a, "f", _Signal_initialized)) {
            return;
        }
        __classPrivateFieldSet(this, _a, true, "f", _Signal_initialized);
        this.__init_bindings_constructors_destructor();
        {
            let _gde_name = new StringName('is_null');
            __classPrivateFieldGet(this, _a, "f", _Signal__bindings).method_is_null = internal.variant_get_ptr_builtin_method(26, _gde_name.opaque, 3918633141);
        }
        {
            let _gde_name = new StringName('get_object');
            __classPrivateFieldGet(this, _a, "f", _Signal__bindings).method_get_object = internal.variant_get_ptr_builtin_method(26, _gde_name.opaque, 4008621732);
        }
        {
            let _gde_name = new StringName('get_object_id');
            __classPrivateFieldGet(this, _a, "f", _Signal__bindings).method_get_object_id = internal.variant_get_ptr_builtin_method(26, _gde_name.opaque, 3173160232);
        }
        {
            let _gde_name = new StringName('get_name');
            __classPrivateFieldGet(this, _a, "f", _Signal__bindings).method_get_name = internal.variant_get_ptr_builtin_method(26, _gde_name.opaque, 1825232092);
        }
        {
            let _gde_name = new StringName('connect');
            __classPrivateFieldGet(this, _a, "f", _Signal__bindings).method_connect = internal.variant_get_ptr_builtin_method(26, _gde_name.opaque, 979702392);
        }
        {
            let _gde_name = new StringName('disconnect');
            __classPrivateFieldGet(this, _a, "f", _Signal__bindings).method_disconnect = internal.variant_get_ptr_builtin_method(26, _gde_name.opaque, 3470848906);
        }
        {
            let _gde_name = new StringName('is_connected');
            __classPrivateFieldGet(this, _a, "f", _Signal__bindings).method_is_connected = internal.variant_get_ptr_builtin_method(26, _gde_name.opaque, 4129521963);
        }
        {
            let _gde_name = new StringName('get_connections');
            __classPrivateFieldGet(this, _a, "f", _Signal__bindings).method_get_connections = internal.variant_get_ptr_builtin_method(26, _gde_name.opaque, 4144163970);
        }
        {
            let _gde_name = new StringName('emit');
            __classPrivateFieldGet(this, _a, "f", _Signal__bindings).method_emit = internal.variant_get_ptr_builtin_method(26, _gde_name.opaque, 3286317445);
        }
    }
    is_null() {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Signal__bindings).method_is_null, this, 1, []);
        return ret;
    }
    get_object() {
        let ret;
        ret = _call_builtin_method_ptr_obj_ret(__classPrivateFieldGet(_a, _a, "f", _Signal__bindings).method_get_object, this, 24, []);
        return ret;
    }
    get_object_id() {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Signal__bindings).method_get_object_id, this, 2, []);
        return ret;
    }
    get_name() {
        let ret = new StringName();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Signal__bindings).method_get_name, this, 21, []);
        return ret;
    }
    connect(_callable, _flags) {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Signal__bindings).method_connect, this, 2, [_callable, _flags]);
        return ret;
    }
    disconnect(_callable) {
        _call_builtin_method_ptr_no_ret(__classPrivateFieldGet(_a, _a, "f", _Signal__bindings).method_disconnect, this, [_callable]);
    }
    is_connected(_callable) {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Signal__bindings).method_is_connected, this, 1, [_callable]);
        return ret;
    }
    get_connections() {
        let ret = new GDArray();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Signal__bindings).method_get_connections, this, 28, []);
        return ret;
    }
    emit() {
        _call_builtin_method_ptr_no_ret(__classPrivateFieldGet(_a, _a, "f", _Signal__bindings).method_emit, this, []);
    }
}
_a = Signal;
_Signal_SIZE = { value: 16 };
_Signal__bindings = { value: new _MethodBindings() };
_Signal_initialized = { value: false };
(() => {
    _a._init_bindings();
})();
