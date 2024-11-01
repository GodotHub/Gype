
import { Light3D } from "@godot/classes/light3d";

export declare class OmniLight3D extends Light3D{
  public set_shadow_mode(_mode: number): void;
  public get_shadow_mode(): number;
  public get omni_range(): number {
    get_param();
  }
  public set omni_range(value): void {
    set_param(value);
  }
  public get omni_attenuation(): number {
    get_param();
  }
  public set omni_attenuation(value): void {
    set_param(value);
  }
  public get omni_shadow_mode(): number {
    get_shadow_mode();
  }
  public set omni_shadow_mode(value): void {
    set_shadow_mode(value);
  }
  static ShadowMode = {
    SHADOW_DUAL_PARABOLOID = 0,
    SHADOW_CUBE = 1,
  }
}