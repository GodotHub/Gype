import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { GodotObject } from '@js_godot/classes/godot_object'
import { GDArray } from '@js_godot/variant/gd_array'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_is_point_in_circle;
  method_segment_intersects_circle;
  method_segment_intersects_segment;
  method_line_intersects_line;
  method_get_closest_points_between_segments;
  method_get_closest_point_to_segment;
  method_get_closest_point_to_segment_uncapped;
  method_point_is_inside_triangle;
  method_is_polygon_clockwise;
  method_is_point_in_polygon;
  method_triangulate_polygon;
  method_triangulate_delaunay;
  method_convex_hull;
  method_decompose_polygon_in_convex;
  method_merge_polygons;
  method_clip_polygons;
  method_intersect_polygons;
  method_exclude_polygons;
  method_clip_polyline_with_polygon;
  method_intersect_polyline_with_polygon;
  method_offset_polygon;
  method_offset_polyline;
  method_make_atlas;
}class _Geometry2D extends GodotObject{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("Geometry2D");
    } else {
      super(godot_object);
    }
  }
  static init_method_is_point_in_circle() {
    if (!this.#_bindings.method_is_point_in_circle) {
      let classname = new StringName("Geometry2D");
      let methodname = new StringName("is_point_in_circle");
      this.#_bindings.method_is_point_in_circle = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2929491703
      );
    }
  }
  static init_method_segment_intersects_circle() {
    if (!this.#_bindings.method_segment_intersects_circle) {
      let classname = new StringName("Geometry2D");
      let methodname = new StringName("segment_intersects_circle");
      this.#_bindings.method_segment_intersects_circle = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1356928167
      );
    }
  }
  static init_method_segment_intersects_segment() {
    if (!this.#_bindings.method_segment_intersects_segment) {
      let classname = new StringName("Geometry2D");
      let methodname = new StringName("segment_intersects_segment");
      this.#_bindings.method_segment_intersects_segment = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2058025344
      );
    }
  }
  static init_method_line_intersects_line() {
    if (!this.#_bindings.method_line_intersects_line) {
      let classname = new StringName("Geometry2D");
      let methodname = new StringName("line_intersects_line");
      this.#_bindings.method_line_intersects_line = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2058025344
      );
    }
  }
  static init_method_get_closest_points_between_segments() {
    if (!this.#_bindings.method_get_closest_points_between_segments) {
      let classname = new StringName("Geometry2D");
      let methodname = new StringName("get_closest_points_between_segments");
      this.#_bindings.method_get_closest_points_between_segments = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3344690961
      );
    }
  }
  static init_method_get_closest_point_to_segment() {
    if (!this.#_bindings.method_get_closest_point_to_segment) {
      let classname = new StringName("Geometry2D");
      let methodname = new StringName("get_closest_point_to_segment");
      this.#_bindings.method_get_closest_point_to_segment = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4172901909
      );
    }
  }
  static init_method_get_closest_point_to_segment_uncapped() {
    if (!this.#_bindings.method_get_closest_point_to_segment_uncapped) {
      let classname = new StringName("Geometry2D");
      let methodname = new StringName("get_closest_point_to_segment_uncapped");
      this.#_bindings.method_get_closest_point_to_segment_uncapped = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4172901909
      );
    }
  }
  static init_method_point_is_inside_triangle() {
    if (!this.#_bindings.method_point_is_inside_triangle) {
      let classname = new StringName("Geometry2D");
      let methodname = new StringName("point_is_inside_triangle");
      this.#_bindings.method_point_is_inside_triangle = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1025948137
      );
    }
  }
  static init_method_is_polygon_clockwise() {
    if (!this.#_bindings.method_is_polygon_clockwise) {
      let classname = new StringName("Geometry2D");
      let methodname = new StringName("is_polygon_clockwise");
      this.#_bindings.method_is_polygon_clockwise = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1361156557
      );
    }
  }
  static init_method_is_point_in_polygon() {
    if (!this.#_bindings.method_is_point_in_polygon) {
      let classname = new StringName("Geometry2D");
      let methodname = new StringName("is_point_in_polygon");
      this.#_bindings.method_is_point_in_polygon = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        738277916
      );
    }
  }
  static init_method_triangulate_polygon() {
    if (!this.#_bindings.method_triangulate_polygon) {
      let classname = new StringName("Geometry2D");
      let methodname = new StringName("triangulate_polygon");
      this.#_bindings.method_triangulate_polygon = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1389921771
      );
    }
  }
  static init_method_triangulate_delaunay() {
    if (!this.#_bindings.method_triangulate_delaunay) {
      let classname = new StringName("Geometry2D");
      let methodname = new StringName("triangulate_delaunay");
      this.#_bindings.method_triangulate_delaunay = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1389921771
      );
    }
  }
  static init_method_convex_hull() {
    if (!this.#_bindings.method_convex_hull) {
      let classname = new StringName("Geometry2D");
      let methodname = new StringName("convex_hull");
      this.#_bindings.method_convex_hull = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2004331998
      );
    }
  }
  static init_method_decompose_polygon_in_convex() {
    if (!this.#_bindings.method_decompose_polygon_in_convex) {
      let classname = new StringName("Geometry2D");
      let methodname = new StringName("decompose_polygon_in_convex");
      this.#_bindings.method_decompose_polygon_in_convex = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3982393695
      );
    }
  }
  static init_method_merge_polygons() {
    if (!this.#_bindings.method_merge_polygons) {
      let classname = new StringName("Geometry2D");
      let methodname = new StringName("merge_polygons");
      this.#_bindings.method_merge_polygons = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3637387053
      );
    }
  }
  static init_method_clip_polygons() {
    if (!this.#_bindings.method_clip_polygons) {
      let classname = new StringName("Geometry2D");
      let methodname = new StringName("clip_polygons");
      this.#_bindings.method_clip_polygons = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3637387053
      );
    }
  }
  static init_method_intersect_polygons() {
    if (!this.#_bindings.method_intersect_polygons) {
      let classname = new StringName("Geometry2D");
      let methodname = new StringName("intersect_polygons");
      this.#_bindings.method_intersect_polygons = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3637387053
      );
    }
  }
  static init_method_exclude_polygons() {
    if (!this.#_bindings.method_exclude_polygons) {
      let classname = new StringName("Geometry2D");
      let methodname = new StringName("exclude_polygons");
      this.#_bindings.method_exclude_polygons = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3637387053
      );
    }
  }
  static init_method_clip_polyline_with_polygon() {
    if (!this.#_bindings.method_clip_polyline_with_polygon) {
      let classname = new StringName("Geometry2D");
      let methodname = new StringName("clip_polyline_with_polygon");
      this.#_bindings.method_clip_polyline_with_polygon = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3637387053
      );
    }
  }
  static init_method_intersect_polyline_with_polygon() {
    if (!this.#_bindings.method_intersect_polyline_with_polygon) {
      let classname = new StringName("Geometry2D");
      let methodname = new StringName("intersect_polyline_with_polygon");
      this.#_bindings.method_intersect_polyline_with_polygon = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3637387053
      );
    }
  }
  static init_method_offset_polygon() {
    if (!this.#_bindings.method_offset_polygon) {
      let classname = new StringName("Geometry2D");
      let methodname = new StringName("offset_polygon");
      this.#_bindings.method_offset_polygon = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1275354010
      );
    }
  }
  static init_method_offset_polyline() {
    if (!this.#_bindings.method_offset_polyline) {
      let classname = new StringName("Geometry2D");
      let methodname = new StringName("offset_polyline");
      this.#_bindings.method_offset_polyline = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2328231778
      );
    }
  }
  static init_method_make_atlas() {
    if (!this.#_bindings.method_make_atlas) {
      let classname = new StringName("Geometry2D");
      let methodname = new StringName("make_atlas");
      this.#_bindings.method_make_atlas = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1337682371
      );
    }
  }

  
  
  is_point_in_circle(_point, _circle_position, _circle_radius) {
    Geometry2D.init_method_is_point_in_circle();
    return _call_native_mb_ret(
      _Geometry2D.#_bindings.method_is_point_in_circle,
      this._owner,
			Variant.Type.BOOL,
    
      _point, _circle_position, _circle_radius
    );
    
  }
  segment_intersects_circle(_segment_from, _segment_to, _circle_position, _circle_radius) {
    Geometry2D.init_method_segment_intersects_circle();
    return _call_native_mb_ret(
      _Geometry2D.#_bindings.method_segment_intersects_circle,
      this._owner,
			Variant.Type.FLOAT,
    
      _segment_from, _segment_to, _circle_position, _circle_radius
    );
    
  }
  segment_intersects_segment(_from_a, _to_a, _from_b, _to_b) {
    Geometry2D.init_method_segment_intersects_segment();
    return _call_native_mb_ret(
      _Geometry2D.#_bindings.method_segment_intersects_segment,
      this._owner,
			Variant.Type.VARIANT,
    
      _from_a, _to_a, _from_b, _to_b
    );
    
  }
  line_intersects_line(_from_a, _dir_a, _from_b, _dir_b) {
    Geometry2D.init_method_line_intersects_line();
    return _call_native_mb_ret(
      _Geometry2D.#_bindings.method_line_intersects_line,
      this._owner,
			Variant.Type.VARIANT,
    
      _from_a, _dir_a, _from_b, _dir_b
    );
    
  }
  get_closest_points_between_segments(_p1, _q1, _p2, _q2) {
    Geometry2D.init_method_get_closest_points_between_segments();
    return _call_native_mb_ret(
      _Geometry2D.#_bindings.method_get_closest_points_between_segments,
      this._owner,
			Variant.Type.PACKED_VECTOR2_ARRAY,
    
      _p1, _q1, _p2, _q2
    );
    
  }
  get_closest_point_to_segment(_point, _s1, _s2) {
    Geometry2D.init_method_get_closest_point_to_segment();
    return _call_native_mb_ret(
      _Geometry2D.#_bindings.method_get_closest_point_to_segment,
      this._owner,
			Variant.Type.VECTOR2,
    
      _point, _s1, _s2
    );
    
  }
  get_closest_point_to_segment_uncapped(_point, _s1, _s2) {
    Geometry2D.init_method_get_closest_point_to_segment_uncapped();
    return _call_native_mb_ret(
      _Geometry2D.#_bindings.method_get_closest_point_to_segment_uncapped,
      this._owner,
			Variant.Type.VECTOR2,
    
      _point, _s1, _s2
    );
    
  }
  point_is_inside_triangle(_point, _a, _b, _c) {
    Geometry2D.init_method_point_is_inside_triangle();
    return _call_native_mb_ret(
      _Geometry2D.#_bindings.method_point_is_inside_triangle,
      this._owner,
			Variant.Type.BOOL,
    
      _point, _a, _b, _c
    );
    
  }
  is_polygon_clockwise(_polygon) {
    Geometry2D.init_method_is_polygon_clockwise();
    return _call_native_mb_ret(
      _Geometry2D.#_bindings.method_is_polygon_clockwise,
      this._owner,
			Variant.Type.BOOL,
    
      _polygon
    );
    
  }
  is_point_in_polygon(_point, _polygon) {
    Geometry2D.init_method_is_point_in_polygon();
    return _call_native_mb_ret(
      _Geometry2D.#_bindings.method_is_point_in_polygon,
      this._owner,
			Variant.Type.BOOL,
    
      _point, _polygon
    );
    
  }
  triangulate_polygon(_polygon) {
    Geometry2D.init_method_triangulate_polygon();
    return _call_native_mb_ret(
      _Geometry2D.#_bindings.method_triangulate_polygon,
      this._owner,
			Variant.Type.PACKED_INT32_ARRAY,
    
      _polygon
    );
    
  }
  triangulate_delaunay(_points) {
    Geometry2D.init_method_triangulate_delaunay();
    return _call_native_mb_ret(
      _Geometry2D.#_bindings.method_triangulate_delaunay,
      this._owner,
			Variant.Type.PACKED_INT32_ARRAY,
    
      _points
    );
    
  }
  convex_hull(_points) {
    Geometry2D.init_method_convex_hull();
    return _call_native_mb_ret(
      _Geometry2D.#_bindings.method_convex_hull,
      this._owner,
			Variant.Type.PACKED_VECTOR2_ARRAY,
    
      _points
    );
    
  }
  decompose_polygon_in_convex(_polygon) {
    Geometry2D.init_method_decompose_polygon_in_convex();
    return _call_native_mb_ret(
      _Geometry2D.#_bindings.method_decompose_polygon_in_convex,
      this._owner,
			Variant.Type.ARRAY,
      _polygon
    );
    
  }
  merge_polygons(_polygon_a, _polygon_b) {
    Geometry2D.init_method_merge_polygons();
    return _call_native_mb_ret(
      _Geometry2D.#_bindings.method_merge_polygons,
      this._owner,
			Variant.Type.ARRAY,
      _polygon_a, _polygon_b
    );
    
  }
  clip_polygons(_polygon_a, _polygon_b) {
    Geometry2D.init_method_clip_polygons();
    return _call_native_mb_ret(
      _Geometry2D.#_bindings.method_clip_polygons,
      this._owner,
			Variant.Type.ARRAY,
      _polygon_a, _polygon_b
    );
    
  }
  intersect_polygons(_polygon_a, _polygon_b) {
    Geometry2D.init_method_intersect_polygons();
    return _call_native_mb_ret(
      _Geometry2D.#_bindings.method_intersect_polygons,
      this._owner,
			Variant.Type.ARRAY,
      _polygon_a, _polygon_b
    );
    
  }
  exclude_polygons(_polygon_a, _polygon_b) {
    Geometry2D.init_method_exclude_polygons();
    return _call_native_mb_ret(
      _Geometry2D.#_bindings.method_exclude_polygons,
      this._owner,
			Variant.Type.ARRAY,
      _polygon_a, _polygon_b
    );
    
  }
  clip_polyline_with_polygon(_polyline, _polygon) {
    Geometry2D.init_method_clip_polyline_with_polygon();
    return _call_native_mb_ret(
      _Geometry2D.#_bindings.method_clip_polyline_with_polygon,
      this._owner,
			Variant.Type.ARRAY,
      _polyline, _polygon
    );
    
  }
  intersect_polyline_with_polygon(_polyline, _polygon) {
    Geometry2D.init_method_intersect_polyline_with_polygon();
    return _call_native_mb_ret(
      _Geometry2D.#_bindings.method_intersect_polyline_with_polygon,
      this._owner,
			Variant.Type.ARRAY,
      _polyline, _polygon
    );
    
  }
  offset_polygon(_polygon, _delta, _join_type) {
    Geometry2D.init_method_offset_polygon();
    return _call_native_mb_ret(
      _Geometry2D.#_bindings.method_offset_polygon,
      this._owner,
			Variant.Type.ARRAY,
      _polygon, _delta, _join_type
    );
    
  }
  offset_polyline(_polyline, _delta, _join_type, _end_type) {
    Geometry2D.init_method_offset_polyline();
    return _call_native_mb_ret(
      _Geometry2D.#_bindings.method_offset_polyline,
      this._owner,
			Variant.Type.ARRAY,
      _polyline, _delta, _join_type, _end_type
    );
    
  }
  make_atlas(_sizes) {
    Geometry2D.init_method_make_atlas();
    return _call_native_mb_ret(
      _Geometry2D.#_bindings.method_make_atlas,
      this._owner,
			Variant.Type.DICTIONARY,
    
      _sizes
    );
    
  }
  

  static PolyBooleanOperation = {
    OPERATION_UNION: 0,
    OPERATION_DIFFERENCE: 1,
    OPERATION_INTERSECTION: 2,
    OPERATION_XOR: 3,
  }
  static PolyJoinType = {
    JOIN_SQUARE: 0,
    JOIN_ROUND: 1,
    JOIN_MITER: 2,
  }
  static PolyEndType = {
    END_POLYGON: 0,
    END_JOINED: 1,
    END_BUTT: 2,
    END_SQUARE: 3,
    END_ROUND: 4,
  }
}
export const Geometry2D = (function () {
  let _instance;
  function create_instance() {
    return new _Geometry2D();
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