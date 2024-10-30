
import { CollisionObject3D } from "@godot/classes/collision_object3d";
import { Node3D } from "@godot/classes/node3d";
import { Node } from "@godot/classes/node";

export declare class Area3D extends CollisionObject3D{
  public set_gravity_space_override_mode(_space_override_mode: number): void;
  public get_gravity_space_override_mode(): number;
  public set_gravity_is_point(_enable: boolean): void;
  public is_gravity_a_point(): boolean;
  public set_gravity_point_unit_distance(_distance_scale: number): void;
  public get_gravity_point_unit_distance(): number;
  public set_gravity_point_center(_center: Vector3): void;
  public get_gravity_point_center(): Vector3;
  public set_gravity_direction(_direction: Vector3): void;
  public get_gravity_direction(): Vector3;
  public set_gravity(_gravity: number): void;
  public get_gravity(): number;
  public set_linear_damp_space_override_mode(_space_override_mode: number): void;
  public get_linear_damp_space_override_mode(): number;
  public set_angular_damp_space_override_mode(_space_override_mode: number): void;
  public get_angular_damp_space_override_mode(): number;
  public set_angular_damp(_angular_damp: number): void;
  public get_angular_damp(): number;
  public set_linear_damp(_linear_damp: number): void;
  public get_linear_damp(): number;
  public set_priority(_priority: number): void;
  public get_priority(): number;
  public set_wind_force_magnitude(_wind_force_magnitude: number): void;
  public get_wind_force_magnitude(): number;
  public set_wind_attenuation_factor(_wind_attenuation_factor: number): void;
  public get_wind_attenuation_factor(): number;
  public set_wind_source_path(_wind_source_path: NodePath): void;
  public get_wind_source_path(): NodePath;
  public set_monitorable(_enable: boolean): void;
  public is_monitorable(): boolean;
  public set_monitoring(_enable: boolean): void;
  public is_monitoring(): boolean;
  public get_overlapping_bodies(): GDArray;
  public get_overlapping_areas(): GDArray;
  public has_overlapping_bodies(): boolean;
  public has_overlapping_areas(): boolean;
  public overlaps_body(_body: Node): boolean;
  public overlaps_area(_area: Node): boolean;
  public set_audio_bus_override(_enable: boolean): void;
  public is_overriding_audio_bus(): boolean;
  public set_audio_bus_name(_name: String | StringName | string): void;
  public get_audio_bus_name(): StringName;
  public set_use_reverb_bus(_enable: boolean): void;
  public is_using_reverb_bus(): boolean;
  public set_reverb_bus_name(_name: String | StringName | string): void;
  public get_reverb_bus_name(): StringName;
  public set_reverb_amount(_amount: number): void;
  public get_reverb_amount(): number;
  public set_reverb_uniformity(_amount: number): void;
  public get_reverb_uniformity(): number;
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
  public get gravity_point_center(): Vector3 {
    get_gravity_point_center();
  }
  public set gravity_point_center(value): void {
    set_gravity_point_center(value);
  }
  public get gravity_direction(): Vector3 {
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
  public get wind_force_magnitude(): number {
    get_wind_force_magnitude();
  }
  public set wind_force_magnitude(value): void {
    set_wind_force_magnitude(value);
  }
  public get wind_attenuation_factor(): number {
    get_wind_attenuation_factor();
  }
  public set wind_attenuation_factor(value): void {
    set_wind_attenuation_factor(value);
  }
  public get wind_source_path(): NodePath {
    get_wind_source_path();
  }
  public set wind_source_path(value): void {
    set_wind_source_path(value);
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
  public get reverb_bus_enabled(): boolean {
    is_using_reverb_bus();
  }
  public set reverb_bus_enabled(value): void {
    set_use_reverb_bus(value);
  }
  public get reverb_bus_name(): StringName {
    get_reverb_bus_name();
  }
  public set reverb_bus_name(value): void {
    set_reverb_bus_name(value);
  }
  public get reverb_bus_amount(): number {
    get_reverb_amount();
  }
  public set reverb_bus_amount(value): void {
    set_reverb_amount(value);
  }
  public get reverb_bus_uniformity(): number {
    get_reverb_uniformity();
  }
  public set reverb_bus_uniformity(value): void {
    set_reverb_uniformity(value);
  }
  static SpaceOverride = {
    SPACE_OVERRIDE_DISABLED = 0,
    SPACE_OVERRIDE_COMBINE = 1,
    SPACE_OVERRIDE_COMBINE_REPLACE = 2,
    SPACE_OVERRIDE_REPLACE = 3,
    SPACE_OVERRIDE_REPLACE_COMBINE = 4,
  }
  public const body_shape_entered: string = "body_shape_entered";
  public const body_shape_exited: string = "body_shape_exited";
  public const body_entered: string = "body_entered";
  public const body_exited: string = "body_exited";
  public const area_shape_entered: string = "area_shape_entered";
  public const area_shape_exited: string = "area_shape_exited";
  public const area_entered: string = "area_entered";
  public const area_exited: string = "area_exited";
}