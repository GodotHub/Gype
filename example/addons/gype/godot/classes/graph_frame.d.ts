
import { HBoxContainer } from "@godot/classes/h_box_container";
import { GraphElement } from "@godot/classes/graph_element";
export declare class GraphFrame extends GraphElement{
  public set_title(_title: GDString | StringName | string): void;
  public get_title(): String;
  public get_titlebar_hbox(): HBoxContainer;
  public set_autoshrink_enabled(_shrink: boolean): void;
  public is_autoshrink_enabled(): boolean;
  public set_autoshrink_margin(_autoshrink_margin: number): void;
  public get_autoshrink_margin(): number;
  public set_drag_margin(_drag_margin: number): void;
  public get_drag_margin(): number;
  public set_tint_color_enabled(_enable: boolean): void;
  public is_tint_color_enabled(): boolean;
  public set_tint_color(_color: Color): void;
  public get_tint_color(): Color;
  public get title(): String;
  public set title(value): void;
  public get autoshrink_enabled(): boolean;
  public set autoshrink_enabled(value): void;
  public get autoshrink_margin(): number;
  public set autoshrink_margin(value): void;
  public get drag_margin(): number;
  public set drag_margin(value): void;
  public get tint_color_enabled(): boolean;
  public set tint_color_enabled(value): void;
  public get tint_color(): Color;
  public set tint_color(value): void;
  public get autoshrink_changed(): Signal;
}