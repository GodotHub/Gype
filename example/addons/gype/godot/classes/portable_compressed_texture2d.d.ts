
import { Image } from "@godot/classes/image";
import { Texture2D } from "@godot/classes/texture2d";

export declare class PortableCompressedTexture2D extends Texture2D{
  public create_from_image(_image: Image, _compression_mode: number, _normal_map: boolean, _lossy_quality: number): void;
  public get_format(): number;
  public get_compression_mode(): number;
  public set_size_override(_size: Vector2): void;
  public get_size_override(): Vector2;
  public set_keep_compressed_buffer(_keep: boolean): void;
  public is_keeping_compressed_buffer(): boolean;
  public set_keep_all_compressed_buffers(_keep: boolean): void;
  public is_keeping_all_compressed_buffers(): boolean;
  public get size_override(): Vector2 {
    get_size_override();
  }
  public set size_override(value: Vector2): void {
    set_size_override(value);
  }
  public get keep_compressed_buffer(): boolean {
    is_keeping_compressed_buffer();
  }
  public set keep_compressed_buffer(value: boolean): void {
    set_keep_compressed_buffer(value);
  }
  static CompressionMode = {
    COMPRESSION_MODE_LOSSLESS = 0,
    COMPRESSION_MODE_LOSSY = 1,
    COMPRESSION_MODE_BASIS_UNIVERSAL = 2,
    COMPRESSION_MODE_S3TC = 3,
    COMPRESSION_MODE_ETC2 = 4,
    COMPRESSION_MODE_BPTC = 5,
  }
}