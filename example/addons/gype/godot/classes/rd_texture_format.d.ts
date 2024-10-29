
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
  public get format(): number {
    get_format();
  }
  public set format(value): void {
    set_format(value);
  }
  public get width(): number {
    get_width();
  }
  public set width(value): void {
    set_width(value);
  }
  public get height(): number {
    get_height();
  }
  public set height(value): void {
    set_height(value);
  }
  public get depth(): number {
    get_depth();
  }
  public set depth(value): void {
    set_depth(value);
  }
  public get array_layers(): number {
    get_array_layers();
  }
  public set array_layers(value): void {
    set_array_layers(value);
  }
  public get mipmaps(): number {
    get_mipmaps();
  }
  public set mipmaps(value): void {
    set_mipmaps(value);
  }
  public get texture_type(): number {
    get_texture_type();
  }
  public set texture_type(value): void {
    set_texture_type(value);
  }
  public get samples(): number {
    get_samples();
  }
  public set samples(value): void {
    set_samples(value);
  }
  public get usage_bits(): number {
    get_usage_bits();
  }
  public set usage_bits(value): void {
    set_usage_bits(value);
  }
}