
import { BitMap } from "@godot/classes/bit_map";
import { BaseButton } from "@godot/classes/base_button";
import { Texture2D } from "@godot/classes/texture2d";


export declare class TextureButton extends BaseButton{
  public set_texture_normal(_texture: Texture2D): void;
  public set_texture_pressed(_texture: Texture2D): void;
  public set_texture_hover(_texture: Texture2D): void;
  public set_texture_disabled(_texture: Texture2D): void;
  public set_texture_focused(_texture: Texture2D): void;
  public set_click_mask(_mask: BitMap): void;
  public set_ignore_texture_size(_ignore: boolean): void;
  public set_stretch_mode(_mode: number): void;
  public set_flip_h(_enable: boolean): void;
  public is_flipped_h(): boolean;
  public set_flip_v(_enable: boolean): void;
  public is_flipped_v(): boolean;
  public get_texture_normal(): Texture2D;
  public get_texture_pressed(): Texture2D;
  public get_texture_hover(): Texture2D;
  public get_texture_disabled(): Texture2D;
  public get_texture_focused(): Texture2D;
  public get_click_mask(): BitMap;
  public get_ignore_texture_size(): boolean;
  public get_stretch_mode(): number;
  public get texture_normal(): Texture2D;
  public set texture_normal(value): void;
  public get texture_pressed(): Texture2D;
  public set texture_pressed(value): void;
  public get texture_hover(): Texture2D;
  public set texture_hover(value): void;
  public get texture_disabled(): Texture2D;
  public set texture_disabled(value): void;
  public get texture_focused(): Texture2D;
  public set texture_focused(value): void;
  public get texture_click_mask(): BitMap;
  public set texture_click_mask(value): void;
  public get ignore_texture_size(): boolean;
  public set ignore_texture_size(value): void;
  public get stretch_mode(): number;
  public set stretch_mode(value): void;
  public get flip_h(): boolean;
  public set flip_h(value): void;
  public get flip_v(): boolean;
  public set flip_v(value): void;
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