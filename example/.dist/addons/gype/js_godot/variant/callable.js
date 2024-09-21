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
var _a, _Callable_SIZE, _Callable__bindings, _Callable_initialized;
import * as internal from '__internal__';
import { _call_builtin_constructor, _call_builtin_method_ptr_ret, _call_builtin_method_ptr_no_ret, _call_builtin_method_ptr_obj_ret, } from '@js_godot/core/builtin_ptrcall';
import { Variant } from '@js_godot/variant/variant';
import { StringName } from '@js_godot/variant/string_name';
import { GDArray } from '@js_godot/variant/gd_array';
import { GodotObject } from "@js_godot/classes/godot_object";
class _MethodBindings {
}
export class Callable {
    constructor(value) {
        this.opaque = new Uint8Array(__classPrivateFieldGet(_a, _a, "f", _Callable_SIZE));
        if (!value) {
            _call_builtin_constructor(__classPrivateFieldGet(_a, _a, "f", _Callable__bindings).constructor_0, this);
        }
        else if (arguments.length == 1 && arguments[0] instanceof _a) {
            let from = arguments[0];
            _call_builtin_constructor(__classPrivateFieldGet(_a, _a, "f", _Callable__bindings).constructor_1, this, [
                from
            ]);
        }
        else if (arguments.length == 2 && arguments[0] instanceof GodotObject && arguments[1] instanceof StringName) {
            let object = arguments[0];
            let method = arguments[1];
            _call_builtin_constructor(__classPrivateFieldGet(_a, _a, "f", _Callable__bindings).constructor_2, this, [
                object, method
            ]);
        }
        else if (value.constructor.name === "Variant") {
            __classPrivateFieldGet(_a, _a, "f", _Callable__bindings).from_variant_constructor(this.opaque, value.opaque);
        }
        else if (value instanceof Uint8Array) {
            this.opaque = value;
        }
    }
    static __init_bindings_constructors_destructor() {
        __classPrivateFieldGet(this, _a, "f", _Callable__bindings).from_variant_constructor = internal.get_variant_to_type_constructor(25);
        __classPrivateFieldGet(this, _a, "f", _Callable__bindings).constructor_0 = internal.variant_get_ptr_constructor(25, 0);
        __classPrivateFieldGet(this, _a, "f", _Callable__bindings).constructor_1 = internal.variant_get_ptr_constructor(25, 1);
        __classPrivateFieldGet(this, _a, "f", _Callable__bindings).constructor_2 = internal.variant_get_ptr_constructor(25, 2);
        __classPrivateFieldGet(this, _a, "f", _Callable__bindings).destructor = internal.variant_get_ptr_destructor(25);
    }
    static async _init_bindings() {
        if (__classPrivateFieldGet(this, _a, "f", _Callable_initialized)) {
            return;
        }
        __classPrivateFieldSet(this, _a, true, "f", _Callable_initialized);
        this.__init_bindings_constructors_destructor();
        {
            let _gde_name = new StringName('create');
            __classPrivateFieldGet(this, _a, "f", _Callable__bindings).method_create = internal.variant_get_ptr_builtin_method(25, _gde_name.opaque, 1709381114);
        }
        {
            let _gde_name = new StringName('callv');
            __classPrivateFieldGet(this, _a, "f", _Callable__bindings).method_callv = internal.variant_get_ptr_builtin_method(25, _gde_name.opaque, 413578926);
        }
        {
            let _gde_name = new StringName('is_null');
            __classPrivateFieldGet(this, _a, "f", _Callable__bindings).method_is_null = internal.variant_get_ptr_builtin_method(25, _gde_name.opaque, 3918633141);
        }
        {
            let _gde_name = new StringName('is_custom');
            __classPrivateFieldGet(this, _a, "f", _Callable__bindings).method_is_custom = internal.variant_get_ptr_builtin_method(25, _gde_name.opaque, 3918633141);
        }
        {
            let _gde_name = new StringName('is_standard');
            __classPrivateFieldGet(this, _a, "f", _Callable__bindings).method_is_standard = internal.variant_get_ptr_builtin_method(25, _gde_name.opaque, 3918633141);
        }
        {
            let _gde_name = new StringName('is_valid');
            __classPrivateFieldGet(this, _a, "f", _Callable__bindings).method_is_valid = internal.variant_get_ptr_builtin_method(25, _gde_name.opaque, 3918633141);
        }
        {
            let _gde_name = new StringName('get_object');
            __classPrivateFieldGet(this, _a, "f", _Callable__bindings).method_get_object = internal.variant_get_ptr_builtin_method(25, _gde_name.opaque, 4008621732);
        }
        {
            let _gde_name = new StringName('get_object_id');
            __classPrivateFieldGet(this, _a, "f", _Callable__bindings).method_get_object_id = internal.variant_get_ptr_builtin_method(25, _gde_name.opaque, 3173160232);
        }
        {
            let _gde_name = new StringName('get_method');
            __classPrivateFieldGet(this, _a, "f", _Callable__bindings).method_get_method = internal.variant_get_ptr_builtin_method(25, _gde_name.opaque, 1825232092);
        }
        {
            let _gde_name = new StringName('get_argument_count');
            __classPrivateFieldGet(this, _a, "f", _Callable__bindings).method_get_argument_count = internal.variant_get_ptr_builtin_method(25, _gde_name.opaque, 3173160232);
        }
        {
            let _gde_name = new StringName('get_bound_arguments_count');
            __classPrivateFieldGet(this, _a, "f", _Callable__bindings).method_get_bound_arguments_count = internal.variant_get_ptr_builtin_method(25, _gde_name.opaque, 3173160232);
        }
        {
            let _gde_name = new StringName('get_bound_arguments');
            __classPrivateFieldGet(this, _a, "f", _Callable__bindings).method_get_bound_arguments = internal.variant_get_ptr_builtin_method(25, _gde_name.opaque, 4144163970);
        }
        {
            let _gde_name = new StringName('hash');
            __classPrivateFieldGet(this, _a, "f", _Callable__bindings).method_hash = internal.variant_get_ptr_builtin_method(25, _gde_name.opaque, 3173160232);
        }
        {
            let _gde_name = new StringName('bindv');
            __classPrivateFieldGet(this, _a, "f", _Callable__bindings).method_bindv = internal.variant_get_ptr_builtin_method(25, _gde_name.opaque, 3564560322);
        }
        {
            let _gde_name = new StringName('unbind');
            __classPrivateFieldGet(this, _a, "f", _Callable__bindings).method_unbind = internal.variant_get_ptr_builtin_method(25, _gde_name.opaque, 755001590);
        }
        {
            let _gde_name = new StringName('call');
            __classPrivateFieldGet(this, _a, "f", _Callable__bindings).method_call = internal.variant_get_ptr_builtin_method(25, _gde_name.opaque, 3643564216);
        }
        {
            let _gde_name = new StringName('call_deferred');
            __classPrivateFieldGet(this, _a, "f", _Callable__bindings).method_call_deferred = internal.variant_get_ptr_builtin_method(25, _gde_name.opaque, 3286317445);
        }
        {
            let _gde_name = new StringName('rpc');
            __classPrivateFieldGet(this, _a, "f", _Callable__bindings).method_rpc = internal.variant_get_ptr_builtin_method(25, _gde_name.opaque, 3286317445);
        }
        {
            let _gde_name = new StringName('rpc_id');
            __classPrivateFieldGet(this, _a, "f", _Callable__bindings).method_rpc_id = internal.variant_get_ptr_builtin_method(25, _gde_name.opaque, 2270047679);
        }
        {
            let _gde_name = new StringName('bind');
            __classPrivateFieldGet(this, _a, "f", _Callable__bindings).method_bind = internal.variant_get_ptr_builtin_method(25, _gde_name.opaque, 3224143119);
        }
    }
    create(_variant, _method) {
        let ret = new _a();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Callable__bindings).method_create, this, 25, [_variant, _method]);
        return ret;
    }
    callv(_arguments) {
        let ret = new Variant();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Callable__bindings).method_callv, this, 39, [_arguments]);
        return ret;
    }
    is_null() {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Callable__bindings).method_is_null, this, 1, []);
        return ret;
    }
    is_custom() {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Callable__bindings).method_is_custom, this, 1, []);
        return ret;
    }
    is_standard() {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Callable__bindings).method_is_standard, this, 1, []);
        return ret;
    }
    is_valid() {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Callable__bindings).method_is_valid, this, 1, []);
        return ret;
    }
    get_object() {
        let ret;
        ret = _call_builtin_method_ptr_obj_ret(__classPrivateFieldGet(_a, _a, "f", _Callable__bindings).method_get_object, this, 24, []);
        return ret;
    }
    get_object_id() {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Callable__bindings).method_get_object_id, this, 2, []);
        return ret;
    }
    get_method() {
        let ret = new StringName();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Callable__bindings).method_get_method, this, 21, []);
        return ret;
    }
    get_argument_count() {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Callable__bindings).method_get_argument_count, this, 2, []);
        return ret;
    }
    get_bound_arguments_count() {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Callable__bindings).method_get_bound_arguments_count, this, 2, []);
        return ret;
    }
    get_bound_arguments() {
        let ret = new GDArray();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Callable__bindings).method_get_bound_arguments, this, 28, []);
        return ret;
    }
    hash() {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Callable__bindings).method_hash, this, 2, []);
        return ret;
    }
    bindv(_arguments) {
        let ret = new _a();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Callable__bindings).method_bindv, this, 25, [_arguments]);
        return ret;
    }
    unbind(_argcount) {
        let ret = new _a();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Callable__bindings).method_unbind, this, 25, [_argcount]);
        return ret;
    }
    call() {
        let ret = new Variant();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Callable__bindings).method_call, this, 39, []);
        return ret;
    }
    call_deferred() {
        _call_builtin_method_ptr_no_ret(__classPrivateFieldGet(_a, _a, "f", _Callable__bindings).method_call_deferred, this, []);
    }
    rpc() {
        _call_builtin_method_ptr_no_ret(__classPrivateFieldGet(_a, _a, "f", _Callable__bindings).method_rpc, this, []);
    }
    rpc_id(_peer_id) {
        _call_builtin_method_ptr_no_ret(__classPrivateFieldGet(_a, _a, "f", _Callable__bindings).method_rpc_id, this, [_peer_id]);
    }
    bind() {
        let ret = new _a();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Callable__bindings).method_bind, this, 25, []);
        return ret;
    }
}
_a = Callable;
_Callable_SIZE = { value: 16 };
_Callable__bindings = { value: new _MethodBindings() };
_Callable_initialized = { value: false };
(() => {
    _a._init_bindings();
})();
