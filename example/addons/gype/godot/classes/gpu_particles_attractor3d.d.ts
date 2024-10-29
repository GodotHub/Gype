
import { VisualInstance3D } from "@godot/classes/visual_instance3d";

export declare class GPUParticlesAttractor3D extends VisualInstance3D{
  public set_cull_mask(_mask: number): void;
  public get_cull_mask(): number;
  public set_strength(_strength: number): void;
  public get_strength(): number;
  public set_attenuation(_attenuation: number): void;
  public get_attenuation(): number;
  public set_directionality(_amount: number): void;
  public get_directionality(): number;
  public get strength(): number {
    get_strength();
  }
  public set strength(value): void {
    set_strength(value);
  }
  public get attenuation(): number {
    get_attenuation();
  }
  public set attenuation(value): void {
    set_attenuation(value);
  }
  public get directionality(): number {
    get_directionality();
  }
  public set directionality(value): void {
    set_directionality(value);
  }
  public get cull_mask(): number {
    get_cull_mask();
  }
  public set cull_mask(value): void {
    set_cull_mask(value);
  }
}