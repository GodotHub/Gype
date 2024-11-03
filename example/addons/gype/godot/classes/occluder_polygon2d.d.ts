
import { Resource } from "@godot/classes/resource";
export declare class OccluderPolygon2D extends Resource{
  public set_closed(_closed: boolean): void;
  public is_closed(): boolean;
  public set_cull_mode(_cull_mode: number): void;
  public get_cull_mode(): number;
  public set_polygon(_polygon: PackedVector2Array): void;
  public get_polygon(): PackedVector2Array;
  public get closed(): boolean;
  public set closed(value): void;
  public get cull_mode(): number;
  public set cull_mode(value): void;
  public get polygon(): PackedVector2Array;
  public set polygon(value): void;
  static CullMode = {
    CULL_DISABLED = 0,
    CULL_CLOCKWISE = 1,
    CULL_COUNTER_CLOCKWISE = 2,
  }
}