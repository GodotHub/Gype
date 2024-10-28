
import { Node3D } from "@godot/classes/node3d";

export declare class XROrigin3D extends Node3D{
  public set_world_scale(_world_scale: number): void;
  public get_world_scale(): number;
  public set_current(_enabled: boolean): void;
  public is_current(): boolean;
  public get world_scale(): number {
    get_world_scale();
  }
  public set world_scale(value: number): void {
    set_world_scale(value);
  }
  public get current(): boolean {
    is_current();
  }
  public set current(value: boolean): void {
    set_current(value);
  }
}