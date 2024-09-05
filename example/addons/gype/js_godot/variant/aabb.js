import * as internal from '__internal__'
import {
  _call_builtin_constructor,
  _call_builtin_method_ptr_ret,
  _call_builtin_method_ptr_no_ret
} from '@js_godot/core/builtin_ptrcall'
import { StringName } from '@js_godot/variant/string_name'
import { Plane } from '@js_godot/variant/plane'
import { Variant } from '@js_godot/variant/variant'
import { Vector3 } from '@js_godot/variant/vector3'

class _MethodBindings {
  from_variant_constructor
  constructor_0
  constructor_1
  constructor_2
  method_abs
  method_get_center
  method_get_volume
  method_has_volume
  method_has_surface
  method_has_point
  method_is_equal_approx
  method_is_finite
  method_intersects
  method_encloses
  method_intersects_plane
  method_intersection
  method_merge
  method_expand
  method_grow
  method_get_support
  method_get_longest_axis
  method_get_longest_axis_index
  method_get_longest_axis_size
  method_get_shortest_axis
  method_get_shortest_axis_index
  method_get_shortest_axis_size
  method_get_endpoint
  method_intersects_segment
  method_intersects_ray
  operator_equal_Variant
  operator_not_equal_Variant
  operator_not_
  operator_equal_AABB
  operator_not_equal_AABB
  operator_multiply_Transform3D
  operator_in_Dictionary
  operator_in_Array
}

