
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
  public get texture(): Texture2D {
    get_texture();
  }
  public set texture(value): void {
    set_texture(value);
  }
  public get hframes(): number {
    get_hframes();
  }
  public set hframes(value): void {
    set_hframes(value);
  }
  public get vframes(): number {
    get_vframes();
  }
  public set vframes(value): void {
    set_vframes(value);
  }
  public get frame(): number {
    get_frame();
  }
  public set frame(value): void {
    set_frame(value);
  }
  public get frame_coords(): Vector2i {
    get_frame_coords();
  }
  public set frame_coords(value): void {
    set_frame_coords(value);
  }
  public get region_enabled(): boolean {
    is_region_enabled();
  }
  public set region_enabled(value): void {
    set_region_enabled(value);
  }
  public get region_rect(): Rect2 {
    get_region_rect();
  }
  public set region_rect(value): void {
    set_region_rect(value);
  }
}