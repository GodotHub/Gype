
import { Node } from "@godot/classes/node";
import { Resource } from "@godot/classes/resource";
export declare class ResourcePreloader extends Node{
  public add_resource(_name: GDString | StringName | string, _resource: Resource): void;
  public remove_resource(_name: GDString | StringName | string): void;
  public rename_resource(_name: GDString | StringName | string, _newname: GDString | StringName | string): void;
  public has_resource(_name: GDString | StringName | string): boolean;
  public get_resource(_name: GDString | StringName | string): Resource;
  public get_resource_list(): PackedStringArray;
  public get resources(): GDArray;
  public set resources(value): void;
}