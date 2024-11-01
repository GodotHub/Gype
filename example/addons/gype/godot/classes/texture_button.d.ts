
import { BaseButton } from "@godot/classes/base_button";
import { Texture2D } from "@godot/classes/texture2d";
import { BitMap } from "@godot/classes/bit_map";

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
  public get texture_normal(): Texture2D {
    get_texture_normal();
  }
  public set texture_normal(value): void {
    set_texture_normal(value);
  }
  public get texture_pressed(): Texture2D {
    get_texture_pressed();
  }
  public set texture_pressed(value): void {
    set_texture_pressed(value);
  }
  public get texture_hover(): Texture2D {
    get_texture_hover();
  }
  public set texture_hover(value): void {
    set_texture_hover(value);
  }
  public get texture_disabled(): Texture2D {
    get_texture_disabled();
  }
  public set texture_disabled(value): void {
    set_texture_disabled(value);
  }
  public get texture_focused(): Texture2D {
    get_texture_focused();
  }
  public set texture_focused(value): void {
    set_texture_focused(value);
  }
  public get texture_click_mask(): BitMap {
    get_click_mask();
  }
  public set texture_click_mask(value): void {
    set_click_mask(value);
  }
  public get ignore_texture_size(): boolean {
    get_ignore_texture_size();
  }
  public set ignore_texture_size(value): void {
    set_ignore_texture_size(value);
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