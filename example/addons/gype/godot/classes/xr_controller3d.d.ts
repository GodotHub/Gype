
import { XRNode3D } from "@godot/classes/xr_node3d";

export declare class XRController3D extends XRNode3D{
  public is_button_pressed(_name: String | StringName | string): boolean;
  public get_input(_name: String | StringName | string): any;
  public get_float(_name: String | StringName | string): number;
  public get_vector2(_name: String | StringName | string): Vector2;
  public get_tracker_hand(): number;
  public const button_pressed: string = "button_pressed";
  public const button_released: string = "button_released";
  public const input_float_changed: string = "input_float_changed";
  public const input_vector2_changed: string = "input_vector2_changed";
  public const profile_changed: string = "profile_changed";
}