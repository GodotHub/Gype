
import { Resource } from "@godot/classes/resource";

export declare class OccluderPolygon2D extends Resource{
  public set_closed(_closed: boolean): void;
  public is_closed(): boolean;
  public set_cull_mode(_cull_mode: number): void;
  public get_cull_mode(): number;
  public set_polygon(_polygon: PackedVector2Array): void;
  public get_polygon(): PackedVector2Array;
  public get closed(): boolean {
    is_closed();
  }
  public set closed(value: boolean): void {
    set_closed(value);
  }
  public get cull_mode(): number {
    get_cull_mode();
  }
  public set cull_mode(value: number): void {
    set_cull_mode(value);
  }
  public get polygon(): PackedVector2Array {
    get_polygon();
  }
  public set polygon(value: PackedVector2Array): void {
    set_polygon(value);
  }
  static CullMode = {
    CULL_DISABLED = 0,
    CULL_CLOCKWISE = 1,
    CULL_COUNTER_CLOCKWISE = 2,
  }
}