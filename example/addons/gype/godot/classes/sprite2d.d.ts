
import { Node2D } from "@godot/classes/node2d";
import { Texture2D } from "@godot/classes/texture2d";

export declare class Sprite2D extends Node2D{
  public set_texture(_texture: Texture2D): void;
  public get_texture(): Texture2D;
  public set_centered(_centered: boolean): void;
  public is_centered(): boolean;
  public set_offset(_offset: Vector2): void;
  public get_offset(): Vector2;
  public set_flip_h(_flip_h: boolean): void;
  public is_flipped_h(): boolean;
  public set_flip_v(_flip_v: boolean): void;
  public is_flipped_v(): boolean;
  public set_region_enabled(_enabled: boolean): void;
  public is_region_enabled(): boolean;
  public is_pixel_opaque(_pos: Vector2): boolean;
  public set_region_rect(_rect: Rect2): void;
  public get_region_rect(): Rect2;
  public set_region_filter_clip_enabled(_enabled: boolean): void;
  public is_region_filter_clip_enabled(): boolean;
  public set_frame(_frame: number): void;
  public get_frame(): number;
  public set_frame_coords(_coords: Vector2i): void;
  public get_frame_coords(): Vector2i;
  public set_vframes(_vframes: number): void;
  public get_vframes(): number;
  public set_hframes(_hframes: number): void;
  public get_hframes(): number;
  public get_rect(): Rect2;
  public get texture(): Texture2D {
    get_texture();
  }
  public set texture(value: Texture2D): void {
    set_texture(value);
  }
  public get centered(): boolean {
    is_centered();
  }
  public set centered(value: boolean): void {
    set_centered(value);
  }
  public get offset(): Vector2 {
    get_offset();
  }
  public set offset(value: Vector2): void {
    set_offset(value);
  }
  public get flip_h(): boolean {
    is_flipped_h();
  }
  public set flip_h(value: boolean): void {
    set_flip_h(value);
  }
  public get flip_v(): boolean {
    is_flipped_v();
  }
  public set flip_v(value: boolean): void {
    set_flip_v(value);
  }
  public get hframes(): number {
    get_hframes();
  }
  public set hframes(value: number): void {
    set_hframes(value);
  }
  public get vframes(): number {
    get_vframes();
  }
  public set vframes(value: number): void {
    set_vframes(value);
  }
  public get frame(): number {
    get_frame();
  }
  public set frame(value: number): void {
    set_frame(value);
  }
  public get frame_coords(): Vector2i {
    get_frame_coords();
  }
  public set frame_coords(value: Vector2i): void {
    set_frame_coords(value);
  }
  public get region_enabled(): boolean {
    is_region_enabled();
  }
  public set region_enabled(value: boolean): void {
    set_region_enabled(value);
  }
  public get region_rect(): Rect2 {
    get_region_rect();
  }
  public set region_rect(value: Rect2): void {
    set_region_rect(value);
  }
  public get region_filter_clip_enabled(): boolean {
    is_region_filter_clip_enabled();
  }
  public set region_filter_clip_enabled(value: boolean): void {
    set_region_filter_clip_enabled(value);
  }
}