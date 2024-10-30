
import { Texture2D } from "@godot/classes/texture2d";
import { Node2D } from "@godot/classes/node2d";
import { MultiMesh } from "@godot/classes/multi_mesh";

export declare class MultiMeshInstance2D extends Node2D{
  public set_multimesh(_multimesh: MultiMesh): void;
  public get_multimesh(): MultiMesh;
  public set_texture(_texture: Texture2D): void;
  public get_texture(): Texture2D;
  public get multimesh(): MultiMesh {
    get_multimesh();
  }
  public set multimesh(value): void {
    set_multimesh(value);
  }
  public get texture(): Texture2D {
    get_texture();
  }
  public set texture(value): void {
    set_texture(value);
  }
  public const texture_changed: string = "texture_changed";
}