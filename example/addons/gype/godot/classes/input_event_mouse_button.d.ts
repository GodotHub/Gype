
import { InputEventMouse } from "@godot/classes/input_event_mouse";

export declare class InputEventMouseButton extends InputEventMouse{
  public set_factor(_factor: number): void;
  public get_factor(): number;
  public set_button_index(_button_index: number): void;
  public get_button_index(): number;
  public set_pressed(_pressed: boolean): void;
  public set_canceled(_canceled: boolean): void;
  public set_double_click(_double_click: boolean): void;
  public is_double_click(): boolean;
  public get factor(): number {
    get_factor();
  }
  public set factor(value: number): void {
    set_factor(value);
  }
  public get button_index(): number {
    get_button_index();
  }
  public set button_index(value: number): void {
    set_button_index(value);
  }
  public get canceled(): boolean {
    is_canceled();
  }
  public set canceled(value: boolean): void {
    set_canceled(value);
  }
  public get pressed(): boolean {
    is_pressed();
  }
  public set pressed(value: boolean): void {
    set_pressed(value);
  }
  public get double_click(): boolean {
    is_double_click();
  }
  public set double_click(value: boolean): void {
    set_double_click(value);
  }
}