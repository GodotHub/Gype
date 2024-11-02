
import { XRPose } from "@godot/classes/xr_pose";
import { Node3D } from "@godot/classes/node3d";


export declare class XRNode3D extends Node3D{
  public set_tracker(_tracker_name: GDString | StringName | string): void;
  public get_tracker(): StringName;
  public set_pose_name(_pose: GDString | StringName | string): void;
  public get_pose_name(): StringName;
  public set_show_when_tracked(_show: boolean): void;
  public get_show_when_tracked(): boolean;
  public get_is_active(): boolean;
  public get_has_tracking_data(): boolean;
  public get_pose(): XRPose;
  public trigger_haptic_pulse(_action_name: GDString | StringName | string, _frequency: number, _amplitude: number, _duration_sec: number, _delay_sec: number): void;
  public get tracker(): String;
  public set tracker(value): void;
  public get pose(): String;
  public set pose(value): void;
  public get show_when_tracked(): boolean;
  public set show_when_tracked(value): void;
  public get tracking_changed(): Signal;
}