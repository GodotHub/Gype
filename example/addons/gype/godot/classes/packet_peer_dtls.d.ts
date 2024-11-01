
import { TLSOptions } from "@godot/classes/tls_options";
import { PacketPeerUDP } from "@godot/classes/packet_peer_udp";
import { PacketPeer } from "@godot/classes/packet_peer";

export declare class PacketPeerDTLS extends PacketPeer{
  public poll(): void;
  public connect_to_peer(_packet_peer: PacketPeerUDP, _hostname: String | StringName | string, _client_options: TLSOptions): number;
  public get_status(): number;
  public disconnect_from_peer(): void;
  static Status = {
    STATUS_DISCONNECTED = 0,
    STATUS_HANDSHAKING = 1,
    STATUS_CONNECTED = 2,
    STATUS_ERROR = 3,
    STATUS_ERROR_HOSTNAME_MISMATCH = 4,
  }
}