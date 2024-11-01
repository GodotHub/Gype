
import { Light3D } from "@godot/classes/light3d";

export declare class SpotLight3D extends Light3D{
  public get spot_range(): number {
    get_param();
  }
  public set spot_range(value): void {
    set_param(value);
  }
  public get spot_attenuation(): number {
    get_param();
  }
  public set spot_attenuation(value): void {
    set_param(value);
  }
  public get spot_angle(): number {
    get_param();
  }
  public set spot_angle(value): void {
    set_param(value);
  }
  public get spot_angle_attenuation(): number {
    get_param();
  }
  public set spot_angle_attenuation(value): void {
    set_param(value);
  }
}