
import { Image } from "@godot/classes/image";
import { Resource } from "@godot/classes/resource";
import { Texture } from "@godot/classes/texture";


export declare class Texture3D extends Texture{
  public _get_format(): number;
  public _get_width(): number;
  public _get_height(): number;
  public _get_depth(): number;
  public _has_mipmaps(): boolean;
  public _get_data(): GDArray;
  public get_format(): number;
  public get_width(): number;
  public get_height(): number;
  public get_depth(): number;
  public has_mipmaps(): boolean;
  public get_data(): GDArray;
  public create_placeholder(): Resource;
}