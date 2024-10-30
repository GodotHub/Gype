
import { Texture2D } from "@godot/classes/texture2d";
import { Control } from "@godot/classes/control";

export declare class TextureRect extends Control{
  public set_texture(_texture: Texture2D): void;
  public get_texture(): Texture2D;
  public set_expand_mode(_expand_mode: number): void;
  public get_expand_mode(): number;
  public set_flip_h(_enable: boolean): void;
  public is_flipped_h(): boolean;
  public set_flip_v(_enable: boolean): void;
  public is_flipped_v(): boolean;
  public set_stretch_mode(_stretch_mode: number): void;
  public get_stretch_mode(): number;
  public get texture(): Texture2D {
    get_texture();
  }
  public set texture(value): void {
    set_texture(value);
  }
  public get expand_mode(): number {
    get_expand_mode();
  }
  public set expand_mode(value): void {
    set_expand_mode(value);
  }
  public get stretch_mode(): number {
    get_stretch_mode();
  }
  public set stretch_mode(value): void {
    set_stretch_mode(value);
  }
  public get flip_h(): boolean {
    is_flipped_h();
  }
  public set flip_h(value): void {
    set_flip_h(value);
  }
  public get flip_v(): boolean {
    is_flipped_v();
  }
  public set flip_v(value): void {
    set_flip_v(value);
  }
  static ExpandMode = {
    EXPAND_KEEP_SIZE = 0,
    EXPAND_IGNORE_SIZE = 1,
    EXPAND_FIT_WIDTH = 2,
    EXPAND_FIT_WIDTH_PROPORTIONAL = 3,
    EXPAND_FIT_HEIGHT = 4,
    EXPAND_FIT_HEIGHT_PROPORTIONAL = 5,
  }
  static StretchMode = {
    STRETCH_SCALE = 0,
    STRETCH_TILE = 1,
    STRETCH_KEEP = 2,
    STRETCH_KEEP_CENTERED = 3,
    STRETCH_KEEP_ASPECT = 4,
    STRETCH_KEEP_ASPECT_CENTERED = 5,
    STRETCH_KEEP_ASPECT_COVERED = 6,
  }
}