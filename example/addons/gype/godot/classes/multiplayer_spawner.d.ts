
import { Node } from "@godot/classes/node";


export declare class MultiplayerSpawner extends Node{
  public add_spawnable_scene(_path: GDString | StringName | string): void;
  public get_spawnable_scene_count(): number;
  public get_spawnable_scene(_index: number): String;
  public clear_spawnable_scenes(): void;
  public spawn(_data: any): Node;
  public get_spawn_path(): NodePath;
  public set_spawn_path(_path: GDString | NodePath | string): void;
  public get_spawn_limit(): number;
  public set_spawn_limit(_limit: number): void;
  public get_spawn_function(): Callable;
  public set_spawn_function(_spawn_function: Callable): void;
  public get spawn_path(): NodePath;
  public set spawn_path(value): void;
  public get spawn_limit(): number;
  public set spawn_limit(value): void;
  public get spawn_function(): Callable;
  public set spawn_function(value): void;
  public get despawned(): Signal;
  public get spawned(): Signal;
}