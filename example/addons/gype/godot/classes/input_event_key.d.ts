
import { InputEventWithModifiers } from "@godot/classes/input_event_with_modifiers";


export declare class InputEventKey extends InputEventWithModifiers{
  public set_pressed(_pressed: boolean): void;
  public set_keycode(_keycode: number): void;
  public get_keycode(): number;
  public set_physical_keycode(_physical_keycode: number): void;
  public get_physical_keycode(): number;
  public set_key_label(_key_label: number): void;
  public get_key_label(): number;
  public set_unicode(_unicode: number): void;
  public get_unicode(): number;
  public set_location(_location: number): void;
  public get_location(): number;
  public set_echo(_echo: boolean): void;
  public get_keycode_with_modifiers(): number;
  public get_physical_keycode_with_modifiers(): number;
  public get_key_label_with_modifiers(): number;
  public as_text_keycode(): String;
  public as_text_physical_keycode(): String;
  public as_text_key_label(): String;
  public as_text_location(): String;
  public get pressed(): boolean;
  public set pressed(value): void;
  public get keycode(): number;
  public set keycode(value): void;
  public get physical_keycode(): number;
  public set physical_keycode(value): void;
  public get key_label(): number;
  public set key_label(value): void;
  public get unicode(): number;
  public set unicode(value): void;
  public get location(): number;
  public set location(value): void;
  public get echo(): boolean;
  public set echo(value): void;
}