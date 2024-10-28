
import { Font } from "@godot/classes/font";
import { Resource } from "@godot/classes/resource";

export declare class LabelSettings extends Resource{
  public set_line_spacing(_spacing: number): void;
  public get_line_spacing(): number;
  public set_font(_font: Font): void;
  public get_font(): Font;
  public set_font_size(_size: number): void;
  public get_font_size(): number;
  public set_font_color(_color: Color): void;
  public get_font_color(): Color;
  public set_outline_size(_size: number): void;
  public get_outline_size(): number;
  public set_outline_color(_color: Color): void;
  public get_outline_color(): Color;
  public set_shadow_size(_size: number): void;
  public get_shadow_size(): number;
  public set_shadow_color(_color: Color): void;
  public get_shadow_color(): Color;
  public set_shadow_offset(_offset: Vector2): void;
  public get_shadow_offset(): Vector2;
  public get line_spacing(): number {
    get_line_spacing();
  }
  public set line_spacing(value: number): void {
    set_line_spacing(value);
  }
  public get font(): Font {
    get_font();
  }
  public set font(value: Font): void {
    set_font(value);
  }
  public get font_size(): number {
    get_font_size();
  }
  public set font_size(value: number): void {
    set_font_size(value);
  }
  public get font_color(): Color {
    get_font_color();
  }
  public set font_color(value: Color): void {
    set_font_color(value);
  }
  public get outline_size(): number {
    get_outline_size();
  }
  public set outline_size(value: number): void {
    set_outline_size(value);
  }
  public get outline_color(): Color {
    get_outline_color();
  }
  public set outline_color(value: Color): void {
    set_outline_color(value);
  }
  public get shadow_size(): number {
    get_shadow_size();
  }
  public set shadow_size(value: number): void {
    set_shadow_size(value);
  }
  public get shadow_color(): Color {
    get_shadow_color();
  }
  public set shadow_color(value: Color): void {
    set_shadow_color(value);
  }
  public get shadow_offset(): Vector2 {
    get_shadow_offset();
  }
  public set shadow_offset(value: Vector2): void {
    set_shadow_offset(value);
  }
}