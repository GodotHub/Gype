
import { InputEvent } from "@godot/classes/input_event";
import { Shortcut } from "@godot/classes/shortcut";


export declare class InputEventShortcut extends InputEvent{
  public set_shortcut(_shortcut: Shortcut): void;
  public get_shortcut(): Shortcut;
  public get shortcut(): Shortcut;
  public set shortcut(value): void;
}