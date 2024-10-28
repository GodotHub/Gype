
import { Control } from "@godot/classes/control";

export declare class ReferenceRect extends Control{
  public get_border_color(): Color;
  public set_border_color(_color: Color): void;
  public get_border_width(): number;
  public set_border_width(_width: number): void;
  public get_editor_only(): boolean;
  public set_editor_only(_enabled: boolean): void;
  public get border_color(): Color {
    get_border_color();
  }
  public set border_color(value: Color): void {
    set_border_color(value);
  }
  public get border_width(): number {
    get_border_width();
  }
  public set border_width(value: number): void {
    set_border_width(value);
  }
  public get editor_only(): boolean {
    get_editor_only();
  }
  public set editor_only(value: boolean): void {
    set_editor_only(value);
  }
}