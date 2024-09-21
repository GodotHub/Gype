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
var _a, _Transform2D_SIZE, _Transform2D__bindings, _Transform2D_initialized;
import * as internal from '__internal__';
import { _call_builtin_constructor, _call_builtin_method_ptr_ret, _call_builtin_method_ptr_no_ret, _call_builtin_method_ptr_obj_ret, } from '@js_godot/core/builtin_ptrcall';
import { StringName } from '@js_godot/variant/string_name';
import { Vector2 } from '@js_godot/variant/vector2';
import { GodotObject } from "@js_godot/classes/godot_object";
class _MethodBindings {
}
export class Transform2D {
    constructor(value) {
        this.opaque = new Uint8Array(__classPrivateFieldGet(_a, _a, "f", _Transform2D_SIZE));
        if (!value) {
            _call_builtin_constructor(__classPrivateFieldGet(_a, _a, "f", _Transform2D__bindings).constructor_0, this);
        }
        else if (arguments.length == 1 && arguments[0] instanceof _a) {
            let from = arguments[0];
            _call_builtin_constructor(__classPrivateFieldGet(_a, _a, "f", _Transform2D__bindings).constructor_1, this, [
                from
            ]);
        }
        else if (arguments.length == 2 && typeof arguments[0] == "number" && arguments[1] instanceof Vector2) {
            let rotation = arguments[0];
            let position = arguments[1];
            _call_builtin_constructor(__classPrivateFieldGet(_a, _a, "f", _Transform2D__bindings).constructor_2, this, [
                rotation, position
            ]);
        }
        else if (arguments.length == 4 && typeof arguments[0] == "number" && arguments[1] instanceof Vector2 && typeof arguments[2] == "number" && arguments[3] instanceof Vector2) {
            let rotation = arguments[0];
            let scale = arguments[1];
            let skew = arguments[2];
            let position = arguments[3];
            _call_builtin_constructor(__classPrivateFieldGet(_a, _a, "f", _Transform2D__bindings).constructor_3, this, [
                rotation, scale, skew, position
            ]);
        }
        else if (arguments.length == 3 && arguments[0] instanceof Vector2 && arguments[1] instanceof Vector2 && arguments[2] instanceof Vector2) {
            let x_axis = arguments[0];
            let y_axis = arguments[1];
            let origin = arguments[2];
            _call_builtin_constructor(__classPrivateFieldGet(_a, _a, "f", _Transform2D__bindings).constructor_4, this, [
                x_axis, y_axis, origin
            ]);
        }
        else if (value.constructor.name === "Variant") {
            __classPrivateFieldGet(_a, _a, "f", _Transform2D__bindings).from_variant_constructor(this.opaque, value.opaque);
        }
        else if (value instanceof Uint8Array) {
            this.opaque = value;
        }
    }
    static __init_bindings_constructors_destructor() {
        __classPrivateFieldGet(this, _a, "f", _Transform2D__bindings).from_variant_constructor = internal.get_variant_to_type_constructor(11);
        __classPrivateFieldGet(this, _a, "f", _Transform2D__bindings).constructor_0 = internal.variant_get_ptr_constructor(11, 0);
        __classPrivateFieldGet(this, _a, "f", _Transform2D__bindings).constructor_1 = internal.variant_get_ptr_constructor(11, 1);
        __classPrivateFieldGet(this, _a, "f", _Transform2D__bindings).constructor_2 = internal.variant_get_ptr_constructor(11, 2);
        __classPrivateFieldGet(this, _a, "f", _Transform2D__bindings).constructor_3 = internal.variant_get_ptr_constructor(11, 3);
        __classPrivateFieldGet(this, _a, "f", _Transform2D__bindings).constructor_4 = internal.variant_get_ptr_constructor(11, 4);
    }
    static async _init_bindings() {
        if (__classPrivateFieldGet(this, _a, "f", _Transform2D_initialized)) {
            return;
        }
        __classPrivateFieldSet(this, _a, true, "f", _Transform2D_initialized);
        this.__init_bindings_constructors_destructor();
        {
            let _gde_name = new StringName('inverse');
            __classPrivateFieldGet(this, _a, "f", _Transform2D__bindings).method_inverse = internal.variant_get_ptr_builtin_method(11, _gde_name.opaque, 1420440541);
        }
        {
            let _gde_name = new StringName('affine_inverse');
            __classPrivateFieldGet(this, _a, "f", _Transform2D__bindings).method_affine_inverse = internal.variant_get_ptr_builtin_method(11, _gde_name.opaque, 1420440541);
        }
        {
            let _gde_name = new StringName('get_rotation');
            __classPrivateFieldGet(this, _a, "f", _Transform2D__bindings).method_get_rotation = internal.variant_get_ptr_builtin_method(11, _gde_name.opaque, 466405837);
        }
        {
            let _gde_name = new StringName('get_origin');
            __classPrivateFieldGet(this, _a, "f", _Transform2D__bindings).method_get_origin = internal.variant_get_ptr_builtin_method(11, _gde_name.opaque, 2428350749);
        }
        {
            let _gde_name = new StringName('get_scale');
            __classPrivateFieldGet(this, _a, "f", _Transform2D__bindings).method_get_scale = internal.variant_get_ptr_builtin_method(11, _gde_name.opaque, 2428350749);
        }
        {
            let _gde_name = new StringName('get_skew');
            __classPrivateFieldGet(this, _a, "f", _Transform2D__bindings).method_get_skew = internal.variant_get_ptr_builtin_method(11, _gde_name.opaque, 466405837);
        }
        {
            let _gde_name = new StringName('orthonormalized');
            __classPrivateFieldGet(this, _a, "f", _Transform2D__bindings).method_orthonormalized = internal.variant_get_ptr_builtin_method(11, _gde_name.opaque, 1420440541);
        }
        {
            let _gde_name = new StringName('rotated');
            __classPrivateFieldGet(this, _a, "f", _Transform2D__bindings).method_rotated = internal.variant_get_ptr_builtin_method(11, _gde_name.opaque, 729597514);
        }
        {
            let _gde_name = new StringName('rotated_local');
            __classPrivateFieldGet(this, _a, "f", _Transform2D__bindings).method_rotated_local = internal.variant_get_ptr_builtin_method(11, _gde_name.opaque, 729597514);
        }
        {
            let _gde_name = new StringName('scaled');
            __classPrivateFieldGet(this, _a, "f", _Transform2D__bindings).method_scaled = internal.variant_get_ptr_builtin_method(11, _gde_name.opaque, 1446323263);
        }
        {
            let _gde_name = new StringName('scaled_local');
            __classPrivateFieldGet(this, _a, "f", _Transform2D__bindings).method_scaled_local = internal.variant_get_ptr_builtin_method(11, _gde_name.opaque, 1446323263);
        }
        {
            let _gde_name = new StringName('translated');
            __classPrivateFieldGet(this, _a, "f", _Transform2D__bindings).method_translated = internal.variant_get_ptr_builtin_method(11, _gde_name.opaque, 1446323263);
        }
        {
            let _gde_name = new StringName('translated_local');
            __classPrivateFieldGet(this, _a, "f", _Transform2D__bindings).method_translated_local = internal.variant_get_ptr_builtin_method(11, _gde_name.opaque, 1446323263);
        }
        {
            let _gde_name = new StringName('determinant');
            __classPrivateFieldGet(this, _a, "f", _Transform2D__bindings).method_determinant = internal.variant_get_ptr_builtin_method(11, _gde_name.opaque, 466405837);
        }
        {
            let _gde_name = new StringName('basis_xform');
            __classPrivateFieldGet(this, _a, "f", _Transform2D__bindings).method_basis_xform = internal.variant_get_ptr_builtin_method(11, _gde_name.opaque, 2026743667);
        }
        {
            let _gde_name = new StringName('basis_xform_inv');
            __classPrivateFieldGet(this, _a, "f", _Transform2D__bindings).method_basis_xform_inv = internal.variant_get_ptr_builtin_method(11, _gde_name.opaque, 2026743667);
        }
        {
            let _gde_name = new StringName('interpolate_with');
            __classPrivateFieldGet(this, _a, "f", _Transform2D__bindings).method_interpolate_with = internal.variant_get_ptr_builtin_method(11, _gde_name.opaque, 359399686);
        }
        {
            let _gde_name = new StringName('is_conformal');
            __classPrivateFieldGet(this, _a, "f", _Transform2D__bindings).method_is_conformal = internal.variant_get_ptr_builtin_method(11, _gde_name.opaque, 3918633141);
        }
        {
            let _gde_name = new StringName('is_equal_approx');
            __classPrivateFieldGet(this, _a, "f", _Transform2D__bindings).method_is_equal_approx = internal.variant_get_ptr_builtin_method(11, _gde_name.opaque, 3837431929);
        }
        {
            let _gde_name = new StringName('is_finite');
            __classPrivateFieldGet(this, _a, "f", _Transform2D__bindings).method_is_finite = internal.variant_get_ptr_builtin_method(11, _gde_name.opaque, 3918633141);
        }
        {
            let _gde_name = new StringName('looking_at');
            __classPrivateFieldGet(this, _a, "f", _Transform2D__bindings).method_looking_at = internal.variant_get_ptr_builtin_method(11, _gde_name.opaque, 1446323263);
        }
    }
    inverse() {
        let ret = new _a();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Transform2D__bindings).method_inverse, this, 11, []);
        return ret;
    }
    affine_inverse() {
        let ret = new _a();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Transform2D__bindings).method_affine_inverse, this, 11, []);
        return ret;
    }
    get_rotation() {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Transform2D__bindings).method_get_rotation, this, 3, []);
        return ret;
    }
    get_origin() {
        let ret = new Vector2();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Transform2D__bindings).method_get_origin, this, 5, []);
        return ret;
    }
    get_scale() {
        let ret = new Vector2();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Transform2D__bindings).method_get_scale, this, 5, []);
        return ret;
    }
    get_skew() {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Transform2D__bindings).method_get_skew, this, 3, []);
        return ret;
    }
    orthonormalized() {
        let ret = new _a();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Transform2D__bindings).method_orthonormalized, this, 11, []);
        return ret;
    }
    rotated(_angle) {
        let ret = new _a();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Transform2D__bindings).method_rotated, this, 11, [_angle]);
        return ret;
    }
    rotated_local(_angle) {
        let ret = new _a();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Transform2D__bindings).method_rotated_local, this, 11, [_angle]);
        return ret;
    }
    scaled(_scale) {
        let ret = new _a();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Transform2D__bindings).method_scaled, this, 11, [_scale]);
        return ret;
    }
    scaled_local(_scale) {
        let ret = new _a();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Transform2D__bindings).method_scaled_local, this, 11, [_scale]);
        return ret;
    }
    translated(_offset) {
        let ret = new _a();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Transform2D__bindings).method_translated, this, 11, [_offset]);
        return ret;
    }
    translated_local(_offset) {
        let ret = new _a();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Transform2D__bindings).method_translated_local, this, 11, [_offset]);
        return ret;
    }
    determinant() {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Transform2D__bindings).method_determinant, this, 3, []);
        return ret;
    }
    basis_xform(_v) {
        let ret = new Vector2();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Transform2D__bindings).method_basis_xform, this, 5, [_v]);
        return ret;
    }
    basis_xform_inv(_v) {
        let ret = new Vector2();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Transform2D__bindings).method_basis_xform_inv, this, 5, [_v]);
        return ret;
    }
    interpolate_with(_xform, _weight) {
        let ret = new _a();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Transform2D__bindings).method_interpolate_with, this, 11, [_xform, _weight]);
        return ret;
    }
    is_conformal() {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Transform2D__bindings).method_is_conformal, this, 1, []);
        return ret;
    }
    is_equal_approx(_xform) {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Transform2D__bindings).method_is_equal_approx, this, 1, [_xform]);
        return ret;
    }
    is_finite() {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Transform2D__bindings).method_is_finite, this, 1, []);
        return ret;
    }
    looking_at(_target) {
        let ret = new _a();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Transform2D__bindings).method_looking_at, this, 11, [_target]);
        return ret;
    }
}
_a = Transform2D;
_Transform2D_SIZE = { value: 24 };
_Transform2D__bindings = { value: new _MethodBindings() };
_Transform2D_initialized = { value: false };
(() => {
    _a._init_bindings();
})();
