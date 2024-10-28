
import { StreamPeer } from "@godot/classes/stream_peer";

export declare class StreamPeerExtension extends StreamPeer{
  public _get_data(_r_buffer: uint8_t*, _r_bytes: number, _r_received: int32_t*): number;
  public _get_partial_data(_r_buffer: uint8_t*, _r_bytes: number, _r_received: int32_t*): number;
  public _put_data(_p_data: const uint8_t*, _p_bytes: number, _r_sent: int32_t*): number;
  public _put_partial_data(_p_data: const uint8_t*, _p_bytes: number, _r_sent: int32_t*): number;
  public _get_available_bytes(): number;
}