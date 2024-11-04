
import { Texture2D } from "@godot/classes/texture2d";
import { Mesh } from "@godot/classes/mesh";
export declare class MeshTexture extends Texture2D{
  public set_mesh(_mesh: Mesh): void;
  public get_mesh(): Mesh;
  public set_image_size(_size: Vector2): void;
  public get_image_size(): Vector2;
  public set_base_texture(_texture: Texture2D): void;
  public get_base_texture(): Texture2D;
  public get mesh(): Mesh;
  public set mesh(value): void;
  public get base_texture(): Texture2D;
  public set base_texture(value): void;
  public get image_size(): Vector2;
  public set image_size(value): void;
}