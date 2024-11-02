
import { BitMap } from "@godot/classes/bit_map";
import { Shape2D } from "@godot/classes/shape2d";
import { Node2D } from "@godot/classes/node2d";
import { Texture2D } from "@godot/classes/texture2d";


export declare class TouchScreenButton extends Node2D{
  public set_texture_normal(_texture: Texture2D): void;
  public get_texture_normal(): Texture2D;
  public set_texture_pressed(_texture: Texture2D): void;
  public get_texture_pressed(): Texture2D;
  public set_bitmask(_bitmask: BitMap): void;
  public get_bitmask(): BitMap;
  public set_shape(_shape: Shape2D): void;
  public get_shape(): Shape2D;
  public set_shape_centered(_bool: boolean): void;
  public is_shape_centered(): boolean;
  public set_shape_visible(_bool: boolean): void;
  public is_shape_visible(): boolean;
  public set_action(_action: GDString | StringName | string): void;
  public get_action(): String;
  public set_visibility_mode(_mode: number): void;
  public get_visibility_mode(): number;
  public set_passby_press(_enabled: boolean): void;
  public is_passby_press_enabled(): boolean;
  public is_pressed(): boolean;
  public get texture_normal(): Texture2D;
  public set texture_normal(value): void;
  public get texture_pressed(): Texture2D;
  public set texture_pressed(value): void;
  public get bitmask(): BitMap;
  public set bitmask(value): void;
  public get shape(): Shape2D;
  public set shape(value): void;
  public get shape_centered(): boolean;
  public set shape_centered(value): void;
  public get shape_visible(): boolean;
  public set shape_visible(value): void;
  public get passby_press(): boolean;
  public set passby_press(value): void;
  public get action(): StringName;
  public set action(value): void;
  public get visibility_mode(): number;
  public set visibility_mode(value): void;
  static VisibilityMode = {
    VISIBILITY_ALWAYS = 0,
    VISIBILITY_TOUCHSCREEN_ONLY = 1,
  }
  public get pressed(): Signal;
  public get released(): Signal;
}