
import { TriangleMesh } from "@godot/classes/triangle_mesh";
import { GeometryInstance3D } from "@godot/classes/geometry_instance3d";


export declare class SpriteBase3D extends GeometryInstance3D{
  public set_centered(_centered: boolean): void;
  public is_centered(): boolean;
  public set_offset(_offset: Vector2): void;
  public get_offset(): Vector2;
  public set_flip_h(_flip_h: boolean): void;
  public is_flipped_h(): boolean;
  public set_flip_v(_flip_v: boolean): void;
  public is_flipped_v(): boolean;
  public set_modulate(_modulate: Color): void;
  public get_modulate(): Color;
  public set_render_priority(_priority: number): void;
  public get_render_priority(): number;
  public set_pixel_size(_pixel_size: number): void;
  public get_pixel_size(): number;
  public set_axis(_axis: number): void;
  public get_axis(): number;
  public set_draw_flag(_flag: number, _enabled: boolean): void;
  public get_draw_flag(_flag: number): boolean;
  public set_alpha_cut_mode(_mode: number): void;
  public get_alpha_cut_mode(): number;
  public set_alpha_scissor_threshold(_threshold: number): void;
  public get_alpha_scissor_threshold(): number;
  public set_alpha_hash_scale(_threshold: number): void;
  public get_alpha_hash_scale(): number;
  public set_alpha_antialiasing(_alpha_aa: number): void;
  public get_alpha_antialiasing(): number;
  public set_alpha_antialiasing_edge(_edge: number): void;
  public get_alpha_antialiasing_edge(): number;
  public set_billboard_mode(_mode: number): void;
  public get_billboard_mode(): number;
  public set_texture_filter(_mode: number): void;
  public get_texture_filter(): number;
  public get_item_rect(): Rect2;
  public generate_triangle_mesh(): TriangleMesh;
  public get centered(): boolean;
  public set centered(value): void;
  public get offset(): Vector2;
  public set offset(value): void;
  public get flip_h(): boolean;
  public set flip_h(value): void;
  public get flip_v(): boolean;
  public set flip_v(value): void;
  public get modulate(): Color;
  public set modulate(value): void;
  public get pixel_size(): number;
  public set pixel_size(value): void;
  public get axis(): number;
  public set axis(value): void;
  public get billboard(): number;
  public set billboard(value): void;
  public get transparent(): boolean;
  public set transparent(value): void;
  public get shaded(): boolean;
  public set shaded(value): void;
  public get double_sided(): boolean;
  public set double_sided(value): void;
  public get no_depth_test(): boolean;
  public set no_depth_test(value): void;
  public get fixed_size(): boolean;
  public set fixed_size(value): void;
  public get alpha_cut(): number;
  public set alpha_cut(value): void;
  public get alpha_scissor_threshold(): number;
  public set alpha_scissor_threshold(value): void;
  public get alpha_hash_scale(): number;
  public set alpha_hash_scale(value): void;
  public get alpha_antialiasing_mode(): number;
  public set alpha_antialiasing_mode(value): void;
  public get alpha_antialiasing_edge(): number;
  public set alpha_antialiasing_edge(value): void;
  public get texture_filter(): number;
  public set texture_filter(value): void;
  public get render_priority(): number;
  public set render_priority(value): void;
  static DrawFlags = {
    FLAG_TRANSPARENT = 0,
    FLAG_SHADED = 1,
    FLAG_DOUBLE_SIDED = 2,
    FLAG_DISABLE_DEPTH_TEST = 3,
    FLAG_FIXED_SIZE = 4,
    FLAG_MAX = 5,
  }
  static AlphaCutMode = {
    ALPHA_CUT_DISABLED = 0,
    ALPHA_CUT_DISCARD = 1,
    ALPHA_CUT_OPAQUE_PREPASS = 2,
    ALPHA_CUT_HASH = 3,
  }
}