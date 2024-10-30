
import { PacketPeer } from "@godot/classes/packet_peer";

export declare class PacketPeerUDP extends PacketPeer{
  public bind(_port: number, _bind_address: String | StringName | string, _recv_buf_size: number): number;
  public close(): void;
  public wait(): number;
  public is_bound(): boolean;
  public connect_to_host(_host: String | StringName | string, _port: number): number;
  public is_socket_connected(): boolean;
  public get_packet_ip(): String;
  public get_packet_port(): number;
  public get_local_port(): number;
  public set_dest_address(_host: String | StringName | string, _port: number): number;
  public set_broadcast_enabled(_enabled: boolean): void;
  public join_multicast_group(_multicast_address: String | StringName | string, _interface_name: String | StringName | string): number;
  public leave_multicast_group(_multicast_address: String | StringName | string, _interface_name: String | StringName | string): number;
}