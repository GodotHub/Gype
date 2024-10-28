
import { Node2D } from "@godot/classes/node2d";
import { Texture2D } from "@godot/classes/texture2d";

export declare class Polygon2D extends Node2D{
  public set_polygon(_polygon: PackedVector2Array): void;
  public get_polygon(): PackedVector2Array;
  public set_uv(_uv: PackedVector2Array): void;
  public get_uv(): PackedVector2Array;
  public set_color(_color: Color): void;
  public get_color(): Color;
  public set_polygons(_polygons: GDArray): void;
  public get_polygons(): GDArray;
  public set_vertex_colors(_vertex_colors: PackedColorArray): void;
  public get_vertex_colors(): PackedColorArray;
  public set_texture(_texture: Texture2D): void;
  public get_texture(): Texture2D;
  public set_texture_offset(_texture_offset: Vector2): void;
  public get_texture_offset(): Vector2;
  public set_texture_rotation(_texture_rotation: number): void;
  public get_texture_rotation(): number;
  public set_texture_scale(_texture_scale: Vector2): void;
  public get_texture_scale(): Vector2;
  public set_invert_enabled(_invert: boolean): void;
  public get_invert_enabled(): boolean;
  public set_antialiased(_antialiased: boolean): void;
  public get_antialiased(): boolean;
  public set_invert_border(_invert_border: number): void;
  public get_invert_border(): number;
  public set_offset(_offset: Vector2): void;
  public get_offset(): Vector2;
  public add_bone(_path: NodePath, _weights: PackedFloat32Array): void;
  public get_bone_count(): number;
  public get_bone_path(_index: number): NodePath;
  public get_bone_weights(_index: number): PackedFloat32Array;
  public erase_bone(_index: number): void;
  public clear_bones(): void;
  public set_bone_path(_index: number, _path: NodePath): void;
  public set_bone_weights(_index: number, _weights: PackedFloat32Array): void;
  public set_skeleton(_skeleton: NodePath): void;
  public get_skeleton(): NodePath;
  public set_internal_vertex_count(_internal_vertex_count: number): void;
  public get_internal_vertex_count(): number;
  public get color(): Color {
    get_color();
  }
  public set color(value: Color): void {
    set_color(value);
  }
  public get offset(): Vector2 {
    get_offset();
  }
  public set offset(value: Vector2): void {
    set_offset(value);
  }
  public get antialiased(): boolean {
    get_antialiased();
  }
  public set antialiased(value: boolean): void {
    set_antialiased(value);
  }
  public get texture(): Texture2D {
    get_texture();
  }
  public set texture(value: Texture2D): void {
    set_texture(value);
  }
  public get texture_offset(): Vector2 {
    get_texture_offset();
  }
  public set texture_offset(value: Vector2): void {
    set_texture_offset(value);
  }
  public get texture_scale(): Vector2 {
    get_texture_scale();
  }
  public set texture_scale(value: Vector2): void {
    set_texture_scale(value);
  }
  public get texture_rotation(): number {
    get_texture_rotation();
  }
  public set texture_rotation(value: number): void {
    set_texture_rotation(value);
  }
  public get skeleton(): NodePath {
    get_skeleton();
  }
  public set skeleton(value: NodePath): void {
    set_skeleton(value);
  }
  public get invert_enabled(): boolean {
    get_invert_enabled();
  }
  public set invert_enabled(value: boolean): void {
    set_invert_enabled(value);
  }
  public get invert_border(): number {
    get_invert_border();
  }
  public set invert_border(value: number): void {
    set_invert_border(value);
  }
  public get polygon(): PackedVector2Array {
    get_polygon();
  }
  public set polygon(value: PackedVector2Array): void {
    set_polygon(value);
  }
  public get uv(): PackedVector2Array {
    get_uv();
  }
  public set uv(value: PackedVector2Array): void {
    set_uv(value);
  }
  public get vertex_colors(): PackedColorArray {
    get_vertex_colors();
  }
  public set vertex_colors(value: PackedColorArray): void {
    set_vertex_colors(value);
  }
  public get polygons(): Array {
    get_polygons();
  }
  public set polygons(value: Array): void {
    set_polygons(value);
  }
  public get bones(): Array {
    _get_bones();
  }
  public set bones(value: Array): void {
    _set_bones(value);
  }
  public get internal_vertex_count(): number {
    get_internal_vertex_count();
  }
  public set internal_vertex_count(value: number): void {
    set_internal_vertex_count(value);
  }
}