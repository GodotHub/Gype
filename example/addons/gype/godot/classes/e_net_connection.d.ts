
import { ENetPacketPeer } from "@godot/classes/e_net_packet_peer";
import { ENetPacketPeer } from "@godot/classes/e_net_packet_peer";
import { TLSOptions } from "@godot/classes/tls_options";
import { RefCounted } from "@godot/classes/ref_counted";


export declare class ENetConnection extends RefCounted{
  public create_host_bound(_bind_address: GDString | StringName | string, _bind_port: number, _max_peers: number, _max_channels: number, _in_bandwidth: number, _out_bandwidth: number): number;
  public create_host(_max_peers: number, _max_channels: number, _in_bandwidth: number, _out_bandwidth: number): number;
  public destroy(): void;
  public connect_to_host(_address: GDString | StringName | string, _port: number, _channels: number, _data: number): ENetPacketPeer;
  public service(_timeout: number): GDArray;
  public flush(): void;
  public bandwidth_limit(_in_bandwidth: number, _out_bandwidth: number): void;
  public channel_limit(_limit: number): void;
  public broadcast(_channel: number, _packet: PackedByteArray, _flags: number): void;
  public compress(_mode: number): void;
  public dtls_server_setup(_server_options: TLSOptions): number;
  public dtls_client_setup(_hostname: GDString | StringName | string, _client_options: TLSOptions): number;
  public refuse_new_connections(_refuse: boolean): void;
  public pop_statistic(_statistic: number): number;
  public get_max_channels(): number;
  public get_local_port(): number;
  public get_peers(): GDArray;
  public socket_send(_destination_address: GDString | StringName | string, _destination_port: number, _packet: PackedByteArray): void;
  static CompressionMode = {
    COMPRESS_NONE = 0,
    COMPRESS_RANGE_CODER = 1,
    COMPRESS_FASTLZ = 2,
    COMPRESS_ZLIB = 3,
    COMPRESS_ZSTD = 4,
  }
  static EventType = {
    EVENT_ERROR = -1,
    EVENT_NONE = 0,
    EVENT_CONNECT = 1,
    EVENT_DISCONNECT = 2,
    EVENT_RECEIVE = 3,
  }
  static HostStatistic = {
    HOST_TOTAL_SENT_DATA = 0,
    HOST_TOTAL_SENT_PACKETS = 1,
    HOST_TOTAL_RECEIVED_DATA = 2,
    HOST_TOTAL_RECEIVED_PACKETS = 3,
  }
}