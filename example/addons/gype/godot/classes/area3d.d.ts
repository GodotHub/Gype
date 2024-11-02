
import { Node } from "@godot/classes/node";
import { Node3D } from "@godot/classes/node3d";
import { CollisionObject3D } from "@godot/classes/collision_object3d";


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
  public set_wind_source_path(_wind_source_path: GDString | NodePath | string): void;
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
  public set_audio_bus_name(_name: GDString | StringName | string): void;
  public get_audio_bus_name(): StringName;
  public set_use_reverb_bus(_enable: boolean): void;
  public is_using_reverb_bus(): boolean;
  public set_reverb_bus_name(_name: GDString | StringName | string): void;
  public get_reverb_bus_name(): StringName;
  public set_reverb_amount(_amount: number): void;
  public get_reverb_amount(): number;
  public set_reverb_uniformity(_amount: number): void;
  public get_reverb_uniformity(): number;
  public get monitoring(): boolean;
  public set monitoring(value): void;
  public get monitorable(): boolean;
  public set monitorable(value): void;
  public get priority(): number;
  public set priority(value): void;
  public get gravity_space_override(): number;
  public set gravity_space_override(value): void;
  public get gravity_point(): boolean;
  public set gravity_point(value): void;
  public get gravity_point_unit_distance(): number;
  public set gravity_point_unit_distance(value): void;
  public get gravity_point_center(): Vector3;
  public set gravity_point_center(value): void;
  public get gravity_direction(): Vector3;
  public set gravity_direction(value): void;
  public get gravity(): number;
  public set gravity(value): void;
  public get linear_damp_space_override(): number;
  public set linear_damp_space_override(value): void;
  public get linear_damp(): number;
  public set linear_damp(value): void;
  public get angular_damp_space_override(): number;
  public set angular_damp_space_override(value): void;
  public get angular_damp(): number;
  public set angular_damp(value): void;
  public get wind_force_magnitude(): number;
  public set wind_force_magnitude(value): void;
  public get wind_attenuation_factor(): number;
  public set wind_attenuation_factor(value): void;
  public get wind_source_path(): NodePath;
  public set wind_source_path(value): void;
  public get audio_bus_override(): boolean;
  public set audio_bus_override(value): void;
  public get audio_bus_name(): StringName;
  public set audio_bus_name(value): void;
  public get reverb_bus_enabled(): boolean;
  public set reverb_bus_enabled(value): void;
  public get reverb_bus_name(): StringName;
  public set reverb_bus_name(value): void;
  public get reverb_bus_amount(): number;
  public set reverb_bus_amount(value): void;
  public get reverb_bus_uniformity(): number;
  public set reverb_bus_uniformity(value): void;
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