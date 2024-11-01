
import { Node3D } from "@godot/classes/node3d";

export declare class VehicleWheel3D extends Node3D{
  public set_radius(_length: number): void;
  public get_radius(): number;
  public set_suspension_rest_length(_length: number): void;
  public get_suspension_rest_length(): number;
  public set_suspension_travel(_length: number): void;
  public get_suspension_travel(): number;
  public set_suspension_stiffness(_length: number): void;
  public get_suspension_stiffness(): number;
  public set_suspension_max_force(_length: number): void;
  public get_suspension_max_force(): number;
  public set_damping_compression(_length: number): void;
  public get_damping_compression(): number;
  public set_damping_relaxation(_length: number): void;
  public get_damping_relaxation(): number;
  public set_use_as_traction(_enable: boolean): void;
  public is_used_as_traction(): boolean;
  public set_use_as_steering(_enable: boolean): void;
  public is_used_as_steering(): boolean;
  public set_friction_slip(_length: number): void;
  public get_friction_slip(): number;
  public is_in_contact(): boolean;
  public get_contact_body(): Node3D;
  public set_roll_influence(_roll_influence: number): void;
  public get_roll_influence(): number;
  public get_skidinfo(): number;
  public get_rpm(): number;
  public set_engine_force(_engine_force: number): void;
  public get_engine_force(): number;
  public set_brake(_brake: number): void;
  public get_brake(): number;
  public set_steering(_steering: number): void;
  public get_steering(): number;
  public get engine_force(): number {
    get_engine_force();
  }
  public set engine_force(value): void {
    set_engine_force(value);
  }
  public get brake(): number {
    get_brake();
  }
  public set brake(value): void {
    set_brake(value);
  }
  public get steering(): number {
    get_steering();
  }
  public set steering(value): void {
    set_steering(value);
  }
  public get use_as_traction(): boolean {
    is_used_as_traction();
  }
  public set use_as_traction(value): void {
    set_use_as_traction(value);
  }
  public get use_as_steering(): boolean {
    is_used_as_steering();
  }
  public set use_as_steering(value): void {
    set_use_as_steering(value);
  }
  public get wheel_roll_influence(): number {
    get_roll_influence();
  }
  public set wheel_roll_influence(value): void {
    set_roll_influence(value);
  }
  public get wheel_radius(): number {
    get_radius();
  }
  public set wheel_radius(value): void {
    set_radius(value);
  }
  public get wheel_rest_length(): number {
    get_suspension_rest_length();
  }
  public set wheel_rest_length(value): void {
    set_suspension_rest_length(value);
  }
  public get wheel_friction_slip(): number {
    get_friction_slip();
  }
  public set wheel_friction_slip(value): void {
    set_friction_slip(value);
  }
  public get suspension_travel(): number {
    get_suspension_travel();
  }
  public set suspension_travel(value): void {
    set_suspension_travel(value);
  }
  public get suspension_stiffness(): number {
    get_suspension_stiffness();
  }
  public set suspension_stiffness(value): void {
    set_suspension_stiffness(value);
  }
  public get suspension_max_force(): number {
    get_suspension_max_force();
  }
  public set suspension_max_force(value): void {
    set_suspension_max_force(value);
  }
  public get damping_compression(): number {
    get_damping_compression();
  }
  public set damping_compression(value): void {
    set_damping_compression(value);
  }
  public get damping_relaxation(): number {
    get_damping_relaxation();
  }
  public set damping_relaxation(value): void {
    set_damping_relaxation(value);
  }
}