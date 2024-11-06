
import { PackedScene } from "@godot/classes/packed_scene";
import { TileSetSource } from "@godot/classes/tile_set_source";
export declare class TileSetScenesCollectionSource extends TileSetSource{
  public get_scene_tiles_count(): number;
  public get_scene_tile_id(_index: number): number;
  public has_scene_tile_id(_id: number): boolean;
  public create_scene_tile(_packed_scene: PackedScene, _id_override: number = -1): number;
  public set_scene_tile_id(_id: number, _new_id: number): void;
  public set_scene_tile_scene(_id: number, _packed_scene: PackedScene): void;
  public get_scene_tile_scene(_id: number): PackedScene;
  public set_scene_tile_display_placeholder(_id: number, _display_placeholder: boolean): void;
  public get_scene_tile_display_placeholder(_id: number): boolean;
  public remove_scene_tile(_id: number): void;
  public get_next_scene_tile_id(): number;
}