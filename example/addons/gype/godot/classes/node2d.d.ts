
import { CanvasItem } from "@godot/classes/canvas_item";
import { Node } from "@godot/classes/node";

export declare class Node2D extends CanvasItem{
  public set_position(_position: Vector2): void;
  public set_rotation(_radians: number): void;
  public set_rotation_degrees(_degrees: number): void;
  public set_skew(_radians: number): void;
  public set_scale(_scale: Vector2): void;
  public get_position(): Vector2;
  public get_rotation(): number;
  public get_rotation_degrees(): number;
  public get_skew(): number;
  public get_scale(): Vector2;
  public rotate(_radians: number): void;
  public move_local_x(_delta: number, _scaled: boolean): void;
  public move_local_y(_delta: number, _scaled: boolean): void;
  public translate(_offset: Vector2): void;
  public global_translate(_offset: Vector2): void;
  public apply_scale(_ratio: Vector2): void;
  public set_global_position(_position: Vector2): void;
  public get_global_position(): Vector2;
  public set_global_rotation(_radians: number): void;
  public set_global_rotation_degrees(_degrees: number): void;
  public get_global_rotation(): number;
  public get_global_rotation_degrees(): number;
  public set_global_skew(_radians: number): void;
  public get_global_skew(): number;
  public set_global_scale(_scale: Vector2): void;
  public get_global_scale(): Vector2;
  public set_transform(_xform: Transform2D): void;
  public set_global_transform(_xform: Transform2D): void;
  public look_at(_point: Vector2): void;
  public get_angle_to(_point: Vector2): number;
  public to_local(_global_point: Vector2): Vector2;
  public to_global(_local_point: Vector2): Vector2;
  public get_relative_transform_to_parent(_parent: Node): Transform2D;
  public get position(): Vector2 {
    get_position();
  }
  public set position(value): void {
    set_position(value);
  }
  public get rotation(): number {
    get_rotation();
  }
  public set rotation(value): void {
    set_rotation(value);
  }
  public get rotation_degrees(): number {
    get_rotation_degrees();
  }
  public set rotation_degrees(value): void {
    set_rotation_degrees(value);
  }
  public get scale(): Vector2 {
    get_scale();
  }
  public set scale(value): void {
    set_scale(value);
  }
  public get skew(): number {
    get_skew();
  }
  public set skew(value): void {
    set_skew(value);
  }
  public get transform(): Transform2D {
    get_transform();
  }
  public set transform(value): void {
    set_transform(value);
  }
  public get global_position(): Vector2 {
    get_global_position();
  }
  public set global_position(value): void {
    set_global_position(value);
  }
  public get global_rotation(): number {
    get_global_rotation();
  }
  public set global_rotation(value): void {
    set_global_rotation(value);
  }
  public get global_rotation_degrees(): number {
    get_global_rotation_degrees();
  }
  public set global_rotation_degrees(value): void {
    set_global_rotation_degrees(value);
  }
  public get global_scale(): Vector2 {
    get_global_scale();
  }
  public set global_scale(value): void {
    set_global_scale(value);
  }
  public get global_skew(): number {
    get_global_skew();
  }
  public set global_skew(value): void {
    set_global_skew(value);
  }
  public get global_transform(): Transform2D {
    get_global_transform();
  }
  public set global_transform(value): void {
    set_global_transform(value);
  }
}