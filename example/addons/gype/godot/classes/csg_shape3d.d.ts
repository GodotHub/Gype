
import { GeometryInstance3D } from "@godot/classes/geometry_instance3d";
export declare class CSGShape3D extends GeometryInstance3D{
  public is_root_shape(): boolean;
  public set_operation(_operation: number): void;
  public get_operation(): number;
  public set_snap(_snap: number): void;
  public get_snap(): number;
  public set_use_collision(_operation: boolean): void;
  public is_using_collision(): boolean;
  public set_collision_layer(_layer: number): void;
  public get_collision_layer(): number;
  public set_collision_mask(_mask: number): void;
  public get_collision_mask(): number;
  public set_collision_mask_value(_layer_number: number, _value: boolean): void;
  public get_collision_mask_value(_layer_number: number): boolean;
  public set_collision_layer_value(_layer_number: number, _value: boolean): void;
  public get_collision_layer_value(_layer_number: number): boolean;
  public set_collision_priority(_priority: number): void;
  public get_collision_priority(): number;
  public set_calculate_tangents(_enabled: boolean): void;
  public is_calculating_tangents(): boolean;
  public get_meshes(): GDArray;
  public get operation(): number;
  public set operation(value): void;
  public get snap(): number;
  public set snap(value): void;
  public get calculate_tangents(): boolean;
  public set calculate_tangents(value): void;
  public get use_collision(): boolean;
  public set use_collision(value): void;
  public get collision_layer(): number;
  public set collision_layer(value): void;
  public get collision_mask(): number;
  public set collision_mask(value): void;
  public get collision_priority(): number;
  public set collision_priority(value): void;
  static Operation = {
    OPERATION_UNION = 0,
    OPERATION_INTERSECTION = 1,
    OPERATION_SUBTRACTION = 2,
  }
}