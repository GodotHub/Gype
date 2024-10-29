
import { Image } from "@godot/classes/image";
import { Image } from "@godot/classes/image";
import { Resource } from "@godot/classes/resource";

export declare class Noise extends Resource{
  public get_noise_1d(_x: number): number;
  public get_noise_2d(_x: number, _y: number): number;
  public get_noise_2dv(_v: Vector2): number;
  public get_noise_3d(_x: number, _y: number, _z: number): number;
  public get_noise_3dv(_v: Vector3): number;
  public get_image(_width: number, _height: number, _invert: boolean, _in_3d_space: boolean, _normalize: boolean): Image;
  public get_seamless_image(_width: number, _height: number, _invert: boolean, _in_3d_space: boolean, _skirt: number, _normalize: boolean): Image;
  public get_image_3d(_width: number, _height: number, _depth: number, _invert: boolean, _normalize: boolean): GDArray;
  public get_seamless_image_3d(_width: number, _height: number, _depth: number, _invert: boolean, _skirt: number, _normalize: boolean): GDArray;
}