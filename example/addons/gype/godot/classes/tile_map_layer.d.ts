
import { TileData } from "@godot/classes/tile_data";
import { TileSet } from "@godot/classes/tile_set";
import { TileMapPattern } from "@godot/classes/tile_map_pattern";
import { Node2D } from "@godot/classes/node2d";
export declare class TileMapLayer extends Node2D{
  public _use_tile_data_runtime_update(_coords: Vector2i): boolean;
  public _tile_data_runtime_update(_coords: Vector2i, _tile_data: TileData): void;
  public set_cell(_coords: Vector2i, _source_id: number = -1, _atlas_coords: Vector2i = Vector2i(-1, -1), _alternative_tile: number = 0): void;
  public erase_cell(_coords: Vector2i): void;
  public fix_invalid_tiles(): void;
  public clear(): void;
  public get_cell_source_id(_coords: Vector2i): number;
  public get_cell_atlas_coords(_coords: Vector2i): Vector2i;
  public get_cell_alternative_tile(_coords: Vector2i): number;
  public get_cell_tile_data(_coords: Vector2i): TileData;
  public get_used_cells(): GDArray;
  public get_used_cells_by_id(_source_id: number = -1, _atlas_coords: Vector2i = Vector2i(-1, -1), _alternative_tile: number = -1): GDArray;
  public get_used_rect(): Rect2i;
  public get_pattern(_coords_array: GDArray): TileMapPattern;
  public set_pattern(_position: Vector2i, _pattern: TileMapPattern): void;
  public set_cells_terrain_connect(_cells: GDArray, _terrain_set: number, _terrain: number, _ignore_empty_terrains: boolean = true): void;
  public set_cells_terrain_path(_path: GDArray, _terrain_set: number, _terrain: number, _ignore_empty_terrains: boolean = true): void;
  public has_body_rid(_body: RID): boolean;
  public get_coords_for_body_rid(_body: RID): Vector2i;
  public update_internals(): void;
  public notify_runtime_tile_data_update(): void;
  public map_pattern(_position_in_tilemap: Vector2i, _coords_in_pattern: Vector2i, _pattern: TileMapPattern): Vector2i;
  public get_surrounding_cells(_coords: Vector2i): GDArray;
  public get_neighbor_cell(_coords: Vector2i, _neighbor: number): Vector2i;
  public map_to_local(_map_position: Vector2i): Vector2;
  public local_to_map(_local_position: Vector2): Vector2i;
  public set_tile_map_data_from_array(_tile_map_layer_data: PackedByteArray): void;
  public get_tile_map_data_as_array(): PackedByteArray;
  public set_enabled(_enabled: boolean): void;
  public is_enabled(): boolean;
  public set_tile_set(_tile_set: TileSet): void;
  public get_tile_set(): TileSet;
  public set_y_sort_origin(_y_sort_origin: number): void;
  public get_y_sort_origin(): number;
  public set_x_draw_order_reversed(_x_draw_order_reversed: boolean): void;
  public is_x_draw_order_reversed(): boolean;
  public set_rendering_quadrant_size(_size: number): void;
  public get_rendering_quadrant_size(): number;
  public set_collision_enabled(_enabled: boolean): void;
  public is_collision_enabled(): boolean;
  public set_use_kinematic_bodies(_use_kinematic_bodies: boolean): void;
  public is_using_kinematic_bodies(): boolean;
  public set_collision_visibility_mode(_visibility_mode: number): void;
  public get_collision_visibility_mode(): number;
  public set_navigation_enabled(_enabled: boolean): void;
  public is_navigation_enabled(): boolean;
  public set_navigation_map(_map: RID): void;
  public get_navigation_map(): RID;
  public set_navigation_visibility_mode(_show_navigation: number): void;
  public get_navigation_visibility_mode(): number;
  public get tile_map_data(): PackedByteArray;
  public set tile_map_data(value): void;
  public get enabled(): boolean;
  public set enabled(value): void;
  public get tile_set(): TileSet;
  public set tile_set(value): void;
  public get y_sort_origin(): number;
  public set y_sort_origin(value): void;
  public get x_draw_order_reversed(): boolean;
  public set x_draw_order_reversed(value): void;
  public get rendering_quadrant_size(): number;
  public set rendering_quadrant_size(value): void;
  public get collision_enabled(): boolean;
  public set collision_enabled(value): void;
  public get use_kinematic_bodies(): boolean;
  public set use_kinematic_bodies(value): void;
  public get collision_visibility_mode(): number;
  public set collision_visibility_mode(value): void;
  public get navigation_enabled(): boolean;
  public set navigation_enabled(value): void;
  public get navigation_visibility_mode(): number;
  public set navigation_visibility_mode(value): void;
  static DebugVisibilityMode = {
    DEBUG_VISIBILITY_MODE_DEFAULT = 0,
    DEBUG_VISIBILITY_MODE_FORCE_HIDE = 2,
    DEBUG_VISIBILITY_MODE_FORCE_SHOW = 1,
  }
  public get changed(): Signal;
}