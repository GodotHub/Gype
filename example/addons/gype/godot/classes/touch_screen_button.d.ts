
import { Shape2D } from "@godot/classes/shape2d";
import { Node2D } from "@godot/classes/node2d";
import { BitMap } from "@godot/classes/bit_map";
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
  public set_action(_action: String | StringName | string): void;
  public get_action(): String;
  public set_visibility_mode(_mode: number): void;
  public get_visibility_mode(): number;
  public set_passby_press(_enabled: boolean): void;
  public is_passby_press_enabled(): boolean;
  public is_pressed(): boolean;
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
  public get bitmask(): BitMap {
    get_bitmask();
  }
  public set bitmask(value): void {
    set_bitmask(value);
  }
  public get shape(): Shape2D {
    get_shape();
  }
  public set shape(value): void {
    set_shape(value);
  }
  public get shape_centered(): boolean {
    is_shape_centered();
  }
  public set shape_centered(value): void {
    set_shape_centered(value);
  }
  public get shape_visible(): boolean {
    is_shape_visible();
  }
  public set shape_visible(value): void {
    set_shape_visible(value);
  }
  public get passby_press(): boolean {
    is_passby_press_enabled();
  }
  public set passby_press(value): void {
    set_passby_press(value);
  }
  public get action(): StringName {
    get_action();
  }
  public set action(value): void {
    set_action(value);
  }
  public get visibility_mode(): number {
    get_visibility_mode();
  }
  public set visibility_mode(value): void {
    set_visibility_mode(value);
  }
  static VisibilityMode = {
    VISIBILITY_ALWAYS = 0,
    VISIBILITY_TOUCHSCREEN_ONLY = 1,
  }
  public const pressed: string = "pressed";
  public const released: string = "released";
}