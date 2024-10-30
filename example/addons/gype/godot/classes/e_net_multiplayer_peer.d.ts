
import { ENetConnection } from "@godot/classes/e_net_connection";
import { ENetPacketPeer } from "@godot/classes/e_net_packet_peer";
import { MultiplayerPeer } from "@godot/classes/multiplayer_peer";

export declare class ENetMultiplayerPeer extends MultiplayerPeer{
  public create_server(_port: number, _max_clients: number, _max_channels: number, _in_bandwidth: number, _out_bandwidth: number): number;
  public create_client(_address: String | StringName | string, _port: number, _channel_count: number, _in_bandwidth: number, _out_bandwidth: number, _local_port: number): number;
  public create_mesh(_unique_id: number): number;
  public add_mesh_peer(_peer_id: number, _host: ENetConnection): number;
  public set_bind_ip(_ip: String | StringName | string): void;
  public get_host(): ENetConnection;
  public get_peer(_id: number): ENetPacketPeer;
  public get host(): ENetConnection {
    get_host();
  }
}