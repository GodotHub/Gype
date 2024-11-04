
import { PacketPeerUDP } from "@godot/classes/packet_peer_udp";
import { RefCounted } from "@godot/classes/ref_counted";
export declare class UDPServer extends RefCounted{
  public listen(_port: number, _bind_address: GDString | StringName | string = "*"): number;
  public poll(): number;
  public is_connection_available(): boolean;
  public get_local_port(): number;
  public is_listening(): boolean;
  public take_connection(): PacketPeerUDP;
  public stop(): void;
  public set_max_pending_connections(_max_pending_connections: number): void;
  public get_max_pending_connections(): number;
  public get max_pending_connections(): number;
  public set max_pending_connections(value): void;
}