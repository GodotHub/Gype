
import { Image } from "@godot/classes/image";
import { Texture } from "@godot/classes/texture";
export declare class TextureLayered extends Texture{
  public _get_format(): number;
  public _get_layered_type(): number;
  public _get_width(): number;
  public _get_height(): number;
  public _get_layers(): number;
  public _has_mipmaps(): boolean;
  public _get_layer_data(_layer_index: number): Image;
  public get_format(): number;
  public get_layered_type(): number;
  public get_width(): number;
  public get_height(): number;
  public get_layers(): number;
  public has_mipmaps(): boolean;
  public get_layer_data(_layer: number): Image;
  static LayeredType = {
    LAYERED_TYPE_2D_ARRAY = 0,
    LAYERED_TYPE_CUBEMAP = 1,
    LAYERED_TYPE_CUBEMAP_ARRAY = 2,
  }
}