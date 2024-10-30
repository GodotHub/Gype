
import { StreamPeer } from "@godot/classes/stream_peer";
import { PacketPeer } from "@godot/classes/packet_peer";
import { TLSOptions } from "@godot/classes/tls_options";

export declare class WebSocketPeer extends PacketPeer{
  public connect_to_url(_url: String | StringName | string, _tls_client_options: TLSOptions): number;
  public accept_stream(_stream: StreamPeer): number;
  public send(_message: PackedByteArray, _write_mode: number): number;
  public send_text(_message: String | StringName | string): number;
  public was_string_packet(): boolean;
  public poll(): void;
  public close(_code: number, _reason: String | StringName | string): void;
  public get_connected_host(): String;
  public get_connected_port(): number;
  public get_selected_protocol(): String;
  public get_requested_url(): String;
  public set_no_delay(_enabled: boolean): void;
  public get_current_outbound_buffered_amount(): number;
  public get_ready_state(): number;
  public get_close_code(): number;
  public get_close_reason(): String;
  public get_supported_protocols(): PackedStringArray;
  public set_supported_protocols(_protocols: PackedStringArray): void;
  public get_handshake_headers(): PackedStringArray;
  public set_handshake_headers(_protocols: PackedStringArray): void;
  public get_inbound_buffer_size(): number;
  public set_inbound_buffer_size(_buffer_size: number): void;
  public get_outbound_buffer_size(): number;
  public set_outbound_buffer_size(_buffer_size: number): void;
  public set_max_queued_packets(_buffer_size: number): void;
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
  public get max_queued_packets(): number {
    get_max_queued_packets();
  }
  public set max_queued_packets(value): void {
    set_max_queued_packets(value);
  }
  static WriteMode = {
    WRITE_MODE_TEXT = 0,
    WRITE_MODE_BINARY = 1,
  }
  static State = {
    STATE_CONNECTING = 0,
    STATE_OPEN = 1,
    STATE_CLOSING = 2,
    STATE_CLOSED = 3,
  }
}