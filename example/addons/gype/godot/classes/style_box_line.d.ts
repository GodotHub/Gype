
import { StyleBox } from "@godot/classes/style_box";
export declare class StyleBoxLine extends StyleBox{
  public set_color(_color: Color): void;
  public get_color(): Color;
  public set_thickness(_thickness: number): void;
  public get_thickness(): number;
  public set_grow_begin(_offset: number): void;
  public get_grow_begin(): number;
  public set_grow_end(_offset: number): void;
  public get_grow_end(): number;
  public set_vertical(_vertical: boolean): void;
  public is_vertical(): boolean;
  public get color(): Color;
  public set color(value): void;
  public get grow_begin(): number;
  public set grow_begin(value): void;
  public get grow_end(): number;
  public set grow_end(value): void;
  public get thickness(): number;
  public set thickness(value): void;
  public get vertical(): boolean;
  public set vertical(value): void;
}