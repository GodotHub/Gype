import * as internal from '__internal__';
import { PackedVector3Array } from 'src/js_godot/variant/packed_vector3_array'
import { PackedInt32Array } from 'src/js_godot/variant/packed_int32_array'
import { Variant } from 'src/js_godot/variant/variant'
import { Vector3 } from 'src/js_godot/variant/vector3'
import { GodotObject } from 'src/js_godot/classesgodot_object'
import { Plane } from 'src/js_godot/variant/plane'
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
}

export const Geometry3D = new _Geometry3D();

class _Geometry3D extends GodotObject{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("Geometry3D");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("Geometry3D");
      let methodname = new StringName("compute_convex_mesh_points");
      this._bindings.method_compute_convex_mesh_points = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1936902142
      );
    }
    {
      let classname = new StringName("Geometry3D");
      let methodname = new StringName("build_box_planes");
      this._bindings.method_build_box_planes = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3622277145
      );
    }
    {
      let classname = new StringName("Geometry3D");
      let methodname = new StringName("build_cylinder_planes");
      this._bindings.method_build_cylinder_planes = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        449920067
      );
    }
    {
      let classname = new StringName("Geometry3D");
      let methodname = new StringName("build_capsule_planes");
      this._bindings.method_build_capsule_planes = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2113592876
      );
    }
    {
      let classname = new StringName("Geometry3D");
      let methodname = new StringName("get_closest_points_between_segments");
      this._bindings.method_get_closest_points_between_segments = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1056373962
      );
    }
    {
      let classname = new StringName("Geometry3D");
      let methodname = new StringName("get_closest_point_to_segment");
      this._bindings.method_get_closest_point_to_segment = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2168193209
      );
    }
    {
      let classname = new StringName("Geometry3D");
      let methodname = new StringName("get_closest_point_to_segment_uncapped");
      this._bindings.method_get_closest_point_to_segment_uncapped = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2168193209
      );
    }
    {
      let classname = new StringName("Geometry3D");
      let methodname = new StringName("get_triangle_barycentric_coords");
      this._bindings.method_get_triangle_barycentric_coords = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1362048029
      );
    }
    {
      let classname = new StringName("Geometry3D");
      let methodname = new StringName("ray_intersects_triangle");
      this._bindings.method_ray_intersects_triangle = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1718655448
      );
    }
    {
      let classname = new StringName("Geometry3D");
      let methodname = new StringName("segment_intersects_triangle");
      this._bindings.method_segment_intersects_triangle = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1718655448
      );
    }
    {
      let classname = new StringName("Geometry3D");
      let methodname = new StringName("segment_intersects_sphere");
      this._bindings.method_segment_intersects_sphere = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4080141172
      );
    }
    {
      let classname = new StringName("Geometry3D");
      let methodname = new StringName("segment_intersects_cylinder");
      this._bindings.method_segment_intersects_cylinder = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2361316491
      );
    }
    {
      let classname = new StringName("Geometry3D");
      let methodname = new StringName("segment_intersects_convex");
      this._bindings.method_segment_intersects_convex = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        537425332
      );
    }
    {
      let classname = new StringName("Geometry3D");
      let methodname = new StringName("clip_polygon");
      this._bindings.method_clip_polygon = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2603188319
      );
    }
    {
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
    return _call_native_mb_ret(
      ClassDB._bindings.method_compute_convex_mesh_points,
      this._owner,
			Variant.Type.PACKED_VECTOR3_ARRAY
    ,
      _planes
    );
  }
  build_box_planes(_extents) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_build_box_planes,
      this._owner,
			Variant.INT,
      _extents
    );
  }
  build_cylinder_planes(_radius, _height, _sides, _axis) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_build_cylinder_planes,
      this._owner,
			Variant.INT,
      _radius, _height, _sides, _axis
    );
  }
  build_capsule_planes(_radius, _height, _sides, _lats, _axis) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_build_capsule_planes,
      this._owner,
			Variant.INT,
      _radius, _height, _sides, _lats, _axis
    );
  }
  get_closest_points_between_segments(_p1, _p2, _q1, _q2) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_closest_points_between_segments,
      this._owner,
			Variant.Type.PACKED_VECTOR3_ARRAY
    ,
      _p1, _p2, _q1, _q2
    );
  }
  get_closest_point_to_segment(_point, _s1, _s2) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_closest_point_to_segment,
      this._owner,
			Variant.Type.VECTOR3
    ,
      _point, _s1, _s2
    );
  }
  get_closest_point_to_segment_uncapped(_point, _s1, _s2) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_closest_point_to_segment_uncapped,
      this._owner,
			Variant.Type.VECTOR3
    ,
      _point, _s1, _s2
    );
  }
  get_triangle_barycentric_coords(_point, _a, _b, _c) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_triangle_barycentric_coords,
      this._owner,
			Variant.Type.VECTOR3
    ,
      _point, _a, _b, _c
    );
  }
  ray_intersects_triangle(_from, _dir, _a, _b, _c) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_ray_intersects_triangle,
      this._owner,
			Variant.Type.VARIANT
    ,
      _from, _dir, _a, _b, _c
    );
  }
  segment_intersects_triangle(_from, _to, _a, _b, _c) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_segment_intersects_triangle,
      this._owner,
			Variant.Type.VARIANT
    ,
      _from, _to, _a, _b, _c
    );
  }
  segment_intersects_sphere(_from, _to, _sphere_position, _sphere_radius) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_segment_intersects_sphere,
      this._owner,
			Variant.Type.PACKED_VECTOR3_ARRAY
    ,
      _from, _to, _sphere_position, _sphere_radius
    );
  }
  segment_intersects_cylinder(_from, _to, _height, _radius) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_segment_intersects_cylinder,
      this._owner,
			Variant.Type.PACKED_VECTOR3_ARRAY
    ,
      _from, _to, _height, _radius
    );
  }
  segment_intersects_convex(_from, _to, _planes) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_segment_intersects_convex,
      this._owner,
			Variant.Type.PACKED_VECTOR3_ARRAY
    ,
      _from, _to, _planes
    );
  }
  clip_polygon(_points, _plane) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_clip_polygon,
      this._owner,
			Variant.Type.PACKED_VECTOR3_ARRAY
    ,
      _points, _plane
    );
  }
  tetrahedralize_delaunay(_points) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_tetrahedralize_delaunay,
      this._owner,
			Variant.Type.PACKED_INT32_ARRAY
    ,
      _points
    );
  }
}