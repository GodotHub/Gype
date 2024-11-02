
import { Joint3D } from "@godot/classes/joint3d";


export declare class PinJoint3D extends Joint3D{
  public set_param(_param: number, _value: number): void;
  public get_param(_param: number): number;
  static Param = {
    PARAM_BIAS = 0,
    PARAM_DAMPING = 1,
    PARAM_IMPULSE_CLAMP = 2,
  }
}