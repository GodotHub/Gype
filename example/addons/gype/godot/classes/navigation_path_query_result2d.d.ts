
import { RefCounted } from "@godot/classes/ref_counted";
export declare class NavigationPathQueryResult2D extends RefCounted{
  public set_path(_path: PackedVector2Array): void;
  public get_path(): PackedVector2Array;
  public set_path_types(_path_types: PackedInt32Array): void;
  public get_path_types(): PackedInt32Array;
  public set_path_rids(_path_rids: GDArray): void;
  public get_path_rids(): GDArray;
  public set_path_owner_ids(_path_owner_ids: PackedInt64Array): void;
  public get_path_owner_ids(): PackedInt64Array;
  public reset(): void;
  public get path(): PackedVector2Array;
  public set path(value): void;
  public get path_types(): PackedInt32Array;
  public set path_types(value): void;
  public get path_rids(): GDArray;
  public set path_rids(value): void;
  public get path_owner_ids(): PackedInt64Array;
  public set path_owner_ids(value): void;
  static PathSegmentType = {
    PATH_SEGMENT_TYPE_REGION = 0,
    PATH_SEGMENT_TYPE_LINK = 1,
  }
}