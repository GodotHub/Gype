
import { PhysicsDirectSpaceState3D } from "@godot/classes/physics_direct_space_state3d";
import { Object } from "@godot/classes/object";

export declare class PhysicsDirectBodyState3D extends Object{
  public get_total_gravity(): Vector3;
  public get_total_linear_damp(): number;
  public get_total_angular_damp(): number;
  public get_center_of_mass(): Vector3;
  public get_center_of_mass_local(): Vector3;
  public get_principal_inertia_axes(): Basis;
  public get_inverse_mass(): number;
  public get_inverse_inertia(): Vector3;
  public get_inverse_inertia_tensor(): Basis;
  public set_linear_velocity(_velocity: Vector3): void;
  public get_linear_velocity(): Vector3;
  public set_angular_velocity(_velocity: Vector3): void;
  public get_angular_velocity(): Vector3;
  public set_transform(_transform: Transform3D): void;
  public get_transform(): Transform3D;
  public get_velocity_at_local_position(_local_position: Vector3): Vector3;
  public apply_central_impulse(_impulse: Vector3): void;
  public apply_impulse(_impulse: Vector3, _position: Vector3): void;
  public apply_torque_impulse(_impulse: Vector3): void;
  public apply_central_force(_force: Vector3): void;
  public apply_force(_force: Vector3, _position: Vector3): void;
  public apply_torque(_torque: Vector3): void;
  public add_constant_central_force(_force: Vector3): void;
  public add_constant_force(_force: Vector3, _position: Vector3): void;
  public add_constant_torque(_torque: Vector3): void;
  public set_constant_force(_force: Vector3): void;
  public get_constant_force(): Vector3;
  public set_constant_torque(_torque: Vector3): void;
  public get_constant_torque(): Vector3;
  public set_sleep_state(_enabled: boolean): void;
  public is_sleeping(): boolean;
  public get_contact_count(): number;
  public get_contact_local_position(_contact_idx: number): Vector3;
  public get_contact_local_normal(_contact_idx: number): Vector3;
  public get_contact_impulse(_contact_idx: number): Vector3;
  public get_contact_local_shape(_contact_idx: number): number;
  public get_contact_local_velocity_at_position(_contact_idx: number): Vector3;
  public get_contact_collider(_contact_idx: number): RID;
  public get_contact_collider_position(_contact_idx: number): Vector3;
  public get_contact_collider_id(_contact_idx: number): number;
  public get_contact_collider_object(_contact_idx: number): Object;
  public get_contact_collider_shape(_contact_idx: number): number;
  public get_contact_collider_velocity_at_position(_contact_idx: number): Vector3;
  public get_step(): number;
  public integrate_forces(): void;
  public get_space_state(): PhysicsDirectSpaceState3D;
  public get step(): number {
    get_step();
  }
  public get inverse_mass(): number {
    get_inverse_mass();
  }
  public get total_angular_damp(): number {
    get_total_angular_damp();
  }
  public get total_linear_damp(): number {
    get_total_linear_damp();
  }
  public get inverse_inertia(): Vector3 {
    get_inverse_inertia();
  }
  public get inverse_inertia_tensor(): Basis {
    get_inverse_inertia_tensor();
  }
  public get total_gravity(): Vector3 {
    get_total_gravity();
  }
  public get center_of_mass(): Vector3 {
    get_center_of_mass();
  }
  public get center_of_mass_local(): Vector3 {
    get_center_of_mass_local();
  }
  public get principal_inertia_axes(): Basis {
    get_principal_inertia_axes();
  }
  public get angular_velocity(): Vector3 {
    get_angular_velocity();
  }
  public set angular_velocity(value: Vector3): void {
    set_angular_velocity(value);
  }
  public get linear_velocity(): Vector3 {
    get_linear_velocity();
  }
  public set linear_velocity(value: Vector3): void {
    set_linear_velocity(value);
  }
  public get sleeping(): boolean {
    is_sleeping();
  }
  public set sleeping(value: boolean): void {
    set_sleep_state(value);
  }
  public get transform(): Transform3D {
    get_transform();
  }
  public set transform(value: Transform3D): void {
    set_transform(value);
  }
}