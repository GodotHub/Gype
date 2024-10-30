
import { InputEvent } from "@godot/classes/input_event";
import { Shape2D } from "@godot/classes/shape2d";
import { Node2D } from "@godot/classes/node2d";
import { GodotObject } from "@godot/classes/godot_object";
import { Viewport } from "@godot/classes/viewport";

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
  public create_shape_owner(_owner: Object): number;
  public remove_shape_owner(_owner_id: number): void;
  public get_shape_owners(): PackedInt32Array;
  public shape_owner_set_transform(_owner_id: number, _transform: Transform2D): void;
  public shape_owner_get_transform(_owner_id: number): Transform2D;
  public shape_owner_get_owner(_owner_id: number): Object;
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
  public get input_pickable(): boolean {
    is_pickable();
  }
  public set input_pickable(value): void {
    set_pickable(value);
  }
  static DisableMode = {
    DISABLE_MODE_REMOVE = 0,
    DISABLE_MODE_MAKE_STATIC = 1,
    DISABLE_MODE_KEEP_ACTIVE = 2,
  }
  public const input_event: string = "input_event";
  public const mouse_entered: string = "mouse_entered";
  public const mouse_exited: string = "mouse_exited";
  public const mouse_shape_entered: string = "mouse_shape_entered";
  public const mouse_shape_exited: string = "mouse_shape_exited";
}