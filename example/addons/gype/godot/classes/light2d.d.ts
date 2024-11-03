
import { Node2D } from "@godot/classes/node2d";
export declare class Light2D extends Node2D{
  public set_enabled(_enabled: boolean): void;
  public is_enabled(): boolean;
  public set_editor_only(_editor_only: boolean): void;
  public is_editor_only(): boolean;
  public set_color(_color: Color): void;
  public get_color(): Color;
  public set_energy(_energy: number): void;
  public get_energy(): number;
  public set_z_range_min(_z: number): void;
  public get_z_range_min(): number;
  public set_z_range_max(_z: number): void;
  public get_z_range_max(): number;
  public set_layer_range_min(_layer: number): void;
  public get_layer_range_min(): number;
  public set_layer_range_max(_layer: number): void;
  public get_layer_range_max(): number;
  public set_item_cull_mask(_item_cull_mask: number): void;
  public get_item_cull_mask(): number;
  public set_item_shadow_cull_mask(_item_shadow_cull_mask: number): void;
  public get_item_shadow_cull_mask(): number;
  public set_shadow_enabled(_enabled: boolean): void;
  public is_shadow_enabled(): boolean;
  public set_shadow_smooth(_smooth: number): void;
  public get_shadow_smooth(): number;
  public set_shadow_filter(_filter: number): void;
  public get_shadow_filter(): number;
  public set_shadow_color(_shadow_color: Color): void;
  public get_shadow_color(): Color;
  public set_blend_mode(_mode: number): void;
  public get_blend_mode(): number;
  public set_height(_height: number): void;
  public get_height(): number;
  public get enabled(): boolean;
  public set enabled(value): void;
  public get editor_only(): boolean;
  public set editor_only(value): void;
  public get color(): Color;
  public set color(value): void;
  public get energy(): number;
  public set energy(value): void;
  public get blend_mode(): number;
  public set blend_mode(value): void;
  public get range_z_min(): number;
  public set range_z_min(value): void;
  public get range_z_max(): number;
  public set range_z_max(value): void;
  public get range_layer_min(): number;
  public set range_layer_min(value): void;
  public get range_layer_max(): number;
  public set range_layer_max(value): void;
  public get range_item_cull_mask(): number;
  public set range_item_cull_mask(value): void;
  public get shadow_enabled(): boolean;
  public set shadow_enabled(value): void;
  public get shadow_color(): Color;
  public set shadow_color(value): void;
  public get shadow_filter(): number;
  public set shadow_filter(value): void;
  public get shadow_filter_smooth(): number;
  public set shadow_filter_smooth(value): void;
  public get shadow_item_cull_mask(): number;
  public set shadow_item_cull_mask(value): void;
  static ShadowFilter = {
    SHADOW_FILTER_NONE = 0,
    SHADOW_FILTER_PCF5 = 1,
    SHADOW_FILTER_PCF13 = 2,
  }
  static BlendMode = {
    BLEND_MODE_ADD = 0,
    BLEND_MODE_SUB = 1,
    BLEND_MODE_MIX = 2,
  }
}