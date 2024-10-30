
import { Shortcut } from "@godot/classes/shortcut";
import { Control } from "@godot/classes/control";
import { ButtonGroup } from "@godot/classes/button_group";

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
  public get disabled(): boolean {
    is_disabled();
  }
  public set disabled(value): void {
    set_disabled(value);
  }
  public get toggle_mode(): boolean {
    is_toggle_mode();
  }
  public set toggle_mode(value): void {
    set_toggle_mode(value);
  }
  public get button_pressed(): boolean {
    is_pressed();
  }
  public set button_pressed(value): void {
    set_pressed(value);
  }
  public get action_mode(): number {
    get_action_mode();
  }
  public set action_mode(value): void {
    set_action_mode(value);
  }
  public get button_mask(): number {
    get_button_mask();
  }
  public set button_mask(value): void {
    set_button_mask(value);
  }
  public get keep_pressed_outside(): boolean {
    is_keep_pressed_outside();
  }
  public set keep_pressed_outside(value): void {
    set_keep_pressed_outside(value);
  }
  public get button_group(): ButtonGroup {
    get_button_group();
  }
  public set button_group(value): void {
    set_button_group(value);
  }
  public get shortcut(): Shortcut {
    get_shortcut();
  }
  public set shortcut(value): void {
    set_shortcut(value);
  }
  public get shortcut_feedback(): boolean {
    is_shortcut_feedback();
  }
  public set shortcut_feedback(value): void {
    set_shortcut_feedback(value);
  }
  public get shortcut_in_tooltip(): boolean {
    is_shortcut_in_tooltip_enabled();
  }
  public set shortcut_in_tooltip(value): void {
    set_shortcut_in_tooltip(value);
  }
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
  public const pressed: string = "pressed";
  public const button_up: string = "button_up";
  public const button_down: string = "button_down";
  public const toggled: string = "toggled";
}