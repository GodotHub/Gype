
import { Font } from "@godot/classes/font";

export declare class FontVariation extends Font{
  public set_base_font(_font: Font): void;
  public get_base_font(): Font;
  public set_variation_opentype(_coords: Dictionary): void;
  public get_variation_opentype(): Dictionary;
  public set_variation_embolden(_strength: number): void;
  public get_variation_embolden(): number;
  public set_variation_face_index(_face_index: number): void;
  public get_variation_face_index(): number;
  public set_variation_transform(_transform: Transform2D): void;
  public get_variation_transform(): Transform2D;
  public set_opentype_features(_features: Dictionary): void;
  public set_spacing(_spacing: number, _value: number): void;
  public set_baseline_offset(_baseline_offset: number): void;
  public get_baseline_offset(): number;
  public get base_font(): Font {
    get_base_font();
  }
  public set base_font(value): void {
    set_base_font(value);
  }
  public get variation_opentype(): Dictionary {
    get_variation_opentype();
  }
  public set variation_opentype(value): void {
    set_variation_opentype(value);
  }
  public get variation_face_index(): number {
    get_variation_face_index();
  }
  public set variation_face_index(value): void {
    set_variation_face_index(value);
  }
  public get variation_embolden(): number {
    get_variation_embolden();
  }
  public set variation_embolden(value): void {
    set_variation_embolden(value);
  }
  public get variation_transform(): Transform2D {
    get_variation_transform();
  }
  public set variation_transform(value): void {
    set_variation_transform(value);
  }
  public get opentype_features(): Dictionary {
    get_opentype_features();
  }
  public set opentype_features(value): void {
    set_opentype_features(value);
  }
  public get spacing_glyph(): number {
    get_spacing();
  }
  public set spacing_glyph(value): void {
    set_spacing(value);
  }
  public get spacing_space(): number {
    get_spacing();
  }
  public set spacing_space(value): void {
    set_spacing(value);
  }
  public get spacing_top(): number {
    get_spacing();
  }
  public set spacing_top(value): void {
    set_spacing(value);
  }
  public get spacing_bottom(): number {
    get_spacing();
  }
  public set spacing_bottom(value): void {
    set_spacing(value);
  }
  public get baseline_offset(): number {
    get_baseline_offset();
  }
  public set baseline_offset(value): void {
    set_baseline_offset(value);
  }
}