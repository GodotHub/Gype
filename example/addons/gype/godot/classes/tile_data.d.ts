
import { NavigationPolygon } from "@godot/classes/navigation_polygon";
import { Material } from "@godot/classes/material";
import { Object } from "@godot/classes/object";
import { OccluderPolygon2D } from "@godot/classes/occluder_polygon2d";

export declare class TileData extends Object{
  public set_flip_h(_flip_h: boolean): void;
  public get_flip_h(): boolean;
  public set_flip_v(_flip_v: boolean): void;
  public get_flip_v(): boolean;
  public set_transpose(_transpose: boolean): void;
  public get_transpose(): boolean;
  public set_material(_material: Material): void;
  public get_material(): Material;
  public set_texture_origin(_texture_origin: Vector2i): void;
  public get_texture_origin(): Vector2i;
  public set_modulate(_modulate: Color): void;
  public get_modulate(): Color;
  public set_z_index(_z_index: number): void;
  public get_z_index(): number;
  public set_y_sort_origin(_y_sort_origin: number): void;
  public get_y_sort_origin(): number;
  public set_occluder(_layer_id: number, _occluder_polygon: OccluderPolygon2D): void;
  public get_occluder(_layer_id: number, _flip_h: boolean, _flip_v: boolean, _transpose: boolean): OccluderPolygon2D;
  public set_constant_linear_velocity(_layer_id: number, _velocity: Vector2): void;
  public get_constant_linear_velocity(_layer_id: number): Vector2;
  public set_constant_angular_velocity(_layer_id: number, _velocity: number): void;
  public get_constant_angular_velocity(_layer_id: number): number;
  public set_collision_polygons_count(_layer_id: number, _polygons_count: number): void;
  public get_collision_polygons_count(_layer_id: number): number;
  public add_collision_polygon(_layer_id: number): void;
  public remove_collision_polygon(_layer_id: number, _polygon_index: number): void;
  public set_collision_polygon_points(_layer_id: number, _polygon_index: number, _polygon: PackedVector2Array): void;
  public get_collision_polygon_points(_layer_id: number, _polygon_index: number): PackedVector2Array;
  public set_collision_polygon_one_way(_layer_id: number, _polygon_index: number, _one_way: boolean): void;
  public is_collision_polygon_one_way(_layer_id: number, _polygon_index: number): boolean;
  public set_collision_polygon_one_way_margin(_layer_id: number, _polygon_index: number, _one_way_margin: number): void;
  public get_collision_polygon_one_way_margin(_layer_id: number, _polygon_index: number): number;
  public set_terrain_set(_terrain_set: number): void;
  public get_terrain_set(): number;
  public set_terrain(_terrain: number): void;
  public get_terrain(): number;
  public set_terrain_peering_bit(_peering_bit: number, _terrain: number): void;
  public get_terrain_peering_bit(_peering_bit: number): number;
  public is_valid_terrain_peering_bit(_peering_bit: number): boolean;
  public set_navigation_polygon(_layer_id: number, _navigation_polygon: NavigationPolygon): void;
  public get_navigation_polygon(_layer_id: number, _flip_h: boolean, _flip_v: boolean, _transpose: boolean): NavigationPolygon;
  public set_probability(_probability: number): void;
  public get_probability(): number;
  public set_custom_data(_layer_name: String, _value: any): void;
  public get_custom_data(_layer_name: String): any;
  public set_custom_data_by_layer_id(_layer_id: number, _value: any): void;
  public get_custom_data_by_layer_id(_layer_id: number): any;
  public get flip_h(): boolean {
    get_flip_h();
  }
  public set flip_h(value): void {
    set_flip_h(value);
  }
  public get flip_v(): boolean {
    get_flip_v();
  }
  public set flip_v(value): void {
    set_flip_v(value);
  }
  public get transpose(): boolean {
    get_transpose();
  }
  public set transpose(value): void {
    set_transpose(value);
  }
  public get texture_origin(): Vector2i {
    get_texture_origin();
  }
  public set texture_origin(value): void {
    set_texture_origin(value);
  }
  public get modulate(): Color {
    get_modulate();
  }
  public set modulate(value): void {
    set_modulate(value);
  }
  public get material(): CanvasItemMaterial {
    get_material();
  }
  public set material(value): void {
    set_material(value);
  }
  public get z_index(): number {
    get_z_index();
  }
  public set z_index(value): void {
    set_z_index(value);
  }
  public get y_sort_origin(): number {
    get_y_sort_origin();
  }
  public set y_sort_origin(value): void {
    set_y_sort_origin(value);
  }
  public get terrain_set(): number {
    get_terrain_set();
  }
  public set terrain_set(value): void {
    set_terrain_set(value);
  }
  public get terrain(): number {
    get_terrain();
  }
  public set terrain(value): void {
    set_terrain(value);
  }
  public get probability(): number {
    get_probability();
  }
  public set probability(value): void {
    set_probability(value);
  }
}