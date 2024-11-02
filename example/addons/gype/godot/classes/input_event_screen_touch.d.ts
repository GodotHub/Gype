
import { InputEventFromWindow } from "@godot/classes/input_event_from_window";


export declare class InputEventScreenTouch extends InputEventFromWindow{
  public set_index(_index: number): void;
  public get_index(): number;
  public set_position(_position: Vector2): void;
  public get_position(): Vector2;
  public set_pressed(_pressed: boolean): void;
  public set_canceled(_canceled: boolean): void;
  public set_double_tap(_double_tap: boolean): void;
  public is_double_tap(): boolean;
  public get index(): number;
  public set index(value): void;
  public get position(): Vector2;
  public set position(value): void;
  public get canceled(): boolean;
  public set canceled(value): void;
  public get pressed(): boolean;
  public set pressed(value): void;
  public get double_tap(): boolean;
  public set double_tap(value): void;
}