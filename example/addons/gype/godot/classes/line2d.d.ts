
import { Node2D } from "@godot/classes/node2d";
import { Texture2D } from "@godot/classes/texture2d";
import { Curve } from "@godot/classes/curve";
import { Gradient } from "@godot/classes/gradient";

export declare class Line2D extends Node2D{
  public set_points(_points: PackedVector2Array): void;
  public get_points(): PackedVector2Array;
  public set_point_position(_index: number, _position: Vector2): void;
  public get_point_position(_index: number): Vector2;
  public get_point_count(): number;
  public add_point(_position: Vector2, _index: number): void;
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
  public get points(): PackedVector2Array {
    get_points();
  }
  public set points(value: PackedVector2Array): void {
    set_points(value);
  }
  public get closed(): boolean {
    is_closed();
  }
  public set closed(value: boolean): void {
    set_closed(value);
  }
  public get width(): number {
    get_width();
  }
  public set width(value: number): void {
    set_width(value);
  }
  public get width_curve(): Curve {
    get_curve();
  }
  public set width_curve(value: Curve): void {
    set_curve(value);
  }
  public get default_color(): Color {
    get_default_color();
  }
  public set default_color(value: Color): void {
    set_default_color(value);
  }
  public get gradient(): Gradient {
    get_gradient();
  }
  public set gradient(value: Gradient): void {
    set_gradient(value);
  }
  public get texture(): Texture2D {
    get_texture();
  }
  public set texture(value: Texture2D): void {
    set_texture(value);
  }
  public get texture_mode(): number {
    get_texture_mode();
  }
  public set texture_mode(value: number): void {
    set_texture_mode(value);
  }
  public get joint_mode(): number {
    get_joint_mode();
  }
  public set joint_mode(value: number): void {
    set_joint_mode(value);
  }
  public get begin_cap_mode(): number {
    get_begin_cap_mode();
  }
  public set begin_cap_mode(value: number): void {
    set_begin_cap_mode(value);
  }
  public get end_cap_mode(): number {
    get_end_cap_mode();
  }
  public set end_cap_mode(value: number): void {
    set_end_cap_mode(value);
  }
  public get sharp_limit(): number {
    get_sharp_limit();
  }
  public set sharp_limit(value: number): void {
    set_sharp_limit(value);
  }
  public get round_precision(): number {
    get_round_precision();
  }
  public set round_precision(value: number): void {
    set_round_precision(value);
  }
  public get antialiased(): boolean {
    get_antialiased();
  }
  public set antialiased(value: boolean): void {
    set_antialiased(value);
  }
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