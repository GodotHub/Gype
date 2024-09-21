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
var _a, _Transform3D_SIZE, _Transform3D__bindings, _Transform3D_initialized;
import * as internal from '__internal__';
import { _call_builtin_constructor, _call_builtin_method_ptr_ret, _call_builtin_method_ptr_no_ret, _call_builtin_method_ptr_obj_ret, } from '@js_godot/core/builtin_ptrcall';
import { Projection } from '@js_godot/variant/projection';
import { Vector3 } from '@js_godot/variant/vector3';
import { StringName } from '@js_godot/variant/string_name';
import { Basis } from '@js_godot/variant/basis';
import { GodotObject } from "@js_godot/classes/godot_object";
class _MethodBindings {
}
export class Transform3D {
    constructor(value) {
        this.opaque = new Uint8Array(__classPrivateFieldGet(_a, _a, "f", _Transform3D_SIZE));
        if (!value) {
            _call_builtin_constructor(__classPrivateFieldGet(_a, _a, "f", _Transform3D__bindings).constructor_0, this);
        }
        else if (arguments.length == 1 && arguments[0] instanceof _a) {
            let from = arguments[0];
            _call_builtin_constructor(__classPrivateFieldGet(_a, _a, "f", _Transform3D__bindings).constructor_1, this, [
                from
            ]);
        }
        else if (arguments.length == 2 && arguments[0] instanceof Basis && arguments[1] instanceof Vector3) {
            let basis = arguments[0];
            let origin = arguments[1];
            _call_builtin_constructor(__classPrivateFieldGet(_a, _a, "f", _Transform3D__bindings).constructor_2, this, [
                basis, origin
            ]);
        }
        else if (arguments.length == 4 && arguments[0] instanceof Vector3 && arguments[1] instanceof Vector3 && arguments[2] instanceof Vector3 && arguments[3] instanceof Vector3) {
            let x_axis = arguments[0];
            let y_axis = arguments[1];
            let z_axis = arguments[2];
            let origin = arguments[3];
            _call_builtin_constructor(__classPrivateFieldGet(_a, _a, "f", _Transform3D__bindings).constructor_3, this, [
                x_axis, y_axis, z_axis, origin
            ]);
        }
        else if (arguments.length == 1 && arguments[0] instanceof Projection) {
            let from = arguments[0];
            _call_builtin_constructor(__classPrivateFieldGet(_a, _a, "f", _Transform3D__bindings).constructor_4, this, [
                from
            ]);
        }
        else if (value.constructor.name === "Variant") {
            __classPrivateFieldGet(_a, _a, "f", _Transform3D__bindings).from_variant_constructor(this.opaque, value.opaque);
        }
        else if (value instanceof Uint8Array) {
            this.opaque = value;
        }
    }
    static __init_bindings_constructors_destructor() {
        __classPrivateFieldGet(this, _a, "f", _Transform3D__bindings).from_variant_constructor = internal.get_variant_to_type_constructor(18);
        __classPrivateFieldGet(this, _a, "f", _Transform3D__bindings).constructor_0 = internal.variant_get_ptr_constructor(18, 0);
        __classPrivateFieldGet(this, _a, "f", _Transform3D__bindings).constructor_1 = internal.variant_get_ptr_constructor(18, 1);
        __classPrivateFieldGet(this, _a, "f", _Transform3D__bindings).constructor_2 = internal.variant_get_ptr_constructor(18, 2);
        __classPrivateFieldGet(this, _a, "f", _Transform3D__bindings).constructor_3 = internal.variant_get_ptr_constructor(18, 3);
        __classPrivateFieldGet(this, _a, "f", _Transform3D__bindings).constructor_4 = internal.variant_get_ptr_constructor(18, 4);
    }
    static async _init_bindings() {
        if (__classPrivateFieldGet(this, _a, "f", _Transform3D_initialized)) {
            return;
        }
        __classPrivateFieldSet(this, _a, true, "f", _Transform3D_initialized);
        this.__init_bindings_constructors_destructor();
        {
            let _gde_name = new StringName('inverse');
            __classPrivateFieldGet(this, _a, "f", _Transform3D__bindings).method_inverse = internal.variant_get_ptr_builtin_method(18, _gde_name.opaque, 3816817146);
        }
        {
            let _gde_name = new StringName('affine_inverse');
            __classPrivateFieldGet(this, _a, "f", _Transform3D__bindings).method_affine_inverse = internal.variant_get_ptr_builtin_method(18, _gde_name.opaque, 3816817146);
        }
        {
            let _gde_name = new StringName('orthonormalized');
            __classPrivateFieldGet(this, _a, "f", _Transform3D__bindings).method_orthonormalized = internal.variant_get_ptr_builtin_method(18, _gde_name.opaque, 3816817146);
        }
        {
            let _gde_name = new StringName('rotated');
            __classPrivateFieldGet(this, _a, "f", _Transform3D__bindings).method_rotated = internal.variant_get_ptr_builtin_method(18, _gde_name.opaque, 1563203923);
        }
        {
            let _gde_name = new StringName('rotated_local');
            __classPrivateFieldGet(this, _a, "f", _Transform3D__bindings).method_rotated_local = internal.variant_get_ptr_builtin_method(18, _gde_name.opaque, 1563203923);
        }
        {
            let _gde_name = new StringName('scaled');
            __classPrivateFieldGet(this, _a, "f", _Transform3D__bindings).method_scaled = internal.variant_get_ptr_builtin_method(18, _gde_name.opaque, 1405596198);
        }
        {
            let _gde_name = new StringName('scaled_local');
            __classPrivateFieldGet(this, _a, "f", _Transform3D__bindings).method_scaled_local = internal.variant_get_ptr_builtin_method(18, _gde_name.opaque, 1405596198);
        }
        {
            let _gde_name = new StringName('translated');
            __classPrivateFieldGet(this, _a, "f", _Transform3D__bindings).method_translated = internal.variant_get_ptr_builtin_method(18, _gde_name.opaque, 1405596198);
        }
        {
            let _gde_name = new StringName('translated_local');
            __classPrivateFieldGet(this, _a, "f", _Transform3D__bindings).method_translated_local = internal.variant_get_ptr_builtin_method(18, _gde_name.opaque, 1405596198);
        }
        {
            let _gde_name = new StringName('looking_at');
            __classPrivateFieldGet(this, _a, "f", _Transform3D__bindings).method_looking_at = internal.variant_get_ptr_builtin_method(18, _gde_name.opaque, 90889270);
        }
        {
            let _gde_name = new StringName('interpolate_with');
            __classPrivateFieldGet(this, _a, "f", _Transform3D__bindings).method_interpolate_with = internal.variant_get_ptr_builtin_method(18, _gde_name.opaque, 1786453358);
        }
        {
            let _gde_name = new StringName('is_equal_approx');
            __classPrivateFieldGet(this, _a, "f", _Transform3D__bindings).method_is_equal_approx = internal.variant_get_ptr_builtin_method(18, _gde_name.opaque, 696001652);
        }
        {
            let _gde_name = new StringName('is_finite');
            __classPrivateFieldGet(this, _a, "f", _Transform3D__bindings).method_is_finite = internal.variant_get_ptr_builtin_method(18, _gde_name.opaque, 3918633141);
        }
    }
    inverse() {
        let ret = new _a();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Transform3D__bindings).method_inverse, this, 18, []);
        return ret;
    }
    affine_inverse() {
        let ret = new _a();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Transform3D__bindings).method_affine_inverse, this, 18, []);
        return ret;
    }
    orthonormalized() {
        let ret = new _a();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Transform3D__bindings).method_orthonormalized, this, 18, []);
        return ret;
    }
    rotated(_axis, _angle) {
        let ret = new _a();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Transform3D__bindings).method_rotated, this, 18, [_axis, _angle]);
        return ret;
    }
    rotated_local(_axis, _angle) {
        let ret = new _a();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Transform3D__bindings).method_rotated_local, this, 18, [_axis, _angle]);
        return ret;
    }
    scaled(_scale) {
        let ret = new _a();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Transform3D__bindings).method_scaled, this, 18, [_scale]);
        return ret;
    }
    scaled_local(_scale) {
        let ret = new _a();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Transform3D__bindings).method_scaled_local, this, 18, [_scale]);
        return ret;
    }
    translated(_offset) {
        let ret = new _a();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Transform3D__bindings).method_translated, this, 18, [_offset]);
        return ret;
    }
    translated_local(_offset) {
        let ret = new _a();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Transform3D__bindings).method_translated_local, this, 18, [_offset]);
        return ret;
    }
    looking_at(_target, _up, _use_model_front) {
        let ret = new _a();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Transform3D__bindings).method_looking_at, this, 18, [_target, _up, _use_model_front]);
        return ret;
    }
    interpolate_with(_xform, _weight) {
        let ret = new _a();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Transform3D__bindings).method_interpolate_with, this, 18, [_xform, _weight]);
        return ret;
    }
    is_equal_approx(_xform) {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Transform3D__bindings).method_is_equal_approx, this, 1, [_xform]);
        return ret;
    }
    is_finite() {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Transform3D__bindings).method_is_finite, this, 1, []);
        return ret;
    }
}
_a = Transform3D;
_Transform3D_SIZE = { value: 48 };
_Transform3D__bindings = { value: new _MethodBindings() };
_Transform3D_initialized = { value: false };
(() => {
    _a._init_bindings();
})();
