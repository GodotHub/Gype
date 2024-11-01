
import { RefCounted } from "@godot/classes/ref_counted";
import { PacketPeerUDP } from "@godot/classes/packet_peer_udp";

export declare class UDPServer extends RefCounted{
  public listen(_port: number, _bind_address: String | StringName | string): number;
  public poll(): number;
  public is_connection_available(): boolean;
  public get_local_port(): number;
  public is_listening(): boolean;
  public take_connection(): PacketPeerUDP;
  public stop(): void;
  public set_max_pending_connections(_max_pending_connections: number): void;
  public get_max_pending_connections(): number;
  public get max_pending_connections(): number {
    get_max_pending_connections();
  }
  public set max_pending_connections(value): void {
    set_max_pending_connections(value);
  }
}