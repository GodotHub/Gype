import * as internal from '__internal__';
import { GDArray } from '@js_godot/variant/gd_array'
import { GodotObject } from '@js_godot/classes/godot_object'
import { StringName } from '@js_godot/variant/string_name'
import { Variant } from '@js_godot/variant/variant'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";
import { GodotClass } from "@js_godot/core/class_define";

class _MethodBindings {
  method_compute_convex_mesh_points;
  method_build_box_planes;
  method_build_cylinder_planes;
  method_build_capsule_planes;
  method_get_closest_points_between_segments;
  method_get_closest_point_to_segment;
  method_get_closest_point_to_segment_uncapped;
  method_get_triangle_barycentric_coords;
  method_ray_intersects_triangle;
  method_segment_intersects_triangle;
  method_segment_intersects_sphere;
  method_segment_intersects_cylinder;
  method_segment_intersects_convex;
  method_clip_polygon;
  method_tetrahedralize_delaunay;
}class _Geometry3D extends GodotObject{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("Geometry3D");
    } else {
      super(godot_object);
    }
  }
  static init_method_compute_convex_mesh_points() {
    if (!this._bindings.method_compute_convex_mesh_points) {
      let classname = new StringName("Geometry3D");
      let methodname = new StringName("compute_convex_mesh_points");
      this._bindings.method_compute_convex_mesh_points = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1936902142
      );
    }
  }
  static init_method_build_box_planes() {
    if (!this._bindings.method_build_box_planes) {
      let classname = new StringName("Geometry3D");
      let methodname = new StringName("build_box_planes");
      this._bindings.method_build_box_planes = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3622277145
      );
    }
  }
  static init_method_build_cylinder_planes() {
    if (!this._bindings.method_build_cylinder_planes) {
      let classname = new StringName("Geometry3D");
      let methodname = new StringName("build_cylinder_planes");
      this._bindings.method_build_cylinder_planes = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        449920067
      );
    }
  }
  static init_method_build_capsule_planes() {
    if (!this._bindings.method_build_capsule_planes) {
      let classname = new StringName("Geometry3D");
      let methodname = new StringName("build_capsule_planes");
      this._bindings.method_build_capsule_planes = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2113592876
      );
    }
  }
  static init_method_get_closest_points_between_segments() {
    if (!this._bindings.method_get_closest_points_between_segments) {
      let classname = new StringName("Geometry3D");
      let methodname = new StringName("get_closest_points_between_segments");
      this._bindings.method_get_closest_points_between_segments = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1056373962
      );
    }
  }
  static init_method_get_closest_point_to_segment() {
    if (!this._bindings.method_get_closest_point_to_segment) {
      let classname = new StringName("Geometry3D");
      let methodname = new StringName("get_closest_point_to_segment");
      this._bindings.method_get_closest_point_to_segment = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2168193209
      );
    }
  }
  static init_method_get_closest_point_to_segment_uncapped() {
    if (!this._bindings.method_get_closest_point_to_segment_uncapped) {
      let classname = new StringName("Geometry3D");
      let methodname = new StringName("get_closest_point_to_segment_uncapped");
      this._bindings.method_get_closest_point_to_segment_uncapped = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2168193209
      );
    }
  }
  static init_method_get_triangle_barycentric_coords() {
    if (!this._bindings.method_get_triangle_barycentric_coords) {
      let classname = new StringName("Geometry3D");
      let methodname = new StringName("get_triangle_barycentric_coords");
      this._bindings.method_get_triangle_barycentric_coords = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1362048029
      );
    }
  }
  static init_method_ray_intersects_triangle() {
    if (!this._bindings.method_ray_intersects_triangle) {
      let classname = new StringName("Geometry3D");
      let methodname = new StringName("ray_intersects_triangle");
      this._bindings.method_ray_intersects_triangle = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1718655448
      );
    }
  }
  static init_method_segment_intersects_triangle() {
    if (!this._bindings.method_segment_intersects_triangle) {
      let classname = new StringName("Geometry3D");
      let methodname = new StringName("segment_intersects_triangle");
      this._bindings.method_segment_intersects_triangle = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1718655448
      );
    }
  }
  static init_method_segment_intersects_sphere() {
    if (!this._bindings.method_segment_intersects_sphere) {
      let classname = new StringName("Geometry3D");
      let methodname = new StringName("segment_intersects_sphere");
      this._bindings.method_segment_intersects_sphere = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4080141172
      );
    }
  }
  static init_method_segment_intersects_cylinder() {
    if (!this._bindings.method_segment_intersects_cylinder) {
      let classname = new StringName("Geometry3D");
      let methodname = new StringName("segment_intersects_cylinder");
      this._bindings.method_segment_intersects_cylinder = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2361316491
      );
    }
  }
  static init_method_segment_intersects_convex() {
    if (!this._bindings.method_segment_intersects_convex) {
      let classname = new StringName("Geometry3D");
      let methodname = new StringName("segment_intersects_convex");
      this._bindings.method_segment_intersects_convex = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        537425332
      );
    }
  }
  static init_method_clip_polygon() {
    if (!this._bindings.method_clip_polygon) {
      let classname = new StringName("Geometry3D");
      let methodname = new StringName("clip_polygon");
      this._bindings.method_clip_polygon = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2603188319
      );
    }
  }
  static init_method_tetrahedralize_delaunay() {
    if (!this._bindings.method_tetrahedralize_delaunay) {
      let classname = new StringName("Geometry3D");
      let methodname = new StringName("tetrahedralize_delaunay");
      this._bindings.method_tetrahedralize_delaunay = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1230191221
      );
    }
  }

  
  
  compute_convex_mesh_points(_planes) {
    Geometry3D.init_method_compute_convex_mesh_points();
    return _call_native_mb_ret(
      _Geometry3D._bindings.method_compute_convex_mesh_points,
      this._owner,
			Variant.Type.PACKED_VECTOR3_ARRAY,
    
      _planes
    );
    
  }
  build_box_planes(_extents) {
    Geometry3D.init_method_build_box_planes();
    return _call_native_mb_ret(
      _Geometry3D._bindings.method_build_box_planes,
      this._owner,
			Variant.Type.ARRAY,
      _extents
    );
    
  }
  build_cylinder_planes(_radius, _height, _sides, _axis) {
    Geometry3D.init_method_build_cylinder_planes();
    return _call_native_mb_ret(
      _Geometry3D._bindings.method_build_cylinder_planes,
      this._owner,
			Variant.Type.ARRAY,
      _radius, _height, _sides, _axis
    );
    
  }
  build_capsule_planes(_radius, _height, _sides, _lats, _axis) {
    Geometry3D.init_method_build_capsule_planes();
    return _call_native_mb_ret(
      _Geometry3D._bindings.method_build_capsule_planes,
      this._owner,
			Variant.Type.ARRAY,
      _radius, _height, _sides, _lats, _axis
    );
    
  }
  get_closest_points_between_segments(_p1, _p2, _q1, _q2) {
    Geometry3D.init_method_get_closest_points_between_segments();
    return _call_native_mb_ret(
      _Geometry3D._bindings.method_get_closest_points_between_segments,
      this._owner,
			Variant.Type.PACKED_VECTOR3_ARRAY,
    
      _p1, _p2, _q1, _q2
    );
    
  }
  get_closest_point_to_segment(_point, _s1, _s2) {
    Geometry3D.init_method_get_closest_point_to_segment();
    return _call_native_mb_ret(
      _Geometry3D._bindings.method_get_closest_point_to_segment,
      this._owner,
			Variant.Type.VECTOR3,
    
      _point, _s1, _s2
    );
    
  }
  get_closest_point_to_segment_uncapped(_point, _s1, _s2) {
    Geometry3D.init_method_get_closest_point_to_segment_uncapped();
    return _call_native_mb_ret(
      _Geometry3D._bindings.method_get_closest_point_to_segment_uncapped,
      this._owner,
			Variant.Type.VECTOR3,
    
      _point, _s1, _s2
    );
    
  }
  get_triangle_barycentric_coords(_point, _a, _b, _c) {
    Geometry3D.init_method_get_triangle_barycentric_coords();
    return _call_native_mb_ret(
      _Geometry3D._bindings.method_get_triangle_barycentric_coords,
      this._owner,
			Variant.Type.VECTOR3,
    
      _point, _a, _b, _c
    );
    
  }
  ray_intersects_triangle(_from, _dir, _a, _b, _c) {
    Geometry3D.init_method_ray_intersects_triangle();
    return _call_native_mb_ret(
      _Geometry3D._bindings.method_ray_intersects_triangle,
      this._owner,
			Variant.Type.VARIANT,
    
      _from, _dir, _a, _b, _c
    );
    
  }
  segment_intersects_triangle(_from, _to, _a, _b, _c) {
    Geometry3D.init_method_segment_intersects_triangle();
    return _call_native_mb_ret(
      _Geometry3D._bindings.method_segment_intersects_triangle,
      this._owner,
			Variant.Type.VARIANT,
    
      _from, _to, _a, _b, _c
    );
    
  }
  segment_intersects_sphere(_from, _to, _sphere_position, _sphere_radius) {
    Geometry3D.init_method_segment_intersects_sphere();
    return _call_native_mb_ret(
      _Geometry3D._bindings.method_segment_intersects_sphere,
      this._owner,
			Variant.Type.PACKED_VECTOR3_ARRAY,
    
      _from, _to, _sphere_position, _sphere_radius
    );
    
  }
  segment_intersects_cylinder(_from, _to, _height, _radius) {
    Geometry3D.init_method_segment_intersects_cylinder();
    return _call_native_mb_ret(
      _Geometry3D._bindings.method_segment_intersects_cylinder,
      this._owner,
			Variant.Type.PACKED_VECTOR3_ARRAY,
    
      _from, _to, _height, _radius
    );
    
  }
  segment_intersects_convex(_from, _to, _planes) {
    Geometry3D.init_method_segment_intersects_convex();
    return _call_native_mb_ret(
      _Geometry3D._bindings.method_segment_intersects_convex,
      this._owner,
			Variant.Type.PACKED_VECTOR3_ARRAY,
    
      _from, _to, _planes
    );
    
  }
  clip_polygon(_points, _plane) {
    Geometry3D.init_method_clip_polygon();
    return _call_native_mb_ret(
      _Geometry3D._bindings.method_clip_polygon,
      this._owner,
			Variant.Type.PACKED_VECTOR3_ARRAY,
    
      _points, _plane
    );
    
  }
  tetrahedralize_delaunay(_points) {
    Geometry3D.init_method_tetrahedralize_delaunay();
    return _call_native_mb_ret(
      _Geometry3D._bindings.method_tetrahedralize_delaunay,
      this._owner,
			Variant.Type.PACKED_INT32_ARRAY,
    
      _points
    );
    
  }
  

}
export const Geometry3D = (function () {
  let _instance;
  function create_instance() {
    return new _Geometry3D();
  }
  return {
    instance: function () {
      if (!_instance) {
        _instance = create_instance();
      }
      return _instance;
    },
  };
})();