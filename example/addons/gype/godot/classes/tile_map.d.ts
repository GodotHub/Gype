
import { Node2D } from "@godot/classes/node2d";
import { TileSet } from "@godot/classes/tile_set";
import { TileData } from "@godot/classes/tile_data";
import { TileMapPattern } from "@godot/classes/tile_map_pattern";

export declare class TileMap extends Node2D{
  public _use_tile_data_runtime_update(_layer: number, _coords: Vector2i): boolean;
  public _tile_data_runtime_update(_layer: number, _coords: Vector2i, _tile_data: TileData): void;
  public set_navigation_map(_layer: number, _map: RID): void;
  public get_navigation_map(_layer: number): RID;
  public force_update(_layer: number): void;
  public set_tileset(_tileset: TileSet): void;
  public get_tileset(): TileSet;
  public set_rendering_quadrant_size(_size: number): void;
  public get_rendering_quadrant_size(): number;
  public get_layers_count(): number;
  public add_layer(_to_position: number): void;
  public move_layer(_layer: number, _to_position: number): void;
  public remove_layer(_layer: number): void;
  public set_layer_name(_layer: number, _name: String | StringName | string): void;
  public get_layer_name(_layer: number): String;
  public set_layer_enabled(_layer: number, _enabled: boolean): void;
  public is_layer_enabled(_layer: number): boolean;
  public set_layer_modulate(_layer: number, _modulate: Color): void;
  public get_layer_modulate(_layer: number): Color;
  public set_layer_y_sort_enabled(_layer: number, _y_sort_enabled: boolean): void;
  public is_layer_y_sort_enabled(_layer: number): boolean;
  public set_layer_y_sort_origin(_layer: number, _y_sort_origin: number): void;
  public get_layer_y_sort_origin(_layer: number): number;
  public set_layer_z_index(_layer: number, _z_index: number): void;
  public get_layer_z_index(_layer: number): number;
  public set_layer_navigation_enabled(_layer: number, _enabled: boolean): void;
  public is_layer_navigation_enabled(_layer: number): boolean;
  public set_layer_navigation_map(_layer: number, _map: RID): void;
  public get_layer_navigation_map(_layer: number): RID;
  public set_collision_animatable(_enabled: boolean): void;
  public is_collision_animatable(): boolean;
  public set_collision_visibility_mode(_collision_visibility_mode: number): void;
  public get_collision_visibility_mode(): number;
  public set_navigation_visibility_mode(_navigation_visibility_mode: number): void;
  public get_navigation_visibility_mode(): number;
  public set_cell(_layer: number, _coords: Vector2i, _source_id: number, _atlas_coords: Vector2i, _alternative_tile: number): void;
  public erase_cell(_layer: number, _coords: Vector2i): void;
  public get_cell_source_id(_layer: number, _coords: Vector2i, _use_proxies: boolean): number;
  public get_cell_atlas_coords(_layer: number, _coords: Vector2i, _use_proxies: boolean): Vector2i;
  public get_cell_alternative_tile(_layer: number, _coords: Vector2i, _use_proxies: boolean): number;
  public get_cell_tile_data(_layer: number, _coords: Vector2i, _use_proxies: boolean): TileData;
  public get_coords_for_body_rid(_body: RID): Vector2i;
  public get_layer_for_body_rid(_body: RID): number;
  public get_pattern(_layer: number, _coords_array: GDArray): TileMapPattern;
  public map_pattern(_position_in_tilemap: Vector2i, _coords_in_pattern: Vector2i, _pattern: TileMapPattern): Vector2i;
  public set_pattern(_layer: number, _position: Vector2i, _pattern: TileMapPattern): void;
  public set_cells_terrain_connect(_layer: number, _cells: GDArray, _terrain_set: number, _terrain: number, _ignore_empty_terrains: boolean): void;
  public set_cells_terrain_path(_layer: number, _path: GDArray, _terrain_set: number, _terrain: number, _ignore_empty_terrains: boolean): void;
  public fix_invalid_tiles(): void;
  public clear_layer(_layer: number): void;
  public clear(): void;
  public update_internals(): void;
  public notify_runtime_tile_data_update(_layer: number): void;
  public get_surrounding_cells(_coords: Vector2i): GDArray;
  public get_used_cells(_layer: number): GDArray;
  public get_used_cells_by_id(_layer: number, _source_id: number, _atlas_coords: Vector2i, _alternative_tile: number): GDArray;
  public get_used_rect(): Rect2i;
  public map_to_local(_map_position: Vector2i): Vector2;
  public local_to_map(_local_position: Vector2): Vector2i;
  public get_neighbor_cell(_coords: Vector2i, _neighbor: number): Vector2i;
  public get tile_set(): TileSet {
    get_tileset();
  }
  public set tile_set(value): void {
    set_tileset(value);
  }
  public get rendering_quadrant_size(): number {
    get_rendering_quadrant_size();
  }
  public set rendering_quadrant_size(value): void {
    set_rendering_quadrant_size(value);
  }
  public get collision_animatable(): boolean {
    is_collision_animatable();
  }
  public set collision_animatable(value): void {
    set_collision_animatable(value);
  }
  public get collision_visibility_mode(): number {
    get_collision_visibility_mode();
  }
  public set collision_visibility_mode(value): void {
    set_collision_visibility_mode(value);
  }
  public get navigation_visibility_mode(): number {
    get_navigation_visibility_mode();
  }
  public set navigation_visibility_mode(value): void {
    set_navigation_visibility_mode(value);
  }
  static VisibilityMode = {
    VISIBILITY_MODE_DEFAULT = 0,
    VISIBILITY_MODE_FORCE_HIDE = 2,
    VISIBILITY_MODE_FORCE_SHOW = 1,
  }
  public get changed(): Signal;
}