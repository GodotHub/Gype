
import { Cubemap } from "@godot/classes/cubemap";
import { VisualShaderNode } from "@godot/classes/visual_shader_node";

export declare class VisualShaderNodeCubemap extends VisualShaderNode{
  public set_source(_value: number): void;
  public get_source(): number;
  public set_cube_map(_value: Cubemap): void;
  public get_cube_map(): Cubemap;
  public set_texture_type(_value: number): void;
  public get_texture_type(): number;
  public get source(): number {
    get_source();
  }
  public set source(value: number): void {
    set_source(value);
  }
  public get cube_map(): Cubemap {
    get_cube_map();
  }
  public set cube_map(value: Cubemap): void {
    set_cube_map(value);
  }
  public get texture_type(): number {
    get_texture_type();
  }
  public set texture_type(value: number): void {
    set_texture_type(value);
  }
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