
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
  public get strength(): number;
  public set strength(value): void;
  public get attenuation(): number;
  public set attenuation(value): void;
  public get directionality(): number;
  public set directionality(value): void;
  public get cull_mask(): number;
  public set cull_mask(value): void;
}