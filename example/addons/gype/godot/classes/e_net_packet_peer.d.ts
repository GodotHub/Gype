
import { PacketPeer } from "@godot/classes/packet_peer";
export declare class ENetPacketPeer extends PacketPeer{
  public peer_disconnect(_data: number = 0): void;
  public peer_disconnect_later(_data: number = 0): void;
  public peer_disconnect_now(_data: number = 0): void;
  public ping(): void;
  public ping_interval(_ping_interval: number): void;
  public reset(): void;
  public send(_channel: number, _packet: PackedByteArray, _flags: number): number;
  public throttle_configure(_interval: number, _acceleration: number, _deceleration: number): void;
  public set_timeout(_timeout: number, _timeout_min: number, _timeout_max: number): void;
  public get_remote_address(): String;
  public get_remote_port(): number;
  public get_statistic(_statistic: number): number;
  public get_state(): number;
  public get_channels(): number;
  public is_active(): boolean;
  static PeerState = {
    STATE_DISCONNECTED = 0,
    STATE_CONNECTING = 1,
    STATE_ACKNOWLEDGING_CONNECT = 2,
    STATE_CONNECTION_PENDING = 3,
    STATE_CONNECTION_SUCCEEDED = 4,
    STATE_CONNECTED = 5,
    STATE_DISCONNECT_LATER = 6,
    STATE_DISCONNECTING = 7,
    STATE_ACKNOWLEDGING_DISCONNECT = 8,
    STATE_ZOMBIE = 9,
  }
  static PeerStatistic = {
    PEER_PACKET_LOSS = 0,
    PEER_PACKET_LOSS_VARIANCE = 1,
    PEER_PACKET_LOSS_EPOCH = 2,
    PEER_ROUND_TRIP_TIME = 3,
    PEER_ROUND_TRIP_TIME_VARIANCE = 4,
    PEER_LAST_ROUND_TRIP_TIME = 5,
    PEER_LAST_ROUND_TRIP_TIME_VARIANCE = 6,
    PEER_PACKET_THROTTLE = 7,
    PEER_PACKET_THROTTLE_LIMIT = 8,
    PEER_PACKET_THROTTLE_COUNTER = 9,
    PEER_PACKET_THROTTLE_EPOCH = 10,
    PEER_PACKET_THROTTLE_ACCELERATION = 11,
    PEER_PACKET_THROTTLE_DECELERATION = 12,
    PEER_PACKET_THROTTLE_INTERVAL = 13,
  }
}