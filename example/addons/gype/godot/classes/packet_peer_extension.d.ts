
import { PacketPeer } from "@godot/classes/packet_peer";

export declare class PacketPeerExtension extends PacketPeer{
  public _get_packet(_r_buffer: const uint8_t **, _r_buffer_size: int32_t*): number;
  public _put_packet(_p_buffer: const uint8_t*, _p_buffer_size: number): number;
  public _get_available_packet_count(): number;
  public _get_max_packet_size(): number;
}