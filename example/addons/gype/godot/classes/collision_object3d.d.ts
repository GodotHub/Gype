
import { Camera3D } from "@godot/classes/camera3d";
import { Shape3D } from "@godot/classes/shape3d";
import { InputEvent } from "@godot/classes/input_event";
import { Object } from "@godot/classes/object";
import { Node3D } from "@godot/classes/node3d";

export declare class CollisionObject3D extends Node3D{
  public _input_event(_camera: Camera3D, _event: InputEvent, _event_position: Vector3, _normal: Vector3, _shape_idx: number): void;
  public _mouse_enter(): void;
  public _mouse_exit(): void;
  public set_collision_layer(_layer: number): void;
  public get_collision_layer(): number;
  public set_collision_mask(_mask: number): void;
  public get_collision_mask(): number;
  public set_collision_layer_value(_layer_number: number, _value: boolean): void;
  public get_collision_layer_value(_layer_number: number): boolean;
  public set_collision_mask_value(_layer_number: number, _value: boolean): void;
  public get_collision_mask_value(_layer_number: number): boolean;
  public set_collision_priority(_priority: number): void;
  public get_collision_priority(): number;
  public set_disable_mode(_mode: number): void;
  public get_disable_mode(): number;
  public set_ray_pickable(_ray_pickable: boolean): void;
  public is_ray_pickable(): boolean;
  public set_capture_input_on_drag(_enable: boolean): void;
  public get_capture_input_on_drag(): boolean;
  public get_rid(): RID;
  public create_shape_owner(_owner: Object): number;
  public remove_shape_owner(_owner_id: number): void;
  public get_shape_owners(): PackedInt32Array;
  public shape_owner_set_transform(_owner_id: number, _transform: Transform3D): void;
  public shape_owner_get_transform(_owner_id: number): Transform3D;
  public shape_owner_get_owner(_owner_id: number): Object;
  public shape_owner_set_disabled(_owner_id: number, _disabled: boolean): void;
  public is_shape_owner_disabled(_owner_id: number): boolean;
  public shape_owner_add_shape(_owner_id: number, _shape: Shape3D): void;
  public shape_owner_get_shape_count(_owner_id: number): number;
  public shape_owner_get_shape(_owner_id: number, _shape_id: number): Shape3D;
  public shape_owner_get_shape_index(_owner_id: number, _shape_id: number): number;
  public shape_owner_remove_shape(_owner_id: number, _shape_id: number): void;
  public shape_owner_clear_shapes(_owner_id: number): void;
  public shape_find_owner(_shape_index: number): number;
  public get disable_mode(): number {
    get_disable_mode();
  }
  public set disable_mode(value): void {
    set_disable_mode(value);
  }
  public get collision_layer(): number {
    get_collision_layer();
  }
  public set collision_layer(value): void {
    set_collision_layer(value);
  }
  public get collision_mask(): number {
    get_collision_mask();
  }
  public set collision_mask(value): void {
    set_collision_mask(value);
  }
  public get collision_priority(): number {
    get_collision_priority();
  }
  public set collision_priority(value): void {
    set_collision_priority(value);
  }
  public get input_ray_pickable(): boolean {
    is_ray_pickable();
  }
  public set input_ray_pickable(value): void {
    set_ray_pickable(value);
  }
  public get input_capture_on_drag(): boolean {
    get_capture_input_on_drag();
  }
  public set input_capture_on_drag(value): void {
    set_capture_input_on_drag(value);
  }
  static DisableMode = {
    DISABLE_MODE_REMOVE = 0,
    DISABLE_MODE_MAKE_STATIC = 1,
    DISABLE_MODE_KEEP_ACTIVE = 2,
  }
}