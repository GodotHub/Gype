
import { Node } from "@godot/classes/node";

export declare class MissingNode extends Node{
  public set_original_class(_name: String): void;
  public get_original_class(): String;
  public set_original_scene(_name: String): void;
  public get_original_scene(): String;
  public set_recording_properties(_enable: boolean): void;
  public is_recording_properties(): boolean;
  public get original_class(): String {
    get_original_class();
  }
  public set original_class(value): void {
    set_original_class(value);
  }
  public get original_scene(): String {
    get_original_scene();
  }
  public set original_scene(value): void {
    set_original_scene(value);
  }
  public get recording_properties(): boolean {
    is_recording_properties();
  }
  public set recording_properties(value): void {
    set_recording_properties(value);
  }
}