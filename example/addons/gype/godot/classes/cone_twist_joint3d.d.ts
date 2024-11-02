
import { Joint3D } from "@godot/classes/joint3d";


export declare class ConeTwistJoint3D extends Joint3D{
  public set_param(_param: number, _value: number): void;
  public get_param(_param: number): number;
  public get swing_span(): number;
  public set swing_span(value): void;
  public get twist_span(): number;
  public set twist_span(value): void;
  public get bias(): number;
  public set bias(value): void;
  public get softness(): number;
  public set softness(value): void;
  public get relaxation(): number;
  public set relaxation(value): void;
  static Param = {
    PARAM_SWING_SPAN = 0,
    PARAM_TWIST_SPAN = 1,
    PARAM_BIAS = 2,
    PARAM_SOFTNESS = 3,
    PARAM_RELAXATION = 4,
    PARAM_MAX = 5,
  }
}