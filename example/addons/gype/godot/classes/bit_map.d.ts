
import { Image } from "@godot/classes/image";
import { Resource } from "@godot/classes/resource";

export declare class BitMap extends Resource{
  public create(_size: Vector2i): void;
  public create_from_image_alpha(_image: Image, _threshold: number): void;
  public set_bitv(_position: Vector2i, _bit: boolean): void;
  public set_bit(_x: number, _y: number, _bit: boolean): void;
  public get_bitv(_position: Vector2i): boolean;
  public get_bit(_x: number, _y: number): boolean;
  public set_bit_rect(_rect: Rect2i, _bit: boolean): void;
  public get_true_bit_count(): number;
  public get_size(): Vector2i;
  public resize(_new_size: Vector2i): void;
  public grow_mask(_pixels: number, _rect: Rect2i): void;
  public convert_to_image(): Image;
  public opaque_to_polygons(_rect: Rect2i, _epsilon: number): GDArray;
  public get data(): Dictionary {
    _get_data();
  }
  public set data(value): void {
    _set_data(value);
  }
}