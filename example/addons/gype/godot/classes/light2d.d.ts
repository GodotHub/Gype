
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
  public get enabled(): boolean {
    is_enabled();
  }
  public set enabled(value): void {
    set_enabled(value);
  }
  public get editor_only(): boolean {
    is_editor_only();
  }
  public set editor_only(value): void {
    set_editor_only(value);
  }
  public get color(): Color {
    get_color();
  }
  public set color(value): void {
    set_color(value);
  }
  public get energy(): number {
    get_energy();
  }
  public set energy(value): void {
    set_energy(value);
  }
  public get blend_mode(): number {
    get_blend_mode();
  }
  public set blend_mode(value): void {
    set_blend_mode(value);
  }
  public get range_z_min(): number {
    get_z_range_min();
  }
  public set range_z_min(value): void {
    set_z_range_min(value);
  }
  public get range_z_max(): number {
    get_z_range_max();
  }
  public set range_z_max(value): void {
    set_z_range_max(value);
  }
  public get range_layer_min(): number {
    get_layer_range_min();
  }
  public set range_layer_min(value): void {
    set_layer_range_min(value);
  }
  public get range_layer_max(): number {
    get_layer_range_max();
  }
  public set range_layer_max(value): void {
    set_layer_range_max(value);
  }
  public get range_item_cull_mask(): number {
    get_item_cull_mask();
  }
  public set range_item_cull_mask(value): void {
    set_item_cull_mask(value);
  }
  public get shadow_enabled(): boolean {
    is_shadow_enabled();
  }
  public set shadow_enabled(value): void {
    set_shadow_enabled(value);
  }
  public get shadow_color(): Color {
    get_shadow_color();
  }
  public set shadow_color(value): void {
    set_shadow_color(value);
  }
  public get shadow_filter(): number {
    get_shadow_filter();
  }
  public set shadow_filter(value): void {
    set_shadow_filter(value);
  }
  public get shadow_filter_smooth(): number {
    get_shadow_smooth();
  }
  public set shadow_filter_smooth(value): void {
    set_shadow_smooth(value);
  }
  public get shadow_item_cull_mask(): number {
    get_item_shadow_cull_mask();
  }
  public set shadow_item_cull_mask(value): void {
    set_item_shadow_cull_mask(value);
  }
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