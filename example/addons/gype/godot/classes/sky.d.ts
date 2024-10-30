
import { Resource } from "@godot/classes/resource";
import { Material } from "@godot/classes/material";

export declare class Sky extends Resource{
  public set_radiance_size(_size: number): void;
  public get_radiance_size(): number;
  public set_process_mode(_mode: number): void;
  public get_process_mode(): number;
  public set_material(_material: Material): void;
  public get_material(): Material;
  public get sky_material(): PanoramaSkyMaterial {
    get_material();
  }
  public set sky_material(value): void {
    set_material(value);
  }
  public get process_mode(): number {
    get_process_mode();
  }
  public set process_mode(value): void {
    set_process_mode(value);
  }
  public get radiance_size(): number {
    get_radiance_size();
  }
  public set radiance_size(value): void {
    set_radiance_size(value);
  }
  static RadianceSize = {
    RADIANCE_SIZE_32 = 0,
    RADIANCE_SIZE_64 = 1,
    RADIANCE_SIZE_128 = 2,
    RADIANCE_SIZE_256 = 3,
    RADIANCE_SIZE_512 = 4,
    RADIANCE_SIZE_1024 = 5,
    RADIANCE_SIZE_2048 = 6,
    RADIANCE_SIZE_MAX = 7,
  }
  static ProcessMode = {
    PROCESS_MODE_AUTOMATIC = 0,
    PROCESS_MODE_QUALITY = 1,
    PROCESS_MODE_INCREMENTAL = 2,
    PROCESS_MODE_REALTIME = 3,
  }
}