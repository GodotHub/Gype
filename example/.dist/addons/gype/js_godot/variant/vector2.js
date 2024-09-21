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
var _a, _Vector2_SIZE, _Vector2__bindings, _Vector2_initialized;
import * as internal from '__internal__';
import { _call_builtin_constructor, _call_builtin_method_ptr_ret, _call_builtin_method_ptr_no_ret, _call_builtin_method_ptr_obj_ret, } from '@js_godot/core/builtin_ptrcall';
import { StringName } from '@js_godot/variant/string_name';
import { Vector2i } from '@js_godot/variant/vector2i';
import { GodotObject } from "@js_godot/classes/godot_object";
class _MethodBindings {
}
export class Vector2 {
    constructor(value) {
        this.opaque = new Uint8Array(__classPrivateFieldGet(_a, _a, "f", _Vector2_SIZE));
        if (!value) {
            _call_builtin_constructor(__classPrivateFieldGet(_a, _a, "f", _Vector2__bindings).constructor_0, this);
        }
        else if (arguments.length == 1 && arguments[0] instanceof _a) {
            let from = arguments[0];
            _call_builtin_constructor(__classPrivateFieldGet(_a, _a, "f", _Vector2__bindings).constructor_1, this, [
                from
            ]);
        }
        else if (arguments.length == 1 && arguments[0] instanceof Vector2i) {
            let from = arguments[0];
            _call_builtin_constructor(__classPrivateFieldGet(_a, _a, "f", _Vector2__bindings).constructor_2, this, [
                from
            ]);
        }
        else if (arguments.length == 2 && typeof arguments[0] == "number" && typeof arguments[1] == "number") {
            let x = arguments[0];
            let y = arguments[1];
            _call_builtin_constructor(__classPrivateFieldGet(_a, _a, "f", _Vector2__bindings).constructor_3, this, [
                x, y
            ]);
        }
        else if (value.constructor.name === "Variant") {
            __classPrivateFieldGet(_a, _a, "f", _Vector2__bindings).from_variant_constructor(this.opaque, value.opaque);
        }
        else if (value instanceof Uint8Array) {
            this.opaque = value;
        }
    }
    static __init_bindings_constructors_destructor() {
        __classPrivateFieldGet(this, _a, "f", _Vector2__bindings).from_variant_constructor = internal.get_variant_to_type_constructor(5);
        __classPrivateFieldGet(this, _a, "f", _Vector2__bindings).constructor_0 = internal.variant_get_ptr_constructor(5, 0);
        __classPrivateFieldGet(this, _a, "f", _Vector2__bindings).constructor_1 = internal.variant_get_ptr_constructor(5, 1);
        __classPrivateFieldGet(this, _a, "f", _Vector2__bindings).constructor_2 = internal.variant_get_ptr_constructor(5, 2);
        __classPrivateFieldGet(this, _a, "f", _Vector2__bindings).constructor_3 = internal.variant_get_ptr_constructor(5, 3);
    }
    static async _init_bindings() {
        if (__classPrivateFieldGet(this, _a, "f", _Vector2_initialized)) {
            return;
        }
        __classPrivateFieldSet(this, _a, true, "f", _Vector2_initialized);
        this.__init_bindings_constructors_destructor();
        {
            let _gde_name = new StringName('angle');
            __classPrivateFieldGet(this, _a, "f", _Vector2__bindings).method_angle = internal.variant_get_ptr_builtin_method(5, _gde_name.opaque, 466405837);
        }
        {
            let _gde_name = new StringName('angle_to');
            __classPrivateFieldGet(this, _a, "f", _Vector2__bindings).method_angle_to = internal.variant_get_ptr_builtin_method(5, _gde_name.opaque, 3819070308);
        }
        {
            let _gde_name = new StringName('angle_to_point');
            __classPrivateFieldGet(this, _a, "f", _Vector2__bindings).method_angle_to_point = internal.variant_get_ptr_builtin_method(5, _gde_name.opaque, 3819070308);
        }
        {
            let _gde_name = new StringName('direction_to');
            __classPrivateFieldGet(this, _a, "f", _Vector2__bindings).method_direction_to = internal.variant_get_ptr_builtin_method(5, _gde_name.opaque, 2026743667);
        }
        {
            let _gde_name = new StringName('distance_to');
            __classPrivateFieldGet(this, _a, "f", _Vector2__bindings).method_distance_to = internal.variant_get_ptr_builtin_method(5, _gde_name.opaque, 3819070308);
        }
        {
            let _gde_name = new StringName('distance_squared_to');
            __classPrivateFieldGet(this, _a, "f", _Vector2__bindings).method_distance_squared_to = internal.variant_get_ptr_builtin_method(5, _gde_name.opaque, 3819070308);
        }
        {
            let _gde_name = new StringName('length');
            __classPrivateFieldGet(this, _a, "f", _Vector2__bindings).method_length = internal.variant_get_ptr_builtin_method(5, _gde_name.opaque, 466405837);
        }
        {
            let _gde_name = new StringName('length_squared');
            __classPrivateFieldGet(this, _a, "f", _Vector2__bindings).method_length_squared = internal.variant_get_ptr_builtin_method(5, _gde_name.opaque, 466405837);
        }
        {
            let _gde_name = new StringName('limit_length');
            __classPrivateFieldGet(this, _a, "f", _Vector2__bindings).method_limit_length = internal.variant_get_ptr_builtin_method(5, _gde_name.opaque, 2544004089);
        }
        {
            let _gde_name = new StringName('normalized');
            __classPrivateFieldGet(this, _a, "f", _Vector2__bindings).method_normalized = internal.variant_get_ptr_builtin_method(5, _gde_name.opaque, 2428350749);
        }
        {
            let _gde_name = new StringName('is_normalized');
            __classPrivateFieldGet(this, _a, "f", _Vector2__bindings).method_is_normalized = internal.variant_get_ptr_builtin_method(5, _gde_name.opaque, 3918633141);
        }
        {
            let _gde_name = new StringName('is_equal_approx');
            __classPrivateFieldGet(this, _a, "f", _Vector2__bindings).method_is_equal_approx = internal.variant_get_ptr_builtin_method(5, _gde_name.opaque, 3190634762);
        }
        {
            let _gde_name = new StringName('is_zero_approx');
            __classPrivateFieldGet(this, _a, "f", _Vector2__bindings).method_is_zero_approx = internal.variant_get_ptr_builtin_method(5, _gde_name.opaque, 3918633141);
        }
        {
            let _gde_name = new StringName('is_finite');
            __classPrivateFieldGet(this, _a, "f", _Vector2__bindings).method_is_finite = internal.variant_get_ptr_builtin_method(5, _gde_name.opaque, 3918633141);
        }
        {
            let _gde_name = new StringName('posmod');
            __classPrivateFieldGet(this, _a, "f", _Vector2__bindings).method_posmod = internal.variant_get_ptr_builtin_method(5, _gde_name.opaque, 2544004089);
        }
        {
            let _gde_name = new StringName('posmodv');
            __classPrivateFieldGet(this, _a, "f", _Vector2__bindings).method_posmodv = internal.variant_get_ptr_builtin_method(5, _gde_name.opaque, 2026743667);
        }
        {
            let _gde_name = new StringName('project');
            __classPrivateFieldGet(this, _a, "f", _Vector2__bindings).method_project = internal.variant_get_ptr_builtin_method(5, _gde_name.opaque, 2026743667);
        }
        {
            let _gde_name = new StringName('lerp');
            __classPrivateFieldGet(this, _a, "f", _Vector2__bindings).method_lerp = internal.variant_get_ptr_builtin_method(5, _gde_name.opaque, 4250033116);
        }
        {
            let _gde_name = new StringName('slerp');
            __classPrivateFieldGet(this, _a, "f", _Vector2__bindings).method_slerp = internal.variant_get_ptr_builtin_method(5, _gde_name.opaque, 4250033116);
        }
        {
            let _gde_name = new StringName('cubic_interpolate');
            __classPrivateFieldGet(this, _a, "f", _Vector2__bindings).method_cubic_interpolate = internal.variant_get_ptr_builtin_method(5, _gde_name.opaque, 193522989);
        }
        {
            let _gde_name = new StringName('cubic_interpolate_in_time');
            __classPrivateFieldGet(this, _a, "f", _Vector2__bindings).method_cubic_interpolate_in_time = internal.variant_get_ptr_builtin_method(5, _gde_name.opaque, 1957055074);
        }
        {
            let _gde_name = new StringName('bezier_interpolate');
            __classPrivateFieldGet(this, _a, "f", _Vector2__bindings).method_bezier_interpolate = internal.variant_get_ptr_builtin_method(5, _gde_name.opaque, 193522989);
        }
        {
            let _gde_name = new StringName('bezier_derivative');
            __classPrivateFieldGet(this, _a, "f", _Vector2__bindings).method_bezier_derivative = internal.variant_get_ptr_builtin_method(5, _gde_name.opaque, 193522989);
        }
        {
            let _gde_name = new StringName('max_axis_index');
            __classPrivateFieldGet(this, _a, "f", _Vector2__bindings).method_max_axis_index = internal.variant_get_ptr_builtin_method(5, _gde_name.opaque, 3173160232);
        }
        {
            let _gde_name = new StringName('min_axis_index');
            __classPrivateFieldGet(this, _a, "f", _Vector2__bindings).method_min_axis_index = internal.variant_get_ptr_builtin_method(5, _gde_name.opaque, 3173160232);
        }
        {
            let _gde_name = new StringName('move_toward');
            __classPrivateFieldGet(this, _a, "f", _Vector2__bindings).method_move_toward = internal.variant_get_ptr_builtin_method(5, _gde_name.opaque, 4250033116);
        }
        {
            let _gde_name = new StringName('rotated');
            __classPrivateFieldGet(this, _a, "f", _Vector2__bindings).method_rotated = internal.variant_get_ptr_builtin_method(5, _gde_name.opaque, 2544004089);
        }
        {
            let _gde_name = new StringName('orthogonal');
            __classPrivateFieldGet(this, _a, "f", _Vector2__bindings).method_orthogonal = internal.variant_get_ptr_builtin_method(5, _gde_name.opaque, 2428350749);
        }
        {
            let _gde_name = new StringName('floor');
            __classPrivateFieldGet(this, _a, "f", _Vector2__bindings).method_floor = internal.variant_get_ptr_builtin_method(5, _gde_name.opaque, 2428350749);
        }
        {
            let _gde_name = new StringName('ceil');
            __classPrivateFieldGet(this, _a, "f", _Vector2__bindings).method_ceil = internal.variant_get_ptr_builtin_method(5, _gde_name.opaque, 2428350749);
        }
        {
            let _gde_name = new StringName('round');
            __classPrivateFieldGet(this, _a, "f", _Vector2__bindings).method_round = internal.variant_get_ptr_builtin_method(5, _gde_name.opaque, 2428350749);
        }
        {
            let _gde_name = new StringName('aspect');
            __classPrivateFieldGet(this, _a, "f", _Vector2__bindings).method_aspect = internal.variant_get_ptr_builtin_method(5, _gde_name.opaque, 466405837);
        }
        {
            let _gde_name = new StringName('dot');
            __classPrivateFieldGet(this, _a, "f", _Vector2__bindings).method_dot = internal.variant_get_ptr_builtin_method(5, _gde_name.opaque, 3819070308);
        }
        {
            let _gde_name = new StringName('slide');
            __classPrivateFieldGet(this, _a, "f", _Vector2__bindings).method_slide = internal.variant_get_ptr_builtin_method(5, _gde_name.opaque, 2026743667);
        }
        {
            let _gde_name = new StringName('bounce');
            __classPrivateFieldGet(this, _a, "f", _Vector2__bindings).method_bounce = internal.variant_get_ptr_builtin_method(5, _gde_name.opaque, 2026743667);
        }
        {
            let _gde_name = new StringName('reflect');
            __classPrivateFieldGet(this, _a, "f", _Vector2__bindings).method_reflect = internal.variant_get_ptr_builtin_method(5, _gde_name.opaque, 2026743667);
        }
        {
            let _gde_name = new StringName('cross');
            __classPrivateFieldGet(this, _a, "f", _Vector2__bindings).method_cross = internal.variant_get_ptr_builtin_method(5, _gde_name.opaque, 3819070308);
        }
        {
            let _gde_name = new StringName('abs');
            __classPrivateFieldGet(this, _a, "f", _Vector2__bindings).method_abs = internal.variant_get_ptr_builtin_method(5, _gde_name.opaque, 2428350749);
        }
        {
            let _gde_name = new StringName('sign');
            __classPrivateFieldGet(this, _a, "f", _Vector2__bindings).method_sign = internal.variant_get_ptr_builtin_method(5, _gde_name.opaque, 2428350749);
        }
        {
            let _gde_name = new StringName('clamp');
            __classPrivateFieldGet(this, _a, "f", _Vector2__bindings).method_clamp = internal.variant_get_ptr_builtin_method(5, _gde_name.opaque, 318031021);
        }
        {
            let _gde_name = new StringName('clampf');
            __classPrivateFieldGet(this, _a, "f", _Vector2__bindings).method_clampf = internal.variant_get_ptr_builtin_method(5, _gde_name.opaque, 3464402636);
        }
        {
            let _gde_name = new StringName('snapped');
            __classPrivateFieldGet(this, _a, "f", _Vector2__bindings).method_snapped = internal.variant_get_ptr_builtin_method(5, _gde_name.opaque, 2026743667);
        }
        {
            let _gde_name = new StringName('snappedf');
            __classPrivateFieldGet(this, _a, "f", _Vector2__bindings).method_snappedf = internal.variant_get_ptr_builtin_method(5, _gde_name.opaque, 2544004089);
        }
        {
            let _gde_name = new StringName('min');
            __classPrivateFieldGet(this, _a, "f", _Vector2__bindings).method_min = internal.variant_get_ptr_builtin_method(5, _gde_name.opaque, 2026743667);
        }
        {
            let _gde_name = new StringName('minf');
            __classPrivateFieldGet(this, _a, "f", _Vector2__bindings).method_minf = internal.variant_get_ptr_builtin_method(5, _gde_name.opaque, 2544004089);
        }
        {
            let _gde_name = new StringName('max');
            __classPrivateFieldGet(this, _a, "f", _Vector2__bindings).method_max = internal.variant_get_ptr_builtin_method(5, _gde_name.opaque, 2026743667);
        }
        {
            let _gde_name = new StringName('maxf');
            __classPrivateFieldGet(this, _a, "f", _Vector2__bindings).method_maxf = internal.variant_get_ptr_builtin_method(5, _gde_name.opaque, 2544004089);
        }
        {
            let _gde_name = new StringName('from_angle');
            __classPrivateFieldGet(this, _a, "f", _Vector2__bindings).method_from_angle = internal.variant_get_ptr_builtin_method(5, _gde_name.opaque, 889263119);
        }
    }
    angle() {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Vector2__bindings).method_angle, this, 3, []);
        return ret;
    }
    angle_to(_to) {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Vector2__bindings).method_angle_to, this, 3, [_to]);
        return ret;
    }
    angle_to_point(_to) {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Vector2__bindings).method_angle_to_point, this, 3, [_to]);
        return ret;
    }
    direction_to(_to) {
        let ret = new _a();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Vector2__bindings).method_direction_to, this, 5, [_to]);
        return ret;
    }
    distance_to(_to) {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Vector2__bindings).method_distance_to, this, 3, [_to]);
        return ret;
    }
    distance_squared_to(_to) {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Vector2__bindings).method_distance_squared_to, this, 3, [_to]);
        return ret;
    }
    length() {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Vector2__bindings).method_length, this, 3, []);
        return ret;
    }
    length_squared() {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Vector2__bindings).method_length_squared, this, 3, []);
        return ret;
    }
    limit_length(_length) {
        let ret = new _a();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Vector2__bindings).method_limit_length, this, 5, [_length]);
        return ret;
    }
    normalized() {
        let ret = new _a();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Vector2__bindings).method_normalized, this, 5, []);
        return ret;
    }
    is_normalized() {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Vector2__bindings).method_is_normalized, this, 1, []);
        return ret;
    }
    is_equal_approx(_to) {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Vector2__bindings).method_is_equal_approx, this, 1, [_to]);
        return ret;
    }
    is_zero_approx() {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Vector2__bindings).method_is_zero_approx, this, 1, []);
        return ret;
    }
    is_finite() {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Vector2__bindings).method_is_finite, this, 1, []);
        return ret;
    }
    posmod(_mod) {
        let ret = new _a();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Vector2__bindings).method_posmod, this, 5, [_mod]);
        return ret;
    }
    posmodv(_modv) {
        let ret = new _a();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Vector2__bindings).method_posmodv, this, 5, [_modv]);
        return ret;
    }
    project(_b) {
        let ret = new _a();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Vector2__bindings).method_project, this, 5, [_b]);
        return ret;
    }
    lerp(_to, _weight) {
        let ret = new _a();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Vector2__bindings).method_lerp, this, 5, [_to, _weight]);
        return ret;
    }
    slerp(_to, _weight) {
        let ret = new _a();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Vector2__bindings).method_slerp, this, 5, [_to, _weight]);
        return ret;
    }
    cubic_interpolate(_b, _pre_a, _post_b, _weight) {
        let ret = new _a();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Vector2__bindings).method_cubic_interpolate, this, 5, [_b, _pre_a, _post_b, _weight]);
        return ret;
    }
    cubic_interpolate_in_time(_b, _pre_a, _post_b, _weight, _b_t, _pre_a_t, _post_b_t) {
        let ret = new _a();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Vector2__bindings).method_cubic_interpolate_in_time, this, 5, [_b, _pre_a, _post_b, _weight, _b_t, _pre_a_t, _post_b_t]);
        return ret;
    }
    bezier_interpolate(_control_1, _control_2, _end, _t) {
        let ret = new _a();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Vector2__bindings).method_bezier_interpolate, this, 5, [_control_1, _control_2, _end, _t]);
        return ret;
    }
    bezier_derivative(_control_1, _control_2, _end, _t) {
        let ret = new _a();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Vector2__bindings).method_bezier_derivative, this, 5, [_control_1, _control_2, _end, _t]);
        return ret;
    }
    max_axis_index() {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Vector2__bindings).method_max_axis_index, this, 2, []);
        return ret;
    }
    min_axis_index() {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Vector2__bindings).method_min_axis_index, this, 2, []);
        return ret;
    }
    move_toward(_to, _delta) {
        let ret = new _a();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Vector2__bindings).method_move_toward, this, 5, [_to, _delta]);
        return ret;
    }
    rotated(_angle) {
        let ret = new _a();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Vector2__bindings).method_rotated, this, 5, [_angle]);
        return ret;
    }
    orthogonal() {
        let ret = new _a();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Vector2__bindings).method_orthogonal, this, 5, []);
        return ret;
    }
    floor() {
        let ret = new _a();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Vector2__bindings).method_floor, this, 5, []);
        return ret;
    }
    ceil() {
        let ret = new _a();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Vector2__bindings).method_ceil, this, 5, []);
        return ret;
    }
    round() {
        let ret = new _a();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Vector2__bindings).method_round, this, 5, []);
        return ret;
    }
    aspect() {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Vector2__bindings).method_aspect, this, 3, []);
        return ret;
    }
    dot(_with) {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Vector2__bindings).method_dot, this, 3, [_with]);
        return ret;
    }
    slide(_n) {
        let ret = new _a();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Vector2__bindings).method_slide, this, 5, [_n]);
        return ret;
    }
    bounce(_n) {
        let ret = new _a();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Vector2__bindings).method_bounce, this, 5, [_n]);
        return ret;
    }
    reflect(_line) {
        let ret = new _a();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Vector2__bindings).method_reflect, this, 5, [_line]);
        return ret;
    }
    cross(_with) {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Vector2__bindings).method_cross, this, 3, [_with]);
        return ret;
    }
    abs() {
        let ret = new _a();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Vector2__bindings).method_abs, this, 5, []);
        return ret;
    }
    sign() {
        let ret = new _a();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Vector2__bindings).method_sign, this, 5, []);
        return ret;
    }
    clamp(_min, _max) {
        let ret = new _a();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Vector2__bindings).method_clamp, this, 5, [_min, _max]);
        return ret;
    }
    clampf(_min, _max) {
        let ret = new _a();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Vector2__bindings).method_clampf, this, 5, [_min, _max]);
        return ret;
    }
    snapped(_step) {
        let ret = new _a();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Vector2__bindings).method_snapped, this, 5, [_step]);
        return ret;
    }
    snappedf(_step) {
        let ret = new _a();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Vector2__bindings).method_snappedf, this, 5, [_step]);
        return ret;
    }
    min(_with) {
        let ret = new _a();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Vector2__bindings).method_min, this, 5, [_with]);
        return ret;
    }
    minf(_with) {
        let ret = new _a();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Vector2__bindings).method_minf, this, 5, [_with]);
        return ret;
    }
    max(_with) {
        let ret = new _a();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Vector2__bindings).method_max, this, 5, [_with]);
        return ret;
    }
    maxf(_with) {
        let ret = new _a();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Vector2__bindings).method_maxf, this, 5, [_with]);
        return ret;
    }
    from_angle(_angle) {
        let ret = new _a();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Vector2__bindings).method_from_angle, this, 5, [_angle]);
        return ret;
    }
}
_a = Vector2;
_Vector2_SIZE = { value: 8 };
_Vector2__bindings = { value: new _MethodBindings() };
_Vector2_initialized = { value: false };
(() => {
    _a._init_bindings();
})();
