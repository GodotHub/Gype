
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
  public get editable(): boolean;
  public set editable(value): void;
  public get scrollable(): boolean;
  public set scrollable(value): void;
  public get tick_count(): number;
  public set tick_count(value): void;
  public get ticks_on_borders(): boolean;
  public set ticks_on_borders(value): void;
  public get drag_started(): Signal;
  public get drag_ended(): Signal;
}