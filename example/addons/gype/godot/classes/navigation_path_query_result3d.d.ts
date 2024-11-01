
import { RefCounted } from "@godot/classes/ref_counted";

export declare class NavigationPathQueryResult3D extends RefCounted{
  public set_path(_path: PackedVector3Array): void;
  public get_path(): PackedVector3Array;
  public set_path_types(_path_types: PackedInt32Array): void;
  public get_path_types(): PackedInt32Array;
  public set_path_rids(_path_rids: GDArray): void;
  public get_path_rids(): GDArray;
  public set_path_owner_ids(_path_owner_ids: PackedInt64Array): void;
  public get_path_owner_ids(): PackedInt64Array;
  public reset(): void;
  public get path(): PackedVector3Array {
    get_path();
  }
  public set path(value): void {
    set_path(value);
  }
  public get path_types(): PackedInt32Array {
    get_path_types();
  }
  public set path_types(value): void {
    set_path_types(value);
  }
  public get path_rids(): GDArray {
    get_path_rids();
  }
  public set path_rids(value): void {
    set_path_rids(value);
  }
  public get path_owner_ids(): PackedInt64Array {
    get_path_owner_ids();
  }
  public set path_owner_ids(value): void {
    set_path_owner_ids(value);
  }
  static PathSegmentType = {
    PATH_SEGMENT_TYPE_REGION = 0,
    PATH_SEGMENT_TYPE_LINK = 1,
  }
}