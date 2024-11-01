
import { VisualInstance3D } from "@godot/classes/visual_instance3d";

export declare class ReflectionProbe extends VisualInstance3D{
  public set_intensity(_intensity: number): void;
  public get_intensity(): number;
  public set_ambient_mode(_ambient: number): void;
  public get_ambient_mode(): number;
  public set_ambient_color(_ambient: Color): void;
  public get_ambient_color(): Color;
  public set_ambient_color_energy(_ambient_energy: number): void;
  public get_ambient_color_energy(): number;
  public set_max_distance(_max_distance: number): void;
  public get_max_distance(): number;
  public set_mesh_lod_threshold(_ratio: number): void;
  public get_mesh_lod_threshold(): number;
  public set_size(_size: Vector3): void;
  public get_size(): Vector3;
  public set_origin_offset(_origin_offset: Vector3): void;
  public get_origin_offset(): Vector3;
  public set_as_interior(_enable: boolean): void;
  public is_set_as_interior(): boolean;
  public set_enable_box_projection(_enable: boolean): void;
  public is_box_projection_enabled(): boolean;
  public set_enable_shadows(_enable: boolean): void;
  public are_shadows_enabled(): boolean;
  public set_cull_mask(_layers: number): void;
  public get_cull_mask(): number;
  public set_reflection_mask(_layers: number): void;
  public get_reflection_mask(): number;
  public set_update_mode(_mode: number): void;
  public get_update_mode(): number;
  public get update_mode(): number {
    get_update_mode();
  }
  public set update_mode(value): void {
    set_update_mode(value);
  }
  public get intensity(): number {
    get_intensity();
  }
  public set intensity(value): void {
    set_intensity(value);
  }
  public get max_distance(): number {
    get_max_distance();
  }
  public set max_distance(value): void {
    set_max_distance(value);
  }
  public get size(): Vector3 {
    get_size();
  }
  public set size(value): void {
    set_size(value);
  }
  public get origin_offset(): Vector3 {
    get_origin_offset();
  }
  public set origin_offset(value): void {
    set_origin_offset(value);
  }
  public get box_projection(): boolean {
    is_box_projection_enabled();
  }
  public set box_projection(value): void {
    set_enable_box_projection(value);
  }
  public get interior(): boolean {
    is_set_as_interior();
  }
  public set interior(value): void {
    set_as_interior(value);
  }
  public get enable_shadows(): boolean {
    are_shadows_enabled();
  }
  public set enable_shadows(value): void {
    set_enable_shadows(value);
  }
  public get cull_mask(): number {
    get_cull_mask();
  }
  public set cull_mask(value): void {
    set_cull_mask(value);
  }
  public get reflection_mask(): number {
    get_reflection_mask();
  }
  public set reflection_mask(value): void {
    set_reflection_mask(value);
  }
  public get mesh_lod_threshold(): number {
    get_mesh_lod_threshold();
  }
  public set mesh_lod_threshold(value): void {
    set_mesh_lod_threshold(value);
  }
  public get ambient_mode(): number {
    get_ambient_mode();
  }
  public set ambient_mode(value): void {
    set_ambient_mode(value);
  }
  public get ambient_color(): Color {
    get_ambient_color();
  }
  public set ambient_color(value): void {
    set_ambient_color(value);
  }
  public get ambient_color_energy(): number {
    get_ambient_color_energy();
  }
  public set ambient_color_energy(value): void {
    set_ambient_color_energy(value);
  }
  static UpdateMode = {
    UPDATE_ONCE = 0,
    UPDATE_ALWAYS = 1,
  }
  static AmbientMode = {
    AMBIENT_DISABLED = 0,
    AMBIENT_ENVIRONMENT = 1,
    AMBIENT_COLOR = 2,
  }
}