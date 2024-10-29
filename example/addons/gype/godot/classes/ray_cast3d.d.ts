
import { CollisionObject3D } from "@godot/classes/collision_object3d";
import { Object } from "@godot/classes/object";
import { Node3D } from "@godot/classes/node3d";

export declare class RayCast3D extends Node3D{
  public set_enabled(_enabled: boolean): void;
  public is_enabled(): boolean;
  public set_target_position(_local_point: Vector3): void;
  public get_target_position(): Vector3;
  public is_colliding(): boolean;
  public force_raycast_update(): void;
  public get_collider(): Object;
  public get_collider_rid(): RID;
  public get_collider_shape(): number;
  public get_collision_point(): Vector3;
  public get_collision_normal(): Vector3;
  public get_collision_face_index(): number;
  public add_exception_rid(_rid: RID): void;
  public add_exception(_node: CollisionObject3D): void;
  public remove_exception_rid(_rid: RID): void;
  public remove_exception(_node: CollisionObject3D): void;
  public clear_exceptions(): void;
  public set_collision_mask(_mask: number): void;
  public get_collision_mask(): number;
  public set_collision_mask_value(_layer_number: number, _value: boolean): void;
  public get_collision_mask_value(_layer_number: number): boolean;
  public set_exclude_parent_body(_mask: boolean): void;
  public get_exclude_parent_body(): boolean;
  public set_collide_with_areas(_enable: boolean): void;
  public is_collide_with_areas_enabled(): boolean;
  public set_collide_with_bodies(_enable: boolean): void;
  public is_collide_with_bodies_enabled(): boolean;
  public set_hit_from_inside(_enable: boolean): void;
  public is_hit_from_inside_enabled(): boolean;
  public set_hit_back_faces(_enable: boolean): void;
  public is_hit_back_faces_enabled(): boolean;
  public set_debug_shape_custom_color(_debug_shape_custom_color: Color): void;
  public get_debug_shape_custom_color(): Color;
  public set_debug_shape_thickness(_debug_shape_thickness: number): void;
  public get_debug_shape_thickness(): number;
  public get enabled(): boolean {
    is_enabled();
  }
  public set enabled(value): void {
    set_enabled(value);
  }
  public get exclude_parent(): boolean {
    get_exclude_parent_body();
  }
  public set exclude_parent(value): void {
    set_exclude_parent_body(value);
  }
  public get target_position(): Vector3 {
    get_target_position();
  }
  public set target_position(value): void {
    set_target_position(value);
  }
  public get collision_mask(): number {
    get_collision_mask();
  }
  public set collision_mask(value): void {
    set_collision_mask(value);
  }
  public get hit_from_inside(): boolean {
    is_hit_from_inside_enabled();
  }
  public set hit_from_inside(value): void {
    set_hit_from_inside(value);
  }
  public get hit_back_faces(): boolean {
    is_hit_back_faces_enabled();
  }
  public set hit_back_faces(value): void {
    set_hit_back_faces(value);
  }
  public get collide_with_areas(): boolean {
    is_collide_with_areas_enabled();
  }
  public set collide_with_areas(value): void {
    set_collide_with_areas(value);
  }
  public get collide_with_bodies(): boolean {
    is_collide_with_bodies_enabled();
  }
  public set collide_with_bodies(value): void {
    set_collide_with_bodies(value);
  }
  public get debug_shape_custom_color(): Color {
    get_debug_shape_custom_color();
  }
  public set debug_shape_custom_color(value): void {
    set_debug_shape_custom_color(value);
  }
  public get debug_shape_thickness(): number {
    get_debug_shape_thickness();
  }
  public set debug_shape_thickness(value): void {
    set_debug_shape_thickness(value);
  }
}