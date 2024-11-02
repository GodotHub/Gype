
import { Mesh } from "@godot/classes/mesh";
import { Texture2D } from "@godot/classes/texture2d";
import { Node2D } from "@godot/classes/node2d";


export declare class MeshInstance2D extends Node2D{
  public set_mesh(_mesh: Mesh): void;
  public get_mesh(): Mesh;
  public set_texture(_texture: Texture2D): void;
  public get_texture(): Texture2D;
  public get mesh(): Mesh;
  public set mesh(value): void;
  public get texture(): Texture2D;
  public set texture(value): void;
  public get texture_changed(): Signal;
}