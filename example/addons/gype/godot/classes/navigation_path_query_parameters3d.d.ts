
import { RefCounted } from "@godot/classes/ref_counted";

export declare class NavigationPathQueryParameters3D extends RefCounted{
  public set_pathfinding_algorithm(_pathfinding_algorithm: number): void;
  public get_pathfinding_algorithm(): number;
  public set_path_postprocessing(_path_postprocessing: number): void;
  public get_path_postprocessing(): number;
  public set_map(_map: RID): void;
  public get_map(): RID;
  public set_start_position(_start_position: Vector3): void;
  public get_start_position(): Vector3;
  public set_target_position(_target_position: Vector3): void;
  public get_target_position(): Vector3;
  public set_navigation_layers(_navigation_layers: number): void;
  public get_navigation_layers(): number;
  public set_metadata_flags(_flags: number): void;
  public get_metadata_flags(): number;
  public set_simplify_path(_enabled: boolean): void;
  public get_simplify_path(): boolean;
  public set_simplify_epsilon(_epsilon: number): void;
  public get_simplify_epsilon(): number;
  public get map(): RID {
    get_map();
  }
  public set map(value: RID): void {
    set_map(value);
  }
  public get start_position(): Vector3 {
    get_start_position();
  }
  public set start_position(value: Vector3): void {
    set_start_position(value);
  }
  public get target_position(): Vector3 {
    get_target_position();
  }
  public set target_position(value: Vector3): void {
    set_target_position(value);
  }
  public get navigation_layers(): number {
    get_navigation_layers();
  }
  public set navigation_layers(value: number): void {
    set_navigation_layers(value);
  }
  public get pathfinding_algorithm(): number {
    get_pathfinding_algorithm();
  }
  public set pathfinding_algorithm(value: number): void {
    set_pathfinding_algorithm(value);
  }
  public get path_postprocessing(): number {
    get_path_postprocessing();
  }
  public set path_postprocessing(value: number): void {
    set_path_postprocessing(value);
  }
  public get metadata_flags(): number {
    get_metadata_flags();
  }
  public set metadata_flags(value: number): void {
    set_metadata_flags(value);
  }
  public get simplify_path(): boolean {
    get_simplify_path();
  }
  public set simplify_path(value: boolean): void {
    set_simplify_path(value);
  }
  public get simplify_epsilon(): number {
    get_simplify_epsilon();
  }
  public set simplify_epsilon(value: number): void {
    set_simplify_epsilon(value);
  }
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