
import { Resource } from "@godot/classes/resource";


export declare class GLTFTextureSampler extends Resource{
  public get_mag_filter(): number;
  public set_mag_filter(_filter_mode: number): void;
  public get_min_filter(): number;
  public set_min_filter(_filter_mode: number): void;
  public get_wrap_s(): number;
  public set_wrap_s(_wrap_mode: number): void;
  public get_wrap_t(): number;
  public set_wrap_t(_wrap_mode: number): void;
  public get mag_filter(): number;
  public set mag_filter(value): void;
  public get min_filter(): number;
  public set min_filter(value): void;
  public get wrap_s(): number;
  public set wrap_s(value): void;
  public get wrap_t(): number;
  public set wrap_t(value): void;
}