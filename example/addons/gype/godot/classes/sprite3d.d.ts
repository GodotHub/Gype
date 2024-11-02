
import { SpriteBase3D } from "@godot/classes/sprite_base3d";
import { Texture2D } from "@godot/classes/texture2d";


export declare class Sprite3D extends SpriteBase3D{
  public set_texture(_texture: Texture2D): void;
  public get_texture(): Texture2D;
  public set_region_enabled(_enabled: boolean): void;
  public is_region_enabled(): boolean;
  public set_region_rect(_rect: Rect2): void;
  public get_region_rect(): Rect2;
  public set_frame(_frame: number): void;
  public get_frame(): number;
  public set_frame_coords(_coords: Vector2i): void;
  public get_frame_coords(): Vector2i;
  public set_vframes(_vframes: number): void;
  public get_vframes(): number;
  public set_hframes(_hframes: number): void;
  public get_hframes(): number;
  public get texture(): Texture2D;
  public set texture(value): void;
  public get hframes(): number;
  public set hframes(value): void;
  public get vframes(): number;
  public set vframes(value): void;
  public get frame(): number;
  public set frame(value): void;
  public get frame_coords(): Vector2i;
  public set frame_coords(value): void;
  public get region_enabled(): boolean;
  public set region_enabled(value): void;
  public get region_rect(): Rect2;
  public set region_rect(value): void;
  public get frame_changed(): Signal;
  public get texture_changed(): Signal;
}