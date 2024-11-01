
import { GodotObject } from "@godot/classes/godot_object";

export declare class Geometry3D extends GodotObject{
  public compute_convex_mesh_points(_planes: GDArray): PackedVector3Array;
  public build_box_planes(_extents: Vector3): GDArray;
  public build_cylinder_planes(_radius: number, _height: number, _sides: number, _axis: number): GDArray;
  public build_capsule_planes(_radius: number, _height: number, _sides: number, _lats: number, _axis: number): GDArray;
  public get_closest_points_between_segments(_p1: Vector3, _p2: Vector3, _q1: Vector3, _q2: Vector3): PackedVector3Array;
  public get_closest_point_to_segment(_point: Vector3, _s1: Vector3, _s2: Vector3): Vector3;
  public get_closest_point_to_segment_uncapped(_point: Vector3, _s1: Vector3, _s2: Vector3): Vector3;
  public get_triangle_barycentric_coords(_point: Vector3, _a: Vector3, _b: Vector3, _c: Vector3): Vector3;
  public ray_intersects_triangle(_from: Vector3, _dir: Vector3, _a: Vector3, _b: Vector3, _c: Vector3): any;
  public segment_intersects_triangle(_from: Vector3, _to: Vector3, _a: Vector3, _b: Vector3, _c: Vector3): any;
  public segment_intersects_sphere(_from: Vector3, _to: Vector3, _sphere_position: Vector3, _sphere_radius: number): PackedVector3Array;
  public segment_intersects_cylinder(_from: Vector3, _to: Vector3, _height: number, _radius: number): PackedVector3Array;
  public segment_intersects_convex(_from: Vector3, _to: Vector3, _planes: GDArray): PackedVector3Array;
  public clip_polygon(_points: PackedVector3Array, _plane: Plane): PackedVector3Array;
  public tetrahedralize_delaunay(_points: PackedVector3Array): PackedInt32Array;
}