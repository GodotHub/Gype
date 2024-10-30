
import { MultiplayerAPI } from "@godot/classes/multiplayer_api";

export declare class SceneMultiplayer extends MultiplayerAPI{
  public set_root_path(_path: NodePath): void;
  public get_root_path(): NodePath;
  public clear(): void;
  public disconnect_peer(_id: number): void;
  public get_authenticating_peers(): PackedInt32Array;
  public send_auth(_id: number, _data: PackedByteArray): number;
  public complete_auth(_id: number): number;
  public set_auth_callback(_callback: Callable): void;
  public get_auth_callback(): Callable;
  public set_auth_timeout(_timeout: number): void;
  public get_auth_timeout(): number;
  public set_refuse_new_connections(_refuse: boolean): void;
  public is_refusing_new_connections(): boolean;
  public set_allow_object_decoding(_enable: boolean): void;
  public is_object_decoding_allowed(): boolean;
  public set_server_relay_enabled(_enabled: boolean): void;
  public is_server_relay_enabled(): boolean;
  public send_bytes(_bytes: PackedByteArray, _id: number, _mode: number, _channel: number): number;
  public get_max_sync_packet_size(): number;
  public set_max_sync_packet_size(_size: number): void;
  public get_max_delta_packet_size(): number;
  public set_max_delta_packet_size(_size: number): void;
  public get root_path(): NodePath {
    get_root_path();
  }
  public set root_path(value): void {
    set_root_path(value);
  }
  public get auth_callback(): Callable {
    get_auth_callback();
  }
  public set auth_callback(value): void {
    set_auth_callback(value);
  }
  public get auth_timeout(): number {
    get_auth_timeout();
  }
  public set auth_timeout(value): void {
    set_auth_timeout(value);
  }
  public get allow_object_decoding(): boolean {
    is_object_decoding_allowed();
  }
  public set allow_object_decoding(value): void {
    set_allow_object_decoding(value);
  }
  public get refuse_new_connections(): boolean {
    is_refusing_new_connections();
  }
  public set refuse_new_connections(value): void {
    set_refuse_new_connections(value);
  }
  public get server_relay(): boolean {
    is_server_relay_enabled();
  }
  public set server_relay(value): void {
    set_server_relay_enabled(value);
  }
  public get max_sync_packet_size(): number {
    get_max_sync_packet_size();
  }
  public set max_sync_packet_size(value): void {
    set_max_sync_packet_size(value);
  }
  public get max_delta_packet_size(): number {
    get_max_delta_packet_size();
  }
  public set max_delta_packet_size(value): void {
    set_max_delta_packet_size(value);
  }
  public const peer_authenticating: string = "peer_authenticating";
  public const peer_authentication_failed: string = "peer_authentication_failed";
  public const peer_packet: string = "peer_packet";
}