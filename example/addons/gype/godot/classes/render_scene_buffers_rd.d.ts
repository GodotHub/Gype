
import { RDTextureView } from "@godot/classes/rd_texture_view";
import { RenderSceneBuffers } from "@godot/classes/render_scene_buffers";
import { RDTextureFormat } from "@godot/classes/rd_texture_format";
export declare class RenderSceneBuffersRD extends RenderSceneBuffers{
  public has_texture(_context: GDString | StringName | string, _name: GDString | StringName | string): boolean;
  public create_texture(_context: GDString | StringName | string, _name: GDString | StringName | string, _data_format: number, _usage_bits: number, _texture_samples: number, _size: Vector2i, _layers: number, _mipmaps: number, _unique: boolean): RID;
  public create_texture_from_format(_context: GDString | StringName | string, _name: GDString | StringName | string, _format: RDTextureFormat, _view: RDTextureView, _unique: boolean): RID;
  public create_texture_view(_context: GDString | StringName | string, _name: GDString | StringName | string, _view_name: GDString | StringName | string, _view: RDTextureView): RID;
  public get_texture(_context: GDString | StringName | string, _name: GDString | StringName | string): RID;
  public get_texture_format(_context: GDString | StringName | string, _name: GDString | StringName | string): RDTextureFormat;
  public get_texture_slice(_context: GDString | StringName | string, _name: GDString | StringName | string, _layer: number, _mipmap: number, _layers: number, _mipmaps: number): RID;
  public get_texture_slice_view(_context: GDString | StringName | string, _name: GDString | StringName | string, _layer: number, _mipmap: number, _layers: number, _mipmaps: number, _view: RDTextureView): RID;
  public get_texture_slice_size(_context: GDString | StringName | string, _name: GDString | StringName | string, _mipmap: number): Vector2i;
  public clear_context(_context: GDString | StringName | string): void;
  public get_color_texture(_msaa: boolean = false): RID;
  public get_color_layer(_layer: number, _msaa: boolean = false): RID;
  public get_depth_texture(_msaa: boolean = false): RID;
  public get_depth_layer(_layer: number, _msaa: boolean = false): RID;
  public get_velocity_texture(_msaa: boolean = false): RID;
  public get_velocity_layer(_layer: number, _msaa: boolean = false): RID;
  public get_render_target(): RID;
  public get_view_count(): number;
  public get_internal_size(): Vector2i;
  public get_target_size(): Vector2i;
  public get_scaling_3d_mode(): number;
  public get_fsr_sharpness(): number;
  public get_msaa_3d(): number;
  public get_texture_samples(): number;
  public get_screen_space_aa(): number;
  public get_use_taa(): boolean;
  public get_use_debanding(): boolean;
}