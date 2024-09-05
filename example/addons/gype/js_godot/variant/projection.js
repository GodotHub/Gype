import * as internal from '__internal__'
import {
  _call_builtin_constructor,
  _call_builtin_method_ptr_ret,
  _call_builtin_method_ptr_no_ret
} from '@js_godot/core/builtin_ptrcall'
import { Vector4 } from '@js_godot/variant/vector4'
import { Vector2 } from '@js_godot/variant/vector2'
import { AABB } from '@js_godot/variant/aabb'
import { StringName } from '@js_godot/variant/string_name'
import { Plane } from '@js_godot/variant/plane'
import { Transform3D } from '@js_godot/variant/transform3d'
import { Rect2 } from '@js_godot/variant/rect2'

class _MethodBindings {
  from_variant_constructor
  constructor_0
  constructor_1
  constructor_2
  constructor_3
  method_create_depth_correction
  method_create_light_atlas_rect
  method_create_perspective
  method_create_perspective_hmd
  method_create_for_hmd
  method_create_orthogonal
  method_create_orthogonal_aspect
  method_create_frustum
  method_create_frustum_aspect
  method_create_fit_aabb
  method_determinant
  method_perspective_znear_adjusted
  method_get_projection_plane
  method_flipped_y
  method_jitter_offseted
  method_get_fovy
  method_get_z_far
  method_get_z_near
  method_get_aspect
  method_get_fov
  method_is_orthogonal
  method_get_viewport_half_extents
  method_get_far_plane_half_extents
  method_inverse
  method_get_pixels_per_meter
  method_get_lod_multiplier
  operator_equal_Variant
  operator_not_equal_Variant
  operator_not_
  operator_multiply_Vector4
  operator_equal_Projection
  operator_not_equal_Projection
  operator_multiply_Projection
  operator_in_Dictionary
  operator_in_Array
}

