
import { GPUParticlesAttractor3D } from "@godot/classes/gpu_particles_attractor3d";
import { Texture3D } from "@godot/classes/texture3d";

export declare class GPUParticlesAttractorVectorField3D extends GPUParticlesAttractor3D{
  public set_size(_size: Vector3): void;
  public get_size(): Vector3;
  public set_texture(_texture: Texture3D): void;
  public get_texture(): Texture3D;
  public get size(): Vector3 {
    get_size();
  }
  public set size(value: Vector3): void {
    set_size(value);
  }
  public get texture(): Texture3D {
    get_texture();
  }
  public set texture(value: Texture3D): void {
    set_texture(value);
  }
}