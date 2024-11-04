
import { TLSOptions } from "@godot/classes/tls_options";
import { WebSocketPeer } from "@godot/classes/web_socket_peer";
import { MultiplayerPeer } from "@godot/classes/multiplayer_peer";
export declare class WebSocketMultiplayerPeer extends MultiplayerPeer{
  public create_client(_url: GDString | StringName | string, _tls_client_options: TLSOptions = null): number;
  public create_server(_port: number, _bind_address: GDString | StringName | string = "*", _tls_server_options: TLSOptions = null): number;
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
  public get supported_protocols(): PackedStringArray;
  public set supported_protocols(value): void;
  public get handshake_headers(): PackedStringArray;
  public set handshake_headers(value): void;
  public get inbound_buffer_size(): number;
  public set inbound_buffer_size(value): void;
  public get outbound_buffer_size(): number;
  public set outbound_buffer_size(value): void;
  public get handshake_timeout(): number;
  public set handshake_timeout(value): void;
  public get max_queued_packets(): number;
  public set max_queued_packets(value): void;
}