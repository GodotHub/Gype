
import { RefCounted } from "@godot/classes/ref_counted";
import { MultiplayerPeer } from "@godot/classes/multiplayer_peer";
import { GodotObject } from "@godot/classes/godot_object";

export declare class MultiplayerAPI extends RefCounted{
  public has_multiplayer_peer(): boolean;
  public get_multiplayer_peer(): MultiplayerPeer;
  public set_multiplayer_peer(_peer: MultiplayerPeer): void;
  public get_unique_id(): number;
  public is_server(): boolean;
  public get_remote_sender_id(): number;
  public poll(): number;
  public rpc(_peer: number, _object: Object, _method: String | StringName | string, _arguments: GDArray): number;
  public object_configuration_add(_object: Object, _configuration: any): number;
  public object_configuration_remove(_object: Object, _configuration: any): number;
  public get_peers(): PackedInt32Array;
  public set_default_interface(_interface_name: String | StringName | string): void;
  public get_default_interface(): StringName;
  public create_default_interface(): MultiplayerAPI;
  public get multiplayer_peer(): MultiplayerPeer {
    get_multiplayer_peer();
  }
  public set multiplayer_peer(value): void {
    set_multiplayer_peer(value);
  }
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