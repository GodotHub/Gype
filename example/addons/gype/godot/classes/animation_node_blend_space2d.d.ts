
import { AnimationRootNode } from "@godot/classes/animation_root_node";

export declare class AnimationNodeBlendSpace2D extends AnimationRootNode{
  public add_blend_point(_node: AnimationRootNode, _pos: Vector2, _at_index: number): void;
  public set_blend_point_position(_point: number, _pos: Vector2): void;
  public get_blend_point_position(_point: number): Vector2;
  public set_blend_point_node(_point: number, _node: AnimationRootNode): void;
  public get_blend_point_node(_point: number): AnimationRootNode;
  public remove_blend_point(_point: number): void;
  public get_blend_point_count(): number;
  public add_triangle(_x: number, _y: number, _z: number, _at_index: number): void;
  public get_triangle_point(_triangle: number, _point: number): number;
  public remove_triangle(_triangle: number): void;
  public get_triangle_count(): number;
  public set_min_space(_min_space: Vector2): void;
  public get_min_space(): Vector2;
  public set_max_space(_max_space: Vector2): void;
  public get_max_space(): Vector2;
  public set_snap(_snap: Vector2): void;
  public get_snap(): Vector2;
  public set_x_label(_text: String | StringName | string): void;
  public get_x_label(): String;
  public set_y_label(_text: String | StringName | string): void;
  public get_y_label(): String;
  public set_auto_triangles(_enable: boolean): void;
  public get_auto_triangles(): boolean;
  public set_blend_mode(_mode: number): void;
  public get_blend_mode(): number;
  public set_use_sync(_enable: boolean): void;
  public is_using_sync(): boolean;
  public get auto_triangles(): boolean {
    get_auto_triangles();
  }
  public set auto_triangles(value): void {
    set_auto_triangles(value);
  }
  public get triangles(): PackedInt32Array {
    _get_triangles();
  }
  public set triangles(value): void {
    _set_triangles(value);
  }
  public get min_space(): Vector2 {
    get_min_space();
  }
  public set min_space(value): void {
    set_min_space(value);
  }
  public get max_space(): Vector2 {
    get_max_space();
  }
  public set max_space(value): void {
    set_max_space(value);
  }
  public get snap(): Vector2 {
    get_snap();
  }
  public set snap(value): void {
    set_snap(value);
  }
  public get x_label(): String {
    get_x_label();
  }
  public set x_label(value): void {
    set_x_label(value);
  }
  public get y_label(): String {
    get_y_label();
  }
  public set y_label(value): void {
    set_y_label(value);
  }
  public get blend_mode(): number {
    get_blend_mode();
  }
  public set blend_mode(value): void {
    set_blend_mode(value);
  }
  public get sync(): boolean {
    is_using_sync();
  }
  public set sync(value): void {
    set_use_sync(value);
  }
  static BlendMode = {
    BLEND_MODE_INTERPOLATED = 0,
    BLEND_MODE_DISCRETE = 1,
    BLEND_MODE_DISCRETE_CARRY = 2,
  }
  public get triangles_updated(): Signal;
}