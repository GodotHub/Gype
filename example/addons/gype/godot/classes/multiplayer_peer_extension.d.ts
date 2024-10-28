
import { MultiplayerPeer } from "@godot/classes/multiplayer_peer";

export declare class MultiplayerPeerExtension extends MultiplayerPeer{
  public _get_packet(_r_buffer: const uint8_t **, _r_buffer_size: int32_t*): number;
  public _put_packet(_p_buffer: const uint8_t*, _p_buffer_size: number): number;
  public _get_available_packet_count(): number;
  public _get_max_packet_size(): number;
  public _get_packet_script(): PackedByteArray;
  public _put_packet_script(_p_buffer: PackedByteArray): number;
  public _get_packet_channel(): number;
  public _get_packet_mode(): number;
  public _set_transfer_channel(_p_channel: number): void;
  public _get_transfer_channel(): number;
  public _set_transfer_mode(_p_mode: number): void;
  public _get_transfer_mode(): number;
  public _set_target_peer(_p_peer: number): void;
  public _get_packet_peer(): number;
  public _is_server(): boolean;
  public _poll(): void;
  public _close(): void;
  public _disconnect_peer(_p_peer: number, _p_force: boolean): void;
  public _get_unique_id(): number;
  public _set_refuse_new_connections(_p_enable: boolean): void;
  public _is_refusing_new_connections(): boolean;
  public _is_server_relay_supported(): boolean;
  public _get_connection_status(): number;
}