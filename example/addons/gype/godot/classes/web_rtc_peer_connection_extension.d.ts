
import { WebRTCPeerConnection } from "@godot/classes/web_rtc_peer_connection";
import { WebRTCDataChannel } from "@godot/classes/web_rtc_data_channel";

export declare class WebRTCPeerConnectionExtension extends WebRTCPeerConnection{
  public _get_connection_state(): number;
  public _get_gathering_state(): number;
  public _get_signaling_state(): number;
  public _initialize(_p_config: Dictionary): number;
  public _create_data_channel(_p_label: String, _p_config: Dictionary): WebRTCDataChannel;
  public _create_offer(): number;
  public _set_remote_description(_p_type: String, _p_sdp: String): number;
  public _set_local_description(_p_type: String, _p_sdp: String): number;
  public _add_ice_candidate(_p_sdp_mid_name: String, _p_sdp_mline_index: number, _p_sdp_name: String): number;
  public _poll(): number;
  public _close(): void;
}