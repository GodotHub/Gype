
import { Node3D } from "@godot/classes/node3d";
import { XRPose } from "@godot/classes/xr_pose";

export declare class XRNode3D extends Node3D{
  public set_tracker(_tracker_name: StringName): void;
  public get_tracker(): StringName;
  public set_pose_name(_pose: StringName): void;
  public get_pose_name(): StringName;
  public set_show_when_tracked(_show: boolean): void;
  public get_show_when_tracked(): boolean;
  public get_is_active(): boolean;
  public get_has_tracking_data(): boolean;
  public get_pose(): XRPose;
  public trigger_haptic_pulse(_action_name: String, _frequency: number, _amplitude: number, _duration_sec: number, _delay_sec: number): void;
  public get tracker(): String {
    get_tracker();
  }
  public set tracker(value: String): void {
    set_tracker(value);
  }
  public get pose(): String {
    get_pose_name();
  }
  public set pose(value: String): void {
    set_pose_name(value);
  }
  public get show_when_tracked(): boolean {
    get_show_when_tracked();
  }
  public set show_when_tracked(value: boolean): void {
    set_show_when_tracked(value);
  }
}