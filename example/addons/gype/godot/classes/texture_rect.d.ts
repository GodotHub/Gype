
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
  public get texture(): Texture2D;
  public set texture(value): void;
  public get expand_mode(): number;
  public set expand_mode(value): void;
  public get stretch_mode(): number;
  public set stretch_mode(value): void;
  public get flip_h(): boolean;
  public set flip_h(value): void;
  public get flip_v(): boolean;
  public set flip_v(value): void;
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