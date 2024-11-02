
import { Node2D } from "@godot/classes/node2d";
import { MultiMesh } from "@godot/classes/multi_mesh";
import { Texture2D } from "@godot/classes/texture2d";


export declare class MultiMeshInstance2D extends Node2D{
  public set_multimesh(_multimesh: MultiMesh): void;
  public get_multimesh(): MultiMesh;
  public set_texture(_texture: Texture2D): void;
  public get_texture(): Texture2D;
  public get multimesh(): MultiMesh;
  public set multimesh(value): void;
  public get texture(): Texture2D;
  public set texture(value): void;
  public get texture_changed(): Signal;
}