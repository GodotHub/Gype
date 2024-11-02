
import { Control } from "@godot/classes/control";


export declare class ReferenceRect extends Control{
  public get_border_color(): Color;
  public set_border_color(_color: Color): void;
  public get_border_width(): number;
  public set_border_width(_width: number): void;
  public get_editor_only(): boolean;
  public set_editor_only(_enabled: boolean): void;
  public get border_color(): Color;
  public set border_color(value): void;
  public get border_width(): number;
  public set border_width(value): void;
  public get editor_only(): boolean;
  public set editor_only(value): void;
}