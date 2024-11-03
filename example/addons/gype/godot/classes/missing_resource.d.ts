
import { Resource } from "@godot/classes/resource";
export declare class MissingResource extends Resource{
  public set_original_class(_name: GDString | StringName | string): void;
  public get_original_class(): String;
  public set_recording_properties(_enable: boolean): void;
  public is_recording_properties(): boolean;
  public get original_class(): String;
  public set original_class(value): void;
  public get recording_properties(): boolean;
  public set recording_properties(value): void;
}