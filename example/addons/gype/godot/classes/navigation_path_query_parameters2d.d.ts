
import { RefCounted } from "@godot/classes/ref_counted";


export declare class NavigationPathQueryParameters2D extends RefCounted{
  public set_pathfinding_algorithm(_pathfinding_algorithm: number): void;
  public get_pathfinding_algorithm(): number;
  public set_path_postprocessing(_path_postprocessing: number): void;
  public get_path_postprocessing(): number;
  public set_map(_map: RID): void;
  public get_map(): RID;
  public set_start_position(_start_position: Vector2): void;
  public get_start_position(): Vector2;
  public set_target_position(_target_position: Vector2): void;
  public get_target_position(): Vector2;
  public set_navigation_layers(_navigation_layers: number): void;
  public get_navigation_layers(): number;
  public set_metadata_flags(_flags: number): void;
  public get_metadata_flags(): number;
  public set_simplify_path(_enabled: boolean): void;
  public get_simplify_path(): boolean;
  public set_simplify_epsilon(_epsilon: number): void;
  public get_simplify_epsilon(): number;
  public get map(): RID;
  public set map(value): void;
  public get start_position(): Vector2;
  public set start_position(value): void;
  public get target_position(): Vector2;
  public set target_position(value): void;
  public get navigation_layers(): number;
  public set navigation_layers(value): void;
  public get pathfinding_algorithm(): number;
  public set pathfinding_algorithm(value): void;
  public get path_postprocessing(): number;
  public set path_postprocessing(value): void;
  public get metadata_flags(): number;
  public set metadata_flags(value): void;
  public get simplify_path(): boolean;
  public set simplify_path(value): void;
  public get simplify_epsilon(): number;
  public set simplify_epsilon(value): void;
  static PathfindingAlgorithm = {
    PATHFINDING_ALGORITHM_ASTAR = 0,
  }
  static PathPostProcessing = {
    PATH_POSTPROCESSING_CORRIDORFUNNEL = 0,
    PATH_POSTPROCESSING_EDGECENTERED = 1,
  }
  static PathMetadataFlags = {
    PATH_METADATA_INCLUDE_NONE = 0,
    PATH_METADATA_INCLUDE_TYPES = 1,
    PATH_METADATA_INCLUDE_RIDS = 2,
    PATH_METADATA_INCLUDE_OWNERS = 4,
    PATH_METADATA_INCLUDE_ALL = 7,
  }
}