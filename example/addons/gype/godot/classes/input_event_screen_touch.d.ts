
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
  public get index(): number {
    get_index();
  }
  public set index(value): void {
    set_index(value);
  }
  public get position(): Vector2 {
    get_position();
  }
  public set position(value): void {
    set_position(value);
  }
  public get canceled(): boolean {
    is_canceled();
  }
  public set canceled(value): void {
    set_canceled(value);
  }
  public get pressed(): boolean {
    is_pressed();
  }
  public set pressed(value): void {
    set_pressed(value);
  }
  public get double_tap(): boolean {
    is_double_tap();
  }
  public set double_tap(value): void {
    set_double_tap(value);
  }
}