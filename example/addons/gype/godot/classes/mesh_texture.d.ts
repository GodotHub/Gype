
import { Mesh } from "@godot/classes/mesh";
import { Texture2D } from "@godot/classes/texture2d";

export declare class MeshTexture extends Texture2D{
  public set_mesh(_mesh: Mesh): void;
  public get_mesh(): Mesh;
  public set_image_size(_size: Vector2): void;
  public get_image_size(): Vector2;
  public set_base_texture(_texture: Texture2D): void;
  public get_base_texture(): Texture2D;
  public get mesh(): Mesh {
    get_mesh();
  }
  public set mesh(value: Mesh): void {
    set_mesh(value);
  }
  public get base_texture(): Texture2D {
    get_base_texture();
  }
  public set base_texture(value: Texture2D): void {
    set_base_texture(value);
  }
  public get image_size(): Vector2 {
    get_image_size();
  }
  public set image_size(value: Vector2): void {
    set_image_size(value);
  }
}