import * as internal from '__internal__';
import { _call_builtin_constructor, _call_builtin_method_ptr_ret, _call_builtin_method_ptr_no_ret, _call_builtin_method_ptr_obj_ret, } from '@js_godot/core/builtin_ptrcall';
import { Projection } from '@js_godot/variant/projection';
import { Vector3 } from '@js_godot/variant/vector3';
import { StringName } from '@js_godot/variant/string_name';
import { Basis } from '@js_godot/variant/basis';
import { GodotObject } from "@js_godot/classes/godot_object";
class _MethodBindings {
    from_variant_constructor;
    constructor_0;
    constructor_1;
    constructor_2;
    constructor_3;
    constructor_4;
    method_inverse;
    method_affine_inverse;
    method_orthonormalized;
    method_rotated;
    method_rotated_local;
    method_scaled;
    method_scaled_local;
    method_translated;
    method_translated_local;
    method_looking_at;
    method_interpolate_with;
    method_is_equal_approx;
    method_is_finite;
    operator_equal_Variant;
    operator_not_equal_Variant;
    operator_not_;
    operator_multiply_int;
    operator_divide_int;
    operator_multiply_float;
    operator_divide_float;
    operator_multiply_Vector3;
    operator_multiply_Plane;
    operator_multiply_AABB;
    operator_equal_Transform3D;
    operator_not_equal_Transform3D;
    operator_multiply_Transform3D;
    operator_in_Dictionary;
    operator_in_Array;
    operator_multiply_PackedVector3Array;
}
export class Transform3D {
    static #SIZE = 48;
    opaque = new Uint8Array(Transform3D.#SIZE);
    static #_bindings = new _MethodBindings();
    static #initialized = false;
    constructor(value) {
        if (!value) {
            _call_builtin_constructor(Transform3D.#_bindings.constructor_0, this);
        }
        else if (arguments.length == 1 && arguments[0] instanceof Transform3D) {
            let from = arguments[0];
            _call_builtin_constructor(Transform3D.#_bindings.constructor_1, this, [
                from
            ]);
        }
        else if (arguments.length == 2 && arguments[0] instanceof Basis && arguments[1] instanceof Vector3) {
            let basis = arguments[0];
            let origin = arguments[1];
            _call_builtin_constructor(Transform3D.#_bindings.constructor_2, this, [
                basis, origin
            ]);
        }
        else if (arguments.length == 4 && arguments[0] instanceof Vector3 && arguments[1] instanceof Vector3 && arguments[2] instanceof Vector3 && arguments[3] instanceof Vector3) {
            let x_axis = arguments[0];
            let y_axis = arguments[1];
            let z_axis = arguments[2];
            let origin = arguments[3];
            _call_builtin_constructor(Transform3D.#_bindings.constructor_3, this, [
                x_axis, y_axis, z_axis, origin
            ]);
        }
        else if (arguments.length == 1 && arguments[0] instanceof Projection) {
            let from = arguments[0];
            _call_builtin_constructor(Transform3D.#_bindings.constructor_4, this, [
                from
            ]);
        }
        else if (value.constructor.name === "Variant") {
            Transform3D.#_bindings.from_variant_constructor(this.opaque, value.opaque);
        }
        else if (value instanceof Uint8Array) {
            this.opaque = value;
        }
    }
    static __init_bindings_constructors_destructor() {
        this.#_bindings.from_variant_constructor = internal.get_variant_to_type_constructor(18);
        this.#_bindings.constructor_0 = internal.variant_get_ptr_constructor(18, 0);
        this.#_bindings.constructor_1 = internal.variant_get_ptr_constructor(18, 1);
        this.#_bindings.constructor_2 = internal.variant_get_ptr_constructor(18, 2);
        this.#_bindings.constructor_3 = internal.variant_get_ptr_constructor(18, 3);
        this.#_bindings.constructor_4 = internal.variant_get_ptr_constructor(18, 4);
    }
    static async _init_bindings() {
        if (this.#initialized) {
            return;
        }
        this.#initialized = true;
        this.__init_bindings_constructors_destructor();
        {
            let _gde_name = new StringName('inverse');
            this.#_bindings.method_inverse = internal.variant_get_ptr_builtin_method(18, _gde_name.opaque, 3816817146);
        }
        {
            let _gde_name = new StringName('affine_inverse');
            this.#_bindings.method_affine_inverse = internal.variant_get_ptr_builtin_method(18, _gde_name.opaque, 3816817146);
        }
        {
            let _gde_name = new StringName('orthonormalized');
            this.#_bindings.method_orthonormalized = internal.variant_get_ptr_builtin_method(18, _gde_name.opaque, 3816817146);
        }
        {
            let _gde_name = new StringName('rotated');
            this.#_bindings.method_rotated = internal.variant_get_ptr_builtin_method(18, _gde_name.opaque, 1563203923);
        }
        {
            let _gde_name = new StringName('rotated_local');
            this.#_bindings.method_rotated_local = internal.variant_get_ptr_builtin_method(18, _gde_name.opaque, 1563203923);
        }
        {
            let _gde_name = new StringName('scaled');
            this.#_bindings.method_scaled = internal.variant_get_ptr_builtin_method(18, _gde_name.opaque, 1405596198);
        }
        {
            let _gde_name = new StringName('scaled_local');
            this.#_bindings.method_scaled_local = internal.variant_get_ptr_builtin_method(18, _gde_name.opaque, 1405596198);
        }
        {
            let _gde_name = new StringName('translated');
            this.#_bindings.method_translated = internal.variant_get_ptr_builtin_method(18, _gde_name.opaque, 1405596198);
        }
        {
            let _gde_name = new StringName('translated_local');
            this.#_bindings.method_translated_local = internal.variant_get_ptr_builtin_method(18, _gde_name.opaque, 1405596198);
        }
        {
            let _gde_name = new StringName('looking_at');
            this.#_bindings.method_looking_at = internal.variant_get_ptr_builtin_method(18, _gde_name.opaque, 90889270);
        }
        {
            let _gde_name = new StringName('interpolate_with');
            this.#_bindings.method_interpolate_with = internal.variant_get_ptr_builtin_method(18, _gde_name.opaque, 1786453358);
        }
        {
            let _gde_name = new StringName('is_equal_approx');
            this.#_bindings.method_is_equal_approx = internal.variant_get_ptr_builtin_method(18, _gde_name.opaque, 696001652);
        }
        {
            let _gde_name = new StringName('is_finite');
            this.#_bindings.method_is_finite = internal.variant_get_ptr_builtin_method(18, _gde_name.opaque, 3918633141);
        }
    }
    inverse() {
        let ret = new Transform3D();
        ret.opaque = _call_builtin_method_ptr_ret(Transform3D.#_bindings.method_inverse, this, 18, []);
        return ret;
    }
    affine_inverse() {
        let ret = new Transform3D();
        ret.opaque = _call_builtin_method_ptr_ret(Transform3D.#_bindings.method_affine_inverse, this, 18, []);
        return ret;
    }
    orthonormalized() {
        let ret = new Transform3D();
        ret.opaque = _call_builtin_method_ptr_ret(Transform3D.#_bindings.method_orthonormalized, this, 18, []);
        return ret;
    }
    rotated(_axis, _angle) {
        let ret = new Transform3D();
        ret.opaque = _call_builtin_method_ptr_ret(Transform3D.#_bindings.method_rotated, this, 18, [_axis, _angle]);
        return ret;
    }
    rotated_local(_axis, _angle) {
        let ret = new Transform3D();
        ret.opaque = _call_builtin_method_ptr_ret(Transform3D.#_bindings.method_rotated_local, this, 18, [_axis, _angle]);
        return ret;
    }
    scaled(_scale) {
        let ret = new Transform3D();
        ret.opaque = _call_builtin_method_ptr_ret(Transform3D.#_bindings.method_scaled, this, 18, [_scale]);
        return ret;
    }
    scaled_local(_scale) {
        let ret = new Transform3D();
        ret.opaque = _call_builtin_method_ptr_ret(Transform3D.#_bindings.method_scaled_local, this, 18, [_scale]);
        return ret;
    }
    translated(_offset) {
        let ret = new Transform3D();
        ret.opaque = _call_builtin_method_ptr_ret(Transform3D.#_bindings.method_translated, this, 18, [_offset]);
        return ret;
    }
    translated_local(_offset) {
        let ret = new Transform3D();
        ret.opaque = _call_builtin_method_ptr_ret(Transform3D.#_bindings.method_translated_local, this, 18, [_offset]);
        return ret;
    }
    looking_at(_target, _up, _use_model_front) {
        let ret = new Transform3D();
        ret.opaque = _call_builtin_method_ptr_ret(Transform3D.#_bindings.method_looking_at, this, 18, [_target, _up, _use_model_front]);
        return ret;
    }
    interpolate_with(_xform, _weight) {
        let ret = new Transform3D();
        ret.opaque = _call_builtin_method_ptr_ret(Transform3D.#_bindings.method_interpolate_with, this, 18, [_xform, _weight]);
        return ret;
    }
    is_equal_approx(_xform) {
        let ret;
        ret = _call_builtin_method_ptr_ret(Transform3D.#_bindings.method_is_equal_approx, this, 1, [_xform]);
        return ret;
    }
    is_finite() {
        let ret;
        ret = _call_builtin_method_ptr_ret(Transform3D.#_bindings.method_is_finite, this, 1, []);
        return ret;
    }
    static {
        this._init_bindings();
    }
}
