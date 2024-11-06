
import { GPUParticlesCollision3D } from "@godot/classes/gpu_particles_collision3d";
import { Texture3D } from "@godot/classes/texture3d";
export declare class GPUParticlesCollisionSDF3D extends GPUParticlesCollision3D{
  public set_size(_size: Vector3): void;
  public get_size(): Vector3;
  public set_resolution(_resolution: number): void;
  public get_resolution(): number;
  public set_texture(_texture: Texture3D): void;
  public get_texture(): Texture3D;
  public set_thickness(_thickness: number): void;
  public get_thickness(): number;
  public set_bake_mask(_mask: number): void;
  public get_bake_mask(): number;
  public set_bake_mask_value(_layer_number: number, _value: boolean): void;
  public get_bake_mask_value(_layer_number: number): boolean;
  public get size(): Vector3;
  public set size(value): void;
  public get resolution(): number;
  public set resolution(value): void;
  public get thickness(): number;
  public set thickness(value): void;
  public get bake_mask(): number;
  public set bake_mask(value): void;
  public get texture(): Texture3D;
  public set texture(value): void;
  static Resolution = {
    RESOLUTION_16 = 0,
    RESOLUTION_32 = 1,
    RESOLUTION_64 = 2,
    RESOLUTION_128 = 3,
    RESOLUTION_256 = 4,
    RESOLUTION_512 = 5,
    RESOLUTION_MAX = 6,
  }
}