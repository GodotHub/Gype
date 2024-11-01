
import { MultiplayerPeer } from "@godot/classes/multiplayer_peer";
import { TLSOptions } from "@godot/classes/tls_options";
import { WebSocketPeer } from "@godot/classes/web_socket_peer";

export declare class WebSocketMultiplayerPeer extends MultiplayerPeer{
  public create_client(_url: String | StringName | string, _tls_client_options: TLSOptions): number;
  public create_server(_port: number, _bind_address: String | StringName | string, _tls_server_options: TLSOptions): number;
  public get_peer(_peer_id: number): WebSocketPeer;
  public get_peer_address(_id: number): String;
  public get_peer_port(_id: number): number;
  public get_supported_protocols(): PackedStringArray;
  public set_supported_protocols(_protocols: PackedStringArray): void;
  public get_handshake_headers(): PackedStringArray;
  public set_handshake_headers(_protocols: PackedStringArray): void;
  public get_inbound_buffer_size(): number;
  public set_inbound_buffer_size(_buffer_size: number): void;
  public get_outbound_buffer_size(): number;
  public set_outbound_buffer_size(_buffer_size: number): void;
  public get_handshake_timeout(): number;
  public set_handshake_timeout(_timeout: number): void;
  public set_max_queued_packets(_max_queued_packets: number): void;
  public get_max_queued_packets(): number;
  public get supported_protocols(): PackedStringArray {
    get_supported_protocols();
  }
  public set supported_protocols(value): void {
    set_supported_protocols(value);
  }
  public get handshake_headers(): PackedStringArray {
    get_handshake_headers();
  }
  public set handshake_headers(value): void {
    set_handshake_headers(value);
  }
  public get inbound_buffer_size(): number {
    get_inbound_buffer_size();
  }
  public set inbound_buffer_size(value): void {
    set_inbound_buffer_size(value);
  }
  public get outbound_buffer_size(): number {
    get_outbound_buffer_size();
  }
  public set outbound_buffer_size(value): void {
    set_outbound_buffer_size(value);
  }
  public get handshake_timeout(): number {
    get_handshake_timeout();
  }
  public set handshake_timeout(value): void {
    set_handshake_timeout(value);
  }
  public get max_queued_packets(): number {
    get_max_queued_packets();
  }
  public set max_queued_packets(value): void {
    set_max_queued_packets(value);
  }
}