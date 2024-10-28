
import { Texture2D } from "@godot/classes/texture2d";
import { VisualShaderNode } from "@godot/classes/visual_shader_node";

export declare class VisualShaderNodeTexture extends VisualShaderNode{
  public set_source(_value: number): void;
  public get_source(): number;
  public set_texture(_value: Texture2D): void;
  public get_texture(): Texture2D;
  public set_texture_type(_value: number): void;
  public get_texture_type(): number;
  public get source(): number {
    get_source();
  }
  public set source(value: number): void {
    set_source(value);
  }
  public get texture(): Texture2D {
    get_texture();
  }
  public set texture(value: Texture2D): void {
    set_texture(value);
  }
  public get texture_type(): number {
    get_texture_type();
  }
  public set texture_type(value: number): void {
    set_texture_type(value);
  }
  static Source = {
    SOURCE_TEXTURE = 0,
    SOURCE_SCREEN = 1,
    SOURCE_2D_TEXTURE = 2,
    SOURCE_2D_NORMAL = 3,
    SOURCE_DEPTH = 4,
    SOURCE_PORT = 5,
    SOURCE_3D_NORMAL = 6,
    SOURCE_ROUGHNESS = 7,
    SOURCE_MAX = 8,
  }
  static TextureType = {
    TYPE_DATA = 0,
    TYPE_COLOR = 1,
    TYPE_NORMAL_MAP = 2,
    TYPE_MAX = 3,
  }
}