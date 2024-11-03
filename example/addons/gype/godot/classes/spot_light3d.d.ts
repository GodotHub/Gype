
import { Light3D } from "@godot/classes/light3d";
export declare class SpotLight3D extends Light3D{
  public get spot_range(): number;
  public set spot_range(value): void;
  public get spot_attenuation(): number;
  public set spot_attenuation(value): void;
  public get spot_angle(): number;
  public set spot_angle(value): void;
  public get spot_angle_attenuation(): number;
  public set spot_angle_attenuation(value): void;
}