
import { XRInterface } from "@godot/classes/xr_interface";
import { XRTracker } from "@godot/classes/xr_tracker";
import { Object } from "@godot/classes/object";

export declare class XRServer extends Object{
  public get_world_scale(): number;
  public set_world_scale(_scale: number): void;
  public get_world_origin(): Transform3D;
  public set_world_origin(_world_origin: Transform3D): void;
  public get_reference_frame(): Transform3D;
  public clear_reference_frame(): void;
  public center_on_hmd(_rotation_mode: number, _keep_height: boolean): void;
  public get_hmd_transform(): Transform3D;
  public add_interface(_interface: XRInterface): void;
  public get_interface_count(): number;
  public remove_interface(_interface: XRInterface): void;
  public get_interface(_idx: number): XRInterface;
  public get_interfaces(): Array;
  public find_interface(_name: String): XRInterface;
  public add_tracker(_tracker: XRTracker): void;
  public remove_tracker(_tracker: XRTracker): void;
  public get_trackers(_tracker_types: number): Dictionary;
  public get_tracker(_tracker_name: StringName): XRTracker;
  public get_primary_interface(): XRInterface;
  public set_primary_interface(_interface: XRInterface): void;
  public get world_scale(): number {
    get_world_scale();
  }
  public set world_scale(value: number): void {
    set_world_scale(value);
  }
  public get world_origin(): Vector3 {
    get_world_origin();
  }
  public set world_origin(value: Vector3): void {
    set_world_origin(value);
  }
  public get primary_interface(): Object {
    get_primary_interface();
  }
  public set primary_interface(value: Object): void {
    set_primary_interface(value);
  }
  static TrackerType = {
    TRACKER_HEAD = 1,
    TRACKER_CONTROLLER = 2,
    TRACKER_BASESTATION = 4,
    TRACKER_ANCHOR = 8,
    TRACKER_HAND = 16,
    TRACKER_BODY = 32,
    TRACKER_FACE = 64,
    TRACKER_ANY_KNOWN = 127,
    TRACKER_UNKNOWN = 128,
    TRACKER_ANY = 255,
  }
  static RotationMode = {
    RESET_FULL_ROTATION = 0,
    RESET_BUT_KEEP_TILT = 1,
    DONT_RESET_ROTATION = 2,
  }
}