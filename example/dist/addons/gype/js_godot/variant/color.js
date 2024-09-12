import * as internal from '__internal__';
import { _call_builtin_constructor, _call_builtin_method_ptr_ret, _call_builtin_method_ptr_no_ret, _call_builtin_method_ptr_obj_ret, } from '@js_godot/core/builtin_ptrcall';
import { GDString } from '@js_godot/variant/gd_string';
import { StringName } from '@js_godot/variant/string_name';
import { GodotObject } from "@js_godot/classes/godot_object";
class _MethodBindings {
    from_variant_constructor;
    constructor_0;
    constructor_1;
    constructor_2;
    constructor_3;
    constructor_4;
    constructor_5;
    constructor_6;
    method_to_argb32;
    method_to_abgr32;
    method_to_rgba32;
    method_to_argb64;
    method_to_abgr64;
    method_to_rgba64;
    method_to_html;
    method_clamp;
    method_inverted;
    method_lerp;
    method_lightened;
    method_darkened;
    method_blend;
    method_get_luminance;
    method_srgb_to_linear;
    method_linear_to_srgb;
    method_is_equal_approx;
    method_hex;
    method_hex64;
    method_html;
    method_html_is_valid;
    method_from_string;
    method_from_hsv;
    method_from_ok_hsl;
    method_from_rgbe9995;
    operator_equal_Variant;
    operator_not_equal_Variant;
    operator_negate_;
    operator_positive_;
    operator_not_;
    operator_multiply_int;
    operator_divide_int;
    operator_multiply_float;
    operator_divide_float;
    operator_equal_Color;
    operator_not_equal_Color;
    operator_add_Color;
    operator_subtract_Color;
    operator_multiply_Color;
    operator_divide_Color;
    operator_in_Dictionary;
    operator_in_Array;
    operator_in_PackedColorArray;
}
export class Color {
    static #SIZE = 16;
    opaque = new Uint8Array(Color.#SIZE);
    static #_bindings = new _MethodBindings();
    static #initialized = false;
    constructor(value) {
        if (!value) {
            _call_builtin_constructor(Color.#_bindings.constructor_0, this);
        }
        else if (arguments.length == 1 && arguments[0] instanceof Color) {
            let from = arguments[0];
            _call_builtin_constructor(Color.#_bindings.constructor_1, this, [
                from
            ]);
        }
        else if (arguments.length == 2 && arguments[0] instanceof Color && typeof arguments[1] == "number") {
            let from = arguments[0];
            let alpha = arguments[1];
            _call_builtin_constructor(Color.#_bindings.constructor_2, this, [
                from, alpha
            ]);
        }
        else if (arguments.length == 3 && typeof arguments[0] == "number" && typeof arguments[1] == "number" && typeof arguments[2] == "number") {
            let r = arguments[0];
            let g = arguments[1];
            let b = arguments[2];
            _call_builtin_constructor(Color.#_bindings.constructor_3, this, [
                r, g, b
            ]);
        }
        else if (arguments.length == 4 && typeof arguments[0] == "number" && typeof arguments[1] == "number" && typeof arguments[2] == "number" && typeof arguments[3] == "number") {
            let r = arguments[0];
            let g = arguments[1];
            let b = arguments[2];
            let a = arguments[3];
            _call_builtin_constructor(Color.#_bindings.constructor_4, this, [
                r, g, b, a
            ]);
        }
        else if (arguments.length == 1 && arguments[0] instanceof GDString) {
            let code = arguments[0];
            _call_builtin_constructor(Color.#_bindings.constructor_5, this, [
                code
            ]);
        }
        else if (arguments.length == 2 && arguments[0] instanceof GDString && typeof arguments[1] == "number") {
            let code = arguments[0];
            let alpha = arguments[1];
            _call_builtin_constructor(Color.#_bindings.constructor_6, this, [
                code, alpha
            ]);
        }
        else if (value.constructor.name === "Variant") {
            Color.#_bindings.from_variant_constructor(this.opaque, value.opaque);
        }
        else if (value instanceof Uint8Array) {
            this.opaque = value;
        }
    }
    static __init_bindings_constructors_destructor() {
        this.#_bindings.from_variant_constructor = internal.get_variant_to_type_constructor(20);
        this.#_bindings.constructor_0 = internal.variant_get_ptr_constructor(20, 0);
        this.#_bindings.constructor_1 = internal.variant_get_ptr_constructor(20, 1);
        this.#_bindings.constructor_2 = internal.variant_get_ptr_constructor(20, 2);
        this.#_bindings.constructor_3 = internal.variant_get_ptr_constructor(20, 3);
        this.#_bindings.constructor_4 = internal.variant_get_ptr_constructor(20, 4);
        this.#_bindings.constructor_5 = internal.variant_get_ptr_constructor(20, 5);
        this.#_bindings.constructor_6 = internal.variant_get_ptr_constructor(20, 6);
    }
    static async _init_bindings() {
        if (this.#initialized) {
            return;
        }
        this.#initialized = true;
        this.__init_bindings_constructors_destructor();
        {
            let _gde_name = new StringName('to_argb32');
            this.#_bindings.method_to_argb32 = internal.variant_get_ptr_builtin_method(20, _gde_name.opaque, 3173160232);
        }
        {
            let _gde_name = new StringName('to_abgr32');
            this.#_bindings.method_to_abgr32 = internal.variant_get_ptr_builtin_method(20, _gde_name.opaque, 3173160232);
        }
        {
            let _gde_name = new StringName('to_rgba32');
            this.#_bindings.method_to_rgba32 = internal.variant_get_ptr_builtin_method(20, _gde_name.opaque, 3173160232);
        }
        {
            let _gde_name = new StringName('to_argb64');
            this.#_bindings.method_to_argb64 = internal.variant_get_ptr_builtin_method(20, _gde_name.opaque, 3173160232);
        }
        {
            let _gde_name = new StringName('to_abgr64');
            this.#_bindings.method_to_abgr64 = internal.variant_get_ptr_builtin_method(20, _gde_name.opaque, 3173160232);
        }
        {
            let _gde_name = new StringName('to_rgba64');
            this.#_bindings.method_to_rgba64 = internal.variant_get_ptr_builtin_method(20, _gde_name.opaque, 3173160232);
        }
        {
            let _gde_name = new StringName('to_html');
            this.#_bindings.method_to_html = internal.variant_get_ptr_builtin_method(20, _gde_name.opaque, 3429816538);
        }
        {
            let _gde_name = new StringName('clamp');
            this.#_bindings.method_clamp = internal.variant_get_ptr_builtin_method(20, _gde_name.opaque, 105651410);
        }
        {
            let _gde_name = new StringName('inverted');
            this.#_bindings.method_inverted = internal.variant_get_ptr_builtin_method(20, _gde_name.opaque, 3334027602);
        }
        {
            let _gde_name = new StringName('lerp');
            this.#_bindings.method_lerp = internal.variant_get_ptr_builtin_method(20, _gde_name.opaque, 402949615);
        }
        {
            let _gde_name = new StringName('lightened');
            this.#_bindings.method_lightened = internal.variant_get_ptr_builtin_method(20, _gde_name.opaque, 1466039168);
        }
        {
            let _gde_name = new StringName('darkened');
            this.#_bindings.method_darkened = internal.variant_get_ptr_builtin_method(20, _gde_name.opaque, 1466039168);
        }
        {
            let _gde_name = new StringName('blend');
            this.#_bindings.method_blend = internal.variant_get_ptr_builtin_method(20, _gde_name.opaque, 3803690977);
        }
        {
            let _gde_name = new StringName('get_luminance');
            this.#_bindings.method_get_luminance = internal.variant_get_ptr_builtin_method(20, _gde_name.opaque, 466405837);
        }
        {
            let _gde_name = new StringName('srgb_to_linear');
            this.#_bindings.method_srgb_to_linear = internal.variant_get_ptr_builtin_method(20, _gde_name.opaque, 3334027602);
        }
        {
            let _gde_name = new StringName('linear_to_srgb');
            this.#_bindings.method_linear_to_srgb = internal.variant_get_ptr_builtin_method(20, _gde_name.opaque, 3334027602);
        }
        {
            let _gde_name = new StringName('is_equal_approx');
            this.#_bindings.method_is_equal_approx = internal.variant_get_ptr_builtin_method(20, _gde_name.opaque, 3167426256);
        }
        {
            let _gde_name = new StringName('hex');
            this.#_bindings.method_hex = internal.variant_get_ptr_builtin_method(20, _gde_name.opaque, 351421375);
        }
        {
            let _gde_name = new StringName('hex64');
            this.#_bindings.method_hex64 = internal.variant_get_ptr_builtin_method(20, _gde_name.opaque, 351421375);
        }
        {
            let _gde_name = new StringName('html');
            this.#_bindings.method_html = internal.variant_get_ptr_builtin_method(20, _gde_name.opaque, 2500054655);
        }
        {
            let _gde_name = new StringName('html_is_valid');
            this.#_bindings.method_html_is_valid = internal.variant_get_ptr_builtin_method(20, _gde_name.opaque, 2942997125);
        }
        {
            let _gde_name = new StringName('from_string');
            this.#_bindings.method_from_string = internal.variant_get_ptr_builtin_method(20, _gde_name.opaque, 3755044230);
        }
        {
            let _gde_name = new StringName('from_hsv');
            this.#_bindings.method_from_hsv = internal.variant_get_ptr_builtin_method(20, _gde_name.opaque, 1573799446);
        }
        {
            let _gde_name = new StringName('from_ok_hsl');
            this.#_bindings.method_from_ok_hsl = internal.variant_get_ptr_builtin_method(20, _gde_name.opaque, 1573799446);
        }
        {
            let _gde_name = new StringName('from_rgbe9995');
            this.#_bindings.method_from_rgbe9995 = internal.variant_get_ptr_builtin_method(20, _gde_name.opaque, 351421375);
        }
    }
    to_argb32() {
        let ret;
        ret = _call_builtin_method_ptr_ret(Color.#_bindings.method_to_argb32, this, 2, []);
        return ret;
    }
    to_abgr32() {
        let ret;
        ret = _call_builtin_method_ptr_ret(Color.#_bindings.method_to_abgr32, this, 2, []);
        return ret;
    }
    to_rgba32() {
        let ret;
        ret = _call_builtin_method_ptr_ret(Color.#_bindings.method_to_rgba32, this, 2, []);
        return ret;
    }
    to_argb64() {
        let ret;
        ret = _call_builtin_method_ptr_ret(Color.#_bindings.method_to_argb64, this, 2, []);
        return ret;
    }
    to_abgr64() {
        let ret;
        ret = _call_builtin_method_ptr_ret(Color.#_bindings.method_to_abgr64, this, 2, []);
        return ret;
    }
    to_rgba64() {
        let ret;
        ret = _call_builtin_method_ptr_ret(Color.#_bindings.method_to_rgba64, this, 2, []);
        return ret;
    }
    to_html(_with_alpha) {
        let ret = new GDString();
        ret.opaque = _call_builtin_method_ptr_ret(Color.#_bindings.method_to_html, this, 4, [_with_alpha]);
        return ret;
    }
    clamp(_min, _max) {
        let ret = new Color();
        ret.opaque = _call_builtin_method_ptr_ret(Color.#_bindings.method_clamp, this, 20, [_min, _max]);
        return ret;
    }
    inverted() {
        let ret = new Color();
        ret.opaque = _call_builtin_method_ptr_ret(Color.#_bindings.method_inverted, this, 20, []);
        return ret;
    }
    lerp(_to, _weight) {
        let ret = new Color();
        ret.opaque = _call_builtin_method_ptr_ret(Color.#_bindings.method_lerp, this, 20, [_to, _weight]);
        return ret;
    }
    lightened(_amount) {
        let ret = new Color();
        ret.opaque = _call_builtin_method_ptr_ret(Color.#_bindings.method_lightened, this, 20, [_amount]);
        return ret;
    }
    darkened(_amount) {
        let ret = new Color();
        ret.opaque = _call_builtin_method_ptr_ret(Color.#_bindings.method_darkened, this, 20, [_amount]);
        return ret;
    }
    blend(_over) {
        let ret = new Color();
        ret.opaque = _call_builtin_method_ptr_ret(Color.#_bindings.method_blend, this, 20, [_over]);
        return ret;
    }
    get_luminance() {
        let ret;
        ret = _call_builtin_method_ptr_ret(Color.#_bindings.method_get_luminance, this, 3, []);
        return ret;
    }
    srgb_to_linear() {
        let ret = new Color();
        ret.opaque = _call_builtin_method_ptr_ret(Color.#_bindings.method_srgb_to_linear, this, 20, []);
        return ret;
    }
    linear_to_srgb() {
        let ret = new Color();
        ret.opaque = _call_builtin_method_ptr_ret(Color.#_bindings.method_linear_to_srgb, this, 20, []);
        return ret;
    }
    is_equal_approx(_to) {
        let ret;
        ret = _call_builtin_method_ptr_ret(Color.#_bindings.method_is_equal_approx, this, 1, [_to]);
        return ret;
    }
    hex(_hex) {
        let ret = new Color();
        ret.opaque = _call_builtin_method_ptr_ret(Color.#_bindings.method_hex, this, 20, [_hex]);
        return ret;
    }
    hex64(_hex) {
        let ret = new Color();
        ret.opaque = _call_builtin_method_ptr_ret(Color.#_bindings.method_hex64, this, 20, [_hex]);
        return ret;
    }
    html(_rgba) {
        let ret = new Color();
        ret.opaque = _call_builtin_method_ptr_ret(Color.#_bindings.method_html, this, 20, [_rgba]);
        return ret;
    }
    html_is_valid(_color) {
        let ret;
        ret = _call_builtin_method_ptr_ret(Color.#_bindings.method_html_is_valid, this, 1, [_color]);
        return ret;
    }
    from_string(_str, _default) {
        let ret = new Color();
        ret.opaque = _call_builtin_method_ptr_ret(Color.#_bindings.method_from_string, this, 20, [_str, _default]);
        return ret;
    }
    from_hsv(_h, _s, _v, _alpha) {
        let ret = new Color();
        ret.opaque = _call_builtin_method_ptr_ret(Color.#_bindings.method_from_hsv, this, 20, [_h, _s, _v, _alpha]);
        return ret;
    }
    from_ok_hsl(_h, _s, _l, _alpha) {
        let ret = new Color();
        ret.opaque = _call_builtin_method_ptr_ret(Color.#_bindings.method_from_ok_hsl, this, 20, [_h, _s, _l, _alpha]);
        return ret;
    }
    from_rgbe9995(_rgbe) {
        let ret = new Color();
        ret.opaque = _call_builtin_method_ptr_ret(Color.#_bindings.method_from_rgbe9995, this, 20, [_rgbe]);
        return ret;
    }
    static {
        this._init_bindings();
    }
}
