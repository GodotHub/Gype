
import { Node } from "@godot/classes/node";
import { Resource } from "@godot/classes/resource";

export declare class ResourcePreloader extends Node{
  public add_resource(_name: StringName, _resource: Resource): void;
  public remove_resource(_name: StringName): void;
  public rename_resource(_name: StringName, _newname: StringName): void;
  public has_resource(_name: StringName): boolean;
  public get_resource(_name: StringName): Resource;
  public get_resource_list(): PackedStringArray;
  public get resources(): Array {
    _get_resources();
  }
  public set resources(value: Array): void {
    _set_resources(value);
  }
}