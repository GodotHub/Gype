
import { Resource } from "@godot/classes/resource";

export declare class MissingResource extends Resource{
  public set_original_class(_name: String): void;
  public get_original_class(): String;
  public set_recording_properties(_enable: boolean): void;
  public is_recording_properties(): boolean;
  public get original_class(): String {
    get_original_class();
  }
  public set original_class(value): void {
    set_original_class(value);
  }
  public get recording_properties(): boolean {
    is_recording_properties();
  }
  public set recording_properties(value): void {
    set_recording_properties(value);
  }
}