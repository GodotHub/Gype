
import { GodotObject } from "@godot/classes/godot_object";

export declare class MainLoop extends GodotObject{
  public _initialize(): void;
  public _physics_process(_delta: number): boolean;
  public _process(_delta: number): boolean;
  public _finalize(): void;
  public get on_request_permissions_result(): Signal;
}