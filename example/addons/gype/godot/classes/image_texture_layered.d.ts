
import { Image } from "@godot/classes/image";
import { Image } from "@godot/classes/image";
import { TextureLayered } from "@godot/classes/texture_layered";


export declare class ImageTextureLayered extends TextureLayered{
  public create_from_images(_images: GDArray): number;
  public update_layer(_image: Image, _layer: number): void;
}