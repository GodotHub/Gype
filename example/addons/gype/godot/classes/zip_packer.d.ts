
import { RefCounted } from "@godot/classes/ref_counted";

export declare class ZIPPacker extends RefCounted{
  public open(_path: String | StringName | string, _append: number): number;
  public start_file(_path: String | StringName | string): number;
  public write_file(_data: PackedByteArray): number;
  public close_file(): number;
  public close(): number;
  static ZipAppend = {
    APPEND_CREATE = 0,
    APPEND_CREATEAFTER = 1,
    APPEND_ADDINZIP = 2,
  }
}