
import { GodotObject } from "@godot/classes/godot_object";
import { JavaClass } from "@godot/classes/java_class";
declare global {
export declare class _JavaClassWrapper extends GodotObject{
  public wrap(_name: GDString | StringName | string): JavaClass;
}
const JavaClassWrapper: _JavaClassWrapper;
}