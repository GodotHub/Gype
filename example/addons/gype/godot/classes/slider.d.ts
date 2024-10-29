
import { Range } from "@godot/classes/range";

export declare class Slider extends Range{
  public set_ticks(_count: number): void;
  public get_ticks(): number;
  public get_ticks_on_borders(): boolean;
  public set_ticks_on_borders(_ticks_on_border: boolean): void;
  public set_editable(_editable: boolean): void;
  public is_editable(): boolean;
  public set_scrollable(_scrollable: boolean): void;
  public is_scrollable(): boolean;
  public get editable(): boolean {
    is_editable();
  }
  public set editable(value): void {
    set_editable(value);
  }
  public get scrollable(): boolean {
    is_scrollable();
  }
  public set scrollable(value): void {
    set_scrollable(value);
  }
  public get tick_count(): number {
    get_ticks();
  }
  public set tick_count(value): void {
    set_ticks(value);
  }
  public get ticks_on_borders(): boolean {
    get_ticks_on_borders();
  }
  public set ticks_on_borders(value): void {
    set_ticks_on_borders(value);
  }
}