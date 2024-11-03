
import { Light3D } from "@godot/classes/light3d";
export declare class OmniLight3D extends Light3D{
  public set_shadow_mode(_mode: number): void;
  public get_shadow_mode(): number;
  public get omni_range(): number;
  public set omni_range(value): void;
  public get omni_attenuation(): number;
  public set omni_attenuation(value): void;
  public get omni_shadow_mode(): number;
  public set omni_shadow_mode(value): void;
  static ShadowMode = {
    SHADOW_DUAL_PARABOLOID = 0,
    SHADOW_CUBE = 1,
  }
}