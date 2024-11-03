
import { RefCounted } from "@godot/classes/ref_counted";
export declare class PCKPacker extends RefCounted{
  public pck_start(_pck_name: GDString | StringName | string, _alignment: number = 32, _key: GDString | StringName | string = "0000000000000000000000000000000000000000000000000000000000000000", _encrypt_directory: boolean = false): number;
  public add_file(_pck_path: GDString | StringName | string, _source_path: GDString | StringName | string, _encrypt: boolean = false): number;
  public flush(_verbose: boolean = false): number;
}