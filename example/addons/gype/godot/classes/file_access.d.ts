
import { RefCounted } from "@godot/classes/ref_counted";

export declare class FileAccess extends RefCounted{
  public open(_path: String | StringName | string, _flags: number): FileAccess;
  public open_encrypted(_path: String | StringName | string, _mode_flags: number, _key: PackedByteArray): FileAccess;
  public open_encrypted_with_pass(_path: String | StringName | string, _mode_flags: number, _pass: String | StringName | string): FileAccess;
  public open_compressed(_path: String | StringName | string, _mode_flags: number, _compression_mode: number): FileAccess;
  public get_open_error(): number;
  public get_file_as_bytes(_path: String | StringName | string): PackedByteArray;
  public get_file_as_string(_path: String | StringName | string): String;
  public resize(_length: number): number;
  public flush(): void;
  public get_path(): String;
  public get_path_absolute(): String;
  public is_open(): boolean;
  public seek(_position: number): void;
  public seek_end(_position: number): void;
  public get_position(): number;
  public get_length(): number;
  public eof_reached(): boolean;
  public get_8(): number;
  public get_16(): number;
  public get_32(): number;
  public get_64(): number;
  public get_float(): number;
  public get_double(): number;
  public get_real(): number;
  public get_buffer(_length: number): PackedByteArray;
  public get_line(): String;
  public get_csv_line(_delim: String | StringName | string): PackedStringArray;
  public get_as_text(_skip_cr: boolean): String;
  public get_md5(_path: String | StringName | string): String;
  public get_sha256(_path: String | StringName | string): String;
  public is_big_endian(): boolean;
  public set_big_endian(_big_endian: boolean): void;
  public get_error(): number;
  public get_var(_allow_objects: boolean): any;
  public store_8(_value: number): void;
  public store_16(_value: number): void;
  public store_32(_value: number): void;
  public store_64(_value: number): void;
  public store_float(_value: number): void;
  public store_double(_value: number): void;
  public store_real(_value: number): void;
  public store_buffer(_buffer: PackedByteArray): void;
  public store_line(_line: String | StringName | string): void;
  public store_csv_line(_values: PackedStringArray, _delim: String | StringName | string): void;
  public store_string(_string: String | StringName | string): void;
  public store_var(_value: any, _full_objects: boolean): void;
  public store_pascal_string(_string: String | StringName | string): void;
  public get_pascal_string(): String;
  public close(): void;
  public file_exists(_path: String | StringName | string): boolean;
  public get_modified_time(_file: String | StringName | string): number;
  public get_unix_permissions(_file: String | StringName | string): number;
  public set_unix_permissions(_file: String | StringName | string, _permissions: number): number;
  public get_hidden_attribute(_file: String | StringName | string): boolean;
  public set_hidden_attribute(_file: String | StringName | string, _hidden: boolean): number;
  public set_read_only_attribute(_file: String | StringName | string, _ro: boolean): number;
  public get_read_only_attribute(_file: String | StringName | string): boolean;
  public get big_endian(): boolean {
    is_big_endian();
  }
  public set big_endian(value): void {
    set_big_endian(value);
  }
  static ModeFlags = {
    READ = 1,
    WRITE = 2,
    READ_WRITE = 3,
    WRITE_READ = 7,
  }
  static CompressionMode = {
    COMPRESSION_FASTLZ = 0,
    COMPRESSION_DEFLATE = 1,
    COMPRESSION_ZSTD = 2,
    COMPRESSION_GZIP = 3,
    COMPRESSION_BROTLI = 4,
  }
  static UnixPermissionFlags = {
    UNIX_READ_OWNER = 256,
    UNIX_WRITE_OWNER = 128,
    UNIX_EXECUTE_OWNER = 64,
    UNIX_READ_GROUP = 32,
    UNIX_WRITE_GROUP = 16,
    UNIX_EXECUTE_GROUP = 8,
    UNIX_READ_OTHER = 4,
    UNIX_WRITE_OTHER = 2,
    UNIX_EXECUTE_OTHER = 1,
    UNIX_SET_USER_ID = 2048,
    UNIX_SET_GROUP_ID = 1024,
    UNIX_RESTRICTED_DELETE = 512,
  }
}