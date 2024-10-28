
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
  public get centered(): boolean {
    is_centered();
  }
  public set centered(value: boolean): void {
    set_centered(value);
  }
  public get offset(): Vector2 {
    get_offset();
  }
  public set offset(value: Vector2): void {
    set_offset(value);
  }
  public get flip_h(): boolean {
    is_flipped_h();
  }
  public set flip_h(value: boolean): void {
    set_flip_h(value);
  }
  public get flip_v(): boolean {
    is_flipped_v();
  }
  public set flip_v(value: boolean): void {
    set_flip_v(value);
  }
  public get modulate(): Color {
    get_modulate();
  }
  public set modulate(value: Color): void {
    set_modulate(value);
  }
  public get pixel_size(): number {
    get_pixel_size();
  }
  public set pixel_size(value: number): void {
    set_pixel_size(value);
  }
  public get axis(): number {
    get_axis();
  }
  public set axis(value: number): void {
    set_axis(value);
  }
  public get billboard(): number {
    get_billboard_mode();
  }
  public set billboard(value: number): void {
    set_billboard_mode(value);
  }
  public get transparent(): boolean {
    get_draw_flag();
  }
  public set transparent(value: boolean): void {
    set_draw_flag(value);
  }
  public get shaded(): boolean {
    get_draw_flag();
  }
  public set shaded(value: boolean): void {
    set_draw_flag(value);
  }
  public get double_sided(): boolean {
    get_draw_flag();
  }
  public set double_sided(value: boolean): void {
    set_draw_flag(value);
  }
  public get no_depth_test(): boolean {
    get_draw_flag();
  }
  public set no_depth_test(value: boolean): void {
    set_draw_flag(value);
  }
  public get fixed_size(): boolean {
    get_draw_flag();
  }
  public set fixed_size(value: boolean): void {
    set_draw_flag(value);
  }
  public get alpha_cut(): number {
    get_alpha_cut_mode();
  }
  public set alpha_cut(value: number): void {
    set_alpha_cut_mode(value);
  }
  public get alpha_scissor_threshold(): number {
    get_alpha_scissor_threshold();
  }
  public set alpha_scissor_threshold(value: number): void {
    set_alpha_scissor_threshold(value);
  }
  public get alpha_hash_scale(): number {
    get_alpha_hash_scale();
  }
  public set alpha_hash_scale(value: number): void {
    set_alpha_hash_scale(value);
  }
  public get alpha_antialiasing_mode(): number {
    get_alpha_antialiasing();
  }
  public set alpha_antialiasing_mode(value: number): void {
    set_alpha_antialiasing(value);
  }
  public get alpha_antialiasing_edge(): number {
    get_alpha_antialiasing_edge();
  }
  public set alpha_antialiasing_edge(value: number): void {
    set_alpha_antialiasing_edge(value);
  }
  public get texture_filter(): number {
    get_texture_filter();
  }
  public set texture_filter(value: number): void {
    set_texture_filter(value);
  }
  public get render_priority(): number {
    get_render_priority();
  }
  public set render_priority(value: number): void {
    set_render_priority(value);
  }
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