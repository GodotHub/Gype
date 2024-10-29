
import { Shape3D } from "@godot/classes/shape3d";
import { Image } from "@godot/classes/image";

export declare class HeightMapShape3D extends Shape3D{
  public set_map_width(_width: number): void;
  public get_map_width(): number;
  public set_map_depth(_height: number): void;
  public get_map_depth(): number;
  public set_map_data(_data: PackedFloat32Array): void;
  public get_map_data(): PackedFloat32Array;
  public get_min_height(): number;
  public get_max_height(): number;
  public update_map_data_from_image(_image: Image, _height_min: number, _height_max: number): void;
  public get map_width(): number {
    get_map_width();
  }
  public set map_width(value): void {
    set_map_width(value);
  }
  public get map_depth(): number {
    get_map_depth();
  }
  public set map_depth(value): void {
    set_map_depth(value);
  }
  public get map_data(): PackedFloat32Array {
    get_map_data();
  }
  public set map_data(value): void {
    set_map_data(value);
  }
}