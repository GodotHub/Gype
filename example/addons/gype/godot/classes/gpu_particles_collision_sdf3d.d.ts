
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
  public get size(): Vector3 {
    get_size();
  }
  public set size(value): void {
    set_size(value);
  }
  public get resolution(): number {
    get_resolution();
  }
  public set resolution(value): void {
    set_resolution(value);
  }
  public get thickness(): number {
    get_thickness();
  }
  public set thickness(value): void {
    set_thickness(value);
  }
  public get bake_mask(): number {
    get_bake_mask();
  }
  public set bake_mask(value): void {
    set_bake_mask(value);
  }
  public get texture(): Texture3D {
    get_texture();
  }
  public set texture(value): void {
    set_texture(value);
  }
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