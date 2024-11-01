
import { TextureLayered } from "@godot/classes/texture_layered";
import { Resource } from "@godot/classes/resource";
import { TextureLayered } from "@godot/classes/texture_layered";

export declare class LightmapGIData extends Resource{
  public set_lightmap_textures(_light_textures: GDArray): void;
  public get_lightmap_textures(): GDArray;
  public set_uses_spherical_harmonics(_uses_spherical_harmonics: boolean): void;
  public is_using_spherical_harmonics(): boolean;
  public add_user(_path: NodePath, _uv_scale: Rect2, _slice_index: number, _sub_instance: number): void;
  public get_user_count(): number;
  public get_user_path(_user_idx: number): NodePath;
  public clear_users(): void;
  public set_light_texture(_light_texture: TextureLayered): void;
  public get_light_texture(): TextureLayered;
  public get lightmap_textures(): GDArray {
    get_lightmap_textures();
  }
  public set lightmap_textures(value): void {
    set_lightmap_textures(value);
  }
  public get uses_spherical_harmonics(): boolean {
    is_using_spherical_harmonics();
  }
  public set uses_spherical_harmonics(value): void {
    set_uses_spherical_harmonics(value);
  }
  public get user_data(): GDArray {
    _get_user_data();
  }
  public set user_data(value): void {
    _set_user_data(value);
  }
  public get probe_data(): Dictionary {
    _get_probe_data();
  }
  public set probe_data(value): void {
    _set_probe_data(value);
  }
  public get light_texture(): TextureLayered {
    get_light_texture();
  }
  public set light_texture(value): void {
    set_light_texture(value);
  }
  public get light_textures(): GDArray {
    _get_light_textures_data();
  }
  public set light_textures(value): void {
    _set_light_textures_data(value);
  }
}