
import { Node3D } from "@godot/classes/node3d";

export declare class CollisionPolygon3D extends Node3D{
  public set_depth(_depth: number): void;
  public get_depth(): number;
  public set_polygon(_polygon: PackedVector2Array): void;
  public get_polygon(): PackedVector2Array;
  public set_disabled(_disabled: boolean): void;
  public is_disabled(): boolean;
  public set_margin(_margin: number): void;
  public get_margin(): number;
  public get depth(): number {
    get_depth();
  }
  public set depth(value: number): void {
    set_depth(value);
  }
  public get disabled(): boolean {
    is_disabled();
  }
  public set disabled(value: boolean): void {
    set_disabled(value);
  }
  public get polygon(): PackedVector2Array {
    get_polygon();
  }
  public set polygon(value: PackedVector2Array): void {
    set_polygon(value);
  }
  public get margin(): number {
    get_margin();
  }
  public set margin(value: number): void {
    set_margin(value);
  }
}