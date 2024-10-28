
import { InputEventFromWindow } from "@godot/classes/input_event_from_window";

export declare class InputEventScreenDrag extends InputEventFromWindow{
  public set_index(_index: number): void;
  public get_index(): number;
  public set_tilt(_tilt: Vector2): void;
  public get_tilt(): Vector2;
  public set_pressure(_pressure: number): void;
  public get_pressure(): number;
  public set_pen_inverted(_pen_inverted: boolean): void;
  public get_pen_inverted(): boolean;
  public set_position(_position: Vector2): void;
  public get_position(): Vector2;
  public set_relative(_relative: Vector2): void;
  public get_relative(): Vector2;
  public set_screen_relative(_relative: Vector2): void;
  public get_screen_relative(): Vector2;
  public set_velocity(_velocity: Vector2): void;
  public get_velocity(): Vector2;
  public set_screen_velocity(_velocity: Vector2): void;
  public get_screen_velocity(): Vector2;
  public get index(): number {
    get_index();
  }
  public set index(value: number): void {
    set_index(value);
  }
  public get tilt(): Vector2 {
    get_tilt();
  }
  public set tilt(value: Vector2): void {
    set_tilt(value);
  }
  public get pressure(): number {
    get_pressure();
  }
  public set pressure(value: number): void {
    set_pressure(value);
  }
  public get pen_inverted(): boolean {
    get_pen_inverted();
  }
  public set pen_inverted(value: boolean): void {
    set_pen_inverted(value);
  }
  public get position(): Vector2 {
    get_position();
  }
  public set position(value: Vector2): void {
    set_position(value);
  }
  public get relative(): Vector2 {
    get_relative();
  }
  public set relative(value: Vector2): void {
    set_relative(value);
  }
  public get screen_relative(): Vector2 {
    get_screen_relative();
  }
  public set screen_relative(value: Vector2): void {
    set_screen_relative(value);
  }
  public get velocity(): Vector2 {
    get_velocity();
  }
  public set velocity(value: Vector2): void {
    set_velocity(value);
  }
  public get screen_velocity(): Vector2 {
    get_screen_velocity();
  }
  public set screen_velocity(value: Vector2): void {
    set_screen_velocity(value);
  }
}