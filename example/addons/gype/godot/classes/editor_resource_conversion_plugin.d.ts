
import { RefCounted } from "@godot/classes/ref_counted";
import { Resource } from "@godot/classes/resource";

export declare class EditorResourceConversionPlugin extends RefCounted{
  public _converts_to(): String;
  public _handles(_resource: Resource): boolean;
  public _convert(_resource: Resource): Resource;
}