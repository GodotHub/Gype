
import { RefCounted } from "@godot/classes/ref_counted";


export declare class XRTracker extends RefCounted{
  public get_tracker_type(): number;
  public set_tracker_type(_type: number): void;
  public get_tracker_name(): StringName;
  public set_tracker_name(_name: GDString | StringName | string): void;
  public get_tracker_desc(): String;
  public set_tracker_desc(_description: GDString | StringName | string): void;
  public get type(): number;
  public set type(value): void;
  public get name(): String;
  public set name(value): void;
  public get description(): String;
  public set description(value): void;
}