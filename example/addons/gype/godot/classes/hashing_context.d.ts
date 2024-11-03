
import { RefCounted } from "@godot/classes/ref_counted";
export declare class HashingContext extends RefCounted{
  public start(_type: number): number;
  public update(_chunk: PackedByteArray): number;
  public finish(): PackedByteArray;
  static HashType = {
    HASH_MD5 = 0,
    HASH_SHA1 = 1,
    HASH_SHA256 = 2,
  }
}