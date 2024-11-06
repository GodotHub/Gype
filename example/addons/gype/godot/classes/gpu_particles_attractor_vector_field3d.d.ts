
import { GPUParticlesAttractor3D } from "@godot/classes/gpu_particles_attractor3d";
import { Texture3D } from "@godot/classes/texture3d";
export declare class GPUParticlesAttractorVectorField3D extends GPUParticlesAttractor3D{
  public set_size(_size: Vector3): void;
  public get_size(): Vector3;
  public set_texture(_texture: Texture3D): void;
  public get_texture(): Texture3D;
  public get size(): Vector3;
  public set size(value): void;
  public get texture(): Texture3D;
  public set texture(value): void;
}