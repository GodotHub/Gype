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
var _a, _Projection_SIZE, _Projection__bindings, _Projection_initialized;
import * as internal from '__internal__';
import { _call_builtin_constructor, _call_builtin_method_ptr_ret, _call_builtin_method_ptr_no_ret, _call_builtin_method_ptr_obj_ret, } from '@js_godot/core/builtin_ptrcall';
import { Vector2 } from '@js_godot/variant/vector2';
import { AABB } from '@js_godot/variant/aabb';
import { StringName } from '@js_godot/variant/string_name';
import { Plane } from '@js_godot/variant/plane';
import { Vector4 } from '@js_godot/variant/vector4';
import { Rect2 } from '@js_godot/variant/rect2';
import { Transform3D } from '@js_godot/variant/transform3d';
import { GodotObject } from "@js_godot/classes/godot_object";
class _MethodBindings {
}
export class Projection {
    constructor(value) {
        this.opaque = new Uint8Array(__classPrivateFieldGet(_a, _a, "f", _Projection_SIZE));
        if (!value) {
            _call_builtin_constructor(__classPrivateFieldGet(_a, _a, "f", _Projection__bindings).constructor_0, this);
        }
        else if (arguments.length == 1 && arguments[0] instanceof _a) {
            let from = arguments[0];
            _call_builtin_constructor(__classPrivateFieldGet(_a, _a, "f", _Projection__bindings).constructor_1, this, [
                from
            ]);
        }
        else if (arguments.length == 1 && arguments[0] instanceof Transform3D) {
            let from = arguments[0];
            _call_builtin_constructor(__classPrivateFieldGet(_a, _a, "f", _Projection__bindings).constructor_2, this, [
                from
            ]);
        }
        else if (arguments.length == 4 && arguments[0] instanceof Vector4 && arguments[1] instanceof Vector4 && arguments[2] instanceof Vector4 && arguments[3] instanceof Vector4) {
            let x_axis = arguments[0];
            let y_axis = arguments[1];
            let z_axis = arguments[2];
            let w_axis = arguments[3];
            _call_builtin_constructor(__classPrivateFieldGet(_a, _a, "f", _Projection__bindings).constructor_3, this, [
                x_axis, y_axis, z_axis, w_axis
            ]);
        }
        else if (value.constructor.name === "Variant") {
            __classPrivateFieldGet(_a, _a, "f", _Projection__bindings).from_variant_constructor(this.opaque, value.opaque);
        }
        else if (value instanceof Uint8Array) {
            this.opaque = value;
        }
    }
    static __init_bindings_constructors_destructor() {
        __classPrivateFieldGet(this, _a, "f", _Projection__bindings).from_variant_constructor = internal.get_variant_to_type_constructor(19);
        __classPrivateFieldGet(this, _a, "f", _Projection__bindings).constructor_0 = internal.variant_get_ptr_constructor(19, 0);
        __classPrivateFieldGet(this, _a, "f", _Projection__bindings).constructor_1 = internal.variant_get_ptr_constructor(19, 1);
        __classPrivateFieldGet(this, _a, "f", _Projection__bindings).constructor_2 = internal.variant_get_ptr_constructor(19, 2);
        __classPrivateFieldGet(this, _a, "f", _Projection__bindings).constructor_3 = internal.variant_get_ptr_constructor(19, 3);
    }
    static async _init_bindings() {
        if (__classPrivateFieldGet(this, _a, "f", _Projection_initialized)) {
            return;
        }
        __classPrivateFieldSet(this, _a, true, "f", _Projection_initialized);
        this.__init_bindings_constructors_destructor();
        {
            let _gde_name = new StringName('create_depth_correction');
            __classPrivateFieldGet(this, _a, "f", _Projection__bindings).method_create_depth_correction = internal.variant_get_ptr_builtin_method(19, _gde_name.opaque, 1228516048);
        }
        {
            let _gde_name = new StringName('create_light_atlas_rect');
            __classPrivateFieldGet(this, _a, "f", _Projection__bindings).method_create_light_atlas_rect = internal.variant_get_ptr_builtin_method(19, _gde_name.opaque, 2654950662);
        }
        {
            let _gde_name = new StringName('create_perspective');
            __classPrivateFieldGet(this, _a, "f", _Projection__bindings).method_create_perspective = internal.variant_get_ptr_builtin_method(19, _gde_name.opaque, 390915442);
        }
        {
            let _gde_name = new StringName('create_perspective_hmd');
            __classPrivateFieldGet(this, _a, "f", _Projection__bindings).method_create_perspective_hmd = internal.variant_get_ptr_builtin_method(19, _gde_name.opaque, 2857674800);
        }
        {
            let _gde_name = new StringName('create_for_hmd');
            __classPrivateFieldGet(this, _a, "f", _Projection__bindings).method_create_for_hmd = internal.variant_get_ptr_builtin_method(19, _gde_name.opaque, 4184144994);
        }
        {
            let _gde_name = new StringName('create_orthogonal');
            __classPrivateFieldGet(this, _a, "f", _Projection__bindings).method_create_orthogonal = internal.variant_get_ptr_builtin_method(19, _gde_name.opaque, 3707929169);
        }
        {
            let _gde_name = new StringName('create_orthogonal_aspect');
            __classPrivateFieldGet(this, _a, "f", _Projection__bindings).method_create_orthogonal_aspect = internal.variant_get_ptr_builtin_method(19, _gde_name.opaque, 390915442);
        }
        {
            let _gde_name = new StringName('create_frustum');
            __classPrivateFieldGet(this, _a, "f", _Projection__bindings).method_create_frustum = internal.variant_get_ptr_builtin_method(19, _gde_name.opaque, 3707929169);
        }
        {
            let _gde_name = new StringName('create_frustum_aspect');
            __classPrivateFieldGet(this, _a, "f", _Projection__bindings).method_create_frustum_aspect = internal.variant_get_ptr_builtin_method(19, _gde_name.opaque, 1535076251);
        }
        {
            let _gde_name = new StringName('create_fit_aabb');
            __classPrivateFieldGet(this, _a, "f", _Projection__bindings).method_create_fit_aabb = internal.variant_get_ptr_builtin_method(19, _gde_name.opaque, 2264694907);
        }
        {
            let _gde_name = new StringName('determinant');
            __classPrivateFieldGet(this, _a, "f", _Projection__bindings).method_determinant = internal.variant_get_ptr_builtin_method(19, _gde_name.opaque, 466405837);
        }
        {
            let _gde_name = new StringName('perspective_znear_adjusted');
            __classPrivateFieldGet(this, _a, "f", _Projection__bindings).method_perspective_znear_adjusted = internal.variant_get_ptr_builtin_method(19, _gde_name.opaque, 3584785443);
        }
        {
            let _gde_name = new StringName('get_projection_plane');
            __classPrivateFieldGet(this, _a, "f", _Projection__bindings).method_get_projection_plane = internal.variant_get_ptr_builtin_method(19, _gde_name.opaque, 1551184160);
        }
        {
            let _gde_name = new StringName('flipped_y');
            __classPrivateFieldGet(this, _a, "f", _Projection__bindings).method_flipped_y = internal.variant_get_ptr_builtin_method(19, _gde_name.opaque, 4212530932);
        }
        {
            let _gde_name = new StringName('jitter_offseted');
            __classPrivateFieldGet(this, _a, "f", _Projection__bindings).method_jitter_offseted = internal.variant_get_ptr_builtin_method(19, _gde_name.opaque, 2448438599);
        }
        {
            let _gde_name = new StringName('get_fovy');
            __classPrivateFieldGet(this, _a, "f", _Projection__bindings).method_get_fovy = internal.variant_get_ptr_builtin_method(19, _gde_name.opaque, 3514207532);
        }
        {
            let _gde_name = new StringName('get_z_far');
            __classPrivateFieldGet(this, _a, "f", _Projection__bindings).method_get_z_far = internal.variant_get_ptr_builtin_method(19, _gde_name.opaque, 466405837);
        }
        {
            let _gde_name = new StringName('get_z_near');
            __classPrivateFieldGet(this, _a, "f", _Projection__bindings).method_get_z_near = internal.variant_get_ptr_builtin_method(19, _gde_name.opaque, 466405837);
        }
        {
            let _gde_name = new StringName('get_aspect');
            __classPrivateFieldGet(this, _a, "f", _Projection__bindings).method_get_aspect = internal.variant_get_ptr_builtin_method(19, _gde_name.opaque, 466405837);
        }
        {
            let _gde_name = new StringName('get_fov');
            __classPrivateFieldGet(this, _a, "f", _Projection__bindings).method_get_fov = internal.variant_get_ptr_builtin_method(19, _gde_name.opaque, 466405837);
        }
        {
            let _gde_name = new StringName('is_orthogonal');
            __classPrivateFieldGet(this, _a, "f", _Projection__bindings).method_is_orthogonal = internal.variant_get_ptr_builtin_method(19, _gde_name.opaque, 3918633141);
        }
        {
            let _gde_name = new StringName('get_viewport_half_extents');
            __classPrivateFieldGet(this, _a, "f", _Projection__bindings).method_get_viewport_half_extents = internal.variant_get_ptr_builtin_method(19, _gde_name.opaque, 2428350749);
        }
        {
            let _gde_name = new StringName('get_far_plane_half_extents');
            __classPrivateFieldGet(this, _a, "f", _Projection__bindings).method_get_far_plane_half_extents = internal.variant_get_ptr_builtin_method(19, _gde_name.opaque, 2428350749);
        }
        {
            let _gde_name = new StringName('inverse');
            __classPrivateFieldGet(this, _a, "f", _Projection__bindings).method_inverse = internal.variant_get_ptr_builtin_method(19, _gde_name.opaque, 4212530932);
        }
        {
            let _gde_name = new StringName('get_pixels_per_meter');
            __classPrivateFieldGet(this, _a, "f", _Projection__bindings).method_get_pixels_per_meter = internal.variant_get_ptr_builtin_method(19, _gde_name.opaque, 4103005248);
        }
        {
            let _gde_name = new StringName('get_lod_multiplier');
            __classPrivateFieldGet(this, _a, "f", _Projection__bindings).method_get_lod_multiplier = internal.variant_get_ptr_builtin_method(19, _gde_name.opaque, 466405837);
        }
    }
    create_depth_correction(_flip_y) {
        let ret = new _a();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Projection__bindings).method_create_depth_correction, this, 19, [_flip_y]);
        return ret;
    }
    create_light_atlas_rect(_rect) {
        let ret = new _a();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Projection__bindings).method_create_light_atlas_rect, this, 19, [_rect]);
        return ret;
    }
    create_perspective(_fovy, _aspect, _z_near, _z_far, _flip_fov) {
        let ret = new _a();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Projection__bindings).method_create_perspective, this, 19, [_fovy, _aspect, _z_near, _z_far, _flip_fov]);
        return ret;
    }
    create_perspective_hmd(_fovy, _aspect, _z_near, _z_far, _flip_fov, _eye, _intraocular_dist, _convergence_dist) {
        let ret = new _a();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Projection__bindings).method_create_perspective_hmd, this, 19, [_fovy, _aspect, _z_near, _z_far, _flip_fov, _eye, _intraocular_dist, _convergence_dist]);
        return ret;
    }
    create_for_hmd(_eye, _aspect, _intraocular_dist, _display_width, _display_to_lens, _oversample, _z_near, _z_far) {
        let ret = new _a();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Projection__bindings).method_create_for_hmd, this, 19, [_eye, _aspect, _intraocular_dist, _display_width, _display_to_lens, _oversample, _z_near, _z_far]);
        return ret;
    }
    create_orthogonal(_left, _right, _bottom, _top, _z_near, _z_far) {
        let ret = new _a();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Projection__bindings).method_create_orthogonal, this, 19, [_left, _right, _bottom, _top, _z_near, _z_far]);
        return ret;
    }
    create_orthogonal_aspect(_size, _aspect, _z_near, _z_far, _flip_fov) {
        let ret = new _a();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Projection__bindings).method_create_orthogonal_aspect, this, 19, [_size, _aspect, _z_near, _z_far, _flip_fov]);
        return ret;
    }
    create_frustum(_left, _right, _bottom, _top, _z_near, _z_far) {
        let ret = new _a();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Projection__bindings).method_create_frustum, this, 19, [_left, _right, _bottom, _top, _z_near, _z_far]);
        return ret;
    }
    create_frustum_aspect(_size, _aspect, _offset, _z_near, _z_far, _flip_fov) {
        let ret = new _a();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Projection__bindings).method_create_frustum_aspect, this, 19, [_size, _aspect, _offset, _z_near, _z_far, _flip_fov]);
        return ret;
    }
    create_fit_aabb(_aabb) {
        let ret = new _a();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Projection__bindings).method_create_fit_aabb, this, 19, [_aabb]);
        return ret;
    }
    determinant() {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Projection__bindings).method_determinant, this, 3, []);
        return ret;
    }
    perspective_znear_adjusted(_new_znear) {
        let ret = new _a();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Projection__bindings).method_perspective_znear_adjusted, this, 19, [_new_znear]);
        return ret;
    }
    get_projection_plane(_plane) {
        let ret = new Plane();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Projection__bindings).method_get_projection_plane, this, 14, [_plane]);
        return ret;
    }
    flipped_y() {
        let ret = new _a();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Projection__bindings).method_flipped_y, this, 19, []);
        return ret;
    }
    jitter_offseted(_offset) {
        let ret = new _a();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Projection__bindings).method_jitter_offseted, this, 19, [_offset]);
        return ret;
    }
    get_fovy(_fovx, _aspect) {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Projection__bindings).method_get_fovy, this, 3, [_fovx, _aspect]);
        return ret;
    }
    get_z_far() {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Projection__bindings).method_get_z_far, this, 3, []);
        return ret;
    }
    get_z_near() {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Projection__bindings).method_get_z_near, this, 3, []);
        return ret;
    }
    get_aspect() {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Projection__bindings).method_get_aspect, this, 3, []);
        return ret;
    }
    get_fov() {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Projection__bindings).method_get_fov, this, 3, []);
        return ret;
    }
    is_orthogonal() {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Projection__bindings).method_is_orthogonal, this, 1, []);
        return ret;
    }
    get_viewport_half_extents() {
        let ret = new Vector2();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Projection__bindings).method_get_viewport_half_extents, this, 5, []);
        return ret;
    }
    get_far_plane_half_extents() {
        let ret = new Vector2();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Projection__bindings).method_get_far_plane_half_extents, this, 5, []);
        return ret;
    }
    inverse() {
        let ret = new _a();
        ret.opaque = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Projection__bindings).method_inverse, this, 19, []);
        return ret;
    }
    get_pixels_per_meter(_for_pixel_width) {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Projection__bindings).method_get_pixels_per_meter, this, 2, [_for_pixel_width]);
        return ret;
    }
    get_lod_multiplier() {
        let ret;
        ret = _call_builtin_method_ptr_ret(__classPrivateFieldGet(_a, _a, "f", _Projection__bindings).method_get_lod_multiplier, this, 3, []);
        return ret;
    }
}
_a = Projection;
_Projection_SIZE = { value: 64 };
_Projection__bindings = { value: new _MethodBindings() };
_Projection_initialized = { value: false };
(() => {
    _a._init_bindings();
})();
