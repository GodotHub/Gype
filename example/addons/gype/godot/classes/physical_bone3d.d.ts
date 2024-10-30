
import { PhysicsBody3D } from "@godot/classes/physics_body3d";
import { PhysicsDirectBodyState3D } from "@godot/classes/physics_direct_body_state3d";

export declare class PhysicalBone3D extends PhysicsBody3D{
  public _integrate_forces(_state: PhysicsDirectBodyState3D): void;
  public apply_central_impulse(_impulse: Vector3): void;
  public apply_impulse(_impulse: Vector3, _position: Vector3): void;
  public set_joint_type(_joint_type: number): void;
  public get_joint_type(): number;
  public set_joint_offset(_offset: Transform3D): void;
  public get_joint_offset(): Transform3D;
  public set_joint_rotation(_euler: Vector3): void;
  public get_joint_rotation(): Vector3;
  public set_body_offset(_offset: Transform3D): void;
  public get_body_offset(): Transform3D;
  public get_simulate_physics(): boolean;
  public is_simulating_physics(): boolean;
  public get_bone_id(): number;
  public set_mass(_mass: number): void;
  public get_mass(): number;
  public set_friction(_friction: number): void;
  public get_friction(): number;
  public set_bounce(_bounce: number): void;
  public get_bounce(): number;
  public set_gravity_scale(_gravity_scale: number): void;
  public get_gravity_scale(): number;
  public set_linear_damp_mode(_linear_damp_mode: number): void;
  public get_linear_damp_mode(): number;
  public set_angular_damp_mode(_angular_damp_mode: number): void;
  public get_angular_damp_mode(): number;
  public set_linear_damp(_linear_damp: number): void;
  public get_linear_damp(): number;
  public set_angular_damp(_angular_damp: number): void;
  public get_angular_damp(): number;
  public set_linear_velocity(_linear_velocity: Vector3): void;
  public get_linear_velocity(): Vector3;
  public set_angular_velocity(_angular_velocity: Vector3): void;
  public get_angular_velocity(): Vector3;
  public set_use_custom_integrator(_enable: boolean): void;
  public is_using_custom_integrator(): boolean;
  public set_can_sleep(_able_to_sleep: boolean): void;
  public is_able_to_sleep(): boolean;
  public get joint_type(): number {
    get_joint_type();
  }
  public set joint_type(value): void {
    set_joint_type(value);
  }
  public get joint_offset(): Transform3D {
    get_joint_offset();
  }
  public set joint_offset(value): void {
    set_joint_offset(value);
  }
  public get joint_rotation(): Vector3 {
    get_joint_rotation();
  }
  public set joint_rotation(value): void {
    set_joint_rotation(value);
  }
  public get body_offset(): Transform3D {
    get_body_offset();
  }
  public set body_offset(value): void {
    set_body_offset(value);
  }
  public get mass(): number {
    get_mass();
  }
  public set mass(value): void {
    set_mass(value);
  }
  public get friction(): number {
    get_friction();
  }
  public set friction(value): void {
    set_friction(value);
  }
  public get bounce(): number {
    get_bounce();
  }
  public set bounce(value): void {
    set_bounce(value);
  }
  public get gravity_scale(): number {
    get_gravity_scale();
  }
  public set gravity_scale(value): void {
    set_gravity_scale(value);
  }
  public get custom_integrator(): boolean {
    is_using_custom_integrator();
  }
  public set custom_integrator(value): void {
    set_use_custom_integrator(value);
  }
  public get linear_damp_mode(): number {
    get_linear_damp_mode();
  }
  public set linear_damp_mode(value): void {
    set_linear_damp_mode(value);
  }
  public get linear_damp(): number {
    get_linear_damp();
  }
  public set linear_damp(value): void {
    set_linear_damp(value);
  }
  public get angular_damp_mode(): number {
    get_angular_damp_mode();
  }
  public set angular_damp_mode(value): void {
    set_angular_damp_mode(value);
  }
  public get angular_damp(): number {
    get_angular_damp();
  }
  public set angular_damp(value): void {
    set_angular_damp(value);
  }
  public get linear_velocity(): Vector3 {
    get_linear_velocity();
  }
  public set linear_velocity(value): void {
    set_linear_velocity(value);
  }
  public get angular_velocity(): Vector3 {
    get_angular_velocity();
  }
  public set angular_velocity(value): void {
    set_angular_velocity(value);
  }
  public get can_sleep(): boolean {
    is_able_to_sleep();
  }
  public set can_sleep(value): void {
    set_can_sleep(value);
  }
  static DampMode = {
    DAMP_MODE_COMBINE = 0,
    DAMP_MODE_REPLACE = 1,
  }
  static JointType = {
    JOINT_TYPE_NONE = 0,
    JOINT_TYPE_PIN = 1,
    JOINT_TYPE_CONE = 2,
    JOINT_TYPE_HINGE = 3,
    JOINT_TYPE_SLIDER = 4,
    JOINT_TYPE_6DOF = 5,
  }
}