import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { Dictionary } from '@js_godot/variant/dictionary'
import { GodotObject } from '@js_godot/classes/godot_object'
import { StringName } from '@js_godot/variant/string_name'
import { PackedInt32Array } from '@js_godot/variant/packed_int32_array'
import { PackedVector2Array } from '@js_godot/variant/packed_vector2_array'
import { Vector2 } from '@js_godot/variant/vector2'
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

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("Geometry2D");
    } else {
      super(godot_object);
    }
  }
  
  static async _init_bindings() {
    if (this.#initialized) {
      return;
    }
    this.#initialized = true;
    {
      let classname = new StringName("Geometry2D");
      let methodname = new StringName("is_point_in_circle");
      this._bindings.method_is_point_in_circle = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2929491703
      );
    }
    {
      let classname = new StringName("Geometry2D");
      let methodname = new StringName("segment_intersects_circle");
      this._bindings.method_segment_intersects_circle = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1356928167
      );
    }
    {
      let classname = new StringName("Geometry2D");
      let methodname = new StringName("segment_intersects_segment");
      this._bindings.method_segment_intersects_segment = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2058025344
      );
    }
    {
      let classname = new StringName("Geometry2D");
      let methodname = new StringName("line_intersects_line");
      this._bindings.method_line_intersects_line = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2058025344
      );
    }
    {
      let classname = new StringName("Geometry2D");
      let methodname = new StringName("get_closest_points_between_segments");
      this._bindings.method_get_closest_points_between_segments = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3344690961
      );
    }
    {
      let classname = new StringName("Geometry2D");
      let methodname = new StringName("get_closest_point_to_segment");
      this._bindings.method_get_closest_point_to_segment = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4172901909
      );
    }
    {
      let classname = new StringName("Geometry2D");
      let methodname = new StringName("get_closest_point_to_segment_uncapped");
      this._bindings.method_get_closest_point_to_segment_uncapped = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4172901909
      );
    }
    {
      let classname = new StringName("Geometry2D");
      let methodname = new StringName("point_is_inside_triangle");
      this._bindings.method_point_is_inside_triangle = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1025948137
      );
    }
    {
      let classname = new StringName("Geometry2D");
      let methodname = new StringName("is_polygon_clockwise");
      this._bindings.method_is_polygon_clockwise = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1361156557
      );
    }
    {
      let classname = new StringName("Geometry2D");
      let methodname = new StringName("is_point_in_polygon");
      this._bindings.method_is_point_in_polygon = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        738277916
      );
    }
    {
      let classname = new StringName("Geometry2D");
      let methodname = new StringName("triangulate_polygon");
      this._bindings.method_triangulate_polygon = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1389921771
      );
    }
    {
      let classname = new StringName("Geometry2D");
      let methodname = new StringName("triangulate_delaunay");
      this._bindings.method_triangulate_delaunay = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1389921771
      );
    }
    {
      let classname = new StringName("Geometry2D");
      let methodname = new StringName("convex_hull");
      this._bindings.method_convex_hull = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2004331998
      );
    }
    {
      let classname = new StringName("Geometry2D");
      let methodname = new StringName("decompose_polygon_in_convex");
      this._bindings.method_decompose_polygon_in_convex = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3982393695
      );
    }
    {
      let classname = new StringName("Geometry2D");
      let methodname = new StringName("merge_polygons");
      this._bindings.method_merge_polygons = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3637387053
      );
    }
    {
      let classname = new StringName("Geometry2D");
      let methodname = new StringName("clip_polygons");
      this._bindings.method_clip_polygons = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3637387053
      );
    }
    {
      let classname = new StringName("Geometry2D");
      let methodname = new StringName("intersect_polygons");
      this._bindings.method_intersect_polygons = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3637387053
      );
    }
    {
      let classname = new StringName("Geometry2D");
      let methodname = new StringName("exclude_polygons");
      this._bindings.method_exclude_polygons = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3637387053
      );
    }
    {
      let classname = new StringName("Geometry2D");
      let methodname = new StringName("clip_polyline_with_polygon");
      this._bindings.method_clip_polyline_with_polygon = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3637387053
      );
    }
    {
      let classname = new StringName("Geometry2D");
      let methodname = new StringName("intersect_polyline_with_polygon");
      this._bindings.method_intersect_polyline_with_polygon = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3637387053
      );
    }
    {
      let classname = new StringName("Geometry2D");
      let methodname = new StringName("offset_polygon");
      this._bindings.method_offset_polygon = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1275354010
      );
    }
    {
      let classname = new StringName("Geometry2D");
      let methodname = new StringName("offset_polyline");
      this._bindings.method_offset_polyline = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2328231778
      );
    }
    {
      let classname = new StringName("Geometry2D");
      let methodname = new StringName("make_atlas");
      this._bindings.method_make_atlas = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1337682371
      );
    }
  }
  is_point_in_circle(_point, _circle_position, _circle_radius) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_point_in_circle,
      this._owner,
			Variant.Type.BOOL,
      _point, _circle_position, _circle_radius
    );
    
  }
  segment_intersects_circle(_segment_from, _segment_to, _circle_position, _circle_radius) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_segment_intersects_circle,
      this._owner,
			Variant.Type.FLOAT,
      _segment_from, _segment_to, _circle_position, _circle_radius
    );
    
  }
  segment_intersects_segment(_from_a, _to_a, _from_b, _to_b) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_segment_intersects_segment,
      this._owner,
			Variant.Type.VARIANT,
    
      _from_a, _to_a, _from_b, _to_b
    );
    
  }
  line_intersects_line(_from_a, _dir_a, _from_b, _dir_b) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_line_intersects_line,
      this._owner,
			Variant.Type.VARIANT,
    
      _from_a, _dir_a, _from_b, _dir_b
    );
    
  }
  get_closest_points_between_segments(_p1, _q1, _p2, _q2) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_closest_points_between_segments,
      this._owner,
			Variant.Type.PACKED_VECTOR2_ARRAY,
    
      _p1, _q1, _p2, _q2
    );
    
  }
  get_closest_point_to_segment(_point, _s1, _s2) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_closest_point_to_segment,
      this._owner,
			Variant.Type.VECTOR2,
    
      _point, _s1, _s2
    );
    
  }
  get_closest_point_to_segment_uncapped(_point, _s1, _s2) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_closest_point_to_segment_uncapped,
      this._owner,
			Variant.Type.VECTOR2,
    
      _point, _s1, _s2
    );
    
  }
  point_is_inside_triangle(_point, _a, _b, _c) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_point_is_inside_triangle,
      this._owner,
			Variant.Type.BOOL,
      _point, _a, _b, _c
    );
    
  }
  is_polygon_clockwise(_polygon) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_polygon_clockwise,
      this._owner,
			Variant.Type.BOOL,
      _polygon
    );
    
  }
  is_point_in_polygon(_point, _polygon) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_point_in_polygon,
      this._owner,
			Variant.Type.BOOL,
      _point, _polygon
    );
    
  }
  triangulate_polygon(_polygon) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_triangulate_polygon,
      this._owner,
			Variant.Type.PACKED_INT32_ARRAY,
    
      _polygon
    );
    
  }
  triangulate_delaunay(_points) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_triangulate_delaunay,
      this._owner,
			Variant.Type.PACKED_INT32_ARRAY,
    
      _points
    );
    
  }
  convex_hull(_points) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_convex_hull,
      this._owner,
			Variant.Type.PACKED_VECTOR2_ARRAY,
    
      _points
    );
    
  }
  decompose_polygon_in_convex(_polygon) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_decompose_polygon_in_convex,
      this._owner,
			Variant.INT,
      _polygon
    );
    
  }
  merge_polygons(_polygon_a, _polygon_b) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_merge_polygons,
      this._owner,
			Variant.INT,
      _polygon_a, _polygon_b
    );
    
  }
  clip_polygons(_polygon_a, _polygon_b) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_clip_polygons,
      this._owner,
			Variant.INT,
      _polygon_a, _polygon_b
    );
    
  }
  intersect_polygons(_polygon_a, _polygon_b) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_intersect_polygons,
      this._owner,
			Variant.INT,
      _polygon_a, _polygon_b
    );
    
  }
  exclude_polygons(_polygon_a, _polygon_b) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_exclude_polygons,
      this._owner,
			Variant.INT,
      _polygon_a, _polygon_b
    );
    
  }
  clip_polyline_with_polygon(_polyline, _polygon) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_clip_polyline_with_polygon,
      this._owner,
			Variant.INT,
      _polyline, _polygon
    );
    
  }
  intersect_polyline_with_polygon(_polyline, _polygon) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_intersect_polyline_with_polygon,
      this._owner,
			Variant.INT,
      _polyline, _polygon
    );
    
  }
  offset_polygon(_polygon, _delta, _join_type) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_offset_polygon,
      this._owner,
			Variant.INT,
      _polygon, _delta, _join_type
    );
    
  }
  offset_polyline(_polyline, _delta, _join_type, _end_type) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_offset_polyline,
      this._owner,
			Variant.INT,
      _polyline, _delta, _join_type, _end_type
    );
    
  }
  make_atlas(_sizes) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_make_atlas,
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

  static {
    this._init_bindings();
  }
}
export const Geometry2D = new _Geometry2D();