
import { CollisionObject3D } from "@godot/classes/collision_object3d";
import { Node3D } from "@godot/classes/node3d";
import { Resource } from "@godot/classes/resource";
import { GodotObject } from "@godot/classes/godot_object";
import { Shape3D } from "@godot/classes/shape3d";

export declare class ShapeCast3D extends Node3D{
  public resource_changed(_resource: Resource): void;
  public set_enabled(_enabled: boolean): void;
  public is_enabled(): boolean;
  public set_shape(_shape: Shape3D): void;
  public get_shape(): Shape3D;
  public set_target_position(_local_point: Vector3): void;
  public get_target_position(): Vector3;
  public set_margin(_margin: number): void;
  public get_margin(): number;
  public set_max_results(_max_results: number): void;
  public get_max_results(): number;
  public is_colliding(): boolean;
  public get_collision_count(): number;
  public force_shapecast_update(): void;
  public get_collider(_index: number): GodotObject;
  public get_collider_rid(_index: number): RID;
  public get_collider_shape(_index: number): number;
  public get_collision_point(_index: number): Vector3;
  public get_collision_normal(_index: number): Vector3;
  public get_closest_collision_safe_fraction(): number;
  public get_closest_collision_unsafe_fraction(): number;
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
  public set_debug_shape_custom_color(_debug_shape_custom_color: Color): void;
  public get_debug_shape_custom_color(): Color;
  public get enabled(): boolean {
    is_enabled();
  }
  public set enabled(value): void {
    set_enabled(value);
  }
  public get shape(): Shape3D {
    get_shape();
  }
  public set shape(value): void {
    set_shape(value);
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
  public get margin(): number {
    get_margin();
  }
  public set margin(value): void {
    set_margin(value);
  }
  public get max_results(): number {
    get_max_results();
  }
  public set max_results(value): void {
    set_max_results(value);
  }
  public get collision_mask(): number {
    get_collision_mask();
  }
  public set collision_mask(value): void {
    set_collision_mask(value);
  }
  public get collision_result(): GDArray {
    _get_collision_result();
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
}