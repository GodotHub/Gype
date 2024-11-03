
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
  public get depth(): number;
  public set depth(value): void;
  public get disabled(): boolean;
  public set disabled(value): void;
  public get polygon(): PackedVector2Array;
  public set polygon(value): void;
  public get margin(): number;
  public set margin(value): void;
}