
import { GPUParticlesCollision3D } from "@godot/classes/gpu_particles_collision3d";


export declare class GPUParticlesCollisionBox3D extends GPUParticlesCollision3D{
  public set_size(_size: Vector3): void;
  public get_size(): Vector3;
  public get size(): Vector3;
  public set size(value): void;
}