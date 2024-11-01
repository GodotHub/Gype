
import { Resource } from "@godot/classes/resource";
import { InputEvent } from "@godot/classes/input_event";

export declare class Shortcut extends Resource{
  public set_events(_events: GDArray): void;
  public get_events(): GDArray;
  public has_valid_event(): boolean;
  public matches_event(_event: InputEvent): boolean;
  public get_as_text(): String;
  public get events(): GDArray {
    get_events();
  }
  public set events(value): void {
    set_events(value);
  }
}