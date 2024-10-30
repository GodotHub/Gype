
import { GodotObject } from "@godot/classes/godot_object";
import { PhysicsDirectSpaceState2D } from "@godot/classes/physics_direct_space_state2d";

export declare class PhysicsDirectBodyState2D extends GodotObject{
  public get_total_gravity(): Vector2;
  public get_total_linear_damp(): number;
  public get_total_angular_damp(): number;
  public get_center_of_mass(): Vector2;
  public get_center_of_mass_local(): Vector2;
  public get_inverse_mass(): number;
  public get_inverse_inertia(): number;
  public set_linear_velocity(_velocity: Vector2): void;
  public get_linear_velocity(): Vector2;
  public set_angular_velocity(_velocity: number): void;
  public get_angular_velocity(): number;
  public set_transform(_transform: Transform2D): void;
  public get_transform(): Transform2D;
  public get_velocity_at_local_position(_local_position: Vector2): Vector2;
  public apply_central_impulse(_impulse: Vector2): void;
  public apply_torque_impulse(_impulse: number): void;
  public apply_impulse(_impulse: Vector2, _position: Vector2): void;
  public apply_central_force(_force: Vector2): void;
  public apply_force(_force: Vector2, _position: Vector2): void;
  public apply_torque(_torque: number): void;
  public add_constant_central_force(_force: Vector2): void;
  public add_constant_force(_force: Vector2, _position: Vector2): void;
  public add_constant_torque(_torque: number): void;
  public set_constant_force(_force: Vector2): void;
  public get_constant_force(): Vector2;
  public set_constant_torque(_torque: number): void;
  public get_constant_torque(): number;
  public set_sleep_state(_enabled: boolean): void;
  public is_sleeping(): boolean;
  public get_contact_count(): number;
  public get_contact_local_position(_contact_idx: number): Vector2;
  public get_contact_local_normal(_contact_idx: number): Vector2;
  public get_contact_local_shape(_contact_idx: number): number;
  public get_contact_local_velocity_at_position(_contact_idx: number): Vector2;
  public get_contact_collider(_contact_idx: number): RID;
  public get_contact_collider_position(_contact_idx: number): Vector2;
  public get_contact_collider_id(_contact_idx: number): number;
  public get_contact_collider_object(_contact_idx: number): Object;
  public get_contact_collider_shape(_contact_idx: number): number;
  public get_contact_collider_velocity_at_position(_contact_idx: number): Vector2;
  public get_contact_impulse(_contact_idx: number): Vector2;
  public get_step(): number;
  public integrate_forces(): void;
  public get_space_state(): PhysicsDirectSpaceState2D;
  public get step(): number {
    get_step();
  }
  public get inverse_mass(): number {
    get_inverse_mass();
  }
  public get inverse_inertia(): number {
    get_inverse_inertia();
  }
  public get total_angular_damp(): number {
    get_total_angular_damp();
  }
  public get total_linear_damp(): number {
    get_total_linear_damp();
  }
  public get total_gravity(): Vector2 {
    get_total_gravity();
  }
  public get center_of_mass(): Vector2 {
    get_center_of_mass();
  }
  public get center_of_mass_local(): Vector2 {
    get_center_of_mass_local();
  }
  public get angular_velocity(): number {
    get_angular_velocity();
  }
  public set angular_velocity(value): void {
    set_angular_velocity(value);
  }
  public get linear_velocity(): Vector2 {
    get_linear_velocity();
  }
  public set linear_velocity(value): void {
    set_linear_velocity(value);
  }
  public get sleeping(): boolean {
    is_sleeping();
  }
  public set sleeping(value): void {
    set_sleep_state(value);
  }
  public get transform(): Transform2D {
    get_transform();
  }
  public set transform(value): void {
    set_transform(value);
  }
}