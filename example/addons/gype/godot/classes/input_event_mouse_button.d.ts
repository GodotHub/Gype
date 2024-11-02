
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
  public get factor(): number;
  public set factor(value): void;
  public get button_index(): number;
  public set button_index(value): void;
  public get canceled(): boolean;
  public set canceled(value): void;
  public get pressed(): boolean;
  public set pressed(value): void;
  public get double_click(): boolean;
  public set double_click(value): void;
}