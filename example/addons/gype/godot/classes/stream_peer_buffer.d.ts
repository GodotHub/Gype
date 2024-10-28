
import { StreamPeer } from "@godot/classes/stream_peer";

export declare class StreamPeerBuffer extends StreamPeer{
  public seek(_position: number): void;
  public get_size(): number;
  public get_position(): number;
  public resize(_size: number): void;
  public set_data_array(_data: PackedByteArray): void;
  public get_data_array(): PackedByteArray;
  public clear(): void;
  public duplicate(): StreamPeerBuffer;
  public get data_array(): PackedByteArray {
    get_data_array();
  }
  public set data_array(value: PackedByteArray): void {
    set_data_array(value);
  }
}