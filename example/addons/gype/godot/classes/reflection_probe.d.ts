
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
  public get update_mode(): number;
  public set update_mode(value): void;
  public get intensity(): number;
  public set intensity(value): void;
  public get max_distance(): number;
  public set max_distance(value): void;
  public get size(): Vector3;
  public set size(value): void;
  public get origin_offset(): Vector3;
  public set origin_offset(value): void;
  public get box_projection(): boolean;
  public set box_projection(value): void;
  public get interior(): boolean;
  public set interior(value): void;
  public get enable_shadows(): boolean;
  public set enable_shadows(value): void;
  public get cull_mask(): number;
  public set cull_mask(value): void;
  public get reflection_mask(): number;
  public set reflection_mask(value): void;
  public get mesh_lod_threshold(): number;
  public set mesh_lod_threshold(value): void;
  public get ambient_mode(): number;
  public set ambient_mode(value): void;
  public get ambient_color(): Color;
  public set ambient_color(value): void;
  public get ambient_color_energy(): number;
  public set ambient_color_energy(value): void;
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