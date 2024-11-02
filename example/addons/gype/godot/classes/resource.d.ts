
import { RefCounted } from "@godot/classes/ref_counted";
import { Node } from "@godot/classes/node";


export declare class Resource extends RefCounted{
  public _setup_local_to_scene(): void;
  public set_path(_path: GDString | StringName | string): void;
  public take_over_path(_path: GDString | StringName | string): void;
  public get_path(): String;
  public set_name(_name: GDString | StringName | string): void;
  public get_name(): String;
  public get_rid(): RID;
  public set_local_to_scene(_enable: boolean): void;
  public is_local_to_scene(): boolean;
  public get_local_scene(): Node;
  public setup_local_to_scene(): void;
  public generate_scene_unique_id(): String;
  public set_scene_unique_id(_id: GDString | StringName | string): void;
  public get_scene_unique_id(): String;
  public emit_changed(): void;
  public duplicate(_subresources: boolean): Resource;
  public get resource_local_to_scene(): boolean;
  public set resource_local_to_scene(value): void;
  public get resource_path(): String;
  public set resource_path(value): void;
  public get resource_name(): String;
  public set resource_name(value): void;
  public get resource_scene_unique_id(): String;
  public set resource_scene_unique_id(value): void;
  public get changed(): Signal;
  public get setup_local_to_scene_requested(): Signal;
}