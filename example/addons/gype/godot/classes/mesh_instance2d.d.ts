
import { Texture2D } from "@godot/classes/texture2d";
import { Node2D } from "@godot/classes/node2d";
import { Mesh } from "@godot/classes/mesh";

export declare class MeshInstance2D extends Node2D{
  public set_mesh(_mesh: Mesh): void;
  public get_mesh(): Mesh;
  public set_texture(_texture: Texture2D): void;
  public get_texture(): Texture2D;
  public get mesh(): Mesh {
    get_mesh();
  }
  public set mesh(value): void {
    set_mesh(value);
  }
  public get texture(): Texture2D {
    get_texture();
  }
  public set texture(value): void {
    set_texture(value);
  }
}