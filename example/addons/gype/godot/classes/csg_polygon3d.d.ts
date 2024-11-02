
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
  public set_path_node(_path: GDString | NodePath | string): void;
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
  public get polygon(): PackedVector2Array;
  public set polygon(value): void;
  public get mode(): number;
  public set mode(value): void;
  public get depth(): number;
  public set depth(value): void;
  public get spin_degrees(): number;
  public set spin_degrees(value): void;
  public get spin_sides(): number;
  public set spin_sides(value): void;
  public get path_node(): NodePath;
  public set path_node(value): void;
  public get path_interval_type(): number;
  public set path_interval_type(value): void;
  public get path_interval(): number;
  public set path_interval(value): void;
  public get path_simplify_angle(): number;
  public set path_simplify_angle(value): void;
  public get path_rotation(): number;
  public set path_rotation(value): void;
  public get path_local(): boolean;
  public set path_local(value): void;
  public get path_continuous_u(): boolean;
  public set path_continuous_u(value): void;
  public get path_u_distance(): number;
  public set path_u_distance(value): void;
  public get path_joined(): boolean;
  public set path_joined(value): void;
  public get smooth_faces(): boolean;
  public set smooth_faces(value): void;
  public get material(): BaseMaterial3D;
  public set material(value): void;
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