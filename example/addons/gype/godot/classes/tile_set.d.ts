
import { TileMapPattern } from "@godot/classes/tile_map_pattern";
import { TileSetSource } from "@godot/classes/tile_set_source";
import { PhysicsMaterial } from "@godot/classes/physics_material";
import { Resource } from "@godot/classes/resource";
export declare class TileSet extends Resource{
  public get_next_source_id(): number;
  public add_source(_source: TileSetSource, _atlas_source_id_override: number = -1): number;
  public remove_source(_source_id: number): void;
  public set_source_id(_source_id: number, _new_source_id: number): void;
  public get_source_count(): number;
  public get_source_id(_index: number): number;
  public has_source(_source_id: number): boolean;
  public get_source(_source_id: number): TileSetSource;
  public set_tile_shape(_shape: number): void;
  public get_tile_shape(): number;
  public set_tile_layout(_layout: number): void;
  public get_tile_layout(): number;
  public set_tile_offset_axis(_alignment: number): void;
  public get_tile_offset_axis(): number;
  public set_tile_size(_size: Vector2i): void;
  public get_tile_size(): Vector2i;
  public set_uv_clipping(_uv_clipping: boolean): void;
  public is_uv_clipping(): boolean;
  public get_occlusion_layers_count(): number;
  public add_occlusion_layer(_to_position: number = -1): void;
  public move_occlusion_layer(_layer_index: number, _to_position: number): void;
  public remove_occlusion_layer(_layer_index: number): void;
  public set_occlusion_layer_light_mask(_layer_index: number, _light_mask: number): void;
  public get_occlusion_layer_light_mask(_layer_index: number): number;
  public set_occlusion_layer_sdf_collision(_layer_index: number, _sdf_collision: boolean): void;
  public get_occlusion_layer_sdf_collision(_layer_index: number): boolean;
  public get_physics_layers_count(): number;
  public add_physics_layer(_to_position: number = -1): void;
  public move_physics_layer(_layer_index: number, _to_position: number): void;
  public remove_physics_layer(_layer_index: number): void;
  public set_physics_layer_collision_layer(_layer_index: number, _layer: number): void;
  public get_physics_layer_collision_layer(_layer_index: number): number;
  public set_physics_layer_collision_mask(_layer_index: number, _mask: number): void;
  public get_physics_layer_collision_mask(_layer_index: number): number;
  public set_physics_layer_physics_material(_layer_index: number, _physics_material: PhysicsMaterial): void;
  public get_physics_layer_physics_material(_layer_index: number): PhysicsMaterial;
  public get_terrain_sets_count(): number;
  public add_terrain_set(_to_position: number = -1): void;
  public move_terrain_set(_terrain_set: number, _to_position: number): void;
  public remove_terrain_set(_terrain_set: number): void;
  public set_terrain_set_mode(_terrain_set: number, _mode: number): void;
  public get_terrain_set_mode(_terrain_set: number): number;
  public get_terrains_count(_terrain_set: number): number;
  public add_terrain(_terrain_set: number, _to_position: number = -1): void;
  public move_terrain(_terrain_set: number, _terrain_index: number, _to_position: number): void;
  public remove_terrain(_terrain_set: number, _terrain_index: number): void;
  public set_terrain_name(_terrain_set: number, _terrain_index: number, _name: GDString | StringName | string): void;
  public get_terrain_name(_terrain_set: number, _terrain_index: number): String;
  public set_terrain_color(_terrain_set: number, _terrain_index: number, _color: Color): void;
  public get_terrain_color(_terrain_set: number, _terrain_index: number): Color;
  public get_navigation_layers_count(): number;
  public add_navigation_layer(_to_position: number = -1): void;
  public move_navigation_layer(_layer_index: number, _to_position: number): void;
  public remove_navigation_layer(_layer_index: number): void;
  public set_navigation_layer_layers(_layer_index: number, _layers: number): void;
  public get_navigation_layer_layers(_layer_index: number): number;
  public set_navigation_layer_layer_value(_layer_index: number, _layer_number: number, _value: boolean): void;
  public get_navigation_layer_layer_value(_layer_index: number, _layer_number: number): boolean;
  public get_custom_data_layers_count(): number;
  public add_custom_data_layer(_to_position: number = -1): void;
  public move_custom_data_layer(_layer_index: number, _to_position: number): void;
  public remove_custom_data_layer(_layer_index: number): void;
  public get_custom_data_layer_by_name(_layer_name: GDString | StringName | string): number;
  public set_custom_data_layer_name(_layer_index: number, _layer_name: GDString | StringName | string): void;
  public get_custom_data_layer_name(_layer_index: number): String;
  public set_custom_data_layer_type(_layer_index: number, _layer_type: number): void;
  public get_custom_data_layer_type(_layer_index: number): number;
  public set_source_level_tile_proxy(_source_from: number, _source_to: number): void;
  public get_source_level_tile_proxy(_source_from: number): number;
  public has_source_level_tile_proxy(_source_from: number): boolean;
  public remove_source_level_tile_proxy(_source_from: number): void;
  public set_coords_level_tile_proxy(_p_source_from: number, _coords_from: Vector2i, _source_to: number, _coords_to: Vector2i): void;
  public get_coords_level_tile_proxy(_source_from: number, _coords_from: Vector2i): GDArray;
  public has_coords_level_tile_proxy(_source_from: number, _coords_from: Vector2i): boolean;
  public remove_coords_level_tile_proxy(_source_from: number, _coords_from: Vector2i): void;
  public set_alternative_level_tile_proxy(_source_from: number, _coords_from: Vector2i, _alternative_from: number, _source_to: number, _coords_to: Vector2i, _alternative_to: number): void;
  public get_alternative_level_tile_proxy(_source_from: number, _coords_from: Vector2i, _alternative_from: number): GDArray;
  public has_alternative_level_tile_proxy(_source_from: number, _coords_from: Vector2i, _alternative_from: number): boolean;
  public remove_alternative_level_tile_proxy(_source_from: number, _coords_from: Vector2i, _alternative_from: number): void;
  public map_tile_proxy(_source_from: number, _coords_from: Vector2i, _alternative_from: number): GDArray;
  public cleanup_invalid_tile_proxies(): void;
  public clear_tile_proxies(): void;
  public add_pattern(_pattern: TileMapPattern, _index: number = -1): number;
  public get_pattern(_index: number = -1): TileMapPattern;
  public remove_pattern(_index: number): void;
  public get_patterns_count(): number;
  public get tile_shape(): number;
  public set tile_shape(value): void;
  public get tile_layout(): number;
  public set tile_layout(value): void;
  public get tile_offset_axis(): number;
  public set tile_offset_axis(value): void;
  public get tile_size(): Vector2i;
  public set tile_size(value): void;
  public get uv_clipping(): boolean;
  public set uv_clipping(value): void;
  static TileShape = {
    TILE_SHAPE_SQUARE = 0,
    TILE_SHAPE_ISOMETRIC = 1,
    TILE_SHAPE_HALF_OFFSET_SQUARE = 2,
    TILE_SHAPE_HEXAGON = 3,
  }
  static TileLayout = {
    TILE_LAYOUT_STACKED = 0,
    TILE_LAYOUT_STACKED_OFFSET = 1,
    TILE_LAYOUT_STAIRS_RIGHT = 2,
    TILE_LAYOUT_STAIRS_DOWN = 3,
    TILE_LAYOUT_DIAMOND_RIGHT = 4,
    TILE_LAYOUT_DIAMOND_DOWN = 5,
  }
  static TileOffsetAxis = {
    TILE_OFFSET_AXIS_HORIZONTAL = 0,
    TILE_OFFSET_AXIS_VERTICAL = 1,
  }
  static CellNeighbor = {
    CELL_NEIGHBOR_RIGHT_SIDE = 0,
    CELL_NEIGHBOR_RIGHT_CORNER = 1,
    CELL_NEIGHBOR_BOTTOM_RIGHT_SIDE = 2,
    CELL_NEIGHBOR_BOTTOM_RIGHT_CORNER = 3,
    CELL_NEIGHBOR_BOTTOM_SIDE = 4,
    CELL_NEIGHBOR_BOTTOM_CORNER = 5,
    CELL_NEIGHBOR_BOTTOM_LEFT_SIDE = 6,
    CELL_NEIGHBOR_BOTTOM_LEFT_CORNER = 7,
    CELL_NEIGHBOR_LEFT_SIDE = 8,
    CELL_NEIGHBOR_LEFT_CORNER = 9,
    CELL_NEIGHBOR_TOP_LEFT_SIDE = 10,
    CELL_NEIGHBOR_TOP_LEFT_CORNER = 11,
    CELL_NEIGHBOR_TOP_SIDE = 12,
    CELL_NEIGHBOR_TOP_CORNER = 13,
    CELL_NEIGHBOR_TOP_RIGHT_SIDE = 14,
    CELL_NEIGHBOR_TOP_RIGHT_CORNER = 15,
  }
  static TerrainMode = {
    TERRAIN_MODE_MATCH_CORNERS_AND_SIDES = 0,
    TERRAIN_MODE_MATCH_CORNERS = 1,
    TERRAIN_MODE_MATCH_SIDES = 2,
  }
}