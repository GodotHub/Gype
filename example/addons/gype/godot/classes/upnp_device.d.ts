
import { RefCounted } from "@godot/classes/ref_counted";

export declare class UPNPDevice extends RefCounted{
  public is_valid_gateway(): boolean;
  public query_external_address(): String;
  public add_port_mapping(_port: number, _port_internal: number, _desc: String, _proto: String, _duration: number): number;
  public delete_port_mapping(_port: number, _proto: String): number;
  public set_description_url(_url: String): void;
  public get_description_url(): String;
  public set_service_type(_type: String): void;
  public get_service_type(): String;
  public set_igd_control_url(_url: String): void;
  public get_igd_control_url(): String;
  public set_igd_service_type(_type: String): void;
  public get_igd_service_type(): String;
  public set_igd_our_addr(_addr: String): void;
  public get_igd_our_addr(): String;
  public set_igd_status(_status: number): void;
  public get_igd_status(): number;
  public get description_url(): String {
    get_description_url();
  }
  public set description_url(value: String): void {
    set_description_url(value);
  }
  public get service_type(): String {
    get_service_type();
  }
  public set service_type(value: String): void {
    set_service_type(value);
  }
  public get igd_control_url(): String {
    get_igd_control_url();
  }
  public set igd_control_url(value: String): void {
    set_igd_control_url(value);
  }
  public get igd_service_type(): String {
    get_igd_service_type();
  }
  public set igd_service_type(value: String): void {
    set_igd_service_type(value);
  }
  public get igd_our_addr(): String {
    get_igd_our_addr();
  }
  public set igd_our_addr(value: String): void {
    set_igd_our_addr(value);
  }
  public get igd_status(): number {
    get_igd_status();
  }
  public set igd_status(value: number): void {
    set_igd_status(value);
  }
  static IGDStatus = {
    IGD_STATUS_OK = 0,
    IGD_STATUS_HTTP_ERROR = 1,
    IGD_STATUS_HTTP_EMPTY = 2,
    IGD_STATUS_NO_URLS = 3,
    IGD_STATUS_NO_IGD = 4,
    IGD_STATUS_DISCONNECTED = 5,
    IGD_STATUS_UNKNOWN_DEVICE = 6,
    IGD_STATUS_INVALID_CONTROL = 7,
    IGD_STATUS_MALLOC_ERROR = 8,
    IGD_STATUS_UNKNOWN_ERROR = 9,
  }
}