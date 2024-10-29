
import { RefCounted } from "@godot/classes/ref_counted";

export declare class XRPose extends RefCounted{
  public set_has_tracking_data(_has_tracking_data: boolean): void;
  public get_has_tracking_data(): boolean;
  public set_name(_name: StringName): void;
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
  public get has_tracking_data(): boolean {
    get_has_tracking_data();
  }
  public set has_tracking_data(value): void {
    set_has_tracking_data(value);
  }
  public get name(): String {
    get_name();
  }
  public set name(value): void {
    set_name(value);
  }
  public get transform(): String {
    get_transform();
  }
  public set transform(value): void {
    set_transform(value);
  }
  public get linear_velocity(): String {
    get_linear_velocity();
  }
  public set linear_velocity(value): void {
    set_linear_velocity(value);
  }
  public get angular_velocity(): String {
    get_angular_velocity();
  }
  public set angular_velocity(value): void {
    set_angular_velocity(value);
  }
  public get tracking_confidence(): number {
    get_tracking_confidence();
  }
  public set tracking_confidence(value): void {
    set_tracking_confidence(value);
  }
  static TrackingConfidence = {
    XR_TRACKING_CONFIDENCE_NONE = 0,
    XR_TRACKING_CONFIDENCE_LOW = 1,
    XR_TRACKING_CONFIDENCE_HIGH = 2,
  }
}