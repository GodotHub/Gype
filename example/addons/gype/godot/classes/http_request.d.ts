
import { TLSOptions } from "@godot/classes/tls_options";
import { Node } from "@godot/classes/node";

export declare class HTTPRequest extends Node{
  public request(_url: String | StringName | string, _custom_headers: PackedStringArray, _method: number, _request_data: String | StringName | string): number;
  public request_raw(_url: String | StringName | string, _custom_headers: PackedStringArray, _method: number, _request_data_raw: PackedByteArray): number;
  public cancel_request(): void;
  public set_tls_options(_client_options: TLSOptions): void;
  public get_http_client_status(): number;
  public set_use_threads(_enable: boolean): void;
  public is_using_threads(): boolean;
  public set_accept_gzip(_enable: boolean): void;
  public is_accepting_gzip(): boolean;
  public set_body_size_limit(_bytes: number): void;
  public get_body_size_limit(): number;
  public set_max_redirects(_amount: number): void;
  public get_max_redirects(): number;
  public set_download_file(_path: String | StringName | string): void;
  public get_download_file(): String;
  public get_downloaded_bytes(): number;
  public get_body_size(): number;
  public set_timeout(_timeout: number): void;
  public get_timeout(): number;
  public set_download_chunk_size(_chunk_size: number): void;
  public get_download_chunk_size(): number;
  public set_http_proxy(_host: String | StringName | string, _port: number): void;
  public set_https_proxy(_host: String | StringName | string, _port: number): void;
  public get download_file(): String {
    get_download_file();
  }
  public set download_file(value): void {
    set_download_file(value);
  }
  public get download_chunk_size(): number {
    get_download_chunk_size();
  }
  public set download_chunk_size(value): void {
    set_download_chunk_size(value);
  }
  public get use_threads(): boolean {
    is_using_threads();
  }
  public set use_threads(value): void {
    set_use_threads(value);
  }
  public get accept_gzip(): boolean {
    is_accepting_gzip();
  }
  public set accept_gzip(value): void {
    set_accept_gzip(value);
  }
  public get body_size_limit(): number {
    get_body_size_limit();
  }
  public set body_size_limit(value): void {
    set_body_size_limit(value);
  }
  public get max_redirects(): number {
    get_max_redirects();
  }
  public set max_redirects(value): void {
    set_max_redirects(value);
  }
  public get timeout(): number {
    get_timeout();
  }
  public set timeout(value): void {
    set_timeout(value);
  }
  static Result = {
    RESULT_SUCCESS = 0,
    RESULT_CHUNKED_BODY_SIZE_MISMATCH = 1,
    RESULT_CANT_CONNECT = 2,
    RESULT_CANT_RESOLVE = 3,
    RESULT_CONNECTION_ERROR = 4,
    RESULT_TLS_HANDSHAKE_ERROR = 5,
    RESULT_NO_RESPONSE = 6,
    RESULT_BODY_SIZE_LIMIT_EXCEEDED = 7,
    RESULT_BODY_DECOMPRESS_FAILED = 8,
    RESULT_REQUEST_FAILED = 9,
    RESULT_DOWNLOAD_FILE_CANT_OPEN = 10,
    RESULT_DOWNLOAD_FILE_WRITE_ERROR = 11,
    RESULT_REDIRECT_LIMIT_REACHED = 12,
    RESULT_TIMEOUT = 13,
  }
  public get request_completed(): Signal;
}