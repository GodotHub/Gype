
import { GPUParticlesCollision3D } from "@godot/classes/gpu_particles_collision3d";

export declare class GPUParticlesCollisionSphere3D extends GPUParticlesCollision3D{
  public set_radius(_radius: number): void;
  public get_radius(): number;
  public get radius(): number {
    get_radius();
  }
  public set radius(value): void {
    set_radius(value);
  }
}