export class Projection {
  static #SIZE = 64
  opaque = new Uint8Array(Projection.#SIZE)

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor (from) {
    if (!from) {
      _call_builtin_constructor(Projection._bindings.constructor_0, this)
    }else if (from instanceof Projection) {
      _call_builtin_constructor(Projection._bindings.constructor_1, this, [
        from
      ])
    }else if (from instanceof Transform3D) {
      _call_builtin_constructor(Projection._bindings.constructor_2, this, [
        from
      ])
    } else if (arguments.length == 4&& arguments[0] instanceof Vector4&& arguments[1] instanceof Vector4&& arguments[2] instanceof Vector4&& arguments[3] instanceof Vector4) {
      let x_axis = arguments[0];
      let y_axis = arguments[1];
      let z_axis = arguments[2];
      let w_axis = arguments[3];
      _call_builtin_constructor(Projection._bindings.constructor_3, this, [
        x_axis, y_axis, z_axis, w_axis
      ])
    } else if (from.constructor.name === "Variant") {
      Projection._bindings.from_variant_constructor(this.opaque, from.opaque)
    } 
  }
  
  static __init_bindings_constructors_destructor () {
    this._bindings.from_variant_constructor = internal.get_variant_to_type_constructor(
      19
    )
    this._bindings.constructor_0 = internal.variant_get_ptr_constructor(
      19,
      0
    )
    this._bindings.constructor_1 = internal.variant_get_ptr_constructor(
      19,
      1
    )
    this._bindings.constructor_2 = internal.variant_get_ptr_constructor(
      19,
      2
    )
    this._bindings.constructor_3 = internal.variant_get_ptr_constructor(
      19,
      3
    )
  }
  
  static async _init_bindings () {
    if (this.#initialized) {
      return;
    }
    this.#initialized = true;
    this.__init_bindings_constructors_destructor()
    {
      let _gde_name = new StringName('create_depth_correction')
      this._bindings.method_create_depth_correction = internal.variant_get_ptr_builtin_method(
        19,
        _gde_name.opaque,
        1228516048
      )
    }
    {
      let _gde_name = new StringName('create_light_atlas_rect')
      this._bindings.method_create_light_atlas_rect = internal.variant_get_ptr_builtin_method(
        19,
        _gde_name.opaque,
        2654950662
      )
    }
    {
      let _gde_name = new StringName('create_perspective')
      this._bindings.method_create_perspective = internal.variant_get_ptr_builtin_method(
        19,
        _gde_name.opaque,
        390915442
      )
    }
    {
      let _gde_name = new StringName('create_perspective_hmd')
      this._bindings.method_create_perspective_hmd = internal.variant_get_ptr_builtin_method(
        19,
        _gde_name.opaque,
        2857674800
      )
    }
    {
      let _gde_name = new StringName('create_for_hmd')
      this._bindings.method_create_for_hmd = internal.variant_get_ptr_builtin_method(
        19,
        _gde_name.opaque,
        4184144994
      )
    }
    {
      let _gde_name = new StringName('create_orthogonal')
      this._bindings.method_create_orthogonal = internal.variant_get_ptr_builtin_method(
        19,
        _gde_name.opaque,
        3707929169
      )
    }
    {
      let _gde_name = new StringName('create_orthogonal_aspect')
      this._bindings.method_create_orthogonal_aspect = internal.variant_get_ptr_builtin_method(
        19,
        _gde_name.opaque,
        390915442
      )
    }
    {
      let _gde_name = new StringName('create_frustum')
      this._bindings.method_create_frustum = internal.variant_get_ptr_builtin_method(
        19,
        _gde_name.opaque,
        3707929169
      )
    }
    {
      let _gde_name = new StringName('create_frustum_aspect')
      this._bindings.method_create_frustum_aspect = internal.variant_get_ptr_builtin_method(
        19,
        _gde_name.opaque,
        1535076251
      )
    }
    {
      let _gde_name = new StringName('create_fit_aabb')
      this._bindings.method_create_fit_aabb = internal.variant_get_ptr_builtin_method(
        19,
        _gde_name.opaque,
        2264694907
      )
    }
    {
      let _gde_name = new StringName('determinant')
      this._bindings.method_determinant = internal.variant_get_ptr_builtin_method(
        19,
        _gde_name.opaque,
        466405837
      )
    }
    {
      let _gde_name = new StringName('perspective_znear_adjusted')
      this._bindings.method_perspective_znear_adjusted = internal.variant_get_ptr_builtin_method(
        19,
        _gde_name.opaque,
        3584785443
      )
    }
    {
      let _gde_name = new StringName('get_projection_plane')
      this._bindings.method_get_projection_plane = internal.variant_get_ptr_builtin_method(
        19,
        _gde_name.opaque,
        1551184160
      )
    }
    {
      let _gde_name = new StringName('flipped_y')
      this._bindings.method_flipped_y = internal.variant_get_ptr_builtin_method(
        19,
        _gde_name.opaque,
        4212530932
      )
    }
    {
      let _gde_name = new StringName('jitter_offseted')
      this._bindings.method_jitter_offseted = internal.variant_get_ptr_builtin_method(
        19,
        _gde_name.opaque,
        2448438599
      )
    }
    {
      let _gde_name = new StringName('get_fovy')
      this._bindings.method_get_fovy = internal.variant_get_ptr_builtin_method(
        19,
        _gde_name.opaque,
        3514207532
      )
    }
    {
      let _gde_name = new StringName('get_z_far')
      this._bindings.method_get_z_far = internal.variant_get_ptr_builtin_method(
        19,
        _gde_name.opaque,
        466405837
      )
    }
    {
      let _gde_name = new StringName('get_z_near')
      this._bindings.method_get_z_near = internal.variant_get_ptr_builtin_method(
        19,
        _gde_name.opaque,
        466405837
      )
    }
    {
      let _gde_name = new StringName('get_aspect')
      this._bindings.method_get_aspect = internal.variant_get_ptr_builtin_method(
        19,
        _gde_name.opaque,
        466405837
      )
    }
    {
      let _gde_name = new StringName('get_fov')
      this._bindings.method_get_fov = internal.variant_get_ptr_builtin_method(
        19,
        _gde_name.opaque,
        466405837
      )
    }
    {
      let _gde_name = new StringName('is_orthogonal')
      this._bindings.method_is_orthogonal = internal.variant_get_ptr_builtin_method(
        19,
        _gde_name.opaque,
        3918633141
      )
    }
    {
      let _gde_name = new StringName('get_viewport_half_extents')
      this._bindings.method_get_viewport_half_extents = internal.variant_get_ptr_builtin_method(
        19,
        _gde_name.opaque,
        2428350749
      )
    }
    {
      let _gde_name = new StringName('get_far_plane_half_extents')
      this._bindings.method_get_far_plane_half_extents = internal.variant_get_ptr_builtin_method(
        19,
        _gde_name.opaque,
        2428350749
      )
    }
    {
      let _gde_name = new StringName('inverse')
      this._bindings.method_inverse = internal.variant_get_ptr_builtin_method(
        19,
        _gde_name.opaque,
        4212530932
      )
    }
    {
      let _gde_name = new StringName('get_pixels_per_meter')
      this._bindings.method_get_pixels_per_meter = internal.variant_get_ptr_builtin_method(
        19,
        _gde_name.opaque,
        4103005248
      )
    }
    {
      let _gde_name = new StringName('get_lod_multiplier')
      this._bindings.method_get_lod_multiplier = internal.variant_get_ptr_builtin_method(
        19,
        _gde_name.opaque,
        466405837
      )
    }
  }

  
  create_depth_correction (_flip_y) {
    let ret = new Projection()
    ret.opaque = _call_builtin_method_ptr_ret(
      Projection._bindings.method_create_depth_correction,
      this,
      19,
      [_flip_y]
    )
    return ret
  }
  create_light_atlas_rect (_rect) {
    let ret = new Projection()
    ret.opaque = _call_builtin_method_ptr_ret(
      Projection._bindings.method_create_light_atlas_rect,
      this,
      19,
      [_rect]
    )
    return ret
  }
  create_perspective (_fovy, _aspect, _z_near, _z_far, _flip_fov) {
    let ret = new Projection()
    ret.opaque = _call_builtin_method_ptr_ret(
      Projection._bindings.method_create_perspective,
      this,
      19,
      [_fovy, _aspect, _z_near, _z_far, _flip_fov]
    )
    return ret
  }
  create_perspective_hmd (_fovy, _aspect, _z_near, _z_far, _flip_fov, _eye, _intraocular_dist, _convergence_dist) {
    let ret = new Projection()
    ret.opaque = _call_builtin_method_ptr_ret(
      Projection._bindings.method_create_perspective_hmd,
      this,
      19,
      [_fovy, _aspect, _z_near, _z_far, _flip_fov, _eye, _intraocular_dist, _convergence_dist]
    )
    return ret
  }
  create_for_hmd (_eye, _aspect, _intraocular_dist, _display_width, _display_to_lens, _oversample, _z_near, _z_far) {
    let ret = new Projection()
    ret.opaque = _call_builtin_method_ptr_ret(
      Projection._bindings.method_create_for_hmd,
      this,
      19,
      [_eye, _aspect, _intraocular_dist, _display_width, _display_to_lens, _oversample, _z_near, _z_far]
    )
    return ret
  }
  create_orthogonal (_left, _right, _bottom, _top, _z_near, _z_far) {
    let ret = new Projection()
    ret.opaque = _call_builtin_method_ptr_ret(
      Projection._bindings.method_create_orthogonal,
      this,
      19,
      [_left, _right, _bottom, _top, _z_near, _z_far]
    )
    return ret
  }
  create_orthogonal_aspect (_size, _aspect, _z_near, _z_far, _flip_fov) {
    let ret = new Projection()
    ret.opaque = _call_builtin_method_ptr_ret(
      Projection._bindings.method_create_orthogonal_aspect,
      this,
      19,
      [_size, _aspect, _z_near, _z_far, _flip_fov]
    )
    return ret
  }
  create_frustum (_left, _right, _bottom, _top, _z_near, _z_far) {
    let ret = new Projection()
    ret.opaque = _call_builtin_method_ptr_ret(
      Projection._bindings.method_create_frustum,
      this,
      19,
      [_left, _right, _bottom, _top, _z_near, _z_far]
    )
    return ret
  }
  create_frustum_aspect (_size, _aspect, _offset, _z_near, _z_far, _flip_fov) {
    let ret = new Projection()
    ret.opaque = _call_builtin_method_ptr_ret(
      Projection._bindings.method_create_frustum_aspect,
      this,
      19,
      [_size, _aspect, _offset, _z_near, _z_far, _flip_fov]
    )
    return ret
  }
  create_fit_aabb (_aabb) {
    let ret = new Projection()
    ret.opaque = _call_builtin_method_ptr_ret(
      Projection._bindings.method_create_fit_aabb,
      this,
      19,
      [_aabb]
    )
    return ret
  }
  determinant () {
    let ret
    ret = _call_builtin_method_ptr_ret(
      Projection._bindings.method_determinant,
      this,
      3,
      []
    )
    return ret
  }
  perspective_znear_adjusted (_new_znear) {
    let ret = new Projection()
    ret.opaque = _call_builtin_method_ptr_ret(
      Projection._bindings.method_perspective_znear_adjusted,
      this,
      19,
      [_new_znear]
    )
    return ret
  }
  get_projection_plane (_plane) {
    let ret = new Plane()
    ret.opaque = _call_builtin_method_ptr_ret(
      Projection._bindings.method_get_projection_plane,
      this,
      14,
      [_plane]
    )
    return ret
  }
  flipped_y () {
    let ret = new Projection()
    ret.opaque = _call_builtin_method_ptr_ret(
      Projection._bindings.method_flipped_y,
      this,
      19,
      []
    )
    return ret
  }
  jitter_offseted (_offset) {
    let ret = new Projection()
    ret.opaque = _call_builtin_method_ptr_ret(
      Projection._bindings.method_jitter_offseted,
      this,
      19,
      [_offset]
    )
    return ret
  }
  get_fovy (_fovx, _aspect) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      Projection._bindings.method_get_fovy,
      this,
      3,
      [_fovx, _aspect]
    )
    return ret
  }
  get_z_far () {
    let ret
    ret = _call_builtin_method_ptr_ret(
      Projection._bindings.method_get_z_far,
      this,
      3,
      []
    )
    return ret
  }
  get_z_near () {
    let ret
    ret = _call_builtin_method_ptr_ret(
      Projection._bindings.method_get_z_near,
      this,
      3,
      []
    )
    return ret
  }
  get_aspect () {
    let ret
    ret = _call_builtin_method_ptr_ret(
      Projection._bindings.method_get_aspect,
      this,
      3,
      []
    )
    return ret
  }
  get_fov () {
    let ret
    ret = _call_builtin_method_ptr_ret(
      Projection._bindings.method_get_fov,
      this,
      3,
      []
    )
    return ret
  }
  is_orthogonal () {
    let ret
    ret = _call_builtin_method_ptr_ret(
      Projection._bindings.method_is_orthogonal,
      this,
      1,
      []
    )
    return ret
  }
  get_viewport_half_extents () {
    let ret = new Vector2()
    ret.opaque = _call_builtin_method_ptr_ret(
      Projection._bindings.method_get_viewport_half_extents,
      this,
      5,
      []
    )
    return ret
  }
  get_far_plane_half_extents () {
    let ret = new Vector2()
    ret.opaque = _call_builtin_method_ptr_ret(
      Projection._bindings.method_get_far_plane_half_extents,
      this,
      5,
      []
    )
    return ret
  }
  inverse () {
    let ret = new Projection()
    ret.opaque = _call_builtin_method_ptr_ret(
      Projection._bindings.method_inverse,
      this,
      19,
      []
    )
    return ret
  }
  get_pixels_per_meter (_for_pixel_width) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      Projection._bindings.method_get_pixels_per_meter,
      this,
      2,
      [_for_pixel_width]
    )
    return ret
  }
  get_lod_multiplier () {
    let ret
    ret = _call_builtin_method_ptr_ret(
      Projection._bindings.method_get_lod_multiplier,
      this,
      3,
      []
    )
    return ret
  }
static {
    this._init_bindings();
  }
}