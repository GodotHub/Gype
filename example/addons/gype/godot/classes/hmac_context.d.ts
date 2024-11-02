
import { RefCounted } from "@godot/classes/ref_counted";


export declare class HMACContext extends RefCounted{
  public start(_hash_type: number, _key: PackedByteArray): number;
  public update(_data: PackedByteArray): number;
  public finish(): PackedByteArray;
}