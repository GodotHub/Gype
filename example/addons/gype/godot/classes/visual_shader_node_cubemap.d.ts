
import { VisualShaderNode } from "@godot/classes/visual_shader_node";
import { Cubemap } from "@godot/classes/cubemap";
export declare class VisualShaderNodeCubemap extends VisualShaderNode{
  public set_source(_value: number): void;
  public get_source(): number;
  public set_cube_map(_value: Cubemap): void;
  public get_cube_map(): Cubemap;
  public set_texture_type(_value: number): void;
  public get_texture_type(): number;
  public get source(): number;
  public set source(value): void;
  public get cube_map(): Cubemap;
  public set cube_map(value): void;
  public get texture_type(): number;
  public set texture_type(value): void;
  static Source = {
    SOURCE_TEXTURE = 0,
    SOURCE_PORT = 1,
    SOURCE_MAX = 2,
  }
  static TextureType = {
    TYPE_DATA = 0,
    TYPE_COLOR = 1,
    TYPE_NORMAL_MAP = 2,
    TYPE_MAX = 3,
  }
}