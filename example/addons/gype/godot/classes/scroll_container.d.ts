
import { Container } from "@godot/classes/container";
import { HScrollBar } from "@godot/classes/h_scroll_bar";
import { Control } from "@godot/classes/control";
import { VScrollBar } from "@godot/classes/v_scroll_bar";
export declare class ScrollContainer extends Container{
  public set_h_scroll(_value: number): void;
  public get_h_scroll(): number;
  public set_v_scroll(_value: number): void;
  public get_v_scroll(): number;
  public set_horizontal_custom_step(_value: number): void;
  public get_horizontal_custom_step(): number;
  public set_vertical_custom_step(_value: number): void;
  public get_vertical_custom_step(): number;
  public set_horizontal_scroll_mode(_enable: number): void;
  public get_horizontal_scroll_mode(): number;
  public set_vertical_scroll_mode(_enable: number): void;
  public get_vertical_scroll_mode(): number;
  public set_deadzone(_deadzone: number): void;
  public get_deadzone(): number;
  public set_follow_focus(_enabled: boolean): void;
  public is_following_focus(): boolean;
  public get_h_scroll_bar(): HScrollBar;
  public get_v_scroll_bar(): VScrollBar;
  public ensure_control_visible(_control: Control): void;
  public get follow_focus(): boolean;
  public set follow_focus(value): void;
  public get scroll_horizontal(): number;
  public set scroll_horizontal(value): void;
  public get scroll_vertical(): number;
  public set scroll_vertical(value): void;
  public get scroll_horizontal_custom_step(): number;
  public set scroll_horizontal_custom_step(value): void;
  public get scroll_vertical_custom_step(): number;
  public set scroll_vertical_custom_step(value): void;
  public get horizontal_scroll_mode(): number;
  public set horizontal_scroll_mode(value): void;
  public get vertical_scroll_mode(): number;
  public set vertical_scroll_mode(value): void;
  public get scroll_deadzone(): number;
  public set scroll_deadzone(value): void;
  static ScrollMode = {
    SCROLL_MODE_DISABLED = 0,
    SCROLL_MODE_AUTO = 1,
    SCROLL_MODE_SHOW_ALWAYS = 2,
    SCROLL_MODE_SHOW_NEVER = 3,
  }
  public get scroll_started(): Signal;
  public get scroll_ended(): Signal;
}