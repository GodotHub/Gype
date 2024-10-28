
import { MultiplayerAPI } from "@godot/classes/multiplayer_api";
import { MultiplayerPeer } from "@godot/classes/multiplayer_peer";
import { Object } from "@godot/classes/object";

export declare class MultiplayerAPIExtension extends MultiplayerAPI{
  public _poll(): number;
  public _set_multiplayer_peer(_multiplayer_peer: MultiplayerPeer): void;
  public _get_multiplayer_peer(): MultiplayerPeer;
  public _get_unique_id(): number;
  public _get_peer_ids(): PackedInt32Array;
  public _rpc(_peer: number, _object: Object, _method: StringName, _args: GDArray): number;
  public _get_remote_sender_id(): number;
  public _object_configuration_add(_object: Object, _configuration: Variant): number;
  public _object_configuration_remove(_object: Object, _configuration: Variant): number;
}