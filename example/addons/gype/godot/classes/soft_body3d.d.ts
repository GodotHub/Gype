
import { MeshInstance3D } from "@godot/classes/mesh_instance3d";
import { PhysicsBody3D } from "@godot/classes/physics_body3d";
import { Node } from "@godot/classes/node";
export declare class SoftBody3D extends MeshInstance3D{
  public get_physics_rid(): RID;
  public set_collision_mask(_collision_mask: number): void;
  public get_collision_mask(): number;
  public set_collision_layer(_collision_layer: number): void;
  public get_collision_layer(): number;
  public set_collision_mask_value(_layer_number: number, _value: boolean): void;
  public get_collision_mask_value(_layer_number: number): boolean;
  public set_collision_layer_value(_layer_number: number, _value: boolean): void;
  public get_collision_layer_value(_layer_number: number): boolean;
  public set_parent_collision_ignore(_parent_collision_ignore: GDString | NodePath | string): void;
  public get_parent_collision_ignore(): NodePath;
  public set_disable_mode(_mode: number): void;
  public get_disable_mode(): number;
  public get_collision_exceptions(): GDArray;
  public add_collision_exception_with(_body: Node): void;
  public remove_collision_exception_with(_body: Node): void;
  public set_simulation_precision(_simulation_precision: number): void;
  public get_simulation_precision(): number;
  public set_total_mass(_mass: number): void;
  public get_total_mass(): number;
  public set_linear_stiffness(_linear_stiffness: number): void;
  public get_linear_stiffness(): number;
  public set_pressure_coefficient(_pressure_coefficient: number): void;
  public get_pressure_coefficient(): number;
  public set_damping_coefficient(_damping_coefficient: number): void;
  public get_damping_coefficient(): number;
  public set_drag_coefficient(_drag_coefficient: number): void;
  public get_drag_coefficient(): number;
  public get_point_transform(_point_index: number): Vector3;
  public set_point_pinned(_point_index: number, _pinned: boolean, _attachment_path: GDString | NodePath | string = NodePath("")): void;
  public is_point_pinned(_point_index: number): boolean;
  public set_ray_pickable(_ray_pickable: boolean): void;
  public is_ray_pickable(): boolean;
  public get collision_layer(): number;
  public set collision_layer(value): void;
  public get collision_mask(): number;
  public set collision_mask(value): void;
  public get parent_collision_ignore(): NodePath;
  public set parent_collision_ignore(value): void;
  public get simulation_precision(): number;
  public set simulation_precision(value): void;
  public get total_mass(): number;
  public set total_mass(value): void;
  public get linear_stiffness(): number;
  public set linear_stiffness(value): void;
  public get pressure_coefficient(): number;
  public set pressure_coefficient(value): void;
  public get damping_coefficient(): number;
  public set damping_coefficient(value): void;
  public get drag_coefficient(): number;
  public set drag_coefficient(value): void;
  public get ray_pickable(): boolean;
  public set ray_pickable(value): void;
  public get disable_mode(): number;
  public set disable_mode(value): void;
  static DisableMode = {
    DISABLE_MODE_REMOVE = 0,
    DISABLE_MODE_KEEP_ACTIVE = 1,
  }
}