
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
  public get color(): Color {
    get_color();
  }
  public set color(value): void {
    set_color(value);
  }
  public get grow_begin(): number {
    get_grow_begin();
  }
  public set grow_begin(value): void {
    set_grow_begin(value);
  }
  public get grow_end(): number {
    get_grow_end();
  }
  public set grow_end(value): void {
    set_grow_end(value);
  }
  public get thickness(): number {
    get_thickness();
  }
  public set thickness(value): void {
    set_thickness(value);
  }
  public get vertical(): boolean {
    is_vertical();
  }
  public set vertical(value): void {
    set_vertical(value);
  }
}