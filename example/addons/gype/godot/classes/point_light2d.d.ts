
import { Light2D } from "@godot/classes/light2d";
import { Texture2D } from "@godot/classes/texture2d";


export declare class PointLight2D extends Light2D{
  public set_texture(_texture: Texture2D): void;
  public get_texture(): Texture2D;
  public set_texture_offset(_texture_offset: Vector2): void;
  public get_texture_offset(): Vector2;
  public set_texture_scale(_texture_scale: number): void;
  public get_texture_scale(): number;
  public get texture(): Texture2D;
  public set texture(value): void;
  public get offset(): Vector2;
  public set offset(value): void;
  public get texture_scale(): number;
  public set texture_scale(value): void;
  public get height(): number;
  public set height(value): void;
}