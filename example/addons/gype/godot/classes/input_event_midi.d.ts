
import { InputEvent } from "@godot/classes/input_event";

export declare class InputEventMIDI extends InputEvent{
  public set_channel(_channel: number): void;
  public get_channel(): number;
  public set_message(_message: number): void;
  public get_message(): number;
  public set_pitch(_pitch: number): void;
  public get_pitch(): number;
  public set_velocity(_velocity: number): void;
  public get_velocity(): number;
  public set_instrument(_instrument: number): void;
  public get_instrument(): number;
  public set_pressure(_pressure: number): void;
  public get_pressure(): number;
  public set_controller_number(_controller_number: number): void;
  public get_controller_number(): number;
  public set_controller_value(_controller_value: number): void;
  public get_controller_value(): number;
  public get channel(): number {
    get_channel();
  }
  public set channel(value): void {
    set_channel(value);
  }
  public get message(): number {
    get_message();
  }
  public set message(value): void {
    set_message(value);
  }
  public get pitch(): number {
    get_pitch();
  }
  public set pitch(value): void {
    set_pitch(value);
  }
  public get velocity(): number {
    get_velocity();
  }
  public set velocity(value): void {
    set_velocity(value);
  }
  public get instrument(): number {
    get_instrument();
  }
  public set instrument(value): void {
    set_instrument(value);
  }
  public get pressure(): number {
    get_pressure();
  }
  public set pressure(value): void {
    set_pressure(value);
  }
  public get controller_number(): number {
    get_controller_number();
  }
  public set controller_number(value): void {
    set_controller_number(value);
  }
  public get controller_value(): number {
    get_controller_value();
  }
  public set controller_value(value): void {
    set_controller_value(value);
  }
}