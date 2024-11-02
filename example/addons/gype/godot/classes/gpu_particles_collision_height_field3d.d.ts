
import { GPUParticlesCollision3D } from "@godot/classes/gpu_particles_collision3d";


export declare class GPUParticlesCollisionHeightField3D extends GPUParticlesCollision3D{
  public set_size(_size: Vector3): void;
  public get_size(): Vector3;
  public set_resolution(_resolution: number): void;
  public get_resolution(): number;
  public set_update_mode(_update_mode: number): void;
  public get_update_mode(): number;
  public set_follow_camera_enabled(_enabled: boolean): void;
  public is_follow_camera_enabled(): boolean;
  public get size(): Vector3;
  public set size(value): void;
  public get resolution(): number;
  public set resolution(value): void;
  public get update_mode(): number;
  public set update_mode(value): void;
  public get follow_camera_enabled(): boolean;
  public set follow_camera_enabled(value): void;
  static Resolution = {
    RESOLUTION_256 = 0,
    RESOLUTION_512 = 1,
    RESOLUTION_1024 = 2,
    RESOLUTION_2048 = 3,
    RESOLUTION_4096 = 4,
    RESOLUTION_8192 = 5,
    RESOLUTION_MAX = 6,
  }
  static UpdateMode = {
    UPDATE_MODE_WHEN_MOVED = 0,
    UPDATE_MODE_ALWAYS = 1,
  }
}