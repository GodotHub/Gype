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
var _a, _AABB_SIZE, _AABB__bindings, _AABB_initialized;
import * as internal from '__internal__';
import { _call_builtin_constructor, _call_builtin_method_ptr_ret, _call_builtin_method_ptr_no_ret, _call_builtin_method_ptr_obj_ret, } from '@js_godot/core/builtin_ptrcall';
import { Vector3 } from '@js_godot/variant/vector3';
import { StringName } from '@js_godot/variant/string_name';
import { Plane } from '@js_godot/variant/plane';
import { Variant } from '@js_godot/variant/variant';
import { GodotObject } from "@js_godot/classes/godot_object";
class _MethodBindings {
}
export class AABB {
    constructor(value) {
        this.opaque = new Uint8Array(__classPrivateFieldGet(_a, _a, "f", _AABB_SIZE));
        if (!value) {
            _call_builtin_constructor(__classPrivateFieldGet(_a, _a, "f", _AABB__bindings).constructor_0, this);
        }
        else if (arguments.length == 1 && arguments[0] instanceof _a) {
            let from = arguments[0];
            _call_builtin_constructor(__classPrivateFieldGet(_a, _a, "f", _AABB__bindings).constructor_1, this, [
                from
            ]);
        }
        else if (arguments.length == 2 && arguments[0] instanceof Vector3 && arguments[1] instanceof Vector3) {
            let position = arguments[0];
            let size = arguments[1];
            _call_builtin_constructor(__classPrivateFieldGet(_a, _a, "f", _AABB__bindings).constructor_2, this, [
                position, size
            ]);
        }
        else if (value.constructor.name === "Variant") {
            __classPrivateFieldGet(_a, _a, "f", _AABB__bindings).from_variant_constructor(this.opaque, value.opaque);
        }
        else if (value instanceof Uint8Array) {
            this.opaque = value;
        }
    }
    static __init_bindings_constructors_destructor() {
        __classPrivateFieldGet(this, _a, "f", _AABB__bindings).from_variant_constructor = internal.get_variant_to_type_constructor(16);
        __classPrivateFieldGet(this, _a, "f", _AABB__bindings).constructor_0 = internal.variant_get_ptr_constructor(16, 0);
        __classPrivateFieldGet(this, _a, "f", _AABB__bindings).constructor_1 = internal.variant_get_ptr_constructor(16, 1);
        __classPrivateFieldGet(this, _a, "f", _AABB__bindings).constructor_2 = internal.variant_get_ptr_constructor(16, 2);
    }
    static async _init_bindings() {
        if (__classPrivateFieldGet(this, _a, "f", _AABB_initialized)) {
            return;
        }
        __classPrivateFieldSet(this, _a, true, "f", _AABB_initialized);
        this.__init_bindings_constructors_destructor();
        {
            let _gde_name = new StringName('abs');
            __classPrivateFieldGet(this, _a, "f", _AABB__bindings).method_abs = internal.variant_get_ptr_builtin_method(16, _gde_name.opaque, 1576868580);
        }
        {
            let _gde_name = new StringName('get_center');
            __classPrivateFieldGet(this, _a, "f", _AABB__bindings).method_get_center = internal.variant_get_ptr_builtin_method(16, _gde_name.opaque, 1776574132);
        }
        {
            let _gde_name = new StringName('get_volume');
            __classPrivateFieldGet(this, _a, "f", _AABB__bindings).method_get_volume = internal.variant_get_ptr_builtin_method(16, _gde_name.opaque, 466405837);
        }
        {
            let _gde_name = new StringName('has_volume');
            __classPrivateFieldGet(this, _a, "f", _AABB__bindings).method_has_volume = internal.variant_get_ptr_builtin_method(16, _gde_name.opaque, 3918633141);
        }
        {
            let _gde_name = new StringName('has_surface');
            __classPrivateFieldGet(this, _a, "f", _AABB__bindings).method_has_surface = internal.variant_get_ptr_builtin_method(16, _gde_name.opaque, 3918633141);
        }
        {
            let _gde_name = new StringName('has_point');
            __classPrivateFieldGet(this, _a, "f", _AABB__bindings).method_has_point = internal.variant_get_ptr_builtin_method(16, _gde_name.opaque, 1749054343);
        }
        {
            let _gde_name = new StringName('is_equal_approx');
            __classPrivateFieldGet(this, _a, "f", _AABB__bindings).method_is_equal_approx = internal.variant_get_ptr_builtin_method(16, _gde_name.opaque, 299946684);
        }
        {
            let _gde_name = new StringName('is_finite');
            __classPrivateFieldGet(this, _a, "f", _AABB__bindings).method_is_finite = internal.variant_get_ptr_builtin_method(16, _gde_name.opaque, 3918633141);
        }
        {
            let _gde_name = new StringName('intersects');
            __classPrivateFieldGet(this, _a, "f", _AABB__bindings).method_intersects = internal.variant_get_ptr_builtin_method(16, _gde_name.opaque, 299946684);
        }
        {
            let _gde_name = new StringName('encloses');
            __classPrivateFieldGet(this, _a, "f", _AABB__bindings).method_encloses = internal.variant_get_ptr_builtin_method(16, _gde_name.opaque, 299946684);
        }
        {
            let _gde_name = new StringName('intersects_plane');
            __classPrivateFieldGet(this, _a, "f", _AABB__bindings).method_intersects_plane = internal.variant_get_ptr_builtin_method(16, _gde_name.opaque, 1150170233);
        }
        {
            let _gde_name = new StringName('intersection');
            __classPrivateFieldGet(this, _a, "f", _AABB__bindings).method_intersection = internal.variant_get_ptr_builtin_method(16, _gde_name.opaque, 1271470306);
        }
        {
            let _gde_name = new StringName('merge');
            __classPrivateFieldGet(this, _a, "f", _AABB__bindings).method_merge = internal.variant_get_ptr_builtin_method(16, _gde_name.opaque, 1271470306);
        }
        {
            let _gde_name = new StringName('expand');
            __classPrivateFieldGet(this, _a, "f", _AABB__bindings).method_expand = internal.variant_get_ptr_builtin_method(16, _gde_name.opaque, 2851643018);
        }
        {
            let _gde_name = new StringName('grow');
            __classPrivateFieldGet(this, _a, "f", _AABB__bindings).method_grow = internal.variant_get_ptr_builtin_method(16, _gde_name.opaque, 239217291);
        }
        {
            let _gde_name = new StringName('get_support');
            __classPrivateFieldGet(this, _a, "f", _AABB__bindings).method_get_support = internal.variant_get_ptr_builtin_method(16, _gde_name.opaque, 2923479887);
        }
        {
            let _gde_name = new StringName('get_longest_axis');
            __classPrivateFieldGet(this, _a, "f", _AABB__bindings).method_get_longest_axis = internal.variant_get_ptr_builtin_method(16, _gde_name.opaque, 1776574132);
        }
        {
            let _gde_name = new StringName('get_longest_axis_index');
            __classPrivateFieldGet(this, _a, "f", _AABB__bindings).method_get_longest_axis_index = internal.variant_get_ptr_builtin_method(16, _gde_name.opaque, 3173160232);
        }
        {
            let _gde_name = new StringName('get_longest_axis_size');
            __classPrivateFieldGet(this, _a, "f", _AABB__bindings).method_get_longest_axis_size = internal.variant_get_ptr_builtin_method(16, _gde_name.opaque, 466405837);
        }
        {
            let _gde_name = new StringName('get_shortest_axis');
            __classPrivateFieldGet(this, _a, "f", _AABB__bindings).method_get_shortest_axis = internal.variant_get_ptr_builtin_method(16, _gde_name.opaque, 1776574132);
        }
        {
            let _gde_name = new StringName('get_shortest_axis_index');
            __classPrivateFieldGet(this, _a, "f", _AABB__bindings).method_get_shortest_axis_index = internal.variant_get_ptr_builtin_method(16, _gde_name.opaque, 3173160232);
        }
        {
            let _gde_name = new StringName('get_shortest_axis_size');
            __classPrivateFieldGet(this, _a, "f", _AABB__bindings).method_get_shortest_axis_size = internal.variant_get_ptr_builtin_method(16, _gde_name.opaque, 466405837);
        }
        {
            let _gde_name = new StringName('get_endpoint');
            __classPrivateFieldGet(this, _a, "f", _AABB__bindings).method_get_endpoint = internal.variant_get_ptr_builtin_method(16, _gde_name.opaque, 1394941017);
        }
        {
            let _gde_name = new StringName('intersects_segment');
            __classPrivateFieldGet(this, _a, "f", _AABB__bindings).method_intersects_segment = internal.variant_get_ptr_builtin_method(16, _gde_name.opaque, 2048133369);
        }
        {
            let _gde_name = new StringName('intersects_ray');
            __classPrivateFieldGet(this, _a, "f", _AABB__bindings).method_intersects_ray = internal.variant_get_ptr_builtin_method(16, _gde_name.opaque, 2048133369);
        }
    }
    abs() {
        let ret = new _a();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _AABB__bindings).method_abs, this, 16, []);
        return ret;
    }
    get_center() {
        let ret = new Vector3();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _AABB__bindings).method_get_center, this, 9, []);
        return ret;
    }
    get_volume() {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _AABB__bindings).method_get_volume, this, 3, []);
        return ret;
    }
    has_volume() {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _AABB__bindings).method_has_volume, this, 1, []);
        return ret;
    }
    has_surface() {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _AABB__bindings).method_has_surface, this, 1, []);
        return ret;
    }
    has_point(_point) {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _AABB__bindings).method_has_point, this, 1, [_point]);
        return ret;
    }
    is_equal_approx(_aabb) {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _AABB__bindings).method_is_equal_approx, this, 1, [_aabb]);
        return ret;
    }
    is_finite() {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _AABB__bindings).method_is_finite, this, 1, []);
        return ret;
    }
    intersects(_with) {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _AABB__bindings).method_intersects, this, 1, [_with]);
        return ret;
    }
    encloses(_with) {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _AABB__bindings).method_encloses, this, 1, [_with]);
        return ret;
    }
    intersects_plane(_plane) {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _AABB__bindings).method_intersects_plane, this, 1, [_plane]);
        return ret;
    }
    intersection(_with) {
        let ret = new _a();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _AABB__bindings).method_intersection, this, 16, [_with]);
        return ret;
    }
    merge(_with) {
        let ret = new _a();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _AABB__bindings).method_merge, this, 16, [_with]);
        return ret;
    }
    expand(_to_point) {
        let ret = new _a();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _AABB__bindings).method_expand, this, 16, [_to_point]);
        return ret;
    }
    grow(_by) {
        let ret = new _a();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _AABB__bindings).method_grow, this, 16, [_by]);
        return ret;
    }
    get_support(_dir) {
        let ret = new Vector3();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _AABB__bindings).method_get_support, this, 9, [_dir]);
        return ret;
    }
    get_longest_axis() {
        let ret = new Vector3();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _AABB__bindings).method_get_longest_axis, this, 9, []);
        return ret;
    }
    get_longest_axis_index() {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _AABB__bindings).method_get_longest_axis_index, this, 2, []);
        return ret;
    }
    get_longest_axis_size() {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _AABB__bindings).method_get_longest_axis_size, this, 3, []);
        return ret;
    }
    get_shortest_axis() {
        let ret = new Vector3();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _AABB__bindings).method_get_shortest_axis, this, 9, []);
        return ret;
    }
    get_shortest_axis_index() {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _AABB__bindings).method_get_shortest_axis_index, this, 2, []);
        return ret;
    }
    get_shortest_axis_size() {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _AABB__bindings).method_get_shortest_axis_size, this, 3, []);
        return ret;
    }
    get_endpoint(_idx) {
        let ret = new Vector3();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _AABB__bindings).method_get_endpoint, this, 9, [_idx]);
        return ret;
    }
    intersects_segment(_from, _to) {
        let ret = new Variant();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _AABB__bindings).method_intersects_segment, this, 39, [_from, _to]);
        return ret;
    }
    intersects_ray(_from, _dir) {
        let ret = new Variant();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _AABB__bindings).method_intersects_ray, this, 39, [_from, _dir]);
        return ret;
    }
}
_a = AABB;
_AABB_SIZE = { value: 24 };
_AABB__bindings = { value: new _MethodBindings() };
_AABB_initialized = { value: false };
(() => {
    _a._init_bindings();
})();
