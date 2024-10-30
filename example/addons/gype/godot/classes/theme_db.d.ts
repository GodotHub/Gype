
import { GodotObject } from "@godot/classes/godot_object";
import { Texture2D } from "@godot/classes/texture2d";
import { Theme } from "@godot/classes/theme";
import { StyleBox } from "@godot/classes/style_box";
import { Font } from "@godot/classes/font";

export declare class ThemeDB extends GodotObject{
  public get_default_theme(): Theme;
  public get_project_theme(): Theme;
  public set_fallback_base_scale(_base_scale: number): void;
  public get_fallback_base_scale(): number;
  public set_fallback_font(_font: Font): void;
  public get_fallback_font(): Font;
  public set_fallback_font_size(_font_size: number): void;
  public get_fallback_font_size(): number;
  public set_fallback_icon(_icon: Texture2D): void;
  public get_fallback_icon(): Texture2D;
  public set_fallback_stylebox(_stylebox: StyleBox): void;
  public get_fallback_stylebox(): StyleBox;
  public get fallback_base_scale(): number {
    get_fallback_base_scale();
  }
  public set fallback_base_scale(value): void {
    set_fallback_base_scale(value);
  }
  public get fallback_font(): Font {
    get_fallback_font();
  }
  public set fallback_font(value): void {
    set_fallback_font(value);
  }
  public get fallback_font_size(): number {
    get_fallback_font_size();
  }
  public set fallback_font_size(value): void {
    set_fallback_font_size(value);
  }
  public get fallback_icon(): Texture2D {
    get_fallback_icon();
  }
  public set fallback_icon(value): void {
    set_fallback_icon(value);
  }
  public get fallback_stylebox(): StyleBox {
    get_fallback_stylebox();
  }
  public set fallback_stylebox(value): void {
    set_fallback_stylebox(value);
  }
  public const fallback_changed: string = "fallback_changed";
}