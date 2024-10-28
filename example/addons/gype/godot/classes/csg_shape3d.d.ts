
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
  public get operation(): number {
    get_operation();
  }
  public set operation(value: number): void {
    set_operation(value);
  }
  public get snap(): number {
    get_snap();
  }
  public set snap(value: number): void {
    set_snap(value);
  }
  public get calculate_tangents(): boolean {
    is_calculating_tangents();
  }
  public set calculate_tangents(value: boolean): void {
    set_calculate_tangents(value);
  }
  public get use_collision(): boolean {
    is_using_collision();
  }
  public set use_collision(value: boolean): void {
    set_use_collision(value);
  }
  public get collision_layer(): number {
    get_collision_layer();
  }
  public set collision_layer(value: number): void {
    set_collision_layer(value);
  }
  public get collision_mask(): number {
    get_collision_mask();
  }
  public set collision_mask(value: number): void {
    set_collision_mask(value);
  }
  public get collision_priority(): number {
    get_collision_priority();
  }
  public set collision_priority(value: number): void {
    set_collision_priority(value);
  }
  static Operation = {
    OPERATION_UNION = 0,
    OPERATION_INTERSECTION = 1,
    OPERATION_SUBTRACTION = 2,
  }
}