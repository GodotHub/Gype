
import { Node2D } from "@godot/classes/node2d";
import { Curve } from "@godot/classes/curve";
import { Texture2D } from "@godot/classes/texture2d";
import { Gradient } from "@godot/classes/gradient";
export declare class Line2D extends Node2D{
  public set_points(_points: PackedVector2Array): void;
  public get_points(): PackedVector2Array;
  public set_point_position(_index: number, _position: Vector2): void;
  public get_point_position(_index: number): Vector2;
  public get_point_count(): number;
  public add_point(_position: Vector2, _index: number = -1): void;
  public remove_point(_index: number): void;
  public clear_points(): void;
  public set_closed(_closed: boolean): void;
  public is_closed(): boolean;
  public set_width(_width: number): void;
  public get_width(): number;
  public set_curve(_curve: Curve): void;
  public get_curve(): Curve;
  public set_default_color(_color: Color): void;
  public get_default_color(): Color;
  public set_gradient(_color: Gradient): void;
  public get_gradient(): Gradient;
  public set_texture(_texture: Texture2D): void;
  public get_texture(): Texture2D;
  public set_texture_mode(_mode: number): void;
  public get_texture_mode(): number;
  public set_joint_mode(_mode: number): void;
  public get_joint_mode(): number;
  public set_begin_cap_mode(_mode: number): void;
  public get_begin_cap_mode(): number;
  public set_end_cap_mode(_mode: number): void;
  public get_end_cap_mode(): number;
  public set_sharp_limit(_limit: number): void;
  public get_sharp_limit(): number;
  public set_round_precision(_precision: number): void;
  public get_round_precision(): number;
  public set_antialiased(_antialiased: boolean): void;
  public get_antialiased(): boolean;
  public get points(): PackedVector2Array;
  public set points(value): void;
  public get closed(): boolean;
  public set closed(value): void;
  public get width(): number;
  public set width(value): void;
  public get width_curve(): Curve;
  public set width_curve(value): void;
  public get default_color(): Color;
  public set default_color(value): void;
  public get gradient(): Gradient;
  public set gradient(value): void;
  public get texture(): Texture2D;
  public set texture(value): void;
  public get texture_mode(): number;
  public set texture_mode(value): void;
  public get joint_mode(): number;
  public set joint_mode(value): void;
  public get begin_cap_mode(): number;
  public set begin_cap_mode(value): void;
  public get end_cap_mode(): number;
  public set end_cap_mode(value): void;
  public get sharp_limit(): number;
  public set sharp_limit(value): void;
  public get round_precision(): number;
  public set round_precision(value): void;
  public get antialiased(): boolean;
  public set antialiased(value): void;
  static LineJointMode = {
    LINE_JOINT_SHARP = 0,
    LINE_JOINT_BEVEL = 1,
    LINE_JOINT_ROUND = 2,
  }
  static LineCapMode = {
    LINE_CAP_NONE = 0,
    LINE_CAP_BOX = 1,
    LINE_CAP_ROUND = 2,
  }
  static LineTextureMode = {
    LINE_TEXTURE_NONE = 0,
    LINE_TEXTURE_TILE = 1,
    LINE_TEXTURE_STRETCH = 2,
  }
}