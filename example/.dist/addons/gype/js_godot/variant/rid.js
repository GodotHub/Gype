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
var _a, _RID_SIZE, _RID__bindings, _RID_initialized;
import * as internal from '__internal__';
import { _call_builtin_constructor, _call_builtin_method_ptr_ret, _call_builtin_method_ptr_no_ret, _call_builtin_method_ptr_obj_ret, } from '@js_godot/core/builtin_ptrcall';
import { StringName } from '@js_godot/variant/string_name';
import { GodotObject } from "@js_godot/classes/godot_object";
class _MethodBindings {
}
export class RID {
    constructor(value) {
        this.opaque = new Uint8Array(__classPrivateFieldGet(_a, _a, "f", _RID_SIZE));
        if (!value) {
            _call_builtin_constructor(__classPrivateFieldGet(_a, _a, "f", _RID__bindings).constructor_0, this);
        }
        else if (arguments.length == 1 && arguments[0] instanceof _a) {
            let from = arguments[0];
            _call_builtin_constructor(__classPrivateFieldGet(_a, _a, "f", _RID__bindings).constructor_1, this, [
                from
            ]);
        }
        else if (value.constructor.name === "Variant") {
            __classPrivateFieldGet(_a, _a, "f", _RID__bindings).from_variant_constructor(this.opaque, value.opaque);
        }
        else if (value instanceof Uint8Array) {
            this.opaque = value;
        }
    }
    static __init_bindings_constructors_destructor() {
        __classPrivateFieldGet(this, _a, "f", _RID__bindings).from_variant_constructor = internal.get_variant_to_type_constructor(23);
        __classPrivateFieldGet(this, _a, "f", _RID__bindings).constructor_0 = internal.variant_get_ptr_constructor(23, 0);
        __classPrivateFieldGet(this, _a, "f", _RID__bindings).constructor_1 = internal.variant_get_ptr_constructor(23, 1);
    }
    static async _init_bindings() {
        if (__classPrivateFieldGet(this, _a, "f", _RID_initialized)) {
            return;
        }
        __classPrivateFieldSet(this, _a, true, "f", _RID_initialized);
        this.__init_bindings_constructors_destructor();
        {
            let _gde_name = new StringName('is_valid');
            __classPrivateFieldGet(this, _a, "f", _RID__bindings).method_is_valid = internal.variant_get_ptr_builtin_method(23, _gde_name.opaque, 3918633141);
        }
        {
            let _gde_name = new StringName('get_id');
            __classPrivateFieldGet(this, _a, "f", _RID__bindings).method_get_id = internal.variant_get_ptr_builtin_method(23, _gde_name.opaque, 3173160232);
        }
    }
    is_valid() {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _RID__bindings).method_is_valid, this, 1, []);
        return ret;
    }
    get_id() {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _RID__bindings).method_get_id, this, 2, []);
        return ret;
    }
}
_a = RID;
_RID_SIZE = { value: 8 };
_RID__bindings = { value: new _MethodBindings() };
_RID_initialized = { value: false };
(() => {
    _a._init_bindings();
})();
