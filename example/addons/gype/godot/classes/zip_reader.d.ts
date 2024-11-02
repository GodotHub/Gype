
import { RefCounted } from "@godot/classes/ref_counted";


export declare class ZIPReader extends RefCounted{
  public open(_path: GDString | StringName | string): number;
  public close(): number;
  public get_files(): PackedStringArray;
  public read_file(_path: GDString | StringName | string, _case_sensitive: boolean): PackedByteArray;
  public file_exists(_path: GDString | StringName | string, _case_sensitive: boolean): boolean;
}