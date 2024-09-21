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
var _a, _Plane_SIZE, _Plane__bindings, _Plane_initialized;
import * as internal from '__internal__';
import { _call_builtin_constructor, _call_builtin_method_ptr_ret, _call_builtin_method_ptr_no_ret, _call_builtin_method_ptr_obj_ret, } from '@js_godot/core/builtin_ptrcall';
import { StringName } from '@js_godot/variant/string_name';
import { Variant } from '@js_godot/variant/variant';
import { Vector3 } from '@js_godot/variant/vector3';
import { GodotObject } from "@js_godot/classes/godot_object";
class _MethodBindings {
}
export class Plane {
    constructor(value) {
        this.opaque = new Uint8Array(__classPrivateFieldGet(_a, _a, "f", _Plane_SIZE));
        if (!value) {
            _call_builtin_constructor(__classPrivateFieldGet(_a, _a, "f", _Plane__bindings).constructor_0, this);
        }
        else if (arguments.length == 1 && arguments[0] instanceof _a) {
            let from = arguments[0];
            _call_builtin_constructor(__classPrivateFieldGet(_a, _a, "f", _Plane__bindings).constructor_1, this, [
                from
            ]);
        }
        else if (arguments.length == 1 && arguments[0] instanceof Vector3) {
            let normal = arguments[0];
            _call_builtin_constructor(__classPrivateFieldGet(_a, _a, "f", _Plane__bindings).constructor_2, this, [
                normal
            ]);
        }
        else if (arguments.length == 2 && arguments[0] instanceof Vector3 && typeof arguments[1] == "number") {
            let normal = arguments[0];
            let d = arguments[1];
            _call_builtin_constructor(__classPrivateFieldGet(_a, _a, "f", _Plane__bindings).constructor_3, this, [
                normal, d
            ]);
        }
        else if (arguments.length == 2 && arguments[0] instanceof Vector3 && arguments[1] instanceof Vector3) {
            let normal = arguments[0];
            let point = arguments[1];
            _call_builtin_constructor(__classPrivateFieldGet(_a, _a, "f", _Plane__bindings).constructor_4, this, [
                normal, point
            ]);
        }
        else if (arguments.length == 3 && arguments[0] instanceof Vector3 && arguments[1] instanceof Vector3 && arguments[2] instanceof Vector3) {
            let point1 = arguments[0];
            let point2 = arguments[1];
            let point3 = arguments[2];
            _call_builtin_constructor(__classPrivateFieldGet(_a, _a, "f", _Plane__bindings).constructor_5, this, [
                point1, point2, point3
            ]);
        }
        else if (arguments.length == 4 && typeof arguments[0] == "number" && typeof arguments[1] == "number" && typeof arguments[2] == "number" && typeof arguments[3] == "number") {
            let a = arguments[0];
            let b = arguments[1];
            let c = arguments[2];
            let d = arguments[3];
            _call_builtin_constructor(__classPrivateFieldGet(_a, _a, "f", _Plane__bindings).constructor_6, this, [
                a, b, c, d
            ]);
        }
        else if (value.constructor.name === "Variant") {
            __classPrivateFieldGet(_a, _a, "f", _Plane__bindings).from_variant_constructor(this.opaque, value.opaque);
        }
        else if (value instanceof Uint8Array) {
            this.opaque = value;
        }
    }
    static __init_bindings_constructors_destructor() {
        __classPrivateFieldGet(this, _a, "f", _Plane__bindings).from_variant_constructor = internal.get_variant_to_type_constructor(14);
        __classPrivateFieldGet(this, _a, "f", _Plane__bindings).constructor_0 = internal.variant_get_ptr_constructor(14, 0);
        __classPrivateFieldGet(this, _a, "f", _Plane__bindings).constructor_1 = internal.variant_get_ptr_constructor(14, 1);
        __classPrivateFieldGet(this, _a, "f", _Plane__bindings).constructor_2 = internal.variant_get_ptr_constructor(14, 2);
        __classPrivateFieldGet(this, _a, "f", _Plane__bindings).constructor_3 = internal.variant_get_ptr_constructor(14, 3);
        __classPrivateFieldGet(this, _a, "f", _Plane__bindings).constructor_4 = internal.variant_get_ptr_constructor(14, 4);
        __classPrivateFieldGet(this, _a, "f", _Plane__bindings).constructor_5 = internal.variant_get_ptr_constructor(14, 5);
        __classPrivateFieldGet(this, _a, "f", _Plane__bindings).constructor_6 = internal.variant_get_ptr_constructor(14, 6);
    }
    static async _init_bindings() {
        if (__classPrivateFieldGet(this, _a, "f", _Plane_initialized)) {
            return;
        }
        __classPrivateFieldSet(this, _a, true, "f", _Plane_initialized);
        this.__init_bindings_constructors_destructor();
        {
            let _gde_name = new StringName('normalized');
            __classPrivateFieldGet(this, _a, "f", _Plane__bindings).method_normalized = internal.variant_get_ptr_builtin_method(14, _gde_name.opaque, 1051796340);
        }
        {
            let _gde_name = new StringName('get_center');
            __classPrivateFieldGet(this, _a, "f", _Plane__bindings).method_get_center = internal.variant_get_ptr_builtin_method(14, _gde_name.opaque, 1776574132);
        }
        {
            let _gde_name = new StringName('is_equal_approx');
            __classPrivateFieldGet(this, _a, "f", _Plane__bindings).method_is_equal_approx = internal.variant_get_ptr_builtin_method(14, _gde_name.opaque, 1150170233);
        }
        {
            let _gde_name = new StringName('is_finite');
            __classPrivateFieldGet(this, _a, "f", _Plane__bindings).method_is_finite = internal.variant_get_ptr_builtin_method(14, _gde_name.opaque, 3918633141);
        }
        {
            let _gde_name = new StringName('is_point_over');
            __classPrivateFieldGet(this, _a, "f", _Plane__bindings).method_is_point_over = internal.variant_get_ptr_builtin_method(14, _gde_name.opaque, 1749054343);
        }
        {
            let _gde_name = new StringName('distance_to');
            __classPrivateFieldGet(this, _a, "f", _Plane__bindings).method_distance_to = internal.variant_get_ptr_builtin_method(14, _gde_name.opaque, 1047977935);
        }
        {
            let _gde_name = new StringName('has_point');
            __classPrivateFieldGet(this, _a, "f", _Plane__bindings).method_has_point = internal.variant_get_ptr_builtin_method(14, _gde_name.opaque, 1258189072);
        }
        {
            let _gde_name = new StringName('project');
            __classPrivateFieldGet(this, _a, "f", _Plane__bindings).method_project = internal.variant_get_ptr_builtin_method(14, _gde_name.opaque, 2923479887);
        }
        {
            let _gde_name = new StringName('intersect_3');
            __classPrivateFieldGet(this, _a, "f", _Plane__bindings).method_intersect_3 = internal.variant_get_ptr_builtin_method(14, _gde_name.opaque, 2012052692);
        }
        {
            let _gde_name = new StringName('intersects_ray');
            __classPrivateFieldGet(this, _a, "f", _Plane__bindings).method_intersects_ray = internal.variant_get_ptr_builtin_method(14, _gde_name.opaque, 2048133369);
        }
        {
            let _gde_name = new StringName('intersects_segment');
            __classPrivateFieldGet(this, _a, "f", _Plane__bindings).method_intersects_segment = internal.variant_get_ptr_builtin_method(14, _gde_name.opaque, 2048133369);
        }
    }
    normalized() {
        let ret = new _a();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Plane__bindings).method_normalized, this, 14, []);
        return ret;
    }
    get_center() {
        let ret = new Vector3();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Plane__bindings).method_get_center, this, 9, []);
        return ret;
    }
    is_equal_approx(_to_plane) {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Plane__bindings).method_is_equal_approx, this, 1, [_to_plane]);
        return ret;
    }
    is_finite() {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Plane__bindings).method_is_finite, this, 1, []);
        return ret;
    }
    is_point_over(_point) {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Plane__bindings).method_is_point_over, this, 1, [_point]);
        return ret;
    }
    distance_to(_point) {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Plane__bindings).method_distance_to, this, 3, [_point]);
        return ret;
    }
    has_point(_point, _tolerance) {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Plane__bindings).method_has_point, this, 1, [_point, _tolerance]);
        return ret;
    }
    project(_point) {
        let ret = new Vector3();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Plane__bindings).method_project, this, 9, [_point]);
        return ret;
    }
    intersect_3(_b, _c) {
        let ret = new Variant();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Plane__bindings).method_intersect_3, this, 39, [_b, _c]);
        return ret;
    }
    intersects_ray(_from, _dir) {
        let ret = new Variant();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Plane__bindings).method_intersects_ray, this, 39, [_from, _dir]);
        return ret;
    }
    intersects_segment(_from, _to) {
        let ret = new Variant();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Plane__bindings).method_intersects_segment, this, 39, [_from, _to]);
        return ret;
    }
}
_a = Plane;
_Plane_SIZE = { value: 16 };
_Plane__bindings = { value: new _MethodBindings() };
_Plane_initialized = { value: false };
(() => {
    _a._init_bindings();
})();
