
import { RefCounted } from "@godot/classes/ref_counted";


export declare class RDTextureFormat extends RefCounted{
  public set_format(_p_member: number): void;
  public get_format(): number;
  public set_width(_p_member: number): void;
  public get_width(): number;
  public set_height(_p_member: number): void;
  public get_height(): number;
  public set_depth(_p_member: number): void;
  public get_depth(): number;
  public set_array_layers(_p_member: number): void;
  public get_array_layers(): number;
  public set_mipmaps(_p_member: number): void;
  public get_mipmaps(): number;
  public set_texture_type(_p_member: number): void;
  public get_texture_type(): number;
  public set_samples(_p_member: number): void;
  public get_samples(): number;
  public set_usage_bits(_p_member: number): void;
  public get_usage_bits(): number;
  public add_shareable_format(_format: number): void;
  public remove_shareable_format(_format: number): void;
  public get format(): number;
  public set format(value): void;
  public get width(): number;
  public set width(value): void;
  public get height(): number;
  public set height(value): void;
  public get depth(): number;
  public set depth(value): void;
  public get array_layers(): number;
  public set array_layers(value): void;
  public get mipmaps(): number;
  public set mipmaps(value): void;
  public get texture_type(): number;
  public set texture_type(value): void;
  public get samples(): number;
  public set samples(value): void;
  public get usage_bits(): number;
  public set usage_bits(value): void;
}