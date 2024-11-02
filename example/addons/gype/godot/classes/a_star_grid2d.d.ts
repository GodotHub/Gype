
import { RefCounted } from "@godot/classes/ref_counted";


export declare class AStarGrid2D extends RefCounted{
  public _estimate_cost(_from_id: Vector2i, _to_id: Vector2i): number;
  public _compute_cost(_from_id: Vector2i, _to_id: Vector2i): number;
  public set_region(_region: Rect2i): void;
  public get_region(): Rect2i;
  public set_size(_size: Vector2i): void;
  public get_size(): Vector2i;
  public set_offset(_offset: Vector2): void;
  public get_offset(): Vector2;
  public set_cell_size(_cell_size: Vector2): void;
  public get_cell_size(): Vector2;
  public set_cell_shape(_cell_shape: number): void;
  public get_cell_shape(): number;
  public is_in_bounds(_x: number, _y: number): boolean;
  public is_in_boundsv(_id: Vector2i): boolean;
  public is_dirty(): boolean;
  public update(): void;
  public set_jumping_enabled(_enabled: boolean): void;
  public is_jumping_enabled(): boolean;
  public set_diagonal_mode(_mode: number): void;
  public get_diagonal_mode(): number;
  public set_default_compute_heuristic(_heuristic: number): void;
  public get_default_compute_heuristic(): number;
  public set_default_estimate_heuristic(_heuristic: number): void;
  public get_default_estimate_heuristic(): number;
  public set_point_solid(_id: Vector2i, _solid: boolean): void;
  public is_point_solid(_id: Vector2i): boolean;
  public set_point_weight_scale(_id: Vector2i, _weight_scale: number): void;
  public get_point_weight_scale(_id: Vector2i): number;
  public fill_solid_region(_region: Rect2i, _solid: boolean): void;
  public fill_weight_scale_region(_region: Rect2i, _weight_scale: number): void;
  public clear(): void;
  public get_point_position(_id: Vector2i): Vector2;
  public get_point_path(_from_id: Vector2i, _to_id: Vector2i, _allow_partial_path: boolean): PackedVector2Array;
  public get_id_path(_from_id: Vector2i, _to_id: Vector2i, _allow_partial_path: boolean): GDArray;
  public get region(): Rect2i;
  public set region(value): void;
  public get size(): Vector2i;
  public set size(value): void;
  public get offset(): Vector2;
  public set offset(value): void;
  public get cell_size(): Vector2;
  public set cell_size(value): void;
  public get cell_shape(): number;
  public set cell_shape(value): void;
  public get jumping_enabled(): boolean;
  public set jumping_enabled(value): void;
  public get default_compute_heuristic(): number;
  public set default_compute_heuristic(value): void;
  public get default_estimate_heuristic(): number;
  public set default_estimate_heuristic(value): void;
  public get diagonal_mode(): number;
  public set diagonal_mode(value): void;
  static Heuristic = {
    HEURISTIC_EUCLIDEAN = 0,
    HEURISTIC_MANHATTAN = 1,
    HEURISTIC_OCTILE = 2,
    HEURISTIC_CHEBYSHEV = 3,
    HEURISTIC_MAX = 4,
  }
  static DiagonalMode = {
    DIAGONAL_MODE_ALWAYS = 0,
    DIAGONAL_MODE_NEVER = 1,
    DIAGONAL_MODE_AT_LEAST_ONE_WALKABLE = 2,
    DIAGONAL_MODE_ONLY_IF_NO_OBSTACLES = 3,
    DIAGONAL_MODE_MAX = 4,
  }
  static CellShape = {
    CELL_SHAPE_SQUARE = 0,
    CELL_SHAPE_ISOMETRIC_RIGHT = 1,
    CELL_SHAPE_ISOMETRIC_DOWN = 2,
    CELL_SHAPE_MAX = 3,
  }
}