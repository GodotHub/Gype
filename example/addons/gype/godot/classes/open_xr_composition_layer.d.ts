
import { Node3D } from "@godot/classes/node3d";
import { SubViewport } from "@godot/classes/sub_viewport";
export declare class OpenXRCompositionLayer extends Node3D{
  public set_layer_viewport(_viewport: SubViewport): void;
  public get_layer_viewport(): SubViewport;
  public set_enable_hole_punch(_enable: boolean): void;
  public get_enable_hole_punch(): boolean;
  public set_sort_order(_order: number): void;
  public get_sort_order(): number;
  public set_alpha_blend(_enabled: boolean): void;
  public get_alpha_blend(): boolean;
  public is_natively_supported(): boolean;
  public intersects_ray(_origin: Vector3, _direction: Vector3): Vector2;
  public get layer_viewport(): GodotObject;
  public set layer_viewport(value): void;
  public get sort_order(): number;
  public set sort_order(value): void;
  public get alpha_blend(): boolean;
  public set alpha_blend(value): void;
  public get enable_hole_punch(): boolean;
  public set enable_hole_punch(value): void;
}