
import { Resource } from "@godot/classes/resource";
export declare class TileMapPattern extends Resource{
  public set_cell(_coords: Vector2i, _source_id: number = -1, _atlas_coords: Vector2i = Vector2i(-1, -1), _alternative_tile: number = -1): void;
  public has_cell(_coords: Vector2i): boolean;
  public remove_cell(_coords: Vector2i, _update_size: boolean): void;
  public get_cell_source_id(_coords: Vector2i): number;
  public get_cell_atlas_coords(_coords: Vector2i): Vector2i;
  public get_cell_alternative_tile(_coords: Vector2i): number;
  public get_used_cells(): GDArray;
  public get_size(): Vector2i;
  public set_size(_size: Vector2i): void;
  public is_empty(): boolean;
}