
import { Range } from "@godot/classes/range";
import { Texture2D } from "@godot/classes/texture2d";

export declare class TextureProgressBar extends Range{
  public set_under_texture(_tex: Texture2D): void;
  public get_under_texture(): Texture2D;
  public set_progress_texture(_tex: Texture2D): void;
  public get_progress_texture(): Texture2D;
  public set_over_texture(_tex: Texture2D): void;
  public get_over_texture(): Texture2D;
  public set_fill_mode(_mode: number): void;
  public get_fill_mode(): number;
  public set_tint_under(_tint: Color): void;
  public get_tint_under(): Color;
  public set_tint_progress(_tint: Color): void;
  public get_tint_progress(): Color;
  public set_tint_over(_tint: Color): void;
  public get_tint_over(): Color;
  public set_texture_progress_offset(_offset: Vector2): void;
  public get_texture_progress_offset(): Vector2;
  public set_radial_initial_angle(_mode: number): void;
  public get_radial_initial_angle(): number;
  public set_radial_center_offset(_mode: Vector2): void;
  public get_radial_center_offset(): Vector2;
  public set_fill_degrees(_mode: number): void;
  public get_fill_degrees(): number;
  public set_stretch_margin(_margin: number, _value: number): void;
  public get_stretch_margin(_margin: number): number;
  public set_nine_patch_stretch(_stretch: boolean): void;
  public get_nine_patch_stretch(): boolean;
  public get fill_mode(): number {
    get_fill_mode();
  }
  public set fill_mode(value): void {
    set_fill_mode(value);
  }
  public get radial_initial_angle(): number {
    get_radial_initial_angle();
  }
  public set radial_initial_angle(value): void {
    set_radial_initial_angle(value);
  }
  public get radial_fill_degrees(): number {
    get_fill_degrees();
  }
  public set radial_fill_degrees(value): void {
    set_fill_degrees(value);
  }
  public get radial_center_offset(): Vector2 {
    get_radial_center_offset();
  }
  public set radial_center_offset(value): void {
    set_radial_center_offset(value);
  }
  public get nine_patch_stretch(): boolean {
    get_nine_patch_stretch();
  }
  public set nine_patch_stretch(value): void {
    set_nine_patch_stretch(value);
  }
  public get stretch_margin_left(): number {
    get_stretch_margin();
  }
  public set stretch_margin_left(value): void {
    set_stretch_margin(value);
  }
  public get stretch_margin_top(): number {
    get_stretch_margin();
  }
  public set stretch_margin_top(value): void {
    set_stretch_margin(value);
  }
  public get stretch_margin_right(): number {
    get_stretch_margin();
  }
  public set stretch_margin_right(value): void {
    set_stretch_margin(value);
  }
  public get stretch_margin_bottom(): number {
    get_stretch_margin();
  }
  public set stretch_margin_bottom(value): void {
    set_stretch_margin(value);
  }
  public get texture_under(): Texture2D {
    get_under_texture();
  }
  public set texture_under(value): void {
    set_under_texture(value);
  }
  public get texture_over(): Texture2D {
    get_over_texture();
  }
  public set texture_over(value): void {
    set_over_texture(value);
  }
  public get texture_progress(): Texture2D {
    get_progress_texture();
  }
  public set texture_progress(value): void {
    set_progress_texture(value);
  }
  public get texture_progress_offset(): Vector2 {
    get_texture_progress_offset();
  }
  public set texture_progress_offset(value): void {
    set_texture_progress_offset(value);
  }
  public get tint_under(): Color {
    get_tint_under();
  }
  public set tint_under(value): void {
    set_tint_under(value);
  }
  public get tint_over(): Color {
    get_tint_over();
  }
  public set tint_over(value): void {
    set_tint_over(value);
  }
  public get tint_progress(): Color {
    get_tint_progress();
  }
  public set tint_progress(value): void {
    set_tint_progress(value);
  }
  static FillMode = {
    FILL_LEFT_TO_RIGHT = 0,
    FILL_RIGHT_TO_LEFT = 1,
    FILL_TOP_TO_BOTTOM = 2,
    FILL_BOTTOM_TO_TOP = 3,
    FILL_CLOCKWISE = 4,
    FILL_COUNTER_CLOCKWISE = 5,
    FILL_BILINEAR_LEFT_AND_RIGHT = 6,
    FILL_BILINEAR_TOP_AND_BOTTOM = 7,
    FILL_CLOCKWISE_AND_COUNTER_CLOCKWISE = 8,
  }
}