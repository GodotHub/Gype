
import { StreamPeer } from "@godot/classes/stream_peer";

export declare class StreamPeerGZIP extends StreamPeer{
  public start_compression(_use_deflate: boolean, _buffer_size: number): number;
  public start_decompression(_use_deflate: boolean, _buffer_size: number): number;
  public finish(): number;
  public clear(): void;
}