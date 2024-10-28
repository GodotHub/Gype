
import { Image } from "@godot/classes/image";
import { Texture3D } from "@godot/classes/texture3d";

export declare class ImageTexture3D extends Texture3D{
  public create(_format: number, _width: number, _height: number, _depth: number, _use_mipmaps: boolean, _data: typedarray::Image): number;
  public update(_data: typedarray::Image): void;
}