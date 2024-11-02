
import { Resource } from "@godot/classes/resource";


export declare class TileSetSource extends Resource{
  public get_tiles_count(): number;
  public get_tile_id(_index: number): Vector2i;
  public has_tile(_atlas_coords: Vector2i): boolean;
  public get_alternative_tiles_count(_atlas_coords: Vector2i): number;
  public get_alternative_tile_id(_atlas_coords: Vector2i, _index: number): number;
  public has_alternative_tile(_atlas_coords: Vector2i, _alternative_tile: number): boolean;
}