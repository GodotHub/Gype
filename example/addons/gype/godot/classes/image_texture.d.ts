
import { Texture2D } from "@godot/classes/texture2d";
import { Image } from "@godot/classes/image";

export declare class ImageTexture extends Texture2D{
  public create_from_image(_image: Image): ImageTexture;
  public get_format(): number;
  public set_image(_image: Image): void;
  public update(_image: Image): void;
  public set_size_override(_size: Vector2i): void;
}