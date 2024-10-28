
import { WebRTCDataChannel } from "@godot/classes/web_rtc_data_channel";

export declare class WebRTCDataChannelExtension extends WebRTCDataChannel{
  public _get_packet(_r_buffer: const uint8_t **, _r_buffer_size: int32_t*): number;
  public _put_packet(_p_buffer: const uint8_t*, _p_buffer_size: number): number;
  public _get_available_packet_count(): number;
  public _get_max_packet_size(): number;
  public _poll(): number;
  public _close(): void;
  public _set_write_mode(_p_write_mode: number): void;
  public _get_write_mode(): number;
  public _was_string_packet(): boolean;
  public _get_ready_state(): number;
  public _get_label(): String;
  public _is_ordered(): boolean;
  public _get_id(): number;
  public _get_max_packet_life_time(): number;
  public _get_max_retransmits(): number;
  public _get_protocol(): String;
  public _is_negotiated(): boolean;
  public _get_buffered_amount(): number;
}