
import { GodotObject } from "@godot/classes/godot_object";
import { MultiplayerPeer } from "@godot/classes/multiplayer_peer";
import { RefCounted } from "@godot/classes/ref_counted";
export declare class MultiplayerAPI extends RefCounted{
  public has_multiplayer_peer(): boolean;
  public get_multiplayer_peer(): MultiplayerPeer;
  public set_multiplayer_peer(_peer: MultiplayerPeer): void;
  public get_unique_id(): number;
  public is_server(): boolean;
  public get_remote_sender_id(): number;
  public poll(): number;
  public rpc(_peer: number, _object: GodotObject, _method: GDString | StringName | string, _arguments: GDArray = []): number;
  public object_configuration_add(_object: GodotObject, _configuration: any): number;
  public object_configuration_remove(_object: GodotObject, _configuration: any): number;
  public get_peers(): PackedInt32Array;
  public
 static set_default_interface(_interface_name: GDString | StringName | string): void;
  public
 static get_default_interface(): StringName;
  public
 static create_default_interface(): MultiplayerAPI;
  public get multiplayer_peer(): MultiplayerPeer;
  public set multiplayer_peer(value): void;
  static RPCMode = {
    RPC_MODE_DISABLED = 0,
    RPC_MODE_ANY_PEER = 1,
    RPC_MODE_AUTHORITY = 2,
  }
  public get peer_connected(): Signal;
  public get peer_disconnected(): Signal;
  public get connected_to_server(): Signal;
  public get connection_failed(): Signal;
  public get server_disconnected(): Signal;
}