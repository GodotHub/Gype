
import { TileSetSource } from "@godot/classes/tile_set_source";
import { Texture2D } from "@godot/classes/texture2d";
import { TileData } from "@godot/classes/tile_data";

export declare class TileSetAtlasSource extends TileSetSource{
  public set_texture(_texture: Texture2D): void;
  public get_texture(): Texture2D;
  public set_margins(_margins: Vector2i): void;
  public get_margins(): Vector2i;
  public set_separation(_separation: Vector2i): void;
  public get_separation(): Vector2i;
  public set_texture_region_size(_texture_region_size: Vector2i): void;
  public get_texture_region_size(): Vector2i;
  public set_use_texture_padding(_use_texture_padding: boolean): void;
  public get_use_texture_padding(): boolean;
  public create_tile(_atlas_coords: Vector2i, _size: Vector2i): void;
  public remove_tile(_atlas_coords: Vector2i): void;
  public move_tile_in_atlas(_atlas_coords: Vector2i, _new_atlas_coords: Vector2i, _new_size: Vector2i): void;
  public get_tile_size_in_atlas(_atlas_coords: Vector2i): Vector2i;
  public has_room_for_tile(_atlas_coords: Vector2i, _size: Vector2i, _animation_columns: number, _animation_separation: Vector2i, _frames_count: number, _ignored_tile: Vector2i): boolean;
  public get_tiles_to_be_removed_on_change(_texture: Texture2D, _margins: Vector2i, _separation: Vector2i, _texture_region_size: Vector2i): PackedVector2Array;
  public get_tile_at_coords(_atlas_coords: Vector2i): Vector2i;
  public has_tiles_outside_texture(): boolean;
  public clear_tiles_outside_texture(): void;
  public set_tile_animation_columns(_atlas_coords: Vector2i, _frame_columns: number): void;
  public get_tile_animation_columns(_atlas_coords: Vector2i): number;
  public set_tile_animation_separation(_atlas_coords: Vector2i, _separation: Vector2i): void;
  public get_tile_animation_separation(_atlas_coords: Vector2i): Vector2i;
  public set_tile_animation_speed(_atlas_coords: Vector2i, _speed: number): void;
  public get_tile_animation_speed(_atlas_coords: Vector2i): number;
  public set_tile_animation_mode(_atlas_coords: Vector2i, _mode: number): void;
  public get_tile_animation_mode(_atlas_coords: Vector2i): number;
  public set_tile_animation_frames_count(_atlas_coords: Vector2i, _frames_count: number): void;
  public get_tile_animation_frames_count(_atlas_coords: Vector2i): number;
  public set_tile_animation_frame_duration(_atlas_coords: Vector2i, _frame_index: number, _duration: number): void;
  public get_tile_animation_frame_duration(_atlas_coords: Vector2i, _frame_index: number): number;
  public get_tile_animation_total_duration(_atlas_coords: Vector2i): number;
  public create_alternative_tile(_atlas_coords: Vector2i, _alternative_id_override: number): number;
  public remove_alternative_tile(_atlas_coords: Vector2i, _alternative_tile: number): void;
  public set_alternative_tile_id(_atlas_coords: Vector2i, _alternative_tile: number, _new_id: number): void;
  public get_next_alternative_tile_id(_atlas_coords: Vector2i): number;
  public get_tile_data(_atlas_coords: Vector2i, _alternative_tile: number): TileData;
  public get_atlas_grid_size(): Vector2i;
  public get_tile_texture_region(_atlas_coords: Vector2i, _frame: number): Rect2i;
  public get_runtime_texture(): Texture2D;
  public get_runtime_tile_texture_region(_atlas_coords: Vector2i, _frame: number): Rect2i;
  public get texture(): Texture2D {
    get_texture();
  }
  public set texture(value): void {
    set_texture(value);
  }
  public get margins(): Vector2i {
    get_margins();
  }
  public set margins(value): void {
    set_margins(value);
  }
  public get separation(): Vector2i {
    get_separation();
  }
  public set separation(value): void {
    set_separation(value);
  }
  public get texture_region_size(): Vector2i {
    get_texture_region_size();
  }
  public set texture_region_size(value): void {
    set_texture_region_size(value);
  }
  public get use_texture_padding(): boolean {
    get_use_texture_padding();
  }
  public set use_texture_padding(value): void {
    set_use_texture_padding(value);
  }
  static TileAnimationMode = {
    TILE_ANIMATION_MODE_DEFAULT = 0,
    TILE_ANIMATION_MODE_RANDOM_START_TIMES = 1,
    TILE_ANIMATION_MODE_MAX = 2,
  }
}