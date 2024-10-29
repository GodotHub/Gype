
import { Resource } from "@godot/classes/resource";

export declare class Image extends Resource{
  public get_width(): number;
  public get_height(): number;
  public get_size(): Vector2i;
  public has_mipmaps(): boolean;
  public get_format(): number;
  public get_data(): PackedByteArray;
  public get_data_size(): number;
  public convert(_format: number): void;
  public get_mipmap_count(): number;
  public get_mipmap_offset(_mipmap: number): number;
  public resize_to_po2(_square: boolean, _interpolation: number): void;
  public resize(_width: number, _height: number, _interpolation: number): void;
  public shrink_x2(): void;
  public crop(_width: number, _height: number): void;
  public flip_x(): void;
  public flip_y(): void;
  public generate_mipmaps(_renormalize: boolean): number;
  public clear_mipmaps(): void;
  public create(_width: number, _height: number, _use_mipmaps: boolean, _format: number): Image;
  public create_empty(_width: number, _height: number, _use_mipmaps: boolean, _format: number): Image;
  public create_from_data(_width: number, _height: number, _use_mipmaps: boolean, _format: number, _data: PackedByteArray): Image;
  public set_data(_width: number, _height: number, _use_mipmaps: boolean, _format: number, _data: PackedByteArray): void;
  public is_empty(): boolean;
  public load(_path: String): number;
  public load_from_file(_path: String): Image;
  public save_png(_path: String): number;
  public save_png_to_buffer(): PackedByteArray;
  public save_jpg(_path: String, _quality: number): number;
  public save_jpg_to_buffer(_quality: number): PackedByteArray;
  public save_exr(_path: String, _grayscale: boolean): number;
  public save_exr_to_buffer(_grayscale: boolean): PackedByteArray;
  public save_webp(_path: String, _lossy: boolean, _quality: number): number;
  public save_webp_to_buffer(_lossy: boolean, _quality: number): PackedByteArray;
  public detect_alpha(): number;
  public is_invisible(): boolean;
  public detect_used_channels(_source: number): number;
  public compress(_mode: number, _source: number, _astc_format: number): number;
  public compress_from_channels(_mode: number, _channels: number, _astc_format: number): number;
  public decompress(): number;
  public is_compressed(): boolean;
  public rotate_90(_direction: number): void;
  public rotate_180(): void;
  public fix_alpha_edges(): void;
  public premultiply_alpha(): void;
  public srgb_to_linear(): void;
  public normal_map_to_xy(): void;
  public rgbe_to_srgb(): Image;
  public bump_map_to_normal_map(_bump_scale: number): void;
  public compute_image_metrics(_compared_image: Image, _use_luma: boolean): Dictionary;
  public blit_rect(_src: Image, _src_rect: Rect2i, _dst: Vector2i): void;
  public blit_rect_mask(_src: Image, _mask: Image, _src_rect: Rect2i, _dst: Vector2i): void;
  public blend_rect(_src: Image, _src_rect: Rect2i, _dst: Vector2i): void;
  public blend_rect_mask(_src: Image, _mask: Image, _src_rect: Rect2i, _dst: Vector2i): void;
  public fill(_color: Color): void;
  public fill_rect(_rect: Rect2i, _color: Color): void;
  public get_used_rect(): Rect2i;
  public get_region(_region: Rect2i): Image;
  public copy_from(_src: Image): void;
  public get_pixelv(_point: Vector2i): Color;
  public get_pixel(_x: number, _y: number): Color;
  public set_pixelv(_point: Vector2i, _color: Color): void;
  public set_pixel(_x: number, _y: number, _color: Color): void;
  public adjust_bcs(_brightness: number, _contrast: number, _saturation: number): void;
  public load_png_from_buffer(_buffer: PackedByteArray): number;
  public load_jpg_from_buffer(_buffer: PackedByteArray): number;
  public load_webp_from_buffer(_buffer: PackedByteArray): number;
  public load_tga_from_buffer(_buffer: PackedByteArray): number;
  public load_bmp_from_buffer(_buffer: PackedByteArray): number;
  public load_ktx_from_buffer(_buffer: PackedByteArray): number;
  public load_svg_from_buffer(_buffer: PackedByteArray, _scale: number): number;
  public load_svg_from_string(_svg_str: String, _scale: number): number;
  public get data(): Dictionary {
    _get_data();
  }
  public set data(value): void {
    _set_data(value);
  }
  static Format = {
    FORMAT_L8 = 0,
    FORMAT_LA8 = 1,
    FORMAT_R8 = 2,
    FORMAT_RG8 = 3,
    FORMAT_RGB8 = 4,
    FORMAT_RGBA8 = 5,
    FORMAT_RGBA4444 = 6,
    FORMAT_RGB565 = 7,
    FORMAT_RF = 8,
    FORMAT_RGF = 9,
    FORMAT_RGBF = 10,
    FORMAT_RGBAF = 11,
    FORMAT_RH = 12,
    FORMAT_RGH = 13,
    FORMAT_RGBH = 14,
    FORMAT_RGBAH = 15,
    FORMAT_RGBE9995 = 16,
    FORMAT_DXT1 = 17,
    FORMAT_DXT3 = 18,
    FORMAT_DXT5 = 19,
    FORMAT_RGTC_R = 20,
    FORMAT_RGTC_RG = 21,
    FORMAT_BPTC_RGBA = 22,
    FORMAT_BPTC_RGBF = 23,
    FORMAT_BPTC_RGBFU = 24,
    FORMAT_ETC = 25,
    FORMAT_ETC2_R11 = 26,
    FORMAT_ETC2_R11S = 27,
    FORMAT_ETC2_RG11 = 28,
    FORMAT_ETC2_RG11S = 29,
    FORMAT_ETC2_RGB8 = 30,
    FORMAT_ETC2_RGBA8 = 31,
    FORMAT_ETC2_RGB8A1 = 32,
    FORMAT_ETC2_RA_AS_RG = 33,
    FORMAT_DXT5_RA_AS_RG = 34,
    FORMAT_ASTC_4x4 = 35,
    FORMAT_ASTC_4x4_HDR = 36,
    FORMAT_ASTC_8x8 = 37,
    FORMAT_ASTC_8x8_HDR = 38,
    FORMAT_MAX = 39,
  }
  static Interpolation = {
    INTERPOLATE_NEAREST = 0,
    INTERPOLATE_BILINEAR = 1,
    INTERPOLATE_CUBIC = 2,
    INTERPOLATE_TRILINEAR = 3,
    INTERPOLATE_LANCZOS = 4,
  }
  static AlphaMode = {
    ALPHA_NONE = 0,
    ALPHA_BIT = 1,
    ALPHA_BLEND = 2,
  }
  static CompressMode = {
    COMPRESS_S3TC = 0,
    COMPRESS_ETC = 1,
    COMPRESS_ETC2 = 2,
    COMPRESS_BPTC = 3,
    COMPRESS_ASTC = 4,
    COMPRESS_MAX = 5,
  }
  static UsedChannels = {
    USED_CHANNELS_L = 0,
    USED_CHANNELS_LA = 1,
    USED_CHANNELS_R = 2,
    USED_CHANNELS_RG = 3,
    USED_CHANNELS_RGB = 4,
    USED_CHANNELS_RGBA = 5,
  }
  static CompressSource = {
    COMPRESS_SOURCE_GENERIC = 0,
    COMPRESS_SOURCE_SRGB = 1,
    COMPRESS_SOURCE_NORMAL = 2,
  }
  static ASTCFormat = {
    ASTC_FORMAT_4x4 = 0,
    ASTC_FORMAT_8x8 = 1,
  }
}