
import { RefCounted } from "@godot/classes/ref_counted";

export declare class RenderSceneBuffersConfiguration extends RefCounted{
  public get_render_target(): RID;
  public set_render_target(_render_target: RID): void;
  public get_internal_size(): Vector2i;
  public set_internal_size(_internal_size: Vector2i): void;
  public get_target_size(): Vector2i;
  public set_target_size(_target_size: Vector2i): void;
  public get_view_count(): number;
  public set_view_count(_view_count: number): void;
  public get_scaling_3d_mode(): number;
  public set_scaling_3d_mode(_scaling_3d_mode: number): void;
  public get_msaa_3d(): number;
  public set_msaa_3d(_msaa_3d: number): void;
  public get_screen_space_aa(): number;
  public set_screen_space_aa(_screen_space_aa: number): void;
  public get_fsr_sharpness(): number;
  public set_fsr_sharpness(_fsr_sharpness: number): void;
  public get_texture_mipmap_bias(): number;
  public set_texture_mipmap_bias(_texture_mipmap_bias: number): void;
  public get render_target(): RID {
    get_render_target();
  }
  public set render_target(value): void {
    set_render_target(value);
  }
  public get internal_size(): Vector2i {
    get_internal_size();
  }
  public set internal_size(value): void {
    set_internal_size(value);
  }
  public get target_size(): Vector2i {
    get_target_size();
  }
  public set target_size(value): void {
    set_target_size(value);
  }
  public get view_count(): number {
    get_view_count();
  }
  public set view_count(value): void {
    set_view_count(value);
  }
  public get scaling_3d_mode(): number {
    get_scaling_3d_mode();
  }
  public set scaling_3d_mode(value): void {
    set_scaling_3d_mode(value);
  }
  public get msaa_3d(): number {
    get_msaa_3d();
  }
  public set msaa_3d(value): void {
    set_msaa_3d(value);
  }
  public get screen_space_aa(): number {
    get_screen_space_aa();
  }
  public set screen_space_aa(value): void {
    set_screen_space_aa(value);
  }
  public get fsr_sharpness(): boolean {
    get_fsr_sharpness();
  }
  public set fsr_sharpness(value): void {
    set_fsr_sharpness(value);
  }
  public get texture_mipmap_bias(): boolean {
    get_texture_mipmap_bias();
  }
  public set texture_mipmap_bias(value): void {
    set_texture_mipmap_bias(value);
  }
}