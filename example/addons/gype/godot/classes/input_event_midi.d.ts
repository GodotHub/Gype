
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
  public get channel(): number;
  public set channel(value): void;
  public get message(): number;
  public set message(value): void;
  public get pitch(): number;
  public set pitch(value): void;
  public get velocity(): number;
  public set velocity(value): void;
  public get instrument(): number;
  public set instrument(value): void;
  public get pressure(): number;
  public set pressure(value): void;
  public get controller_number(): number;
  public set controller_number(value): void;
  public get controller_value(): number;
  public set controller_value(value): void;
}