
import { HBoxContainer } from "@godot/classes/h_box_container";
import { GraphElement } from "@godot/classes/graph_element";

export declare class GraphFrame extends GraphElement{
  public set_title(_title: String | StringName | string): void;
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
  public get title(): String {
    get_title();
  }
  public set title(value): void {
    set_title(value);
  }
  public get autoshrink_enabled(): boolean {
    is_autoshrink_enabled();
  }
  public set autoshrink_enabled(value): void {
    set_autoshrink_enabled(value);
  }
  public get autoshrink_margin(): number {
    get_autoshrink_margin();
  }
  public set autoshrink_margin(value): void {
    set_autoshrink_margin(value);
  }
  public get drag_margin(): number {
    get_drag_margin();
  }
  public set drag_margin(value): void {
    set_drag_margin(value);
  }
  public get tint_color_enabled(): boolean {
    is_tint_color_enabled();
  }
  public set tint_color_enabled(value): void {
    set_tint_color_enabled(value);
  }
  public get tint_color(): Color {
    get_tint_color();
  }
  public set tint_color(value): void {
    set_tint_color(value);
  }
  public get autoshrink_changed(): Signal;
}