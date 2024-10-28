
import { VisualShaderNodeParameter } from "@godot/classes/visual_shader_node_parameter";

export declare class VisualShaderNodeTextureParameter extends VisualShaderNodeParameter{
  public set_texture_type(_type: number): void;
  public get_texture_type(): number;
  public set_color_default(_color: number): void;
  public get_color_default(): number;
  public set_texture_filter(_filter: number): void;
  public get_texture_filter(): number;
  public set_texture_repeat(_repeat: number): void;
  public get_texture_repeat(): number;
  public set_texture_source(_source: number): void;
  public get_texture_source(): number;
  public get texture_type(): number {
    get_texture_type();
  }
  public set texture_type(value: number): void {
    set_texture_type(value);
  }
  public get color_default(): number {
    get_color_default();
  }
  public set color_default(value: number): void {
    set_color_default(value);
  }
  public get texture_filter(): number {
    get_texture_filter();
  }
  public set texture_filter(value: number): void {
    set_texture_filter(value);
  }
  public get texture_repeat(): number {
    get_texture_repeat();
  }
  public set texture_repeat(value: number): void {
    set_texture_repeat(value);
  }
  public get texture_source(): number {
    get_texture_source();
  }
  public set texture_source(value: number): void {
    set_texture_source(value);
  }
  static TextureType = {
    TYPE_DATA = 0,
    TYPE_COLOR = 1,
    TYPE_NORMAL_MAP = 2,
    TYPE_ANISOTROPY = 3,
    TYPE_MAX = 4,
  }
  static ColorDefault = {
    COLOR_DEFAULT_WHITE = 0,
    COLOR_DEFAULT_BLACK = 1,
    COLOR_DEFAULT_TRANSPARENT = 2,
    COLOR_DEFAULT_MAX = 3,
  }
  static TextureFilter = {
    FILTER_DEFAULT = 0,
    FILTER_NEAREST = 1,
    FILTER_LINEAR = 2,
    FILTER_NEAREST_MIPMAP = 3,
    FILTER_LINEAR_MIPMAP = 4,
    FILTER_NEAREST_MIPMAP_ANISOTROPIC = 5,
    FILTER_LINEAR_MIPMAP_ANISOTROPIC = 6,
    FILTER_MAX = 7,
  }
  static TextureRepeat = {
    REPEAT_DEFAULT = 0,
    REPEAT_ENABLED = 1,
    REPEAT_DISABLED = 2,
    REPEAT_MAX = 3,
  }
  static TextureSource = {
    SOURCE_NONE = 0,
    SOURCE_SCREEN = 1,
    SOURCE_DEPTH = 2,
    SOURCE_NORMAL_ROUGHNESS = 3,
    SOURCE_MAX = 4,
  }
}