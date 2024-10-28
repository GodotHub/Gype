
import { Light2D } from "@godot/classes/light2d";
import { Texture2D } from "@godot/classes/texture2d";

export declare class PointLight2D extends Light2D{
  public set_texture(_texture: Texture2D): void;
  public get_texture(): Texture2D;
  public set_texture_offset(_texture_offset: Vector2): void;
  public get_texture_offset(): Vector2;
  public set_texture_scale(_texture_scale: number): void;
  public get_texture_scale(): number;
  public get texture(): Texture2D {
    get_texture();
  }
  public set texture(value: Texture2D): void {
    set_texture(value);
  }
  public get offset(): Vector2 {
    get_texture_offset();
  }
  public set offset(value: Vector2): void {
    set_texture_offset(value);
  }
  public get texture_scale(): number {
    get_texture_scale();
  }
  public set texture_scale(value: number): void {
    set_texture_scale(value);
  }
  public get height(): number {
    get_height();
  }
  public set height(value: number): void {
    set_height(value);
  }
}