
import { VisualInstance3D } from "@godot/classes/visual_instance3d";

export declare class GPUParticlesCollision3D extends VisualInstance3D{
  public set_cull_mask(_mask: number): void;
  public get_cull_mask(): number;
  public get cull_mask(): number {
    get_cull_mask();
  }
  public set cull_mask(value: number): void {
    set_cull_mask(value);
  }
}