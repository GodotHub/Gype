
import { TextureLayered } from "@godot/classes/texture_layered";
import { TextureLayered } from "@godot/classes/texture_layered";
import { Resource } from "@godot/classes/resource";
export declare class LightmapGIData extends Resource{
  public set_lightmap_textures(_light_textures: GDArray): void;
  public get_lightmap_textures(): GDArray;
  public set_uses_spherical_harmonics(_uses_spherical_harmonics: boolean): void;
  public is_using_spherical_harmonics(): boolean;
  public add_user(_path: GDString | NodePath | string, _uv_scale: Rect2, _slice_index: number, _sub_instance: number): void;
  public get_user_count(): number;
  public get_user_path(_user_idx: number): NodePath;
  public clear_users(): void;
  public set_light_texture(_light_texture: TextureLayered): void;
  public get_light_texture(): TextureLayered;
  public get lightmap_textures(): GDArray;
  public set lightmap_textures(value): void;
  public get uses_spherical_harmonics(): boolean;
  public set uses_spherical_harmonics(value): void;
  public get user_data(): GDArray;
  public set user_data(value): void;
  public get probe_data(): Dictionary;
  public set probe_data(value): void;
  public get light_texture(): TextureLayered;
  public set light_texture(value): void;
  public get light_textures(): GDArray;
  public set light_textures(value): void;
}