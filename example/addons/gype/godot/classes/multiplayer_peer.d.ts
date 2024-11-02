
import { PacketPeer } from "@godot/classes/packet_peer";


export declare class MultiplayerPeer extends PacketPeer{
  public set_transfer_channel(_channel: number): void;
  public get_transfer_channel(): number;
  public set_transfer_mode(_mode: number): void;
  public get_transfer_mode(): number;
  public set_target_peer(_id: number): void;
  public get_packet_peer(): number;
  public get_packet_channel(): number;
  public get_packet_mode(): number;
  public poll(): void;
  public close(): void;
  public disconnect_peer(_peer: number, _force: boolean): void;
  public get_connection_status(): number;
  public get_unique_id(): number;
  public generate_unique_id(): number;
  public set_refuse_new_connections(_enable: boolean): void;
  public is_refusing_new_connections(): boolean;
  public is_server_relay_supported(): boolean;
  public get refuse_new_connections(): boolean;
  public set refuse_new_connections(value): void;
  public get transfer_mode(): number;
  public set transfer_mode(value): void;
  public get transfer_channel(): number;
  public set transfer_channel(value): void;
  static ConnectionStatus = {
    CONNECTION_DISCONNECTED = 0,
    CONNECTION_CONNECTING = 1,
    CONNECTION_CONNECTED = 2,
  }
  static TransferMode = {
    TRANSFER_MODE_UNRELIABLE = 0,
    TRANSFER_MODE_UNRELIABLE_ORDERED = 1,
    TRANSFER_MODE_RELIABLE = 2,
  }
  public get peer_connected(): Signal;
  public get peer_disconnected(): Signal;
}