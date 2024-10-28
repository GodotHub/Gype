
import { GPUParticlesAttractor3D } from "@godot/classes/gpu_particles_attractor3d";

export declare class GPUParticlesAttractorSphere3D extends GPUParticlesAttractor3D{
  public set_radius(_radius: number): void;
  public get_radius(): number;
  public get radius(): number {
    get_radius();
  }
  public set radius(value: number): void {
    set_radius(value);
  }
}