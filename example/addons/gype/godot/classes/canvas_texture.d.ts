
import { Texture2D } from "@godot/classes/texture2d";

export declare class CanvasTexture extends Texture2D{
  public set_diffuse_texture(_texture: Texture2D): void;
  public get_diffuse_texture(): Texture2D;
  public set_normal_texture(_texture: Texture2D): void;
  public get_normal_texture(): Texture2D;
  public set_specular_texture(_texture: Texture2D): void;
  public get_specular_texture(): Texture2D;
  public set_specular_color(_color: Color): void;
  public get_specular_color(): Color;
  public set_specular_shininess(_shininess: number): void;
  public get_specular_shininess(): number;
  public set_texture_filter(_filter: number): void;
  public get_texture_filter(): number;
  public set_texture_repeat(_repeat: number): void;
  public get_texture_repeat(): number;
  public get diffuse_texture(): Texture2D {
    get_diffuse_texture();
  }
  public set diffuse_texture(value): void {
    set_diffuse_texture(value);
  }
  public get normal_texture(): Texture2D {
    get_normal_texture();
  }
  public set normal_texture(value): void {
    set_normal_texture(value);
  }
  public get specular_texture(): Texture2D {
    get_specular_texture();
  }
  public set specular_texture(value): void {
    set_specular_texture(value);
  }
  public get specular_color(): Color {
    get_specular_color();
  }
  public set specular_color(value): void {
    set_specular_color(value);
  }
  public get specular_shininess(): number {
    get_specular_shininess();
  }
  public set specular_shininess(value): void {
    set_specular_shininess(value);
  }
  public get texture_filter(): number {
    get_texture_filter();
  }
  public set texture_filter(value): void {
    set_texture_filter(value);
  }
  public get texture_repeat(): number {
    get_texture_repeat();
  }
  public set texture_repeat(value): void {
    set_texture_repeat(value);
  }
}