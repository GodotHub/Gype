
import { Occluder3D } from "@godot/classes/occluder3d";
import { VisualInstance3D } from "@godot/classes/visual_instance3d";
export declare class OccluderInstance3D extends VisualInstance3D{
  public set_bake_mask(_mask: number): void;
  public get_bake_mask(): number;
  public set_bake_mask_value(_layer_number: number, _value: boolean): void;
  public get_bake_mask_value(_layer_number: number): boolean;
  public set_bake_simplification_distance(_simplification_distance: number): void;
  public get_bake_simplification_distance(): number;
  public set_occluder(_occluder: Occluder3D): void;
  public get_occluder(): Occluder3D;
  public get occluder(): Occluder3D;
  public set occluder(value): void;
  public get bake_mask(): number;
  public set bake_mask(value): void;
  public get bake_simplification_distance(): number;
  public set bake_simplification_distance(value): void;
}