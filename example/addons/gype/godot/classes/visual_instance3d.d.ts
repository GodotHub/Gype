
import { Node3D } from "@godot/classes/node3d";

export declare class VisualInstance3D extends Node3D{
  public _get_aabb(): AABB;
  public set_base(_base: RID): void;
  public get_base(): RID;
  public get_instance(): RID;
  public set_layer_mask(_mask: number): void;
  public get_layer_mask(): number;
  public set_layer_mask_value(_layer_number: number, _value: boolean): void;
  public get_layer_mask_value(_layer_number: number): boolean;
  public set_sorting_offset(_offset: number): void;
  public get_sorting_offset(): number;
  public set_sorting_use_aabb_center(_enabled: boolean): void;
  public is_sorting_use_aabb_center(): boolean;
  public get_aabb(): AABB;
  public get layers(): number {
    get_layer_mask();
  }
  public set layers(value): void {
    set_layer_mask(value);
  }
  public get sorting_offset(): number {
    get_sorting_offset();
  }
  public set sorting_offset(value): void {
    set_sorting_offset(value);
  }
  public get sorting_use_aabb_center(): boolean {
    is_sorting_use_aabb_center();
  }
  public set sorting_use_aabb_center(value): void {
    set_sorting_use_aabb_center(value);
  }
}