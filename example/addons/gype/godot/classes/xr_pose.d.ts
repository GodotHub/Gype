
import { RefCounted } from "@godot/classes/ref_counted";
export declare class XRPose extends RefCounted{
  public set_has_tracking_data(_has_tracking_data: boolean): void;
  public get_has_tracking_data(): boolean;
  public set_name(_name: GDString | StringName | string): void;
  public get_name(): StringName;
  public set_transform(_transform: Transform3D): void;
  public get_transform(): Transform3D;
  public get_adjusted_transform(): Transform3D;
  public set_linear_velocity(_velocity: Vector3): void;
  public get_linear_velocity(): Vector3;
  public set_angular_velocity(_velocity: Vector3): void;
  public get_angular_velocity(): Vector3;
  public set_tracking_confidence(_tracking_confidence: number): void;
  public get_tracking_confidence(): number;
  public get has_tracking_data(): boolean;
  public set has_tracking_data(value): void;
  public get name(): String;
  public set name(value): void;
  public get transform(): String;
  public set transform(value): void;
  public get linear_velocity(): String;
  public set linear_velocity(value): void;
  public get angular_velocity(): String;
  public set angular_velocity(value): void;
  public get tracking_confidence(): number;
  public set tracking_confidence(value): void;
  static TrackingConfidence = {
    XR_TRACKING_CONFIDENCE_NONE = 0,
    XR_TRACKING_CONFIDENCE_LOW = 1,
    XR_TRACKING_CONFIDENCE_HIGH = 2,
  }
}