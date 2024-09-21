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
var _a, _Rect2_SIZE, _Rect2__bindings, _Rect2_initialized;
import * as internal from '__internal__';
import { _call_builtin_constructor, _call_builtin_method_ptr_ret, _call_builtin_method_ptr_no_ret, _call_builtin_method_ptr_obj_ret, } from '@js_godot/core/builtin_ptrcall';
import { StringName } from '@js_godot/variant/string_name';
import { Rect2i } from '@js_godot/variant/rect2i';
import { Vector2 } from '@js_godot/variant/vector2';
import { GodotObject } from "@js_godot/classes/godot_object";
class _MethodBindings {
}
export class Rect2 {
    constructor(value) {
        this.opaque = new Uint8Array(__classPrivateFieldGet(_a, _a, "f", _Rect2_SIZE));
        if (!value) {
            _call_builtin_constructor(__classPrivateFieldGet(_a, _a, "f", _Rect2__bindings).constructor_0, this);
        }
        else if (arguments.length == 1 && arguments[0] instanceof _a) {
            let from = arguments[0];
            _call_builtin_constructor(__classPrivateFieldGet(_a, _a, "f", _Rect2__bindings).constructor_1, this, [
                from
            ]);
        }
        else if (arguments.length == 1 && arguments[0] instanceof Rect2i) {
            let from = arguments[0];
            _call_builtin_constructor(__classPrivateFieldGet(_a, _a, "f", _Rect2__bindings).constructor_2, this, [
                from
            ]);
        }
        else if (arguments.length == 2 && arguments[0] instanceof Vector2 && arguments[1] instanceof Vector2) {
            let position = arguments[0];
            let size = arguments[1];
            _call_builtin_constructor(__classPrivateFieldGet(_a, _a, "f", _Rect2__bindings).constructor_3, this, [
                position, size
            ]);
        }
        else if (arguments.length == 4 && typeof arguments[0] == "number" && typeof arguments[1] == "number" && typeof arguments[2] == "number" && typeof arguments[3] == "number") {
            let x = arguments[0];
            let y = arguments[1];
            let width = arguments[2];
            let height = arguments[3];
            _call_builtin_constructor(__classPrivateFieldGet(_a, _a, "f", _Rect2__bindings).constructor_4, this, [
                x, y, width, height
            ]);
        }
        else if (value.constructor.name === "Variant") {
            __classPrivateFieldGet(_a, _a, "f", _Rect2__bindings).from_variant_constructor(this.opaque, value.opaque);
        }
        else if (value instanceof Uint8Array) {
            this.opaque = value;
        }
    }
    static __init_bindings_constructors_destructor() {
        __classPrivateFieldGet(this, _a, "f", _Rect2__bindings).from_variant_constructor = internal.get_variant_to_type_constructor(7);
        __classPrivateFieldGet(this, _a, "f", _Rect2__bindings).constructor_0 = internal.variant_get_ptr_constructor(7, 0);
        __classPrivateFieldGet(this, _a, "f", _Rect2__bindings).constructor_1 = internal.variant_get_ptr_constructor(7, 1);
        __classPrivateFieldGet(this, _a, "f", _Rect2__bindings).constructor_2 = internal.variant_get_ptr_constructor(7, 2);
        __classPrivateFieldGet(this, _a, "f", _Rect2__bindings).constructor_3 = internal.variant_get_ptr_constructor(7, 3);
        __classPrivateFieldGet(this, _a, "f", _Rect2__bindings).constructor_4 = internal.variant_get_ptr_constructor(7, 4);
    }
    static async _init_bindings() {
        if (__classPrivateFieldGet(this, _a, "f", _Rect2_initialized)) {
            return;
        }
        __classPrivateFieldSet(this, _a, true, "f", _Rect2_initialized);
        this.__init_bindings_constructors_destructor();
        {
            let _gde_name = new StringName('get_center');
            __classPrivateFieldGet(this, _a, "f", _Rect2__bindings).method_get_center = internal.variant_get_ptr_builtin_method(7, _gde_name.opaque, 2428350749);
        }
        {
            let _gde_name = new StringName('get_area');
            __classPrivateFieldGet(this, _a, "f", _Rect2__bindings).method_get_area = internal.variant_get_ptr_builtin_method(7, _gde_name.opaque, 466405837);
        }
        {
            let _gde_name = new StringName('has_area');
            __classPrivateFieldGet(this, _a, "f", _Rect2__bindings).method_has_area = internal.variant_get_ptr_builtin_method(7, _gde_name.opaque, 3918633141);
        }
        {
            let _gde_name = new StringName('has_point');
            __classPrivateFieldGet(this, _a, "f", _Rect2__bindings).method_has_point = internal.variant_get_ptr_builtin_method(7, _gde_name.opaque, 3190634762);
        }
        {
            let _gde_name = new StringName('is_equal_approx');
            __classPrivateFieldGet(this, _a, "f", _Rect2__bindings).method_is_equal_approx = internal.variant_get_ptr_builtin_method(7, _gde_name.opaque, 1908192260);
        }
        {
            let _gde_name = new StringName('is_finite');
            __classPrivateFieldGet(this, _a, "f", _Rect2__bindings).method_is_finite = internal.variant_get_ptr_builtin_method(7, _gde_name.opaque, 3918633141);
        }
        {
            let _gde_name = new StringName('intersects');
            __classPrivateFieldGet(this, _a, "f", _Rect2__bindings).method_intersects = internal.variant_get_ptr_builtin_method(7, _gde_name.opaque, 819294880);
        }
        {
            let _gde_name = new StringName('encloses');
            __classPrivateFieldGet(this, _a, "f", _Rect2__bindings).method_encloses = internal.variant_get_ptr_builtin_method(7, _gde_name.opaque, 1908192260);
        }
        {
            let _gde_name = new StringName('intersection');
            __classPrivateFieldGet(this, _a, "f", _Rect2__bindings).method_intersection = internal.variant_get_ptr_builtin_method(7, _gde_name.opaque, 2282977743);
        }
        {
            let _gde_name = new StringName('merge');
            __classPrivateFieldGet(this, _a, "f", _Rect2__bindings).method_merge = internal.variant_get_ptr_builtin_method(7, _gde_name.opaque, 2282977743);
        }
        {
            let _gde_name = new StringName('expand');
            __classPrivateFieldGet(this, _a, "f", _Rect2__bindings).method_expand = internal.variant_get_ptr_builtin_method(7, _gde_name.opaque, 293272265);
        }
        {
            let _gde_name = new StringName('grow');
            __classPrivateFieldGet(this, _a, "f", _Rect2__bindings).method_grow = internal.variant_get_ptr_builtin_method(7, _gde_name.opaque, 39664498);
        }
        {
            let _gde_name = new StringName('grow_side');
            __classPrivateFieldGet(this, _a, "f", _Rect2__bindings).method_grow_side = internal.variant_get_ptr_builtin_method(7, _gde_name.opaque, 4177736158);
        }
        {
            let _gde_name = new StringName('grow_individual');
            __classPrivateFieldGet(this, _a, "f", _Rect2__bindings).method_grow_individual = internal.variant_get_ptr_builtin_method(7, _gde_name.opaque, 3203390369);
        }
        {
            let _gde_name = new StringName('abs');
            __classPrivateFieldGet(this, _a, "f", _Rect2__bindings).method_abs = internal.variant_get_ptr_builtin_method(7, _gde_name.opaque, 3107653634);
        }
    }
    get_center() {
        let ret = new Vector2();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Rect2__bindings).method_get_center, this, 5, []);
        return ret;
    }
    get_area() {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Rect2__bindings).method_get_area, this, 3, []);
        return ret;
    }
    has_area() {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Rect2__bindings).method_has_area, this, 1, []);
        return ret;
    }
    has_point(_point) {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Rect2__bindings).method_has_point, this, 1, [_point]);
        return ret;
    }
    is_equal_approx(_rect) {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Rect2__bindings).method_is_equal_approx, this, 1, [_rect]);
        return ret;
    }
    is_finite() {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Rect2__bindings).method_is_finite, this, 1, []);
        return ret;
    }
    intersects(_b, _include_borders) {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Rect2__bindings).method_intersects, this, 1, [_b, _include_borders]);
        return ret;
    }
    encloses(_b) {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Rect2__bindings).method_encloses, this, 1, [_b]);
        return ret;
    }
    intersection(_b) {
        let ret = new _a();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Rect2__bindings).method_intersection, this, 7, [_b]);
        return ret;
    }
    merge(_b) {
        let ret = new _a();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Rect2__bindings).method_merge, this, 7, [_b]);
        return ret;
    }
    expand(_to) {
        let ret = new _a();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Rect2__bindings).method_expand, this, 7, [_to]);
        return ret;
    }
    grow(_amount) {
        let ret = new _a();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Rect2__bindings).method_grow, this, 7, [_amount]);
        return ret;
    }
    grow_side(_side, _amount) {
        let ret = new _a();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Rect2__bindings).method_grow_side, this, 7, [_side, _amount]);
        return ret;
    }
    grow_individual(_left, _top, _right, _bottom) {
        let ret = new _a();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Rect2__bindings).method_grow_individual, this, 7, [_left, _top, _right, _bottom]);
        return ret;
    }
    abs() {
        let ret = new _a();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Rect2__bindings).method_abs, this, 7, []);
        return ret;
    }
}
_a = Rect2;
_Rect2_SIZE = { value: 16 };
_Rect2__bindings = { value: new _MethodBindings() };
_Rect2_initialized = { value: false };
(() => {
    _a._init_bindings();
})();
