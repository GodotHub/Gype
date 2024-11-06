
import { Shortcut } from "@godot/classes/shortcut";
import { ButtonGroup } from "@godot/classes/button_group";
import { Control } from "@godot/classes/control";
export declare class BaseButton extends Control{
  public _pressed(): void;
  public _toggled(_toggled_on: boolean): void;
  public set_pressed(_pressed: boolean): void;
  public is_pressed(): boolean;
  public set_pressed_no_signal(_pressed: boolean): void;
  public is_hovered(): boolean;
  public set_toggle_mode(_enabled: boolean): void;
  public is_toggle_mode(): boolean;
  public set_shortcut_in_tooltip(_enabled: boolean): void;
  public is_shortcut_in_tooltip_enabled(): boolean;
  public set_disabled(_disabled: boolean): void;
  public is_disabled(): boolean;
  public set_action_mode(_mode: number): void;
  public get_action_mode(): number;
  public set_button_mask(_mask: number): void;
  public get_button_mask(): number;
  public get_draw_mode(): number;
  public set_keep_pressed_outside(_enabled: boolean): void;
  public is_keep_pressed_outside(): boolean;
  public set_shortcut_feedback(_enabled: boolean): void;
  public is_shortcut_feedback(): boolean;
  public set_shortcut(_shortcut: Shortcut): void;
  public get_shortcut(): Shortcut;
  public set_button_group(_button_group: ButtonGroup): void;
  public get_button_group(): ButtonGroup;
  public get disabled(): boolean;
  public set disabled(value): void;
  public get toggle_mode(): boolean;
  public set toggle_mode(value): void;
  public get button_pressed(): boolean;
  public set button_pressed(value): void;
  public get action_mode(): number;
  public set action_mode(value): void;
  public get button_mask(): number;
  public set button_mask(value): void;
  public get keep_pressed_outside(): boolean;
  public set keep_pressed_outside(value): void;
  public get button_group(): ButtonGroup;
  public set button_group(value): void;
  public get shortcut(): Shortcut;
  public set shortcut(value): void;
  public get shortcut_feedback(): boolean;
  public set shortcut_feedback(value): void;
  public get shortcut_in_tooltip(): boolean;
  public set shortcut_in_tooltip(value): void;
  static DrawMode = {
    DRAW_NORMAL = 0,
    DRAW_PRESSED = 1,
    DRAW_HOVER = 2,
    DRAW_DISABLED = 3,
    DRAW_HOVER_PRESSED = 4,
  }
  static ActionMode = {
    ACTION_MODE_BUTTON_PRESS = 0,
    ACTION_MODE_BUTTON_RELEASE = 1,
  }
  public get pressed(): Signal;
  public get button_up(): Signal;
  public get button_down(): Signal;
  public get toggled(): Signal;
}