
import { RefCounted } from "@godot/classes/ref_counted";

export declare class XRTracker extends RefCounted{
  public get_tracker_type(): number;
  public set_tracker_type(_type: number): void;
  public get_tracker_name(): StringName;
  public set_tracker_name(_name: String | StringName | string): void;
  public get_tracker_desc(): String;
  public set_tracker_desc(_description: String | StringName | string): void;
  public get type(): number {
    get_tracker_type();
  }
  public set type(value): void {
    set_tracker_type(value);
  }
  public get name(): String {
    get_tracker_name();
  }
  public set name(value): void {
    set_tracker_name(value);
  }
  public get description(): String {
    get_tracker_desc();
  }
  public set description(value): void {
    set_tracker_desc(value);
  }
}