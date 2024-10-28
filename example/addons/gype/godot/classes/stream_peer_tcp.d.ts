
import { StreamPeer } from "@godot/classes/stream_peer";

export declare class StreamPeerTCP extends StreamPeer{
  public bind(_port: number, _host: String): number;
  public connect_to_host(_host: String, _port: number): number;
  public poll(): number;
  public get_status(): number;
  public get_connected_host(): String;
  public get_connected_port(): number;
  public get_local_port(): number;
  public disconnect_from_host(): void;
  public set_no_delay(_enabled: boolean): void;
  static Status = {
    STATUS_NONE = 0,
    STATUS_CONNECTING = 1,
    STATUS_CONNECTED = 2,
    STATUS_ERROR = 3,
  }
}