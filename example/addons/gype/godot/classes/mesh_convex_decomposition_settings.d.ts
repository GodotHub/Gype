
import { RefCounted } from "@godot/classes/ref_counted";
export declare class MeshConvexDecompositionSettings extends RefCounted{
  public set_max_concavity(_max_concavity: number): void;
  public get_max_concavity(): number;
  public set_symmetry_planes_clipping_bias(_symmetry_planes_clipping_bias: number): void;
  public get_symmetry_planes_clipping_bias(): number;
  public set_revolution_axes_clipping_bias(_revolution_axes_clipping_bias: number): void;
  public get_revolution_axes_clipping_bias(): number;
  public set_min_volume_per_convex_hull(_min_volume_per_convex_hull: number): void;
  public get_min_volume_per_convex_hull(): number;
  public set_resolution(_min_volume_per_convex_hull: number): void;
  public get_resolution(): number;
  public set_max_num_vertices_per_convex_hull(_max_num_vertices_per_convex_hull: number): void;
  public get_max_num_vertices_per_convex_hull(): number;
  public set_plane_downsampling(_plane_downsampling: number): void;
  public get_plane_downsampling(): number;
  public set_convex_hull_downsampling(_convex_hull_downsampling: number): void;
  public get_convex_hull_downsampling(): number;
  public set_normalize_mesh(_normalize_mesh: boolean): void;
  public get_normalize_mesh(): boolean;
  public set_mode(_mode: number): void;
  public get_mode(): number;
  public set_convex_hull_approximation(_convex_hull_approximation: boolean): void;
  public get_convex_hull_approximation(): boolean;
  public set_max_convex_hulls(_max_convex_hulls: number): void;
  public get_max_convex_hulls(): number;
  public set_project_hull_vertices(_project_hull_vertices: boolean): void;
  public get_project_hull_vertices(): boolean;
  public get max_concavity(): number;
  public set max_concavity(value): void;
  public get symmetry_planes_clipping_bias(): number;
  public set symmetry_planes_clipping_bias(value): void;
  public get revolution_axes_clipping_bias(): number;
  public set revolution_axes_clipping_bias(value): void;
  public get min_volume_per_convex_hull(): number;
  public set min_volume_per_convex_hull(value): void;
  public get resolution(): number;
  public set resolution(value): void;
  public get max_num_vertices_per_convex_hull(): number;
  public set max_num_vertices_per_convex_hull(value): void;
  public get plane_downsampling(): number;
  public set plane_downsampling(value): void;
  public get convex_hull_downsampling(): number;
  public set convex_hull_downsampling(value): void;
  public get normalize_mesh(): boolean;
  public set normalize_mesh(value): void;
  public get mode(): number;
  public set mode(value): void;
  public get convex_hull_approximation(): boolean;
  public set convex_hull_approximation(value): void;
  public get max_convex_hulls(): number;
  public set max_convex_hulls(value): void;
  public get project_hull_vertices(): boolean;
  public set project_hull_vertices(value): void;
  static Mode = {
    CONVEX_DECOMPOSITION_MODE_VOXEL = 0,
    CONVEX_DECOMPOSITION_MODE_TETRAHEDRON = 1,
  }
}