
import { RefCounted } from "@godot/classes/ref_counted";
import { Node } from "@godot/classes/node";

export declare class Resource extends RefCounted{
  public _setup_local_to_scene(): void;
  public set_path(_path: String): void;
  public take_over_path(_path: String): void;
  public get_path(): String;
  public set_name(_name: String): void;
  public get_name(): String;
  public get_rid(): RID;
  public set_local_to_scene(_enable: boolean): void;
  public is_local_to_scene(): boolean;
  public get_local_scene(): Node;
  public setup_local_to_scene(): void;
  public generate_scene_unique_id(): String;
  public set_scene_unique_id(_id: String): void;
  public get_scene_unique_id(): String;
  public emit_changed(): void;
  public duplicate(_subresources: boolean): Resource;
  public get resource_local_to_scene(): boolean {
    is_local_to_scene();
  }
  public set resource_local_to_scene(value): void {
    set_local_to_scene(value);
  }
  public get resource_path(): String {
    get_path();
  }
  public set resource_path(value): void {
    set_path(value);
  }
  public get resource_name(): String {
    get_name();
  }
  public set resource_name(value): void {
    set_name(value);
  }
  public get resource_scene_unique_id(): String {
    get_scene_unique_id();
  }
  public set resource_scene_unique_id(value): void {
    set_scene_unique_id(value);
  }
}