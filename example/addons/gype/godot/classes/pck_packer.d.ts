
import { RefCounted } from "@godot/classes/ref_counted";


export declare class PCKPacker extends RefCounted{
  public pck_start(_pck_name: GDString | StringName | string, _alignment: number, _key: GDString | StringName | string, _encrypt_directory: boolean): number;
  public add_file(_pck_path: GDString | StringName | string, _source_path: GDString | StringName | string, _encrypt: boolean): number;
  public flush(_verbose: boolean): number;
}