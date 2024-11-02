
import { VisualShaderNode } from "@godot/classes/visual_shader_node";
import { Texture2D } from "@godot/classes/texture2d";


export declare class VisualShaderNodeTexture extends VisualShaderNode{
  public set_source(_value: number): void;
  public get_source(): number;
  public set_texture(_value: Texture2D): void;
  public get_texture(): Texture2D;
  public set_texture_type(_value: number): void;
  public get_texture_type(): number;
  public get source(): number;
  public set source(value): void;
  public get texture(): Texture2D;
  public set texture(value): void;
  public get texture_type(): number;
  public set texture_type(value): void;
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