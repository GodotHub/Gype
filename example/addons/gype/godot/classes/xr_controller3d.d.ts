
import { XRNode3D } from "@godot/classes/xr_node3d";

export declare class XRController3D extends XRNode3D{
  public is_button_pressed(_name: String | StringName | string): boolean;
  public get_input(_name: String | StringName | string): any;
  public get_float(_name: String | StringName | string): number;
  public get_vector2(_name: String | StringName | string): Vector2;
  public get_tracker_hand(): number;
  public get button_pressed(): Signal;
  public get button_released(): Signal;
  public get input_float_changed(): Signal;
  public get input_vector2_changed(): Signal;
  public get profile_changed(): Signal;
}