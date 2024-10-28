
import { WebRTCDataChannel } from "@godot/classes/web_rtc_data_channel";
import { RefCounted } from "@godot/classes/ref_counted";

export declare class WebRTCPeerConnection extends RefCounted{
  public set_default_extension(_extension_class: StringName): void;
  public initialize(_configuration: Dictionary): number;
  public create_data_channel(_label: String, _options: Dictionary): WebRTCDataChannel;
  public create_offer(): number;
  public set_local_description(_type: String, _sdp: String): number;
  public set_remote_description(_type: String, _sdp: String): number;
  public add_ice_candidate(_media: String, _index: number, _name: String): number;
  public poll(): number;
  public close(): void;
  public get_connection_state(): number;
  public get_gathering_state(): number;
  public get_signaling_state(): number;
  static ConnectionState = {
    STATE_NEW = 0,
    STATE_CONNECTING = 1,
    STATE_CONNECTED = 2,
    STATE_DISCONNECTED = 3,
    STATE_FAILED = 4,
    STATE_CLOSED = 5,
  }
  static GatheringState = {
    GATHERING_STATE_NEW = 0,
    GATHERING_STATE_GATHERING = 1,
    GATHERING_STATE_COMPLETE = 2,
  }
  static SignalingState = {
    SIGNALING_STATE_STABLE = 0,
    SIGNALING_STATE_HAVE_LOCAL_OFFER = 1,
    SIGNALING_STATE_HAVE_REMOTE_OFFER = 2,
    SIGNALING_STATE_HAVE_LOCAL_PRANSWER = 3,
    SIGNALING_STATE_HAVE_REMOTE_PRANSWER = 4,
    SIGNALING_STATE_CLOSED = 5,
  }
}