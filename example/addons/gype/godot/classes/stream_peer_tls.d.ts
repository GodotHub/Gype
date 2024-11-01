
import { TLSOptions } from "@godot/classes/tls_options";
import { StreamPeer } from "@godot/classes/stream_peer";

export declare class StreamPeerTLS extends StreamPeer{
  public poll(): void;
  public accept_stream(_stream: StreamPeer, _server_options: TLSOptions): number;
  public connect_to_stream(_stream: StreamPeer, _common_name: String | StringName | string, _client_options: TLSOptions): number;
  public get_status(): number;
  public get_stream(): StreamPeer;
  public disconnect_from_stream(): void;
  static Status = {
    STATUS_DISCONNECTED = 0,
    STATUS_HANDSHAKING = 1,
    STATUS_CONNECTED = 2,
    STATUS_ERROR = 3,
    STATUS_ERROR_HOSTNAME_MISMATCH = 4,
  }
}