export class AABB {
  static #SIZE = 24
  opaque = new Uint8Array(AABB.#SIZE)

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor (from) {
    if (!from) {
      _call_builtin_constructor(AABB._bindings.constructor_0, this)
    }else if (from instanceof AABB) {
      _call_builtin_constructor(AABB._bindings.constructor_1, this, [
        from
      ])
    } else if (arguments.length == 2&& arguments[0] instanceof Vector3&& arguments[1] instanceof Vector3) {
      let position = arguments[0];
      let size = arguments[1];
      _call_builtin_constructor(AABB._bindings.constructor_2, this, [
        position, size
      ])
    } else if (from.constructor.name === "Variant") {
      AABB._bindings.from_variant_constructor(this.opaque, from.opaque)
    } 
  }
  
  static __init_bindings_constructors_destructor () {
    this._bindings.from_variant_constructor = internal.get_variant_to_type_constructor(
      16
    )
    this._bindings.constructor_0 = internal.variant_get_ptr_constructor(
      16,
      0
    )
    this._bindings.constructor_1 = internal.variant_get_ptr_constructor(
      16,
      1
    )
    this._bindings.constructor_2 = internal.variant_get_ptr_constructor(
      16,
      2
    )
  }
  
  static async _init_bindings () {
    if (this.#initialized) {
      return;
    }
    this.#initialized = true;
    this.__init_bindings_constructors_destructor()
    {
      let _gde_name = new StringName('abs')
      this._bindings.method_abs = internal.variant_get_ptr_builtin_method(
        16,
        _gde_name.opaque,
        1576868580
      )
    }
    {
      let _gde_name = new StringName('get_center')
      this._bindings.method_get_center = internal.variant_get_ptr_builtin_method(
        16,
        _gde_name.opaque,
        1776574132
      )
    }
    {
      let _gde_name = new StringName('get_volume')
      this._bindings.method_get_volume = internal.variant_get_ptr_builtin_method(
        16,
        _gde_name.opaque,
        466405837
      )
    }
    {
      let _gde_name = new StringName('has_volume')
      this._bindings.method_has_volume = internal.variant_get_ptr_builtin_method(
        16,
        _gde_name.opaque,
        3918633141
      )
    }
    {
      let _gde_name = new StringName('has_surface')
      this._bindings.method_has_surface = internal.variant_get_ptr_builtin_method(
        16,
        _gde_name.opaque,
        3918633141
      )
    }
    {
      let _gde_name = new StringName('has_point')
      this._bindings.method_has_point = internal.variant_get_ptr_builtin_method(
        16,
        _gde_name.opaque,
        1749054343
      )
    }
    {
      let _gde_name = new StringName('is_equal_approx')
      this._bindings.method_is_equal_approx = internal.variant_get_ptr_builtin_method(
        16,
        _gde_name.opaque,
        299946684
      )
    }
    {
      let _gde_name = new StringName('is_finite')
      this._bindings.method_is_finite = internal.variant_get_ptr_builtin_method(
        16,
        _gde_name.opaque,
        3918633141
      )
    }
    {
      let _gde_name = new StringName('intersects')
      this._bindings.method_intersects = internal.variant_get_ptr_builtin_method(
        16,
        _gde_name.opaque,
        299946684
      )
    }
    {
      let _gde_name = new StringName('encloses')
      this._bindings.method_encloses = internal.variant_get_ptr_builtin_method(
        16,
        _gde_name.opaque,
        299946684
      )
    }
    {
      let _gde_name = new StringName('intersects_plane')
      this._bindings.method_intersects_plane = internal.variant_get_ptr_builtin_method(
        16,
        _gde_name.opaque,
        1150170233
      )
    }
    {
      let _gde_name = new StringName('intersection')
      this._bindings.method_intersection = internal.variant_get_ptr_builtin_method(
        16,
        _gde_name.opaque,
        1271470306
      )
    }
    {
      let _gde_name = new StringName('merge')
      this._bindings.method_merge = internal.variant_get_ptr_builtin_method(
        16,
        _gde_name.opaque,
        1271470306
      )
    }
    {
      let _gde_name = new StringName('expand')
      this._bindings.method_expand = internal.variant_get_ptr_builtin_method(
        16,
        _gde_name.opaque,
        2851643018
      )
    }
    {
      let _gde_name = new StringName('grow')
      this._bindings.method_grow = internal.variant_get_ptr_builtin_method(
        16,
        _gde_name.opaque,
        239217291
      )
    }
    {
      let _gde_name = new StringName('get_support')
      this._bindings.method_get_support = internal.variant_get_ptr_builtin_method(
        16,
        _gde_name.opaque,
        2923479887
      )
    }
    {
      let _gde_name = new StringName('get_longest_axis')
      this._bindings.method_get_longest_axis = internal.variant_get_ptr_builtin_method(
        16,
        _gde_name.opaque,
        1776574132
      )
    }
    {
      let _gde_name = new StringName('get_longest_axis_index')
      this._bindings.method_get_longest_axis_index = internal.variant_get_ptr_builtin_method(
        16,
        _gde_name.opaque,
        3173160232
      )
    }
    {
      let _gde_name = new StringName('get_longest_axis_size')
      this._bindings.method_get_longest_axis_size = internal.variant_get_ptr_builtin_method(
        16,
        _gde_name.opaque,
        466405837
      )
    }
    {
      let _gde_name = new StringName('get_shortest_axis')
      this._bindings.method_get_shortest_axis = internal.variant_get_ptr_builtin_method(
        16,
        _gde_name.opaque,
        1776574132
      )
    }
    {
      let _gde_name = new StringName('get_shortest_axis_index')
      this._bindings.method_get_shortest_axis_index = internal.variant_get_ptr_builtin_method(
        16,
        _gde_name.opaque,
        3173160232
      )
    }
    {
      let _gde_name = new StringName('get_shortest_axis_size')
      this._bindings.method_get_shortest_axis_size = internal.variant_get_ptr_builtin_method(
        16,
        _gde_name.opaque,
        466405837
      )
    }
    {
      let _gde_name = new StringName('get_endpoint')
      this._bindings.method_get_endpoint = internal.variant_get_ptr_builtin_method(
        16,
        _gde_name.opaque,
        1394941017
      )
    }
    {
      let _gde_name = new StringName('intersects_segment')
      this._bindings.method_intersects_segment = internal.variant_get_ptr_builtin_method(
        16,
        _gde_name.opaque,
        2048133369
      )
    }
    {
      let _gde_name = new StringName('intersects_ray')
      this._bindings.method_intersects_ray = internal.variant_get_ptr_builtin_method(
        16,
        _gde_name.opaque,
        2048133369
      )
    }
  }

  
  abs () {
    let ret = new AABB()
    ret.opaque = _call_builtin_method_ptr_ret(
      AABB._bindings.method_abs,
      this,
      16,
      []
    )
    return ret
  }
  get_center () {
    let ret = new Vector3()
    ret.opaque = _call_builtin_method_ptr_ret(
      AABB._bindings.method_get_center,
      this,
      9,
      []
    )
    return ret
  }
  get_volume () {
    let ret
    ret = _call_builtin_method_ptr_ret(
      AABB._bindings.method_get_volume,
      this,
      3,
      []
    )
    return ret
  }
  has_volume () {
    let ret
    ret = _call_builtin_method_ptr_ret(
      AABB._bindings.method_has_volume,
      this,
      1,
      []
    )
    return ret
  }
  has_surface () {
    let ret
    ret = _call_builtin_method_ptr_ret(
      AABB._bindings.method_has_surface,
      this,
      1,
      []
    )
    return ret
  }
  has_point (_point) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      AABB._bindings.method_has_point,
      this,
      1,
      [_point]
    )
    return ret
  }
  is_equal_approx (_aabb) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      AABB._bindings.method_is_equal_approx,
      this,
      1,
      [_aabb]
    )
    return ret
  }
  is_finite () {
    let ret
    ret = _call_builtin_method_ptr_ret(
      AABB._bindings.method_is_finite,
      this,
      1,
      []
    )
    return ret
  }
  intersects (_with) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      AABB._bindings.method_intersects,
      this,
      1,
      [_with]
    )
    return ret
  }
  encloses (_with) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      AABB._bindings.method_encloses,
      this,
      1,
      [_with]
    )
    return ret
  }
  intersects_plane (_plane) {
    let ret
    ret = _call_builtin_method_ptr_ret(
      AABB._bindings.method_intersects_plane,
      this,
      1,
      [_plane]
    )
    return ret
  }
  intersection (_with) {
    let ret = new AABB()
    ret.opaque = _call_builtin_method_ptr_ret(
      AABB._bindings.method_intersection,
      this,
      16,
      [_with]
    )
    return ret
  }
  merge (_with) {
    let ret = new AABB()
    ret.opaque = _call_builtin_method_ptr_ret(
      AABB._bindings.method_merge,
      this,
      16,
      [_with]
    )
    return ret
  }
  expand (_to_point) {
    let ret = new AABB()
    ret.opaque = _call_builtin_method_ptr_ret(
      AABB._bindings.method_expand,
      this,
      16,
      [_to_point]
    )
    return ret
  }
  grow (_by) {
    let ret = new AABB()
    ret.opaque = _call_builtin_method_ptr_ret(
      AABB._bindings.method_grow,
      this,
      16,
      [_by]
    )
    return ret
  }
  get_support (_dir) {
    let ret = new Vector3()
    ret.opaque = _call_builtin_method_ptr_ret(
      AABB._bindings.method_get_support,
      this,
      9,
      [_dir]
    )
    return ret
  }
  get_longest_axis () {
    let ret = new Vector3()
    ret.opaque = _call_builtin_method_ptr_ret(
      AABB._bindings.method_get_longest_axis,
      this,
      9,
      []
    )
    return ret
  }
  get_longest_axis_index () {
    let ret
    ret = _call_builtin_method_ptr_ret(
      AABB._bindings.method_get_longest_axis_index,
      this,
      2,
      []
    )
    return ret
  }
  get_longest_axis_size () {
    let ret
    ret = _call_builtin_method_ptr_ret(
      AABB._bindings.method_get_longest_axis_size,
      this,
      3,
      []
    )
    return ret
  }
  get_shortest_axis () {
    let ret = new Vector3()
    ret.opaque = _call_builtin_method_ptr_ret(
      AABB._bindings.method_get_shortest_axis,
      this,
      9,
      []
    )
    return ret
  }
  get_shortest_axis_index () {
    let ret
    ret = _call_builtin_method_ptr_ret(
      AABB._bindings.method_get_shortest_axis_index,
      this,
      2,
      []
    )
    return ret
  }
  get_shortest_axis_size () {
    let ret
    ret = _call_builtin_method_ptr_ret(
      AABB._bindings.method_get_shortest_axis_size,
      this,
      3,
      []
    )
    return ret
  }
  get_endpoint (_idx) {
    let ret = new Vector3()
    ret.opaque = _call_builtin_method_ptr_ret(
      AABB._bindings.method_get_endpoint,
      this,
      9,
      [_idx]
    )
    return ret
  }
  intersects_segment (_from, _to) {
    let ret = new Variant()
    ret.opaque = _call_builtin_method_ptr_ret(
      AABB._bindings.method_intersects_segment,
      this,
      39,
      [_from, _to]
    )
    return ret
  }
  intersects_ray (_from, _dir) {
    let ret = new Variant()
    ret.opaque = _call_builtin_method_ptr_ret(
      AABB._bindings.method_intersects_ray,
      this,
      39,
      [_from, _dir]
    )
    return ret
  }
static {
    this._init_bindings();
  }
}