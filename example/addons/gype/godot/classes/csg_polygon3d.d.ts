
import { Material } from "@godot/classes/material";
import { CSGPrimitive3D } from "@godot/classes/csg_primitive3d";

export declare class CSGPolygon3D extends CSGPrimitive3D{
  public set_polygon(_polygon: PackedVector2Array): void;
  public get_polygon(): PackedVector2Array;
  public set_mode(_mode: number): void;
  public get_mode(): number;
  public set_depth(_depth: number): void;
  public get_depth(): number;
  public set_spin_degrees(_degrees: number): void;
  public get_spin_degrees(): number;
  public set_spin_sides(_spin_sides: number): void;
  public get_spin_sides(): number;
  public set_path_node(_path: NodePath): void;
  public get_path_node(): NodePath;
  public set_path_interval_type(_interval_type: number): void;
  public get_path_interval_type(): number;
  public set_path_interval(_interval: number): void;
  public get_path_interval(): number;
  public set_path_simplify_angle(_degrees: number): void;
  public get_path_simplify_angle(): number;
  public set_path_rotation(_path_rotation: number): void;
  public get_path_rotation(): number;
  public set_path_local(_enable: boolean): void;
  public is_path_local(): boolean;
  public set_path_continuous_u(_enable: boolean): void;
  public is_path_continuous_u(): boolean;
  public set_path_u_distance(_distance: number): void;
  public get_path_u_distance(): number;
  public set_path_joined(_enable: boolean): void;
  public is_path_joined(): boolean;
  public set_material(_material: Material): void;
  public get_material(): Material;
  public set_smooth_faces(_smooth_faces: boolean): void;
  public get_smooth_faces(): boolean;
  public get polygon(): PackedVector2Array {
    get_polygon();
  }
  public set polygon(value): void {
    set_polygon(value);
  }
  public get mode(): number {
    get_mode();
  }
  public set mode(value): void {
    set_mode(value);
  }
  public get depth(): number {
    get_depth();
  }
  public set depth(value): void {
    set_depth(value);
  }
  public get spin_degrees(): number {
    get_spin_degrees();
  }
  public set spin_degrees(value): void {
    set_spin_degrees(value);
  }
  public get spin_sides(): number {
    get_spin_sides();
  }
  public set spin_sides(value): void {
    set_spin_sides(value);
  }
  public get path_node(): NodePath {
    get_path_node();
  }
  public set path_node(value): void {
    set_path_node(value);
  }
  public get path_interval_type(): number {
    get_path_interval_type();
  }
  public set path_interval_type(value): void {
    set_path_interval_type(value);
  }
  public get path_interval(): number {
    get_path_interval();
  }
  public set path_interval(value): void {
    set_path_interval(value);
  }
  public get path_simplify_angle(): number {
    get_path_simplify_angle();
  }
  public set path_simplify_angle(value): void {
    set_path_simplify_angle(value);
  }
  public get path_rotation(): number {
    get_path_rotation();
  }
  public set path_rotation(value): void {
    set_path_rotation(value);
  }
  public get path_local(): boolean {
    is_path_local();
  }
  public set path_local(value): void {
    set_path_local(value);
  }
  public get path_continuous_u(): boolean {
    is_path_continuous_u();
  }
  public set path_continuous_u(value): void {
    set_path_continuous_u(value);
  }
  public get path_u_distance(): number {
    get_path_u_distance();
  }
  public set path_u_distance(value): void {
    set_path_u_distance(value);
  }
  public get path_joined(): boolean {
    is_path_joined();
  }
  public set path_joined(value): void {
    set_path_joined(value);
  }
  public get smooth_faces(): boolean {
    get_smooth_faces();
  }
  public set smooth_faces(value): void {
    set_smooth_faces(value);
  }
  public get material(): BaseMaterial3D {
    get_material();
  }
  public set material(value): void {
    set_material(value);
  }
  static Mode = {
    MODE_DEPTH = 0,
    MODE_SPIN = 1,
    MODE_PATH = 2,
  }
  static PathRotation = {
    PATH_ROTATION_POLYGON = 0,
    PATH_ROTATION_PATH = 1,
    PATH_ROTATION_PATH_FOLLOW = 2,
  }
  static PathIntervalType = {
    PATH_INTERVAL_DISTANCE = 0,
    PATH_INTERVAL_SUBDIVIDE = 1,
  }
}