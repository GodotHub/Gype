
import { RefCounted } from "@godot/classes/ref_counted";

export declare class PCKPacker extends RefCounted{
  public pck_start(_pck_name: String, _alignment: number, _key: String, _encrypt_directory: boolean): number;
  public add_file(_pck_path: String, _source_path: String, _encrypt: boolean): number;
  public flush(_verbose: boolean): number;
}