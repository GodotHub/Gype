
import { Texture2D } from "@godot/classes/texture2d";
import { Resource } from "@godot/classes/resource";
export declare class Shader extends Resource{
  public get_mode(): number;
  public set_code(_code: GDString | StringName | string): void;
  public get_code(): String;
  public set_default_texture_parameter(_name: GDString | StringName | string, _texture: Texture2D, _index: number = 0): void;
  public get_default_texture_parameter(_name: GDString | StringName | string, _index: number = 0): Texture2D;
  public get_shader_uniform_list(_get_groups: boolean = false): GDArray;
  public get code(): String;
  public set code(value): void;
  static Mode = {
    MODE_SPATIAL = 0,
    MODE_CANVAS_ITEM = 1,
    MODE_PARTICLES = 2,
    MODE_SKY = 3,
    MODE_FOG = 4,
  }
}