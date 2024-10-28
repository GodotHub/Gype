
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
  public get pressed(): boolean {
    is_pressed();
  }
  public set pressed(value: boolean): void {
    set_pressed(value);
  }
  public get keycode(): number {
    get_keycode();
  }
  public set keycode(value: number): void {
    set_keycode(value);
  }
  public get physical_keycode(): number {
    get_physical_keycode();
  }
  public set physical_keycode(value: number): void {
    set_physical_keycode(value);
  }
  public get key_label(): number {
    get_key_label();
  }
  public set key_label(value: number): void {
    set_key_label(value);
  }
  public get unicode(): number {
    get_unicode();
  }
  public set unicode(value: number): void {
    set_unicode(value);
  }
  public get location(): number {
    get_location();
  }
  public set location(value: number): void {
    set_location(value);
  }
  public get echo(): boolean {
    is_echo();
  }
  public set echo(value: boolean): void {
    set_echo(value);
  }
}