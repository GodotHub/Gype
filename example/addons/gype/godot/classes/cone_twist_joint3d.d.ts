
import { Joint3D } from "@godot/classes/joint3d";

export declare class ConeTwistJoint3D extends Joint3D{
  public set_param(_param: number, _value: number): void;
  public get_param(_param: number): number;
  public get swing_span(): number {
    get_param();
  }
  public set swing_span(value: number): void {
    set_param(value);
  }
  public get twist_span(): number {
    get_param();
  }
  public set twist_span(value: number): void {
    set_param(value);
  }
  public get bias(): number {
    get_param();
  }
  public set bias(value: number): void {
    set_param(value);
  }
  public get softness(): number {
    get_param();
  }
  public set softness(value: number): void {
    set_param(value);
  }
  public get relaxation(): number {
    get_param();
  }
  public set relaxation(value: number): void {
    set_param(value);
  }
  static Param = {
    PARAM_SWING_SPAN = 0,
    PARAM_TWIST_SPAN = 1,
    PARAM_BIAS = 2,
    PARAM_SOFTNESS = 3,
    PARAM_RELAXATION = 4,
    PARAM_MAX = 5,
  }
}