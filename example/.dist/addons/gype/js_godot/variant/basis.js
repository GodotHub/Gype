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
var _a, _Basis_SIZE, _Basis__bindings, _Basis_initialized;
import * as internal from '__internal__';
import { _call_builtin_constructor, _call_builtin_method_ptr_ret, _call_builtin_method_ptr_no_ret, _call_builtin_method_ptr_obj_ret, } from '@js_godot/core/builtin_ptrcall';
import { StringName } from '@js_godot/variant/string_name';
import { Quaternion } from '@js_godot/variant/quaternion';
import { Vector3 } from '@js_godot/variant/vector3';
import { GodotObject } from "@js_godot/classes/godot_object";
class _MethodBindings {
}
export class Basis {
    constructor(value) {
        this.opaque = new Uint8Array(__classPrivateFieldGet(_a, _a, "f", _Basis_SIZE));
        if (!value) {
            _call_builtin_constructor(__classPrivateFieldGet(_a, _a, "f", _Basis__bindings).constructor_0, this);
        }
        else if (arguments.length == 1 && arguments[0] instanceof _a) {
            let from = arguments[0];
            _call_builtin_constructor(__classPrivateFieldGet(_a, _a, "f", _Basis__bindings).constructor_1, this, [
                from
            ]);
        }
        else if (arguments.length == 1 && arguments[0] instanceof Quaternion) {
            let from = arguments[0];
            _call_builtin_constructor(__classPrivateFieldGet(_a, _a, "f", _Basis__bindings).constructor_2, this, [
                from
            ]);
        }
        else if (arguments.length == 2 && arguments[0] instanceof Vector3 && typeof arguments[1] == "number") {
            let axis = arguments[0];
            let angle = arguments[1];
            _call_builtin_constructor(__classPrivateFieldGet(_a, _a, "f", _Basis__bindings).constructor_3, this, [
                axis, angle
            ]);
        }
        else if (arguments.length == 3 && arguments[0] instanceof Vector3 && arguments[1] instanceof Vector3 && arguments[2] instanceof Vector3) {
            let x_axis = arguments[0];
            let y_axis = arguments[1];
            let z_axis = arguments[2];
            _call_builtin_constructor(__classPrivateFieldGet(_a, _a, "f", _Basis__bindings).constructor_4, this, [
                x_axis, y_axis, z_axis
            ]);
        }
        else if (value.constructor.name === "Variant") {
            __classPrivateFieldGet(_a, _a, "f", _Basis__bindings).from_variant_constructor(this.opaque, value.opaque);
        }
        else if (value instanceof Uint8Array) {
            this.opaque = value;
        }
    }
    static __init_bindings_constructors_destructor() {
        __classPrivateFieldGet(this, _a, "f", _Basis__bindings).from_variant_constructor = internal.get_variant_to_type_constructor(17);
        __classPrivateFieldGet(this, _a, "f", _Basis__bindings).constructor_0 = internal.variant_get_ptr_constructor(17, 0);
        __classPrivateFieldGet(this, _a, "f", _Basis__bindings).constructor_1 = internal.variant_get_ptr_constructor(17, 1);
        __classPrivateFieldGet(this, _a, "f", _Basis__bindings).constructor_2 = internal.variant_get_ptr_constructor(17, 2);
        __classPrivateFieldGet(this, _a, "f", _Basis__bindings).constructor_3 = internal.variant_get_ptr_constructor(17, 3);
        __classPrivateFieldGet(this, _a, "f", _Basis__bindings).constructor_4 = internal.variant_get_ptr_constructor(17, 4);
    }
    static async _init_bindings() {
        if (__classPrivateFieldGet(this, _a, "f", _Basis_initialized)) {
            return;
        }
        __classPrivateFieldSet(this, _a, true, "f", _Basis_initialized);
        this.__init_bindings_constructors_destructor();
        {
            let _gde_name = new StringName('inverse');
            __classPrivateFieldGet(this, _a, "f", _Basis__bindings).method_inverse = internal.variant_get_ptr_builtin_method(17, _gde_name.opaque, 594669093);
        }
        {
            let _gde_name = new StringName('transposed');
            __classPrivateFieldGet(this, _a, "f", _Basis__bindings).method_transposed = internal.variant_get_ptr_builtin_method(17, _gde_name.opaque, 594669093);
        }
        {
            let _gde_name = new StringName('orthonormalized');
            __classPrivateFieldGet(this, _a, "f", _Basis__bindings).method_orthonormalized = internal.variant_get_ptr_builtin_method(17, _gde_name.opaque, 594669093);
        }
        {
            let _gde_name = new StringName('determinant');
            __classPrivateFieldGet(this, _a, "f", _Basis__bindings).method_determinant = internal.variant_get_ptr_builtin_method(17, _gde_name.opaque, 466405837);
        }
        {
            let _gde_name = new StringName('rotated');
            __classPrivateFieldGet(this, _a, "f", _Basis__bindings).method_rotated = internal.variant_get_ptr_builtin_method(17, _gde_name.opaque, 1998708965);
        }
        {
            let _gde_name = new StringName('scaled');
            __classPrivateFieldGet(this, _a, "f", _Basis__bindings).method_scaled = internal.variant_get_ptr_builtin_method(17, _gde_name.opaque, 3934786792);
        }
        {
            let _gde_name = new StringName('get_scale');
            __classPrivateFieldGet(this, _a, "f", _Basis__bindings).method_get_scale = internal.variant_get_ptr_builtin_method(17, _gde_name.opaque, 1776574132);
        }
        {
            let _gde_name = new StringName('get_euler');
            __classPrivateFieldGet(this, _a, "f", _Basis__bindings).method_get_euler = internal.variant_get_ptr_builtin_method(17, _gde_name.opaque, 1394941017);
        }
        {
            let _gde_name = new StringName('tdotx');
            __classPrivateFieldGet(this, _a, "f", _Basis__bindings).method_tdotx = internal.variant_get_ptr_builtin_method(17, _gde_name.opaque, 1047977935);
        }
        {
            let _gde_name = new StringName('tdoty');
            __classPrivateFieldGet(this, _a, "f", _Basis__bindings).method_tdoty = internal.variant_get_ptr_builtin_method(17, _gde_name.opaque, 1047977935);
        }
        {
            let _gde_name = new StringName('tdotz');
            __classPrivateFieldGet(this, _a, "f", _Basis__bindings).method_tdotz = internal.variant_get_ptr_builtin_method(17, _gde_name.opaque, 1047977935);
        }
        {
            let _gde_name = new StringName('slerp');
            __classPrivateFieldGet(this, _a, "f", _Basis__bindings).method_slerp = internal.variant_get_ptr_builtin_method(17, _gde_name.opaque, 3118673011);
        }
        {
            let _gde_name = new StringName('is_conformal');
            __classPrivateFieldGet(this, _a, "f", _Basis__bindings).method_is_conformal = internal.variant_get_ptr_builtin_method(17, _gde_name.opaque, 3918633141);
        }
        {
            let _gde_name = new StringName('is_equal_approx');
            __classPrivateFieldGet(this, _a, "f", _Basis__bindings).method_is_equal_approx = internal.variant_get_ptr_builtin_method(17, _gde_name.opaque, 3165333982);
        }
        {
            let _gde_name = new StringName('is_finite');
            __classPrivateFieldGet(this, _a, "f", _Basis__bindings).method_is_finite = internal.variant_get_ptr_builtin_method(17, _gde_name.opaque, 3918633141);
        }
        {
            let _gde_name = new StringName('get_rotation_quaternion');
            __classPrivateFieldGet(this, _a, "f", _Basis__bindings).method_get_rotation_quaternion = internal.variant_get_ptr_builtin_method(17, _gde_name.opaque, 4274879941);
        }
        {
            let _gde_name = new StringName('looking_at');
            __classPrivateFieldGet(this, _a, "f", _Basis__bindings).method_looking_at = internal.variant_get_ptr_builtin_method(17, _gde_name.opaque, 3728732505);
        }
        {
            let _gde_name = new StringName('from_scale');
            __classPrivateFieldGet(this, _a, "f", _Basis__bindings).method_from_scale = internal.variant_get_ptr_builtin_method(17, _gde_name.opaque, 3703240166);
        }
        {
            let _gde_name = new StringName('from_euler');
            __classPrivateFieldGet(this, _a, "f", _Basis__bindings).method_from_euler = internal.variant_get_ptr_builtin_method(17, _gde_name.opaque, 2802321791);
        }
    }
    inverse() {
        let ret = new _a();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Basis__bindings).method_inverse, this, 17, []);
        return ret;
    }
    transposed() {
        let ret = new _a();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Basis__bindings).method_transposed, this, 17, []);
        return ret;
    }
    orthonormalized() {
        let ret = new _a();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Basis__bindings).method_orthonormalized, this, 17, []);
        return ret;
    }
    determinant() {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Basis__bindings).method_determinant, this, 3, []);
        return ret;
    }
    rotated(_axis, _angle) {
        let ret = new _a();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Basis__bindings).method_rotated, this, 17, [_axis, _angle]);
        return ret;
    }
    scaled(_scale) {
        let ret = new _a();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Basis__bindings).method_scaled, this, 17, [_scale]);
        return ret;
    }
    get_scale() {
        let ret = new Vector3();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Basis__bindings).method_get_scale, this, 9, []);
        return ret;
    }
    get_euler(_order) {
        let ret = new Vector3();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Basis__bindings).method_get_euler, this, 9, [_order]);
        return ret;
    }
    tdotx(_with) {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Basis__bindings).method_tdotx, this, 3, [_with]);
        return ret;
    }
    tdoty(_with) {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Basis__bindings).method_tdoty, this, 3, [_with]);
        return ret;
    }
    tdotz(_with) {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Basis__bindings).method_tdotz, this, 3, [_with]);
        return ret;
    }
    slerp(_to, _weight) {
        let ret = new _a();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Basis__bindings).method_slerp, this, 17, [_to, _weight]);
        return ret;
    }
    is_conformal() {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Basis__bindings).method_is_conformal, this, 1, []);
        return ret;
    }
    is_equal_approx(_b) {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Basis__bindings).method_is_equal_approx, this, 1, [_b]);
        return ret;
    }
    is_finite() {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Basis__bindings).method_is_finite, this, 1, []);
        return ret;
    }
    get_rotation_quaternion() {
        let ret = new Quaternion();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Basis__bindings).method_get_rotation_quaternion, this, 15, []);
        return ret;
    }
    looking_at(_target, _up, _use_model_front) {
        let ret = new _a();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Basis__bindings).method_looking_at, this, 17, [_target, _up, _use_model_front]);
        return ret;
    }
    from_scale(_scale) {
        let ret = new _a();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Basis__bindings).method_from_scale, this, 17, [_scale]);
        return ret;
    }
    from_euler(_euler, _order) {
        let ret = new _a();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Basis__bindings).method_from_euler, this, 17, [_euler, _order]);
        return ret;
    }
}
_a = Basis;
_Basis_SIZE = { value: 36 };
_Basis__bindings = { value: new _MethodBindings() };
_Basis_initialized = { value: false };
(() => {
    _a._init_bindings();
})();
