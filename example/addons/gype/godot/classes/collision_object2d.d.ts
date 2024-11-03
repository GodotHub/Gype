
import { Shape2D } from "@godot/classes/shape2d";
import { InputEvent } from "@godot/classes/input_event";
import { GodotObject } from "@godot/classes/godot_object";
import { Viewport } from "@godot/classes/viewport";
import { Node2D } from "@godot/classes/node2d";
export declare class CollisionObject2D extends Node2D{
  public _input_event(_viewport: Viewport, _event: InputEvent, _shape_idx: number): void;
  public _mouse_enter(): void;
  public _mouse_exit(): void;
  public _mouse_shape_enter(_shape_idx: number): void;
  public _mouse_shape_exit(_shape_idx: number): void;
  public get_rid(): RID;
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
  public set_pickable(_enabled: boolean): void;
  public is_pickable(): boolean;
  public create_shape_owner(_owner: GodotObject): number;
  public remove_shape_owner(_owner_id: number): void;
  public get_shape_owners(): PackedInt32Array;
  public shape_owner_set_transform(_owner_id: number, _transform: Transform2D): void;
  public shape_owner_get_transform(_owner_id: number): Transform2D;
  public shape_owner_get_owner(_owner_id: number): GodotObject;
  public shape_owner_set_disabled(_owner_id: number, _disabled: boolean): void;
  public is_shape_owner_disabled(_owner_id: number): boolean;
  public shape_owner_set_one_way_collision(_owner_id: number, _enable: boolean): void;
  public is_shape_owner_one_way_collision_enabled(_owner_id: number): boolean;
  public shape_owner_set_one_way_collision_margin(_owner_id: number, _margin: number): void;
  public get_shape_owner_one_way_collision_margin(_owner_id: number): number;
  public shape_owner_add_shape(_owner_id: number, _shape: Shape2D): void;
  public shape_owner_get_shape_count(_owner_id: number): number;
  public shape_owner_get_shape(_owner_id: number, _shape_id: number): Shape2D;
  public shape_owner_get_shape_index(_owner_id: number, _shape_id: number): number;
  public shape_owner_remove_shape(_owner_id: number, _shape_id: number): void;
  public shape_owner_clear_shapes(_owner_id: number): void;
  public shape_find_owner(_shape_index: number): number;
  public get disable_mode(): number;
  public set disable_mode(value): void;
  public get collision_layer(): number;
  public set collision_layer(value): void;
  public get collision_mask(): number;
  public set collision_mask(value): void;
  public get collision_priority(): number;
  public set collision_priority(value): void;
  public get input_pickable(): boolean;
  public set input_pickable(value): void;
  static DisableMode = {
    DISABLE_MODE_REMOVE = 0,
    DISABLE_MODE_MAKE_STATIC = 1,
    DISABLE_MODE_KEEP_ACTIVE = 2,
  }
  public get input_event(): Signal;
  public get mouse_entered(): Signal;
  public get mouse_exited(): Signal;
  public get mouse_shape_entered(): Signal;
  public get mouse_shape_exited(): Signal;
}