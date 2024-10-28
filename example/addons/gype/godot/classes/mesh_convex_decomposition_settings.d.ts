
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
  public get max_concavity(): number {
    get_max_concavity();
  }
  public set max_concavity(value: number): void {
    set_max_concavity(value);
  }
  public get symmetry_planes_clipping_bias(): number {
    get_symmetry_planes_clipping_bias();
  }
  public set symmetry_planes_clipping_bias(value: number): void {
    set_symmetry_planes_clipping_bias(value);
  }
  public get revolution_axes_clipping_bias(): number {
    get_revolution_axes_clipping_bias();
  }
  public set revolution_axes_clipping_bias(value: number): void {
    set_revolution_axes_clipping_bias(value);
  }
  public get min_volume_per_convex_hull(): number {
    get_min_volume_per_convex_hull();
  }
  public set min_volume_per_convex_hull(value: number): void {
    set_min_volume_per_convex_hull(value);
  }
  public get resolution(): number {
    get_resolution();
  }
  public set resolution(value: number): void {
    set_resolution(value);
  }
  public get max_num_vertices_per_convex_hull(): number {
    get_max_num_vertices_per_convex_hull();
  }
  public set max_num_vertices_per_convex_hull(value: number): void {
    set_max_num_vertices_per_convex_hull(value);
  }
  public get plane_downsampling(): number {
    get_plane_downsampling();
  }
  public set plane_downsampling(value: number): void {
    set_plane_downsampling(value);
  }
  public get convex_hull_downsampling(): number {
    get_convex_hull_downsampling();
  }
  public set convex_hull_downsampling(value: number): void {
    set_convex_hull_downsampling(value);
  }
  public get normalize_mesh(): boolean {
    get_normalize_mesh();
  }
  public set normalize_mesh(value: boolean): void {
    set_normalize_mesh(value);
  }
  public get mode(): number {
    get_mode();
  }
  public set mode(value: number): void {
    set_mode(value);
  }
  public get convex_hull_approximation(): boolean {
    get_convex_hull_approximation();
  }
  public set convex_hull_approximation(value: boolean): void {
    set_convex_hull_approximation(value);
  }
  public get max_convex_hulls(): number {
    get_max_convex_hulls();
  }
  public set max_convex_hulls(value: number): void {
    set_max_convex_hulls(value);
  }
  public get project_hull_vertices(): boolean {
    get_project_hull_vertices();
  }
  public set project_hull_vertices(value: boolean): void {
    set_project_hull_vertices(value);
  }
  static Mode = {
    CONVEX_DECOMPOSITION_MODE_VOXEL = 0,
    CONVEX_DECOMPOSITION_MODE_TETRAHEDRON = 1,
  }
}