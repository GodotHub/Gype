
import { XRNode3D } from "@godot/classes/xr_node3d";

export declare class XRController3D extends XRNode3D{
  public is_button_pressed(_name: StringName): boolean;
  public get_input(_name: StringName): any;
  public get_float(_name: StringName): number;
  public get_vector2(_name: StringName): Vector2;
  public get_tracker_hand(): number;
}