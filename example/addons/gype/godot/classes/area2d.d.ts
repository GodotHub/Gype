
import { Node } from "@godot/classes/node";
import { Node2D } from "@godot/classes/node2d";
import { CollisionObject2D } from "@godot/classes/collision_object2d";

export declare class Area2D extends CollisionObject2D{
  public set_gravity_space_override_mode(_space_override_mode: number): void;
  public get_gravity_space_override_mode(): number;
  public set_gravity_is_point(_enable: boolean): void;
  public is_gravity_a_point(): boolean;
  public set_gravity_point_unit_distance(_distance_scale: number): void;
  public get_gravity_point_unit_distance(): number;
  public set_gravity_point_center(_center: Vector2): void;
  public get_gravity_point_center(): Vector2;
  public set_gravity_direction(_direction: Vector2): void;
  public get_gravity_direction(): Vector2;
  public set_gravity(_gravity: number): void;
  public get_gravity(): number;
  public set_linear_damp_space_override_mode(_space_override_mode: number): void;
  public get_linear_damp_space_override_mode(): number;
  public set_angular_damp_space_override_mode(_space_override_mode: number): void;
  public get_angular_damp_space_override_mode(): number;
  public set_linear_damp(_linear_damp: number): void;
  public get_linear_damp(): number;
  public set_angular_damp(_angular_damp: number): void;
  public get_angular_damp(): number;
  public set_priority(_priority: number): void;
  public get_priority(): number;
  public set_monitoring(_enable: boolean): void;
  public is_monitoring(): boolean;
  public set_monitorable(_enable: boolean): void;
  public is_monitorable(): boolean;
  public get_overlapping_bodies(): GDArray;
  public get_overlapping_areas(): GDArray;
  public has_overlapping_bodies(): boolean;
  public has_overlapping_areas(): boolean;
  public overlaps_body(_body: Node): boolean;
  public overlaps_area(_area: Node): boolean;
  public set_audio_bus_name(_name: String | StringName | string): void;
  public get_audio_bus_name(): StringName;
  public set_audio_bus_override(_enable: boolean): void;
  public is_overriding_audio_bus(): boolean;
  public get monitoring(): boolean {
    is_monitoring();
  }
  public set monitoring(value): void {
    set_monitoring(value);
  }
  public get monitorable(): boolean {
    is_monitorable();
  }
  public set monitorable(value): void {
    set_monitorable(value);
  }
  public get priority(): number {
    get_priority();
  }
  public set priority(value): void {
    set_priority(value);
  }
  public get gravity_space_override(): number {
    get_gravity_space_override_mode();
  }
  public set gravity_space_override(value): void {
    set_gravity_space_override_mode(value);
  }
  public get gravity_point(): boolean {
    is_gravity_a_point();
  }
  public set gravity_point(value): void {
    set_gravity_is_point(value);
  }
  public get gravity_point_unit_distance(): number {
    get_gravity_point_unit_distance();
  }
  public set gravity_point_unit_distance(value): void {
    set_gravity_point_unit_distance(value);
  }
  public get gravity_point_center(): Vector2 {
    get_gravity_point_center();
  }
  public set gravity_point_center(value): void {
    set_gravity_point_center(value);
  }
  public get gravity_direction(): Vector2 {
    get_gravity_direction();
  }
  public set gravity_direction(value): void {
    set_gravity_direction(value);
  }
  public get gravity(): number {
    get_gravity();
  }
  public set gravity(value): void {
    set_gravity(value);
  }
  public get linear_damp_space_override(): number {
    get_linear_damp_space_override_mode();
  }
  public set linear_damp_space_override(value): void {
    set_linear_damp_space_override_mode(value);
  }
  public get linear_damp(): number {
    get_linear_damp();
  }
  public set linear_damp(value): void {
    set_linear_damp(value);
  }
  public get angular_damp_space_override(): number {
    get_angular_damp_space_override_mode();
  }
  public set angular_damp_space_override(value): void {
    set_angular_damp_space_override_mode(value);
  }
  public get angular_damp(): number {
    get_angular_damp();
  }
  public set angular_damp(value): void {
    set_angular_damp(value);
  }
  public get audio_bus_override(): boolean {
    is_overriding_audio_bus();
  }
  public set audio_bus_override(value): void {
    set_audio_bus_override(value);
  }
  public get audio_bus_name(): StringName {
    get_audio_bus_name();
  }
  public set audio_bus_name(value): void {
    set_audio_bus_name(value);
  }
  static SpaceOverride = {
    SPACE_OVERRIDE_DISABLED = 0,
    SPACE_OVERRIDE_COMBINE = 1,
    SPACE_OVERRIDE_COMBINE_REPLACE = 2,
    SPACE_OVERRIDE_REPLACE = 3,
    SPACE_OVERRIDE_REPLACE_COMBINE = 4,
  }
  public get body_shape_entered(): Signal;
  public get body_shape_exited(): Signal;
  public get body_entered(): Signal;
  public get body_exited(): Signal;
  public get area_shape_entered(): Signal;
  public get area_shape_exited(): Signal;
  public get area_entered(): Signal;
  public get area_exited(): Signal;
}