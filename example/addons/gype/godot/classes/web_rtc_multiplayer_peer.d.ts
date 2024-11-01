
import { MultiplayerPeer } from "@godot/classes/multiplayer_peer";
import { WebRTCPeerConnection } from "@godot/classes/web_rtc_peer_connection";

export declare class WebRTCMultiplayerPeer extends MultiplayerPeer{
  public create_server(_channels_config: GDArray): number;
  public create_client(_peer_id: number, _channels_config: GDArray): number;
  public create_mesh(_peer_id: number, _channels_config: GDArray): number;
  public add_peer(_peer: WebRTCPeerConnection, _peer_id: number, _unreliable_lifetime: number): number;
  public remove_peer(_peer_id: number): void;
  public has_peer(_peer_id: number): boolean;
  public get_peer(_peer_id: number): Dictionary;
  public get_peers(): Dictionary;
}