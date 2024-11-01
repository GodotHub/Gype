
import { Node } from "@godot/classes/node";
import { Resource } from "@godot/classes/resource";

export declare class ResourcePreloader extends Node{
  public add_resource(_name: String | StringName | string, _resource: Resource): void;
  public remove_resource(_name: String | StringName | string): void;
  public rename_resource(_name: String | StringName | string, _newname: String | StringName | string): void;
  public has_resource(_name: String | StringName | string): boolean;
  public get_resource(_name: String | StringName | string): Resource;
  public get_resource_list(): PackedStringArray;
  public get resources(): GDArray {
    _get_resources();
  }
  public set resources(value): void {
    _set_resources(value);
  }
}