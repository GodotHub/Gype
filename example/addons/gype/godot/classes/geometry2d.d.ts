
import { GodotObject } from "@godot/classes/godot_object";
declare global {
export declare class _Geometry2D extends GodotObject{
  public is_point_in_circle(_point: Vector2, _circle_position: Vector2, _circle_radius: number): boolean;
  public segment_intersects_circle(_segment_from: Vector2, _segment_to: Vector2, _circle_position: Vector2, _circle_radius: number): number;
  public segment_intersects_segment(_from_a: Vector2, _to_a: Vector2, _from_b: Vector2, _to_b: Vector2): any;
  public line_intersects_line(_from_a: Vector2, _dir_a: Vector2, _from_b: Vector2, _dir_b: Vector2): any;
  public get_closest_points_between_segments(_p1: Vector2, _q1: Vector2, _p2: Vector2, _q2: Vector2): PackedVector2Array;
  public get_closest_point_to_segment(_point: Vector2, _s1: Vector2, _s2: Vector2): Vector2;
  public get_closest_point_to_segment_uncapped(_point: Vector2, _s1: Vector2, _s2: Vector2): Vector2;
  public point_is_inside_triangle(_point: Vector2, _a: Vector2, _b: Vector2, _c: Vector2): boolean;
  public is_polygon_clockwise(_polygon: PackedVector2Array): boolean;
  public is_point_in_polygon(_point: Vector2, _polygon: PackedVector2Array): boolean;
  public triangulate_polygon(_polygon: PackedVector2Array): PackedInt32Array;
  public triangulate_delaunay(_points: PackedVector2Array): PackedInt32Array;
  public convex_hull(_points: PackedVector2Array): PackedVector2Array;
  public decompose_polygon_in_convex(_polygon: PackedVector2Array): GDArray;
  public merge_polygons(_polygon_a: PackedVector2Array, _polygon_b: PackedVector2Array): GDArray;
  public clip_polygons(_polygon_a: PackedVector2Array, _polygon_b: PackedVector2Array): GDArray;
  public intersect_polygons(_polygon_a: PackedVector2Array, _polygon_b: PackedVector2Array): GDArray;
  public exclude_polygons(_polygon_a: PackedVector2Array, _polygon_b: PackedVector2Array): GDArray;
  public clip_polyline_with_polygon(_polyline: PackedVector2Array, _polygon: PackedVector2Array): GDArray;
  public intersect_polyline_with_polygon(_polyline: PackedVector2Array, _polygon: PackedVector2Array): GDArray;
  public offset_polygon(_polygon: PackedVector2Array, _delta: number, _join_type: number = 0): GDArray;
  public offset_polyline(_polyline: PackedVector2Array, _delta: number, _join_type: number = 0, _end_type: number = 3): GDArray;
  public make_atlas(_sizes: PackedVector2Array): Dictionary;
  static PolyBooleanOperation = {
    OPERATION_UNION = 0,
    OPERATION_DIFFERENCE = 1,
    OPERATION_INTERSECTION = 2,
    OPERATION_XOR = 3,
  }
  static PolyJoinType = {
    JOIN_SQUARE = 0,
    JOIN_ROUND = 1,
    JOIN_MITER = 2,
  }
  static PolyEndType = {
    END_POLYGON = 0,
    END_JOINED = 1,
    END_BUTT = 2,
    END_SQUARE = 3,
    END_ROUND = 4,
  }
}
}
declare global {
  const Geometry2D: _Geometry2D;
}