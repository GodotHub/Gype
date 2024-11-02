
import { RefCounted } from "@godot/classes/ref_counted";


export declare class AESContext extends RefCounted{
  public start(_mode: number, _key: PackedByteArray, _iv: PackedByteArray): number;
  public update(_src: PackedByteArray): PackedByteArray;
  public get_iv_state(): PackedByteArray;
  public finish(): void;
  static Mode = {
    MODE_ECB_ENCRYPT = 0,
    MODE_ECB_DECRYPT = 1,
    MODE_CBC_ENCRYPT = 2,
    MODE_CBC_DECRYPT = 3,
    MODE_MAX = 4,
  }
}